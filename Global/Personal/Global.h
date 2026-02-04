#include "../../Main/Header.h"
#ifndef GLOBAL_H
#define GLOBAL_H

void Menu_Global_Personal (Variables (&Var), Estudiante (&Est)[D], Profesor (&Prof)[D], Administrativo (&Admin)[D], Clase (&Class)[D], Becas (&Beca)[D]);
void Seguridad_Global_Personal (Variables (&Var), Estudiante (&Est)[D], Profesor (&Prof)[D], Administrativo (&Admin)[D]);
void Oscuro_Global_Personal (Variables (&Var), Estudiante (&Est)[D], Profesor (&Prof)[D], Administrativo (&Admin)[D]);
void Avatares (Variables (&Var), Estudiante (&Est)[D], Profesor (&Prof)[D], Administrativo (&Admin)[D]);
void Avatar_Global_Personal (Variables (&Var), Estudiante (&Est)[D], Profesor (&Prof)[D], Administrativo (&Admin)[D]);
void Salud_Global_Personal (Variables (&Var), Estudiante (&Est)[D], Profesor (&Prof)[D], Administrativo (&Admin)[D]);
void Enfermedades_Global_Personal (Variables (&Var), Estudiante (&Est)[D], Profesor (&Prof)[D], Administrativo (&Admin)[D]);
void Ver_Enfermedades_Global_Personal (Variables (&Var), Estudiante (&Est)[D], Profesor (&Prof)[D], Administrativo (&Admin)[D]);
void Datos_Global (Variables (&Var), Estudiante (&Est)[D], Profesor (&Prof)[D], Administrativo (&Admin)[D]);
void Info_Global_Personal (Variables (&Var), Estudiante (&Est)[D], Profesor (&Prof)[D], Administrativo (&Admin)[D]);
void Datos_Extras_Global (Variables (&Var), Estudiante (&Est)[D], Profesor (&Prof)[D], Administrativo (&Admin)[D]);
void Modificar_Datos_Global (Variables (&Var), Estudiante (&Est)[D], Profesor (&Prof)[D], Administrativo (&Admin)[D]);
void Estadisticas (Variables (&Var), Administrativo (&Admin)[D], Profesor (&Prof)[D], Estudiante (&Est)[D]);
void Historial (Variables (&Var), Estudiante (&Est)[D]);
void Registrar_Becas (Variables (&Var), Estudiante (&Est)[D], Becas (&Beca)[D]);


#endif