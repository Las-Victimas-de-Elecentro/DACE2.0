#include "../../Main/Header.h"
#ifndef EXTRA_H
#define EXTRA_H
using namespace std;

void Menu_Extra (Variables (&Var), Estudiante (&Est)[D], Profesor (&Prof)[D], Clubes (&Club)[D], Celebraciones (&Cel)[D], Eventos (&Even)[D]);
void Inscripcion_Club (Variables (&Var), Clubes (&Club)[D], Estudiante (&Est)[D], Profesor (&Prof)[D]);
void Ver_Eventos (Variables (&Var), Eventos (&Even)[D]);
void Ver_Celebraciones (Variables (&Var), Celebraciones (&Cel)[D]);

#endif