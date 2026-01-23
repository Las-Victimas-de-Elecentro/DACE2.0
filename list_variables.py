import glob
import re

# Algunos contadores
structs_total = 0
procedures_total = 0
func_total = 0
in_param_total = 0
in_out_param_total = 0
out_param_total = 0
vars_total = 0
lines_count = 0

gabo_files = glob.glob("./pseudo/**/*.gabo", recursive=True)
report: list[str] = []

# Demasiadas expresiones regulares
algo_regex = r"(?s)^Algoritmo\s+([\s\S])*\s*Inicio\s+([\s\S]*?)Fin"
struct_regex = r"Registro:\s*([^;\n]+);([\s\S]*?)Fin_Registro"
field_regex = r"^\s+(?!(?:Registro|Fin_Registro))([\w\s,]+)\s*:\s*(\w+);"
procedure_regex = r"(?s)Procedimiento\s*([^;]+);([\s\S]*?)Fin_Procedimiento"
procedure_header_regex = r"(?s)(\w+)\s*\(\s*(.*)\s*\);?"
func_regex = r"(?s)Funcion\s*([^;]+);([\s\S]*?)Fin_Funcion"
func_header_regex = r"(?s)(\w+)\s*\(\s*(.*)\s*\)\s*:\s*(\w+);?"
var_regex = r"(?i)var\s+([^:]+):([^:\n]+)\s*;\n"


def clasify_params(params:  str) -> dict[str, list[str]]:
    in_type: list[str] = []
    int_out_type: list[str] = []
    out_type: list[str] = []

    current_type = 'S'

    parts = [p.strip() for p in params.split(',')]

    for i, part in enumerate(parts):
        if part.startswith('E/S:'):
            current_type = 'E/S'
            part = part[4:].strip()
        elif part.startswith('E:'):
            current_type = 'E'
            part = part[2:].strip()
        elif part.startswith('S:'):
            current_type = 'S'
            part = part[2:].strip()
        elif i == 0 and not any(part.startswith(p) for p in ['E/S:', 'E:', 'S:']):
            current_type = 'S'

        if part:
            if current_type == 'E':
                in_type.append(part)
            elif current_type == 'E/S':
                int_out_type.append(part)
            elif current_type == 'S':
                out_type.append(part)

    return {
        'Entrada': in_type,
        'Entrada/Salida': int_out_type,
        'Salida': out_type
    }


# Que spagheti mas horrible, hermano
for filename in gabo_files:
    with open(filename, 'r', encoding='utf-8') as file:
        content = file.read()
        lines_in = content.split("\n")
        lines_count += len(lines_in) - 1
        report.append(f"\nARCHIVO: {filename.replace("./pseudo", ".")}")
        # print(f"\nARCHIVO: {filename.replace("./pseudo", ".")}")
        report.append("=" * 40)

        main: list[tuple[str, str]] = re.findall(algo_regex, content)
        if main:
            report.append("\n  - Variables globales:")

            _, main_body = main[0]
            not_comments = re.sub(r"\/\/.+", "", main_body)
            main_variables: list[tuple[str, str]] = re.findall(
                var_regex, not_comments)

            for identifiers, data_type in main_variables:
                parsed_identifiers = [i.strip()
                                      for i in identifiers.split(',')]

                for identifier in parsed_identifiers:
                    vars_total += 1
                    report.append(f"    - {identifier}: {data_type}")

        # Extraemos los registros
        structs: list[tuple[str, str]] = re.findall(struct_regex, content)
        for struct_name, struct_content in structs:
            structs_total += 1
            report.append(f"\n  - Registro: {struct_name}.\n    - Campos: ")

            fields: list[tuple[str, str]] = re.findall(
                field_regex, struct_content, re.MULTILINE)

            for field, data_type in fields:
                report.append(f"      - {field}: {data_type}")

        # Extraemos los procedimientos
        procedures: list[tuple[str, str]] = re.findall(
            procedure_regex, content)
        for declaration, body in procedures:
            procedures_total += 1
            procedure_header: list[tuple[str, str]] = re.findall(
                procedure_header_regex, declaration.replace("\n", ""))
            identifier, params = procedure_header[0]

            report.append(
                f"  - Procedimiento: {identifier}.\n    - Parametros: ")
            parsed_params = clasify_params(params)

            if len(parsed_params['Entrada']) > 0:
                report.append("      - Entrada")
                for p in parsed_params['Entrada']:
                    report.append(f"        - {p}")
                    in_param_total += 1

            if len(parsed_params['Entrada/Salida']) > 0:
                report.append("      - Entrada/Salida")
                for p in parsed_params['Entrada/Salida']:
                    report.append(f"        - {p}")
                    in_out_param_total += 1

            if len(parsed_params['Salida']) > 0:
                report.append("      - Salida")
                for p in parsed_params['Salida']:
                    report.append(f"        - {p}")
                    out_param_total += 1

            procedure_variables: list[tuple[str, str]
                                      ] = re.findall(var_regex, body)
            if procedure_variables:
                report.append("\n    - Variables locales:")

                for identifiers, data_type in procedure_variables:
                    parsed_identifiers = [i.strip()
                                          for i in identifiers.split(',')]

                    for identifier in parsed_identifiers:
                        vars_total += 1
                        report.append(
                            f"      - {identifier}: {data_type}")

        # Extraemos las funciones
        functions: list[tuple[str, str]] = re.findall(
            func_regex, content)
        for declaration, body in functions:
            func_total += 1
            func_header: list[tuple[str, str, str]] = re.findall(
                func_header_regex, declaration.replace("\n", ""))
            identifier, params, return_type = func_header[0]

            report.append(
                f"\n  - Funcion: {identifier}. Retorno: {return_type}.\n    - Parametros: ")

            parsed_params = [p.strip() for p in params.split(',')]
            for p in parsed_params:
                report.append(f"        - {p}")

            func_variables: list[tuple[str, str]] = re.findall(var_regex, body)
            if func_variables:
                report.append("\n    - Variables locales:")

                for identifiers, data_type in func_variables:
                    parsed_identifiers = [i.strip()
                                          for i in identifiers.split(',')]

                    for identifier in parsed_identifiers:
                        vars_total += 1
                        report.append(
                            f"      - {identifier}: {data_type}")

        report.append("\n" + "-"*40 + "\n")


header = f"{"-" * 20} REPORTE DE TODO EL PSEUDO {"-" * 20}"
report.insert(0, "-" * len(header))
report.insert(0, f"  - De Entrada/Salida: {in_out_param_total}")
report.insert(0, f"  - De Salida: {out_param_total}")
report.insert(0, f"  - De Entrada: {in_param_total}")
report.insert(
    0, f"Total de parametros en procedimientos: {in_param_total + in_out_param_total + out_param_total}")
report.insert(0, f"Total de variables: {vars_total} ")
report.insert(0, f"Total de procedimientos: {procedures_total}")
report.insert(0, f"Total de registros: {structs_total}")
report.insert(0, f"Total de funciones: {func_total}")
report.insert(0, f"Total de lineas: {lines_count}")
report.insert(0, f"Total de archivos: {len(gabo_files)}")
report.insert(0, header)

with open('./docs/reporte.txt', 'w', encoding='utf-8') as file:
    _ = file.write("\n".join(report))
