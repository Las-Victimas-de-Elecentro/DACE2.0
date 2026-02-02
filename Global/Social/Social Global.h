#include "../../Main/Header.h"
#ifndef SOCIAL_GLOBAL_H
#define SOCIAL_GLOBAL_H
using namespace std;

void Menu_Social_Global (Variables (&Var), Market_Place (&MP)[D], Comida_MP (&C_MP)[D], Articulos_MP (&A_MP)[D], Servicios_MP (&S_MP)[D], Estudiante (&Est)[D], Profesor (&Prof)[D], Administrativo (&Admin)[D], Amigos (&Amig)[D], Publicaciones (&Publi)[D]);
void Amigos_Global (Variables (&Var), Estudiante (&Est)[D], Profesor (&Prof)[D], Administrativo (&Admin)[D], Amigos (&Amig)[D]);
void Avatares_Social (Variables (&Var), Estudiante (&Est)[D], Profesor (&Prof)[D], Administrativo (&Admin)[D]);
void Marketplace (Variables (&Var), Market_Place (&MP)[D], Comida_MP (&C_MP)[D], Articulos_MP (&A_MP)[D], Servicios_MP (&S_MP)[D], Estudiante (&Est)[D], Profesor (&Prof)[D], Administrativo (&Admin)[D]);
void Ing_Producto (Variables (&Var), Market_Place (&MP)[D], Comida_MP (&C_MP)[D], Articulos_MP (&A_MP)[D], Servicios_MP (&S_MP)[D], Estudiante (&Est)[D], Profesor (&Prof)[D], Administrativo (&Admin)[D]);
void Comp_Producto (Variables (&Var), Market_Place (&MP)[D], Comida_MP (&C_MP)[D], Articulos_MP (&A_MP)[D], Servicios_MP (&S_MP)[D], Estudiante (&Est)[D], Profesor (&Prof)[D], Administrativo (&Admin)[D]);
void Mod_Producto (Variables (&Var), Market_Place (&MP)[D], Comida_MP (&C_MP)[D], Articulos_MP (&A_MP)[D], Servicios_MP (&S_MP)[D], Estudiante (&Est)[D], Profesor (&Prof)[D], Administrativo (&Admin)[D]);
void Menu_Foro_Estudiantes (Variables (&Var), Estudiante (&Est)[D], Profesor (&Prof)[D], Administrativo (&Admin)[D], Amigos (&Amig)[D], Publicaciones (&Publi)[D]);
void Crear_Publicacion (Variables &Var, Estudiante (&Est)[D], Publicaciones (&Publi)[D]);
void Ver_Publicaciones (Variables &Var, Estudiante (&Est)[D], Publicaciones (&Publi)[D], Profesor (&Prof)[D], Administrativo (&Admin)[D], Amigos (&Amig)[D]);
void Buscar_Publicaciones(Variables &Var, Estudiante (&Est)[D], Publicaciones (&Publi)[D], Profesor (&Prof)[D], Administrativo (&Admin)[D], Amigos (&Amig)[D]);
void Gestionar_Publicaciones_Propias(Variables &Var, Estudiante (&Est)[D], Publicaciones (&Publi)[D], Profesor (&Prof)[D], Administrativo (&Admin)[D]);
void Reac ();
void Imagen (Variables (&Var), Publicaciones Publi[D]);

#endif