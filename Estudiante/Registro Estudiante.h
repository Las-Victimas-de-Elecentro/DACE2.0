#include "../Main/Header.h"
#ifndef REGISTROS_H
#define REGISTROS_H
using namespace std;

struct Nacimiento
{
    int Dia, Mes, Year;
};

struct Enfermedad
{
    string Transmisibles;
    string Cronicas;
    string Neurologicas;
    string Neoplasias;
    string Autoinmunes;
    string Transtornos;
    string Lesiones;
    string Congenitas;
    string Metabolicos;
    string Ocupacionales;
};

struct Usuario
{
    string Avatar;
    string Nombre;
    string Apellido;
    long Cedula;
    Nacimiento Fecha;
    string Correo;
    string Password;
    Enfermedad Enf;
};

#endif