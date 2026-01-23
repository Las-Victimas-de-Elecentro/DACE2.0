#include "../Main/Header.h"
using namespace std;

void Guardar_Llenado (Profesor (&Prof)[D], Administrativo (&Admin)[D])
{
    ofstream Personal_Prof("Base de datos/Docentes/Docentes.csv");
    if (Personal_Prof.is_open())
    {
        Personal_Prof << "Avatar;Nombre;Segundo Nombre;Apellido;Segundo Apellido;Cedula;Dia;Mes;Year;Cargo;Dirección;Telefono;Genero;Parroquia;Etnia;Correo;Password;Oscuro" << endl;

        int I = 0;
        while (I < 31)
        {
            if (Prof[I].Nombre != "")
            {
                Personal_Prof << Prof[I].Avatar << ";";
                Personal_Prof << Prof[I].Nombre << ";";
                Personal_Prof << Prof[I].Nombre2 << ";";
                Personal_Prof << Prof[I].Apellido << ";";
                Personal_Prof << Prof[I].Apellido2 << ";";
                Personal_Prof << Prof[I].Cedula << ";";
                Personal_Prof << Prof[I].Fecha.Dia << ";";
                Personal_Prof << Prof[I].Fecha.Mes << ";";
                Personal_Prof << Prof[I].Fecha.Year << ";";
                Personal_Prof << Prof[I].Cargo << ";";
                Personal_Prof << Prof[I].Direccion << ";";
                Personal_Prof << Prof[I].Telefono << ";";
                Personal_Prof << Prof[I].Genero << ";";
                Personal_Prof << Prof[I].Parroquia << ";";
                Personal_Prof << Prof[I].Etnia << ";";
                Personal_Prof << Prof[I].Correo << ";";
                Personal_Prof << Prof[I].Password << ";";
                Personal_Prof << Prof[I].Oscuro << endl;
            }
            I++;
        }
        Personal_Prof.close();
    }

    ofstream Salud_Prof("Base de datos/Docentes/Salud.csv");
    if (Salud_Prof.is_open())
    {
        Salud_Prof << "Cedula;Nombre;Apellido;Transmisibles;Cronicas;Neurologicas;Neoplasias;Autoinmunes;Transtornos;Lesiones;Congenitas;Metabolicos;Ocupacionales" << endl;

        int I = 0;
        while (I < 31)
        {
            if (Prof[I].Nombre != "")
            {
                Salud_Prof << Prof[I].Cedula << ";";
                Salud_Prof << Prof[I].Nombre << ";";
                Salud_Prof << Prof[I].Apellido << ";";
                Salud_Prof << Prof[I].Enf.Transmisibles << ";";
                Salud_Prof << Prof[I].Enf.Cronicas << ";";
                Salud_Prof << Prof[I].Enf.Neurologicas << ";";
                Salud_Prof << Prof[I].Enf.Neoplasias << ";";
                Salud_Prof << Prof[I].Enf.Autoinmunes << ";";
                Salud_Prof << Prof[I].Enf.Transtornos << ";";
                Salud_Prof << Prof[I].Enf.Lesiones << ";";
                Salud_Prof << Prof[I].Enf.Congenitas << ";";
                Salud_Prof << Prof[I].Enf.Metabolicos << ";";
                Salud_Prof << Prof[I].Enf.Ocupacionales << endl;
            }
            I++;
        }
        Salud_Prof.close();
    }

    ofstream Personal_Admin("Base de datos/Administrativos/Administrativos.csv");
    if (Personal_Admin.is_open())
    {
        Personal_Admin << "Avatar;Nombre;Segundo Nombre;Apellido;Segundo Apellido;Cedula;Dia;Mes;Year;Cargo;Dirección;Telefono;Genero;Parroquia;Etnia;Correo;Password;Oscuro" << endl;

        int J = 0;
        while (J < 4)
        {
            if (Admin[J].Nombre != "")
            {
                Personal_Admin << Admin[J].Avatar << ";";
                Personal_Admin << Admin[J].Nombre << ";";
                Personal_Admin << Admin[J].Nombre2 << ";";
                Personal_Admin << Admin[J].Apellido << ";";
                Personal_Admin << Admin[J].Apellido2 << ";";
                Personal_Admin << Admin[J].Cedula << ";";
                Personal_Admin << Admin[J].Fecha.Dia << ";";
                Personal_Admin << Admin[J].Fecha.Mes << ";";
                Personal_Admin << Admin[J].Fecha.Year << ";";
                Personal_Admin << Admin[J].Cargo << ";";
                Personal_Admin << Admin[J].Direccion << ";";
                Personal_Admin << Admin[J].Telefono << ";";
                Personal_Admin << Admin[J].Genero << ";";
                Personal_Admin << Admin[J].Parroquia << ";";
                Personal_Admin << Admin[J].Etnia << ";";
                Personal_Admin << Admin[J].Correo << ";";
                Personal_Admin << Admin[J].Password << ";";
                Personal_Admin << Admin[J].Oscuro << endl;
            }
            J++;
        }
        Personal_Admin.close();
    }

    ofstream Salud_Admin("Base de datos/Administrativos/Salud.csv");
    if (Salud_Admin.is_open())
    {
        Salud_Admin << "Cedula;Nombre;Apellido;Transmisibles;Cronicas;Neurologicas;Neoplasias;Autoinmunes;Transtornos;Lesiones;Congenitas;Metabolicos;Ocupacionales" << endl;

        int J = 0;
        while (J < 4)
        {
            if (Admin[J].Nombre != "")
            {
                Salud_Admin << Admin[J].Cedula << ";";
                Salud_Admin << Admin[J].Nombre << ";";
                Salud_Admin << Admin[J].Apellido << ";";
                Salud_Admin << Admin[J].Enf.Transmisibles << ";";
                Salud_Admin << Admin[J].Enf.Cronicas << ";";
                Salud_Admin << Admin[J].Enf.Neurologicas << ";";
                Salud_Admin << Admin[J].Enf.Neoplasias << ";";
                Salud_Admin << Admin[J].Enf.Autoinmunes << ";";
                Salud_Admin << Admin[J].Enf.Transtornos << ";";
                Salud_Admin << Admin[J].Enf.Lesiones << ";";
                Salud_Admin << Admin[J].Enf.Congenitas << ";";
                Salud_Admin << Admin[J].Enf.Metabolicos << ";";
                Salud_Admin << Admin[J].Enf.Ocupacionales << endl;
            }
            J++;
        }
        Salud_Admin.close();
    }

}