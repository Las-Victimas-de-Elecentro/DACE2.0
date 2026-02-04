#include "../../Main/Header.h"
#ifndef REGISTRO_EXTRA_H
#define REGISTRO_EXTRA_H
using namespace std;

struct Eventos
{
    int ID;     
    string Nombre;                               
    Nacimiento Fecha;
    string Tipo;
    string Descripcion;
};

struct Estudiante_Club
{
    long Cedula;
    string Nombre;
    string Apellido;
};

struct Clubes
{
    string Nombre;
    string Descripcion;
    int Capacidad_Maxima;
    vector<Estudiante_Club> Miembros_Inscritos; 
    string Horarios_Disponibles;
    bool Activo;
};

struct Celebraciones
{
    string Nombre; 
    Nacimiento Fecha;
    string Tipo;
    string Descripcion;
};

#endif