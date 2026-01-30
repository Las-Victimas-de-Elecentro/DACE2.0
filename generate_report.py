import glob
import re
from typing import final
from dataclasses import dataclass, field
from pathlib import Path


@dataclass
class Parameter:
    name: str
    direction: str


@dataclass
class StructField:
    name: str
    data_type: str


@dataclass
class Struct:
    name: str
    fields: list[StructField]


@dataclass
class Variable:
    names: list[str]
    data_type: str


@dataclass
class Subprogram:
    name: str
    parameters: list[Parameter]
    local_variables: list[Variable]


@dataclass
class Procedure(Subprogram):
    pass


@dataclass
class Function(Subprogram):
    return_type: str


@dataclass
class FileAnalysis:
    filename: str
    global_variables: list[Variable]
    structs: list[Struct]
    procedures: list[Procedure]
    functions: list[Function]
    line_count: int


@dataclass
class Statistics:
    total_files: int = 0
    total_lines: int = 0
    total_structs: int = 0
    total_procedures: int = 0
    total_functions: int = 0
    total_variables: int = 0
    total_params: dict[str, int] = field(default_factory=lambda: {
        'entrada': 0, 'entrada_salida': 0, 'salida': 0
    })


@final
class RegexPatterns:
    ALGORITHM = r"(?s)^Algoritmo\s+([\s\S])*\s*Inicio\s+([\s\S]*?)Fin"
    STRUCT = r"Registro:\s*([^;\n]+);([\s\S]*?)Fin_Registro"
    STRUCT_FIELD = r"^\s+(?!(?:Registro|Fin_Registro))([\w\s,]+)\s*:\s*(\w+);"
    PROCEDURE = r"(?s)Procedimiento\s*([^;]+);([\s\S]*?)Fin_Procedimiento"
    PROCEDURE_HEADER = r"(?s)(\w+)\s*\(\s*(.*)\s*\);?"
    FUNCTION = r"(?s)Funcion\s*([^;]+);([\s\S]*?)Fin_Funcion"
    FUNCTION_HEADER = r"(?s)(\w+)\s*\(\s*(.*)\s*\)\s*:\s*(\w+);?"
    VARIABLE = r"(?i)var\s+([^:]+):([^:\n]+)\s*;\n"


class ParameterParser:
    @staticmethod
    def parse(params_str: str) -> dict[str, list[str]]:
        directions: dict[str, list[str]] = {
            'entrada': [],
            'entrada_salida': [],
            'salida': []
        }

        current_direction = 'salida'
        parts = [p.strip() for p in params_str.split(',')]

        for i, part in enumerate(parts):
            if part.startswith('E/S:'):
                current_direction = 'entrada_salida'
                part = part[4:].strip()
            elif part.startswith('E:'):
                current_direction = 'entrada'
                part = part[2:].strip()
            elif part.startswith('S:'):
                current_direction = 'salida'
                part = part[2:].strip()
            elif i == 0 and not any(part.startswith(p) for p in ['E/S:', 'E:', 'S:']):
                current_direction = 'salida'

            if part:
                directions[current_direction].append(part)

        return directions


@final
class CodeParser:
    def __init__(self):
        self.patterns = RegexPatterns()

    def parse_file(self, filename: str, content: str) -> FileAnalysis:
        lines = content.split("\n")

        return FileAnalysis(
            filename=self._format_filename(filename),
            global_variables=self._parse_global_variables(content),
            structs=self._parse_structs(content),
            procedures=self._parse_procedures(content),
            functions=self._parse_functions(content),
            line_count=len(lines)
        )

    def _format_filename(self, filename: str) -> str:
        return filename.replace("./pseudo", ".")

    def _parse_global_variables(self, content: str) -> list[Variable]:
        variables: list[Variable] = []
        main_matches: list[tuple[str, str]] = re.findall(
            self.patterns.ALGORITHM, content)

        if main_matches:
            _, main_body = main_matches[0]

            not_comments = re.sub(r"\/\/.+", "", main_body)
            var_matches: list[tuple[str, str]] = re.findall(
                self.patterns.VARIABLE, not_comments)

            for identifiers, data_type in var_matches:
                parsed_names = [i.strip() for i in identifiers.split(',')]
                variables.append(
                    Variable(names=parsed_names, data_type=data_type))

        return variables

    def _parse_structs(self, content: str) -> list[Struct]:
        structs: list[Struct] = []
        struct_matches: list[tuple[str, str]] = re.findall(
            self.patterns.STRUCT, content)

        for struct_name, struct_content in struct_matches:
            fields: list[StructField] = []
            field_matches: list[tuple[str, str]] = re.findall(
                self.patterns.STRUCT_FIELD,
                struct_content,
                re.MULTILINE
            )

            for field_name, field_type in field_matches:
                fields.append(StructField(
                    name=field_name, data_type=field_type))

            structs.append(Struct(name=struct_name, fields=fields))

        return structs

    def _parse_procedures(self, content: str) -> list[Procedure]:
        procedures: list[Procedure] = []
        proc_matches: list[tuple[str, str]] = re.findall(
            self.patterns.PROCEDURE, content)

        for declaration, body in proc_matches:
            header_match: list[tuple[str, str]] = re.findall(
                self.patterns.PROCEDURE_HEADER,
                declaration.replace("\n", "")
            )

            if header_match:
                name, params_str = header_match[0]
                param_parser = ParameterParser()
                param_groups = param_parser.parse(params_str)

                parameters: list[Parameter] = []
                for direction, param_list in param_groups.items():
                    for param_name in param_list:
                        parameters.append(
                            Parameter(name=param_name, direction=direction)
                        )

                local_vars = self._parse_local_variables(body)

                procedures.append(
                    Procedure(
                        name=name,
                        parameters=parameters,
                        local_variables=local_vars
                    )
                )

        return procedures

    def _parse_functions(self, content: str) -> list[Function]:
        functions: list[Function] = []
        func_matches: list[tuple[str, str]] = re.findall(
            self.patterns.FUNCTION, content)

        for declaration, body in func_matches:
            header_match: list[tuple[str, str, str]] = re.findall(
                self.patterns.FUNCTION_HEADER,
                declaration.replace("\n", "")
            )

            if header_match:
                name, params_str, return_type = header_match[0]

                parameters: list[Parameter] = []
                if params_str.strip():
                    for param in [p.strip() for p in params_str.split(',')]:
                        if param:
                            parameters.append(
                                Parameter(name=param, direction='entrada')
                            )

                local_vars = self._parse_local_variables(body)

                functions.append(
                    Function(
                        name=name,
                        parameters=parameters,
                        local_variables=local_vars,
                        return_type=return_type
                    )
                )

        return functions

    def _parse_local_variables(self, body: str) -> list[Variable]:
        variables: list[Variable] = []
        var_matches: list[tuple[str, str]] = re.findall(
            self.patterns.VARIABLE, body)

        for identifiers, data_type in var_matches:
            parsed_names = [i.strip() for i in identifiers.split(',')]
            variables.append(Variable(names=parsed_names, data_type=data_type))

        return variables


class ReportGenerator:
    @staticmethod
    def generate_file_report(analysis: FileAnalysis) -> list[str]:
        report_lines: list[str] = []
        report_lines.append(f"\nARCHIVO: {analysis.filename}")
        report_lines.append("=" * 40)

        if analysis.global_variables:
            report_lines.append("\n  - Variables globales:")
            for var in analysis.global_variables:
                for name in var.names:
                    report_lines.append(f"    - {name}: {var.data_type}")

        for struct in analysis.structs:
            report_lines.append(
                f"\n  - Registro: {struct.name}.\n    - Campos: ")
            for field in struct.fields:
                report_lines.append(f"      - {field.name}: {field.data_type}")

        for proc in analysis.procedures:
            report_lines.append(
                f"  - Procedimiento: {proc.name}.\n    - Parametros: "
            )

            params_by_direction: dict[str, list[str]] = {}
            for param in proc.parameters:
                params_by_direction.setdefault(
                    param.direction, []).append(param.name)

            direction_labels = {
                'entrada': 'Entrada',
                'entrada_salida': 'Entrada/Salida',
                'salida': 'Salida'
            }

            for dir_key, label in direction_labels.items():
                if dir_key in params_by_direction:
                    report_lines.append(f"      - {label}")
                    for param_name in params_by_direction[dir_key]:
                        report_lines.append(f"        - {param_name}")

            if proc.local_variables:
                report_lines.append("\n    - Variables locales:")
                for var in proc.local_variables:
                    for name in var.names:
                        report_lines.append(f"      - {name}: {var.data_type}")

        for func in analysis.functions:
            report_lines.append(
                f"\n  - Funcion: {func.name}. Retorno: {func.return_type}.\n    - Parametros: "
            )
            for param in func.parameters:
                report_lines.append(f"        - {param.name}")

            if func.local_variables:
                report_lines.append("\n    - Variables locales:")
                for var in func.local_variables:
                    for name in var.names:
                        report_lines.append(f"      - {name}: {var.data_type}")

        report_lines.append("\n" + "-" * 40 + "\n")
        return report_lines

    @staticmethod
    def generate_summary(stats: Statistics) -> list[str]:
        total_params = sum(stats.total_params.values())

        summary = [
            f"{'-' * 20} REPORTE DE TODO EL PSEUDO {'-' * 20}",
            f"Total de archivos: {stats.total_files}",
            f"Total de lineas: {stats.total_lines}",
            f"Total de funciones: {stats.total_functions}",
            f"Total de registros: {stats.total_structs}",
            f"Total de procedimientos: {stats.total_procedures}",
            f"Total de variables: {stats.total_variables}",
            f"Total de parametros en procedimientos: {total_params}",
            f"  - De Entrada: {stats.total_params['entrada']}",
            f"  - De Salida: {stats.total_params['salida']}",
            f"  - De Entrada/Salida: {stats.total_params['entrada_salida']}",
            "-" * 68
        ]

        return summary


@final
class CodeAnalyzer:
    def __init__(self, source_dir: str = "./pseudo", output_file: str = "./docs/reporte.txt"):
        self.source_dir = source_dir
        self.output_file = output_file
        self.parser = CodeParser()
        self.stats = Statistics()
        self.all_reports: list[str] = []

    def analyze(self) -> None:
        gabo_files = glob.glob(f"{self.source_dir}/**/*.gabo", recursive=True)

        if not gabo_files:
            print(f"No .gabo files found in {self.source_dir}")
            return

        self.stats.total_files = len(gabo_files)

        for filename in gabo_files:
            try:
                with open(filename, 'r', encoding='utf-8') as file:
                    content = file.read()
                    analysis = self.parser.parse_file(filename, content)

                    file_report = ReportGenerator.generate_file_report(
                        analysis)
                    self.all_reports.extend(file_report)

                    self._update_statistics(analysis)

            except Exception as e:
                print(f"Error processing {filename}: {e}")

        self._write_final_report()

    def _update_statistics(self, analysis: FileAnalysis) -> None:
        self.stats.total_lines += analysis.line_count
        self.stats.total_structs += len(analysis.structs)
        self.stats.total_procedures += len(analysis.procedures)
        self.stats.total_functions += len(analysis.functions)

        for var in analysis.global_variables:
            self.stats.total_variables += len(var.names)

        for proc in analysis.procedures:
            for var in proc.local_variables:
                self.stats.total_variables += len(var.names)
            for param in proc.parameters:
                self.stats.total_params[param.direction] += 1

        for func in analysis.functions:
            for var in func.local_variables:
                self.stats.total_variables += len(var.names)
            # self.stats.total_params['entrada'] += len(func.parameters)

    def _write_final_report(self) -> None:
        Path(self.output_file).parent.mkdir(parents=True, exist_ok=True)

        summary = ReportGenerator.generate_summary(self.stats)
        full_report = summary + self.all_reports

        with open(self.output_file, 'w', encoding='utf-8') as file:
            _ = file.write("\n".join(full_report))

        print(f"Report generated: {self.output_file}")


def main():
    analyzer = CodeAnalyzer()
    analyzer.analyze()


if __name__ == "__main__":
    main()
