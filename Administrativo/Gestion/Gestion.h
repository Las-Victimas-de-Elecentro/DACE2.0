#include "../../Main/Header.h"
#ifndef GESTION_H
#define GESTION_H

void Menu_Gestion_Admin (Variables (&Var), Empleado (&Emp)[D], Inscrito (&Ins)[D], Profesor (&Prof)[D], Administrativo (&Admin)[D], Estudiante (&Est)[D], Plan_Evaluacion (&Plan)[D], Reportes (&Rep)[D], Clase_Magistral (&Mag)[D], Solicitudes (&Soli)[D], Novedades (&Nov)[D], Pasantias (&Pas)[D], Servicio_Comunitario (&SerC)[D], Carnet (&Car)[D], Carnetizacion (&Carn)[D], Clubes (&Club)[D], Celebraciones (&Cel)[D], Eventos (&Even)[D], Becas (&Beca)[D]);
void Solicitud_Empleado (Variables &Var, Empleado (&Emp)[D], Inscrito (&Ins)[D]);
void Gestionar_Empleado (Variables (&Var), Empleado (&Emp)[D], Profesor (&Prof)[D], Administrativo (&Admin)[D], Estudiante (&Est)[D], Inscrito (&Ins)[D]);
void Eliminar_Empleado (Variables &Var, Empleado (&Emp)[D], Profesor (&Prof)[D], Administrativo (&Admin)[D], Estudiante (&Est)[D], Inscrito (&Ins)[D]);
void Avatares_Emp (Variables (&Var), Estudiante (&Est)[D], Profesor (&Prof)[D], Administrativo (&Admin)[D]);
void Modificar_Datos_Emp (Variables (&Var), Estudiante (&Est)[D], Profesor (&Prof)[D], Administrativo (&Admin)[D]);
void Solicitud_Estudiante (Variables &Var, Empleado (&Emp)[D], Inscrito (&Ins)[D]);
void Gestionar_Estudiante (Variables (&Var), Empleado (&Emp)[D], Inscrito (&Ins)[D], Estudiante (&Est)[D], Profesor (&Prof)[D], Administrativo (&Admin)[D]);
void Eliminar_Estudiante(Variables &Var, Empleado (&Emp)[D], Estudiante (&Est)[D], Profesor (&Prof)[D], Administrativo (&Admin)[D]);
void Gestion_Solicitudes (Variables &Var, Plan_Evaluacion (&Plan)[D], Reportes (&Rep)[D], Clase_Magistral (&Mag)[D], Solicitudes (&Soli)[D], Novedades (&Nov)[D]);
void Gestion_Reportes (Variables &Var, Plan_Evaluacion (&Plan)[D], Reportes (&Rep)[D], Clase_Magistral (&Mag)[D], Solicitudes (&Soli)[D], Novedades (&Nov)[D]);
void Gestion_Novedades (Variables &Var, Plan_Evaluacion (&Plan)[D], Reportes (&Rep)[D], Clase_Magistral (&Mag)[D], Solicitudes (&Soli)[D], Novedades (&Nov)[D]);
void Gestion_Comunitario (Variables &Var, Pasantias (&Pas)[D], Servicio_Comunitario (&SerC)[D]);
void Gestion_Pasantias (Variables &Var, Pasantias (&Pas)[D], Servicio_Comunitario (&SerC)[D]);
void Gestion_Carnet (Variables &Var, Carnet (&Car)[D], Carnetizacion (&Carn)[D]);
void Gestion_Magistrales (Variables &Var, Plan_Evaluacion (&Plan)[D], Reportes (&Rep)[D], Clase_Magistral (&Mag)[D], Solicitudes (&Soli)[D], Novedades (&Nov)[D]);
void Gestion_Plan_Evaluacion (Variables &Var, Plan_Evaluacion (&Plan)[D], Reportes (&Rep)[D], Clase_Magistral (&Mag)[D], Solicitudes (&Soli)[D], Novedades (&Nov)[D]);
void Gestion_Club (Variables (&Var), Clubes (&Club)[D]);
void Gestion_Celebraciones (Variables (&Var), Celebraciones (&Cel)[D]);
void Gestion_Eventos (Variables (&Var), Eventos (&Even)[D]);
void Aceptar_Becas (Variables (&Var), Becas (&Beca)[D]);

#endif