#include "../Main/Header.h"
#ifndef REGISTRO_GLOBAL_H
#define REGISTRO_GLOBAL_H
using namespace std;

struct Fecha2
{
    int Dia, Mes, Year;
};

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

#endif