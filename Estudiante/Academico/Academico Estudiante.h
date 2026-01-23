#include "../../Main/Header.h"
#ifndef ACADEMICO_ESTUDIANTE_H
#define ACADEMICO_ESTUDIANTE_H

void Menu_Est_Academico (Variables (&Var), Estudiante (&Est)[D], Clase (&Class)[D], Clase_Magistral (&Mag)[D], Profesor (&Prof)[D], Administrativo (&Admin)[D], Asignacion (&Asig)[D], Materias (&Mat)[527], Plan_Evaluacion (&Plan)[D], Carnet (&Car)[D], Carnetizacion (&Carn)[D]);
void Inscripciones (Variables (&Var), Estudiante (&Est)[D], Clase (&Class)[D], Clase_Magistral (&Mag)[D], Profesor (&Prof)[D]);
void Inscripcion_Est (Variables (&Var), Estudiante (&Est)[D], Clase (&Class)[D], Clase_Magistral (&Mag)[D], Profesor (&Prof)[D]);
void Ver_Horario (Variables (&Var), Clase (&Class)[D], Estudiante (&Est)[D]);
void Buscar_Asignacion (Variables (&Var), Clase (&Class)[D], Estudiante (&Est)[D], Asignacion (&Asig)[D], Materias (&Mat)[527]);
void Buscar_Magistrales (Variables (&Var), Estudiante (&Est)[D], Clase (&Class)[D], Clase_Magistral (&Mag)[D], Profesor (&Prof)[D]);
void Buscar_Plan (Variables (&Var), Clase (&Class)[D], Estudiante (&Est)[D], Plan_Evaluacion (&Plan)[D], Materias (&Mat)[527]);
void Carnet_Est (Variables (&Var), Estudiante (&Est)[D], Carnet (&Car)[D], Carnetizacion (&Carn)[D]);


#endif