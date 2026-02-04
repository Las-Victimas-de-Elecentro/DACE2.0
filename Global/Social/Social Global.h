#include "../../Main/Header.h"
#ifndef SOCIAL_GLOBAL_H
#define SOCIAL_GLOBAL_H
using namespace std;

void Menu_Social_Global (Variables (&Var), Market_Place (&MP)[D], Comida_MP (&C_MP)[D], Articulos_MP (&A_MP)[D], Servicios_MP (&S_MP)[D], Estudiante (&Est)[D], Profesor (&Prof)[D], Administrativo (&Admin)[D], Amigos (&Amig)[D], Publicaciones (&Publi)[D], Novedades (&Nov)[D], Ayuda_Social (&Soci)[D], Ayuda_Animal (&Anim)[D], Grupos (&Gru)[D]);
void Amigos_Global (Variables (&Var), Estudiante (&Est)[D], Profesor (&Prof)[D], Administrativo (&Admin)[D], Amigos (&Amig)[D]);
void Avatares_Social (Variables (&Var), Estudiante (&Est)[D], Profesor (&Prof)[D], Administrativo (&Admin)[D]);
void Ver_Novedades (Novedades (&Nov)[D]);

#endif