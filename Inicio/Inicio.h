#include "../Main/Header.h"
#ifndef MODULOS_H
#define MODULOS_H

void Registro (Variables (&Var), Estudiante (&Est)[D], Profesor (&Prof)[D], Administrativo (&Admin)[D]);
void Sesion (Variables (&Var), Estudiante (&Est)[D], Plan_Evaluacion (&Plan)[D], Reportes (&Rep)[D], Asignacion (&Asig)[D], Clase_Magistral (&Mag)[D], Solicitudes (&Soli)[D], Grupos (&Gru)[D], Clase (&Class)[D], Bloque_Horario (&List)[48], Materias (&Mat)[527], Profesor (&Prof)[D], Administrativo (&Admin)[D], Carnet (&Car)[D], Carnetizacion (&Carn)[D], Pasantias (&Pas)[D], Servicio_Comunitario (&SerC)[D], Market_Place (&MP)[D], Comida_MP (&C_MP)[D], Articulos_MP (&A_MP)[D], Servicios_MP (&S_MP)[D], Amigos (&Amig)[D], Publicaciones (&Publi)[D], Empleado (&Emp)[D], Inscrito (&Ins)[D], Novedades (&Nov)[D], Clubes (&Club)[D], Celebraciones (&Cel)[D], Eventos (&Even)[D], Ayuda_Social (&Soci)[D], Ayuda_Animal (&Anim)[D], Becas (&Beca)[D]);
void Generar_Tarjeta (Variables (&Var), Estudiante (&Est)[D], Profesor (&Prof)[D], Administrativo (&Admin)[D]);
void Mostrar_Tarjeta (Variables (&Var), Estudiante (&Est)[D], Profesor (&Prof)[D], Administrativo (&Admin)[D]);
void Guardar_Tarjetas (Estudiante (&Est)[D], Profesor (&Prof)[D], Administrativo (&Admin)[D]);
bool Validar_Coordenada(Variables (&Var), Estudiante (&Est)[D], Profesor (&Prof)[D], Administrativo (&Admin)[D]);
void Recuperar_Password (Variables (&Var), Estudiante (&Est)[D], Profesor (&Prof)[D], Administrativo (&Admin)[D]);

#endif