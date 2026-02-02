#include "../../Main/Header.h"
#ifndef GUARDAR_H
#define GUARDAR_H
using namespace std;

void Guardar(Variables (&Var), Estudiante (&Est)[D], Profesor (&Prof)[D], Administrativo (&Admin)[D]);
void Guardar_Academic (Variables (&Var), Estudiante (&Est)[D], Plan_Evaluacion (&Plan)[D], Reportes (&Rep)[D], Asignacion (&Asig)[D], Clase_Magistral (&Mag)[D], Solicitudes (&Soli)[D], Grupos (&Gru)[D], Clase (&Class)[D], Materias (&Mat)[527], Profesor (&Prof)[D], Administrativo (&Admin)[D]);
void Guardar_Ins (Clase (&Class)[D], Estudiante (&Est)[D], Clase_Magistral (&Mag)[D]);
void Guardar_Carn (Carnet (&Car)[D], Carnetizacion (&Carn)[D]);
void Guardar_Pasantias_Servicio (Pasantias (&Pas)[D], Servicio_Comunitario (&SerC)[D]);
void Guardar_MarketPlace (Market_Place (&MP)[D], Comida_MP (&C_MP)[D], Articulos_MP (&A_MP)[D], Servicios_MP (&S_MP)[D]);
void Guardar_Foro (Publicaciones (&Publi)[D]);
void Guardar_Amigos (Amigos (&Amig)[D], Estudiante (&Est)[D]);
void Guardar_Gestion (Variables (&Var), Estudiante (&Est)[D], Profesor (&Prof)[D], Administrativo (&Admin)[D]);
void Cambio_Gestion (Variables (&Var), Estudiante (&Est)[D], Profesor (&Prof)[D], Administrativo (&Admin)[D]);
void Guardar_Solicitudes (Empleado (&Emp)[D], Inscrito (&Ins)[D]);
void Cambio_Solicitudes (Empleado (&Emp)[D], Inscrito (&Ins)[D]);
void Guardar_Gestion_2 (Plan_Evaluacion (&Plan)[D], Reportes (&Rep)[D], Clase_Magistral (&Mag)[D], Solicitudes (&Soli)[D], Novedades (&Nov)[D]);


#endif