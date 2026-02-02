#include "../../Main/Header.h"
using namespace std;

void Guardar_Gestion (Variables (&Var), Estudiante (&Est)[D], Profesor (&Prof)[D], Administrativo (&Admin)[D])
{

    int Av = Var.Av;
    string& Rol_G = Var.Rol_G;

    if (Rol_G == "Est")
    {

        ofstream Archivo_P("Base de datos/Estudiantes/Estudiantes.csv", ios::app);

        if (Archivo_P.is_open())
        {

            Archivo_P.seekp(0, ios::end);

            if (Archivo_P.tellp() == 0)
            {

                Archivo_P << "Avatar;Nombre;Segundo Nombre;Apellido;Segundo Apellido;Cedula;Dia;Mes;Year;Dirección;Telefono;Genero;Parroquia;Etnia;Correo;Password;Carrera;Semestre;Año;UC Aprobadas;Oscuro;Pasantias;Comunitario;Amigos" << endl;
            }

            Archivo_P << Est[Av].Avatar << ";";
            Archivo_P << Est[Av].Nombre << ";";
            Archivo_P << Est[Av].Nombre2 << ";";
            Archivo_P << Est[Av].Apellido << ";";
            Archivo_P << Est[Av].Apellido2 << ";";
            Archivo_P << Est[Av].Cedula << ";";
            Archivo_P << Est[Av].Fecha.Dia << ";";
            Archivo_P << Est[Av].Fecha.Mes << ";";
            Archivo_P << Est[Av].Fecha.Year << ";";
            Archivo_P << Est[Av].Direccion << ";";
            Archivo_P << Est[Av].Telefono << ";";
            Archivo_P << Est[Av].Genero << ";";
            Archivo_P << Est[Av].Parroquia << ";";
            Archivo_P << Est[Av].Etnia << ";";
            Archivo_P << Est[Av].Correo << ";";
            Archivo_P << Est[Av].Password << ";";
            Archivo_P << Est[Av].Carrera << ";";
            Archivo_P << Est[Av].Semestre << ";";
            Archivo_P << Est[Av].Year << ";";
            Archivo_P << Est[Av].UC_Aprobadas << ";";
            Archivo_P << Est[Av].Oscuro << ";";
            Archivo_P << Est[Av].Pasantias << ";";
            Archivo_P << Est[Av].Comunitario << ";";
            Archivo_P << Est[Av].Amigos << endl;

            Archivo_P.close();
        }

    }

    if (Rol_G == "Prof")
    {

        ofstream Archivo_Doc("Base de datos/Docentes/Docentes.csv", ios::app);

        if (Archivo_Doc.is_open())
        {

            Archivo_Doc.seekp(0, ios::end);

            if (Archivo_Doc.tellp() == 0)
            {

                Archivo_Doc << "Avatar;Nombre;Segundo Nombre;Apellido;Segundo Apellido;Cedula;Dia;Mes;Year;Cargo;Dirección;Telefono;Genero;Parroquia;Etnia;Correo;Password;Oscuro" << endl;
            }

            Archivo_Doc << Prof[Av].Avatar << ";";
            Archivo_Doc << Prof[Av].Nombre << ";";
            Archivo_Doc << Prof[Av].Nombre2 << ";";
            Archivo_Doc << Prof[Av].Apellido << ";";
            Archivo_Doc << Prof[Av].Apellido2 << ";";
            Archivo_Doc << Prof[Av].Cedula << ";";
            Archivo_Doc << Prof[Av].Fecha.Dia << ";";
            Archivo_Doc << Prof[Av].Fecha.Mes << ";";
            Archivo_Doc << Prof[Av].Fecha.Year << ";";
            Archivo_Doc << Prof[Av].Cargo << ";";
            Archivo_Doc << Prof[Av].Direccion << ";";
            Archivo_Doc << Prof[Av].Telefono << ";";
            Archivo_Doc << Prof[Av].Genero << ";";
            Archivo_Doc << Prof[Av].Parroquia << ";";
            Archivo_Doc << Prof[Av].Etnia << ";";
            Archivo_Doc << Prof[Av].Correo << ";";
            Archivo_Doc << Prof[Av].Password << ";";
            Archivo_Doc << Prof[Av].Oscuro << endl;

            Archivo_Doc.close();
        }

    }

    if (Rol_G == "Admin")
    {

        ofstream Archivo_Adm("Base de datos/Administrativos/Administrativos.csv", ios::app);

        if (Archivo_Adm.is_open())
        {

            Archivo_Adm.seekp(0, ios::end);

            if (Archivo_Adm.tellp() == 0)
            {

                Archivo_Adm << "Avatar;Nombre;Segundo Nombre;Apellido;Segundo Apellido;Cedula;Dia;Mes;Year;Cargo;Dirección;Telefono;Genero;Parroquia;Etnia;Correo;Password;Oscuro" << endl;
            }

            Archivo_Adm << Admin[Av].Avatar << ";";
            Archivo_Adm << Admin[Av].Nombre << ";";
            Archivo_Adm << Admin[Av].Nombre2 << ";";
            Archivo_Adm << Admin[Av].Apellido << ";";
            Archivo_Adm << Admin[Av].Apellido2 << ";";
            Archivo_Adm << Admin[Av].Cedula << ";";
            Archivo_Adm << Admin[Av].Fecha.Dia << ";";
            Archivo_Adm << Admin[Av].Fecha.Mes << ";";
            Archivo_Adm << Admin[Av].Fecha.Year << ";";
            Archivo_Adm << Admin[Av].Cargo << ";";
            Archivo_Adm << Admin[Av].Direccion << ";";
            Archivo_Adm << Admin[Av].Telefono << ";";
            Archivo_Adm << Admin[Av].Genero << ";";
            Archivo_Adm << Admin[Av].Parroquia << ";";
            Archivo_Adm << Admin[Av].Etnia << ";";
            Archivo_Adm << Admin[Av].Correo << ";";
            Archivo_Adm << Admin[Av].Password << ";";
            Archivo_Adm << Admin[Av].Oscuro << endl;

            Archivo_Adm.close();
        }

    }

}