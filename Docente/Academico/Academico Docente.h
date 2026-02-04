#include "../../Main/Header.h"
#ifndef ACADEMICO_DOCENTE_H
#define ACADEMICO_DOCENTE_H

void Menu_Prof_Academic (Variables (&Var), Estudiante (&Est)[D], Plan_Evaluacion (&Plan)[D], Reportes (&Rep)[D], Asignacion (&Asig)[D], Clase_Magistral (&Mag)[D], Solicitudes (&Soli)[D], Grupos (&Gru)[D], Clase (&Class)[D], Bloque_Horario (&List)[48], Materias (&Mat)[527], Profesor (&Prof)[D], Administrativo (&Admin)[D]);
void Agregar_Materia (Variables (&Var), Estudiante (&Est)[D], Plan_Evaluacion (&Plan)[D], Materias (&Mat)[527], Profesor (&Prof)[D], Administrativo (&Admin)[D]);
void Asignar_Horario (Variables (&Var), Estudiante (&Est)[D], Plan_Evaluacion (&Plan)[D], Reportes (&Rep)[D], Asignacion (&Asig)[D], Clase_Magistral (&Mag)[D], Solicitudes (&Soli)[D], Grupos (&Gru)[D], Clase (&Class)[D], Bloque_Horario (&List)[48], Materias (&Mat)[527], Profesor (&Prof)[D], Administrativo (&Admin)[D]);
void Bloques_Disponibles (Bloque_Horario (&List)[48]);
bool Validar_Materia (Variables (&Var), Bloque_Horario (&List)[48], Clase (&Class)[D], Profesor (&Prof)[D]);
void Listar_Horario (Variables (&Var), Clase (&Class)[D], Profesor (&Prof)[D]);
void Registrar_Solicitud (Variables (&Var), Estudiante (&Est)[D], Plan_Evaluacion (&Plan)[D], Reportes (&Rep)[D], Asignacion (&Asig)[D], Clase_Magistral (&Mag)[D], Solicitudes (&Soli)[D], Grupos (&Gru)[D], Clase (&Class)[D], Materias (&Mat)[527], Profesor (&Prof)[D], Administrativo (&Admin)[D]);
void Registrar_Reporte (Variables (&Var), Estudiante (&Est)[D], Plan_Evaluacion (&Plan)[D], Reportes (&Rep)[D], Asignacion (&Asig)[D], Clase_Magistral (&Mag)[D], Solicitudes (&Soli)[D], Grupos (&Gru)[D], Clase (&Class)[D], Materias (&Mat)[527], Profesor (&Prof)[D], Administrativo (&Admin)[D]);
void Asignaciones_Prof (Variables (&Var), Estudiante (&Est)[D], Plan_Evaluacion (&Plan)[D], Reportes (&Rep)[D], Asignacion (&Asig)[D], Clase_Magistral (&Mag)[D], Solicitudes (&Soli)[D], Grupos (&Gru)[D], Clase (&Class)[D], Materias (&Mat)[527], Profesor (&Prof)[D], Administrativo (&Admin)[D]);
void Crear_Asignacion (Variables (&Var), Estudiante (&Est)[D], Plan_Evaluacion (&Plan)[D], Reportes (&Rep)[D], Asignacion (&Asig)[D], Clase_Magistral (&Mag)[D], Solicitudes (&Soli)[D], Grupos (&Gru)[D], Clase (&Class)[D], Materias (&Mat)[527], Profesor (&Prof)[D], Administrativo (&Admin)[D]);
void Estado_Asignacion (Variables (&Var), Estudiante (&Est)[D], Plan_Evaluacion (&Plan)[D], Reportes (&Rep)[D], Asignacion (&Asig)[D], Clase_Magistral (&Mag)[D], Solicitudes (&Soli)[D], Grupos (&Gru)[D], Clase (&Class)[D], Materias (&Mat)[527], Profesor (&Prof)[D], Administrativo (&Admin)[D]);
void Listar_Asignacion (Variables (&Var), Asignacion (&Asig)[D], Profesor (&Prof)[D]);
void Magistrales_Prof (Variables (&Var), Estudiante (&Est)[D], Plan_Evaluacion (&Plan)[D], Reportes (&Rep)[D], Asignacion (&Asig)[D], Clase_Magistral (&Mag)[D], Solicitudes (&Soli)[D], Grupos (&Gru)[D], Clase (&Class)[D], Materias (&Mat)[527], Profesor (&Prof)[D], Administrativo (&Admin)[D]);
void Plan_Evaluacion_Prof (Variables (&Var), Estudiante (&Est)[D], Plan_Evaluacion (&Plan)[D], Reportes (&Rep)[D], Asignacion (&Asig)[D], Clase_Magistral (&Mag)[D], Solicitudes (&Soli)[D], Grupos (&Gru)[D], Clase (&Class)[D], Materias (&Mat)[527], Profesor (&Prof)[D], Administrativo (&Admin)[D]);
void Cargar_Notas (Variables (&Var), Estudiante (&Est)[D], Plan_Evaluacion (&Plan)[D], Reportes (&Rep)[D], Asignacion (&Asig)[D], Clase_Magistral (&Mag)[D], Solicitudes (&Soli)[D], Grupos (&Gru)[D], Clase (&Class)[D], Materias (&Mat)[527], Profesor (&Prof)[D], Administrativo (&Admin)[D]);
void Notas_Materias_Prof (Variables (&Var), Estudiante (&Est)[D], Materias (&Mat)[527]);
void Historial_Labor_Docente (Variables (&Var), Clase (&Class)[D], Profesor (&Prof)[D]);

#endif