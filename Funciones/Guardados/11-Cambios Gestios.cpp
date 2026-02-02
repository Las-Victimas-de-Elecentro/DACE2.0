#include "../../Main/Header.h"
using namespace std;

void Cambio_Gestion (Variables (&Var), Estudiante (&Est)[D], Profesor (&Prof)[D], Administrativo (&Admin)[D])
{

    int I;
    string& Rol_G = Var.Rol_G;

    if (Rol_G == "Est")
    {

        ofstream Archivo_P("Base de datos/Estudiantes/Estudiantes.csv");

        if (Archivo_P.is_open())
        {

            Archivo_P << "Avatar;Nombre;Segundo Nombre;Apellido;Segundo Apellido;Cedula;Dia;Mes;Year;Dirección;Telefono;Genero;Parroquia;Etnia;Correo;Password;Carrera;Semestre;Año;UC Aprobadas;Oscuro;Pasantias;Comunitario;Amigos" << endl;

            for (I = 0; I < D; I++)
            {

                if (Est[I].Nombre != "")
                {

                    Archivo_P << Est[I].Avatar << ";";
                    Archivo_P << Est[I].Nombre << ";";
                    Archivo_P << Est[I].Nombre2 << ";";
                    Archivo_P << Est[I].Apellido << ";";
                    Archivo_P << Est[I].Apellido2 << ";";
                    Archivo_P << Est[I].Cedula << ";";
                    Archivo_P << Est[I].Fecha.Dia << ";";
                    Archivo_P << Est[I].Fecha.Mes << ";";
                    Archivo_P << Est[I].Fecha.Year << ";";
                    Archivo_P << Est[I].Direccion << ";";
                    Archivo_P << Est[I].Telefono << ";";
                    Archivo_P << Est[I].Genero << ";";
                    Archivo_P << Est[I].Parroquia << ";";
                    Archivo_P << Est[I].Etnia << ";";
                    Archivo_P << Est[I].Correo << ";";
                    Archivo_P << Est[I].Password << ";";
                    Archivo_P << Est[I].Carrera << ";";
                    Archivo_P << Est[I].Semestre << ";";
                    Archivo_P << Est[I].Year << ";";
                    Archivo_P << Est[I].UC_Aprobadas << ";";
                    Archivo_P << Est[I].Oscuro << ";";
                    Archivo_P << Est[I].Pasantias << ";";
                    Archivo_P << Est[I].Comunitario << ";";
                    Archivo_P << Est[I].Amigos << endl;
                }

            }

            Archivo_P.close();
        }

    }

    if (Rol_G == "Prof")
    {

        ofstream Archivo_Doc("Base de datos/Docentes/Docentes.csv");

        if (Archivo_Doc.is_open())
        {

            Archivo_Doc << "Avatar;Nombre;Segundo Nombre;Apellido;Segundo Apellido;Cedula;Dia;Mes;Year;Cargo;Dirección;Telefono;Genero;Parroquia;Etnia;Correo;Password;Oscuro" << endl;

            for (I = 0; I < D; I++)
            {

                if (Prof[I].Nombre != "")
                {

                    Archivo_Doc << Prof[I].Avatar << ";";
                    Archivo_Doc << Prof[I].Nombre << ";";
                    Archivo_Doc << Prof[I].Nombre2 << ";";
                    Archivo_Doc << Prof[I].Apellido << ";";
                    Archivo_Doc << Prof[I].Apellido2 << ";";
                    Archivo_Doc << Prof[I].Cedula << ";";
                    Archivo_Doc << Prof[I].Fecha.Dia << ";";
                    Archivo_Doc << Prof[I].Fecha.Mes << ";";
                    Archivo_Doc << Prof[I].Fecha.Year << ";";
                    Archivo_Doc << Prof[I].Cargo << ";";
                    Archivo_Doc << Prof[I].Direccion << ";";
                    Archivo_Doc << Prof[I].Telefono << ";";
                    Archivo_Doc << Prof[I].Genero << ";";
                    Archivo_Doc << Prof[I].Parroquia << ";";
                    Archivo_Doc << Prof[I].Etnia << ";";
                    Archivo_Doc << Prof[I].Correo << ";";
                    Archivo_Doc << Prof[I].Password << ";";
                    Archivo_Doc << Prof[I].Oscuro << endl;
                }

            }

            Archivo_Doc.close();
        }

    }

    if (Rol_G == "Admin")
    {

        ofstream Archivo_Adm("Base de datos/Administrativos/Administrativos.csv");

        if (Archivo_Adm.is_open())
        {

            Archivo_Adm << "Avatar;Nombre;Segundo Nombre;Apellido;Segundo Apellido;Cedula;Dia;Mes;Year;Cargo;Dirección;Telefono;Genero;Parroquia;Etnia;Correo;Password;Oscuro" << endl;

            for (I = 0; I < D; I++)
            {

                if (Admin[I].Nombre != "")
                {

                    Archivo_Adm << Admin[I].Avatar << ";";
                    Archivo_Adm << Admin[I].Nombre << ";";
                    Archivo_Adm << Admin[I].Nombre2 << ";";
                    Archivo_Adm << Admin[I].Apellido << ";";
                    Archivo_Adm << Admin[I].Apellido2 << ";";
                    Archivo_Adm << Admin[I].Cedula << ";";
                    Archivo_Adm << Admin[I].Fecha.Dia << ";";
                    Archivo_Adm << Admin[I].Fecha.Mes << ";";
                    Archivo_Adm << Admin[I].Fecha.Year << ";";
                    Archivo_Adm << Admin[I].Cargo << ";";
                    Archivo_Adm << Admin[I].Direccion << ";";
                    Archivo_Adm << Admin[I].Telefono << ";";
                    Archivo_Adm << Admin[I].Genero << ";";
                    Archivo_Adm << Admin[I].Parroquia << ";";
                    Archivo_Adm << Admin[I].Etnia << ";";
                    Archivo_Adm << Admin[I].Correo << ";";
                    Archivo_Adm << Admin[I].Password << ";";
                    Archivo_Adm << Admin[I].Oscuro << endl;
                }

            }

            Archivo_Adm.close();
        }

    }

}