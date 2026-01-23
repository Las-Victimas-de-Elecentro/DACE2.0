#include "../Main/Header.h"
#include <fstream>
#include <string>

using namespace std;

void Verificar_Llenado(Estudiante (&Est)[D], Profesor (&Prof)[D], Administrativo (&Admin)[D])
{
    string Linea;
    int I = 0;
    int J = 0;

    ifstream Archivo_D("Base de datos/Docentes/Docentes.csv");
    if (Archivo_D.is_open())
    {
        while (getline(Archivo_D, Linea))
        {
            if (!Linea.empty()) I++;
        }
        Archivo_D.close();
        if (I > 0) I--;
    }
    else
    {
        ofstream Nuevo_D("Base de datos/Docentes/Docentes.csv");
        Nuevo_D << "Avatar;Nombre;Segundo Nombre;Apellido;Segundo Apellido;Cedula;Dia;Mes;Year;Cargo;Dirección;Telefono;Genero;Parroquia;Etnia;Correo;Password;Oscuro" << endl;
        Nuevo_D.close();
    }

    ifstream Archivo_SD("Base de datos/Docentes/Salud.csv");
    if (!Archivo_SD.is_open())
    {
        ofstream Nuevo_SD("Base de datos/Docentes/Salud.csv");
        Nuevo_SD << "Cedula;Nombre;Apellido;Transmisibles;Cronicas;Neurologicas;Neoplasias;Autoinmunes;Transtornos;Lesiones;Congenitas;Metabolicos;Ocupacionales" << endl;
        Nuevo_SD.close();
    }
    else
    {
        Archivo_SD.close();
    }

    ifstream Archivo_M("Base de datos/Docentes/Materias.csv");
    if (!Archivo_M.is_open())
    {
        ofstream Nuevo_M("Base de datos/Docentes/Materias.csv");
        Nuevo_M << "Cedula;Nombre;Apellido;Materias;Cantidad" << endl;
        Nuevo_M.close();
    }
    else
    {
        Archivo_M.close();
    }

    ifstream Archivo_A("Base de datos/Administrativos/Administrativos.csv");
    if (Archivo_A.is_open())
    {
        while (getline(Archivo_A, Linea))
        {
            if (!Linea.empty()) J++;
        }
        Archivo_A.close();
        if (J > 0) J--;
    }
    else
    {
        ofstream Nuevo_A("Base de datos/Administrativos/Administrativos.csv");
        Nuevo_A << "Avatar;Nombre;Segundo Nombre;Apellido;Segundo Apellido;Cedula;Dia;Mes;Year;Cargo;Dirección;Telefono;Genero;Parroquia;Etnia;Correo;Password;Oscuro" << endl;
        Nuevo_A.close();
    }

    ifstream Archivo_SA("Base de datos/Administrativos/Salud.csv");
    if (!Archivo_SA.is_open())
    {
        ofstream Nuevo_SA("Base de datos/Administrativos/Salud.csv");
        Nuevo_SA << "Cedula;Nombre;Apellido;Transmisibles;Cronicas;Neurologicas;Neoplasias;Autoinmunes;Transtornos;Lesiones;Congenitas;Metabolicos;Ocupacionales" << endl;
        Nuevo_SA.close();
    }
    else
    {
        Archivo_SA.close();
    }

    if (I < 31 || J < 4)
    {
        Llenado(Prof, Admin);
        Llenado_Tarjetas(Prof, Admin);
        Guardar_Tarjetas(Est, Prof, Admin);
        Guardar_Llenado(Prof, Admin);
    }
}