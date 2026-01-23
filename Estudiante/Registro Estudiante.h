#include "../Main/Header.h"
#ifndef REGISTRO_ESTUDIANTE_H
#define REGISTRO_ESTUDIANTE_H
using namespace std;

struct Estudiante
{
    string Avatar;
    string Nombre;
    string Nombre2;
    string Apellido;
    string Apellido2;
    long Cedula;
    Nacimiento Fecha;
    string Direccion;
    long long Telefono;
    string Genero;
    string Parroquia;
    string Etnia;
    string Correo;
    string Password;
    int Tarjeta[50];
    Enfermedad Enf;
    string Carrera;
    int Semestre, Year;
    int UC_Aprobadas;
    Carreras Car;
    bool Oscuro;
    string Materias;
    string Magistral;
    int Cant_Mat;
    int Cant_Mag;
};

#endif