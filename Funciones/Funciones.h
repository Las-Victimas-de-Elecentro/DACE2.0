#include "../Main/Header.h"
#ifndef FUNCIONES_H
#define FUNCIONES_H
using namespace std;

void Limpiar();
#include "2-Colores.h"
void Art ();
void Continuar();
void Continue();
void Cargar(Variables (&Var), Estudiante (&Est)[D], Plan_Evaluacion (&Plan)[D], Reportes (&Rep)[D], Asignacion (&Asig)[D], Clase_Magistral (&Mag)[D], Solicitudes (&Soli)[D], Grupos (&Gru)[D], Clase (&Class)[D], Materias (&Mat)[527], Profesor (&Prof)[D], Administrativo (&Admin)[D], Carnet (&Car)[D], Carnetizacion (&Carn)[D]);
void Guardar(Variables (&Var), Estudiante (&Est)[D], Profesor (&Prof)[D], Administrativo (&Admin)[D]);
void Registrar (Variables (&Var), Estudiante (&Est)[D], Profesor (&Prof)[D], Administrativo (&Admin)[D]);
void Salto_Linea (string texto);
int Salto_Numerado(string Texto);
string Obtener_Materia (string Texto, int Seleccion);
void Guardar_Academic (Variables (&Var), Estudiante (&Est)[D], Plan_Evaluacion (&Plan)[D], Reportes (&Rep)[D], Asignacion (&Asig)[D], Clase_Magistral (&Mag)[D], Solicitudes (&Soli)[D], Grupos (&Gru)[D], Clase (&Class)[D], Materias (&Mat)[527], Profesor (&Prof)[D], Administrativo (&Admin)[D]);
void Guardar_Ins (Clase (&Class)[D], Estudiante (&Est)[D], Clase_Magistral (&Mag)[D]);
void Guardar_Carn (Carnet (&Car)[D], Carnetizacion (&Carn)[D]);


#endif