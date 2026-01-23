#include "../Main/Header.h"
#ifndef Llenado_H
#define Llenado_H

void Verificar_Llenado (Estudiante (&Est)[D], Profesor (&Prof)[D], Administrativo (&Admin)[D]);
void Llenado (Profesor (&Prof)[D], Administrativo (&Admin)[D]);
void Llenado_Tarjetas (Profesor (&Prof)[D], Administrativo (&Admin)[D]);
void Guardar_Llenado (Profesor (&Prof)[D], Administrativo (&Admin)[D]);
void Llenado_Horario (Bloque_Horario (&List)[48]);

#endif