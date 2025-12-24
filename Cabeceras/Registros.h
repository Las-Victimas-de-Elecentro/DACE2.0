#include <iostream>
#ifndef REGISTROS_H
#define REGISTROS_H
using namespace std;

struct Nacimiento
{
    int Dia, Mes, Year;
};

struct Usuario
{
    string Nombre;
    string Apellido;
    long Cedula;
    Nacimiento Fecha;
    string Correo;
    string Password;
};

#endif