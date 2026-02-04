#include "../../Main/Header.h"
#ifndef SOCIAL_EST_H
#define SOCIAL_EST_H
using namespace std;

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
void Chat_bot (Variables (&Var));
void Gestion_Ayudas (Variables (&Var), Ayuda_Social (&Soci)[D], Ayuda_Animal (&Anim)[D]);
void Mostrar_Grupos (Variables (&Var), Grupos (&Gru)[D]);

#endif