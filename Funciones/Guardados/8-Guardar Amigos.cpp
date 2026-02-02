#include "../../Main/Header.h"
using namespace std;

void Guardar_Amigos (Amigos (&Amig)[D], Estudiante (&Est)[D])
{
ofstream Archivo("Base de datos/Social/Amigos.csv");

    if (Archivo.is_open())
    {

        Archivo << "Nombre_Emisor;CI_Emisor;Nombres_Receptores;CI_Receptores;Avatares_Receptores" << endl;

        for (int i = 0; i < D; i++)
        {

            if (Amig[i].CI_Emisor != 0)
            {
                Archivo << Amig[i].Nombre_Emisor << ";";
                Archivo << Amig[i].CI_Emisor << ";";

                for (int j = 0; j < D; j++) 
                { 
                    Archivo << Amig[i].Nombre_Receptor[j] << (j == D - 1 ? "" : "|"); 
                }
                Archivo << ";";

                for (int j = 0; j < D; j++) 
                { 
                    Archivo << Amig[i].CI_Receptor[j] << (j == D - 1 ? "" : "|"); 
                }
                Archivo << ";";

                for (int j = 0; j < D; j++) 
                { 
                    Archivo << Amig[i].Avatar_Receptor[j] << (j == D - 1 ? "" : "|"); 
                }
                Archivo << endl;
            }
        }
        Archivo.close();
    }

    ofstream Archivo_P("Base de datos/Estudiantes/Estudiantes.csv");

    if (Archivo_P.is_open())
    {
        Archivo_P << "Avatar;Nombre;Segundo Nombre;Apellido;Segundo Apellido;Cedula;Dia;Mes;Year;Dirección;Telefono;Genero;Parroquia;Etnia;Correo;Password;Carrera;Semestre;Año;UC Aprobadas;Oscuro;Pasantias;Comunitario;Amigos" << endl;

        for (int i = 0; i < D; i++)
        {
            if (Est[i].Cedula != 0)
            {

                Archivo_P << Est[i].Avatar << ";";
                Archivo_P << Est[i].Nombre << ";";
                Archivo_P << Est[i].Nombre2 << ";";
                Archivo_P << Est[i].Apellido << ";";
                Archivo_P << Est[i].Apellido2 << ";";
                Archivo_P << Est[i].Cedula << ";";
                Archivo_P << Est[i].Fecha.Dia << ";";
                Archivo_P << Est[i].Fecha.Mes << ";";
                Archivo_P << Est[i].Fecha.Year << ";";
                Archivo_P << Est[i].Direccion << ";";
                Archivo_P << Est[i].Telefono << ";";
                Archivo_P << Est[i].Genero << ";";
                Archivo_P << Est[i].Parroquia << ";";
                Archivo_P << Est[i].Etnia << ";";
                Archivo_P << Est[i].Correo << ";";
                Archivo_P << Est[i].Password << ";";
                Archivo_P << Est[i].Carrera << ";";
                Archivo_P << Est[i].Semestre << ";";
                Archivo_P << Est[i].Year << ";";
                Archivo_P << Est[i].UC_Aprobadas << ";";
                Archivo_P << Est[i].Oscuro << ";";
                Archivo_P << Est[i].Pasantias << ";";
                Archivo_P << Est[i].Comunitario << ";";
                Archivo_P << Est[i].Amigos << endl;
            }
        }

        Archivo_P.close();
    }
}