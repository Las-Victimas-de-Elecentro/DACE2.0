#include "../Main/Header.h"
#ifndef REGISTRO_ADMINISTRATIVO_H
#define REGISTRO_ADMINISTRATIVO_H
using namespace std;

struct Administrativo
{
    string Avatar;
    string Nombre;
    string Nombre2;
    string Apellido;
    string Apellido2;
    long Cedula;
    Nacimiento Fecha;
    string Cargo;
    string Direccion;
    long long Telefono;
    string Genero;
    string Parroquia;
    string Etnia;
    string Correo;
    string Password;
    int Tarjeta[50];
    Enfermedad Enf;
    bool Oscuro;
};

#endif