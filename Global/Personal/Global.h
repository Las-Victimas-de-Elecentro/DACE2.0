#include "../../Main/Header.h"
#ifndef GLOBAL_H
#define GLOBAL_H

void Seguridad_Global_Personal (Usuario (&User)[500], int &N, int Opc_F, string Rol);
void Oscuro_Global_Personal ();
void Avatares (Usuario (&User)[500], int &N);
void Avatar_Global_Personal (Usuario (&User)[500], int &N, int Opc_F);
void Salud_Global_Personal (Usuario (&User)[500], int &N, int Opc_F);
void Enfermedades_Global_Personal (Usuario (&User)[500], int &N, int Opc_F);
void Ver_Enfermedades_Global_Personal (Usuario (&User)[500], int &N);

#endif