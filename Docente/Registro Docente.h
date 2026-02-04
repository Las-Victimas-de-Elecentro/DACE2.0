#include "../Main/Header.h"
#ifndef REGISTRO_DOCENTE_H
#define REGISTRO_DOCENTE_H
using namespace std;

struct Profesor
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
    string Materias;
    string Magistral;
    int Cant_Mat;
    int Cant_Mag;
    int Amigos;
    bool Club;
};

#endif