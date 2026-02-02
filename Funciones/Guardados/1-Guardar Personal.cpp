#include "../../Main/Header.h"
using namespace std;

void Guardar(Variables (&Var), Estudiante (&Est)[D], Profesor (&Prof)[D], Administrativo (&Admin)[D])
{
    string Ruta_P, Ruta_S;

    if (Rol == "Est") {
        Ruta_P = "Base de datos/Estudiantes/Estudiantes.csv";
        Ruta_S = "Base de datos/Estudiantes/Salud.csv";
    } else if (Rol == "Prof") {
        Ruta_P = "Base de datos/Docentes/Docentes.csv";
        Ruta_S = "Base de datos/Docentes/Salud.csv";
    } else {
        Ruta_P = "Base de datos/Administrativos/Administrativos.csv";
        Ruta_S = "Base de datos/Administrativos/Salud.csv";
    }

    ofstream Personal(Ruta_P);
    if (Personal.is_open())
    {
        if (Rol == "Est") {
            Personal << "Avatar;Nombre;Segundo Nombre;Apellido;Segundo Apellido;Cedula;Dia;Mes;Year;Dirección;Telefono;Genero;Parroquia;Etnia;Correo;Password;Carrera;Semestre;Año;UC Aprobadas;Oscuro;Pasantias;Comunitario;Amigos" << endl;
        } else {
            Personal << "Avatar;Nombre;Segundo Nombre;Apellido;Segundo Apellido;Cedula;Dia;Mes;Year;Cargo;Dirección;Telefono;Genero;Parroquia;Etnia;Correo;Password;Oscuro" << endl;
        }

        int I = 0;
        while (I < D)
        {
            if (Rol == "Est" && Est[I].Nombre != "")
            {
                Personal << Est[I].Avatar << ";";
                Personal << Est[I].Nombre << ";";
                Personal << Est[I].Nombre2 << ";";
                Personal << Est[I].Apellido << ";";
                Personal << Est[I].Apellido2 << ";";
                Personal << Est[I].Cedula << ";";
                Personal << Est[I].Fecha.Dia << ";";
                Personal << Est[I].Fecha.Mes << ";";
                Personal << Est[I].Fecha.Year << ";";
                Personal << Est[I].Direccion << ";";
                Personal << Est[I].Telefono << ";";
                Personal << Est[I].Genero << ";";
                Personal << Est[I].Parroquia << ";";
                Personal << Est[I].Etnia << ";";
                Personal << Est[I].Correo << ";";
                Personal << Est[I].Password << ";";
                Personal << Est[I].Carrera << ";";
                Personal << Est[I].Semestre << ";";
                Personal << Est[I].Year << ";";
                Personal << Est[I].UC_Aprobadas << ";";
                Personal << Est[I].Oscuro << ";";
                Personal << Est[I].Pasantias << ";";
                Personal << Est[I].Comunitario << ";";
                Personal << Est[I].Amigos << endl; 
            }
            else if (Rol == "Prof" && Prof[I].Nombre != "")
            {
                Personal << Prof[I].Avatar << ";";
                Personal << Prof[I].Nombre << ";";
                Personal << Prof[I].Nombre2 << ";";
                Personal << Prof[I].Apellido << ";";
                Personal << Prof[I].Apellido2 << ";";
                Personal << Prof[I].Cedula << ";";
                Personal << Prof[I].Fecha.Dia << ";";
                Personal << Prof[I].Fecha.Mes << ";";
                Personal << Prof[I].Fecha.Year << ";";
                Personal << Prof[I].Cargo << ";";
                Personal << Prof[I].Direccion << ";";
                Personal << Prof[I].Telefono << ";";
                Personal << Prof[I].Genero << ";";
                Personal << Prof[I].Parroquia << ";";
                Personal << Prof[I].Etnia << ";";
                Personal << Prof[I].Correo << ";";
                Personal << Prof[I].Password << ";";
                Personal << Prof[I].Oscuro << endl;
            }
            else if (Rol == "Admin" && Admin[I].Nombre != "")
            {
                Personal << Admin[I].Avatar << ";";
                Personal << Admin[I].Nombre << ";";
                Personal << Admin[I].Nombre2 << ";";
                Personal << Admin[I].Apellido << ";";
                Personal << Admin[I].Apellido2 << ";";
                Personal << Admin[I].Cedula << ";";
                Personal << Admin[I].Fecha.Dia << ";";
                Personal << Admin[I].Fecha.Mes << ";";
                Personal << Admin[I].Fecha.Year << ";";
                Personal << Admin[I].Cargo << ";";
                Personal << Admin[I].Direccion << ";";
                Personal << Admin[I].Telefono << ";";
                Personal << Admin[I].Genero << ";";
                Personal << Admin[I].Parroquia << ";";
                Personal << Admin[I].Etnia << ";";
                Personal << Admin[I].Correo << ";";
                Personal << Admin[I].Password << ";";
                Personal << Admin[I].Oscuro << endl;
            }
            I++;
        }
        Personal.close();
    }

    ofstream Salud(Ruta_S);
    if (Salud.is_open())
    {
        Salud << "Cedula;Nombre;Apellido;Transmisibles;Cronicas;Neurologicas;Neoplasias;Autoinmunes;Transtornos;Lesiones;Congenitas;Metabolicos;Ocupacionales" << endl;
        
        int J = 0;
        while (J < D)
        {
            if (Rol == "Est" && Est[J].Nombre != "")
            {
                Salud << Est[J].Cedula << ";";
                Salud << Est[J].Nombre << ";";
                Salud << Est[J].Apellido << ";";
                Salud << Est[J].Enf.Transmisibles << ";";
                Salud << Est[J].Enf.Cronicas << ";";
                Salud << Est[J].Enf.Neurologicas << ";";
                Salud << Est[J].Enf.Neoplasias << ";";
                Salud << Est[J].Enf.Autoinmunes << ";";
                Salud << Est[J].Enf.Transtornos << ";";
                Salud << Est[J].Enf.Lesiones << ";";
                Salud << Est[J].Enf.Congenitas << ";";
                Salud << Est[J].Enf.Metabolicos << ";";
                Salud << Est[J].Enf.Ocupacionales << endl;
            }
            else if (Rol == "Prof" && Prof[J].Nombre != "")
            {
                Salud << Prof[J].Cedula << ";";
                Salud << Prof[J].Nombre << ";";
                Salud << Prof[J].Apellido << ";";
                Salud << Prof[J].Enf.Transmisibles << ";";
                Salud << Prof[J].Enf.Cronicas << ";";
                Salud << Prof[J].Enf.Neurologicas << ";";
                Salud << Prof[J].Enf.Neoplasias << ";";
                Salud << Prof[J].Enf.Autoinmunes << ";";
                Salud << Prof[J].Enf.Transtornos << ";";
                Salud << Prof[J].Enf.Lesiones << ";";
                Salud << Prof[J].Enf.Congenitas << ";";
                Salud << Prof[J].Enf.Metabolicos << ";";
                Salud << Prof[J].Enf.Ocupacionales << endl;
            }
            else if (Rol == "Admin" && Admin[J].Nombre != "")
            {
                Salud << Admin[J].Cedula << ";";
                Salud << Admin[J].Nombre << ";";
                Salud << Admin[J].Apellido << ";";
                Salud << Admin[J].Enf.Transmisibles << ";";
                Salud << Admin[J].Enf.Cronicas << ";";
                Salud << Admin[J].Enf.Neurologicas << ";";
                Salud << Admin[J].Enf.Neoplasias << ";";
                Salud << Admin[J].Enf.Autoinmunes << ";";
                Salud << Admin[J].Enf.Transtornos << ";";
                Salud << Admin[J].Enf.Lesiones << ";";
                Salud << Admin[J].Enf.Congenitas << ";";
                Salud << Admin[J].Enf.Metabolicos << ";";
                Salud << Admin[J].Enf.Ocupacionales << endl;
            }
            J++;
        }
        Salud.close();
    }

    ofstream Materia("Base de datos/Docentes/Materias.csv");
    if (Materia.is_open())
    {
        Materia << "Cedula;Nombre;Apellido;Materias;Cantidad" << endl;
        
        int M = 0;
        while (M < D)
        {
            if (Prof[M].Nombre != "")
            {
                Materia << Prof[M].Cedula << ";";
                Materia << Prof[M].Nombre << ";";
                Materia << Prof[M].Apellido << ";";
                Materia << Prof[M].Materias << ";";
                Materia << Prof[M].Cant_Mat << endl;
            }
            M++;
        }
        Materia.close();
    }
}