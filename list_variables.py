#!/usr/bin/env python3

import re
import glob

gabo_files = glob.glob("./pseudo/**/*.gabo", recursive=True)
report: list[str] = []

block_regex = r"(Procedimiento|Funcion)\s+(\w+).*?Inicio(.*?)Fin_\1"
param_regex = r"\((.*?)\)\s*(?::\s*\w+)?\s*;"
variables_regex = r"var\s+([^:]+):\s*(\w+);"

for file in gabo_files:
    with open(file, 'r', encoding='utf-8') as f:
        content = f.read()
        report.append(f"ARCHIVO: {file}")
        report.append("=" * 40)

        blocks = re.finditer(block_regex, content, re.DOTALL)

        for block in blocks:
            block_type = block.group(1)
            block_identifier = block.group(2)
            block_body = block.group(3)

            report.append(f"\n[{block_type} {block_identifier}]")

            header = content[block.start(): block.start() +
                             content[block.start():].find("Inicio")]
            params_match = re.search(param_regex, header, re.DOTALL)

            if params_match:
                report.append("  - Parámetros/Argumentos:")
                block_params = re.sub(r"E/S:|E:|S:", "", params_match.group(1))
                for line in block_params.split('\n'):
                    if ':' in line:
                        var_ids, var_type = line.split(':')
                        for v in var_ids.split(','):
                            if v.strip():
                                report.append(
                                    f"    * {v.strip()} ({var_type.strip()})")

            local_variables: list[tuple[str, str]] = re.findall(
                variables_regex, block_body)
            if local_variables:
                report.append("  - Variables Internas:")
                for v, t in local_variables:
                    nombres = [n.strip() for n in v.split(',')]
                    for n in nombres:
                        if n:
                            report.append(f"    * {n} ({t})")

        report.append("\n" + "-"*40 + "\n")

with open('./docs/reporte.txt', 'w', encoding='utf-8') as f:
    _ = f.write("\n".join(report))
