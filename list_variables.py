import glob
import re

gabo_files = glob.glob("./pseudo/**/*.gabo", recursive=True)
# gabo_files = ["./pseudo/Estudiante/Social_Estudiante/13-Comentar.gabo"]
report: list[str] = []

# Demasiadas expresiones regulares
struct_regex = r"Registro:\s*([^;\n]+);([\s\S]*?)Fin_Registro"
field_regex = r"^\s+(?!(?:Registro|Fin_Registro))([\w\s,]+)\s*:\s*(\w+);"
procedure_regex = r"Procedimiento\s*([^;\n]+);([\s\S]*?)Fin_Procedimiento"
procedure_header_regex = r"(\w+)\s*\(\s*(.*)\s*\);?"
func_regex = r"Funcion\s*([^;]+);([\s\S]*?)Fin_Funcion"
func_header_regex = r"(\w+)\s*\(\s*(.+)\s*\)\s*:\s*(\w+);?"

# Algunos contadores
structs_total = 0
procedures_total = 0
func_total = 0

for file in gabo_files:
    with open(file, 'r', encoding='utf-8') as output:
        content = output.read()
        report.append(f"\nARCHIVO: {file.replace("./pseudo", ".")}")
        report.append("=" * 40)

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
                procedure_header_regex, declaration)
            identifier, params = procedure_header[0]

            report.append(f"  - Procedimiento: {identifier}.\n    - Parametros: ")

        # Extraemos las funciones
        functions: list[tuple[str, str]] = re.findall(
            func_regex, content)
        for declaration, body in functions:
            func_total += 1
            func_header: list[tuple[str, str, str]] = re.findall(
                func_header_regex, declaration)
            identifier, params, return_type = func_header[0]

            report.append(f"\n  - Funcion: {identifier}. Retorno: {return_type}.\n    - Parametros: ")

        report.append("\n" + "-"*40 + "\n")


header = f"{"-" * 20} REPORTE DE TODO EL PSEUDO {"-" * 20}"
report.insert(0, "-" * len(header))
report.insert(0, f"Total de procedimientos: {procedures_total}")
report.insert(0, f"Total de registros: {structs_total}")
report.insert(0, f"Total de funciones: {func_total}")
report.insert(0, f"Total de archivos: {len(gabo_files)}")
report.insert(0, header)

with open('./docs/reporte.txt', 'w', encoding='utf-8') as output:
    _ = output.write("\n".join(report))
