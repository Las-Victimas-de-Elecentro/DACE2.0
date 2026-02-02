#include "../../Main/Header.h"
#ifndef REGISTRO_EXTRA_H
#define REGISTRO_EXTRA_H
using namespace std;

struct Eventos
{
    int ID;     
    string Nombre;                               
    string Fecha;
    string Descripcion;
};

struct Clubes
{
    string Nombre;
    string Descripcion;
    string Capacidad_Maxima;
    string Miembros_Inscritos;
    string Horarios_Disponibles;
};

struct Celebraciones
{
    string Nombre; 
    string Fecha;
    string Tipo;
    string Descripcion;
};

#endif