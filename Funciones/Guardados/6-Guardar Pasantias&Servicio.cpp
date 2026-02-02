#include "../../Main/Header.h"
using namespace std;

void Guardar_Pasantias_Servicio (Pasantias (&Pas)[D], Servicio_Comunitario (&SerC)[D])
{
    ofstream Archivo_P("Base de datos/Estudiantes/Pasantias.csv");
    if (Archivo_P.is_open())
    {
        Archivo_P << "Nombre;Edad;Cedula;Password;Carrera;Semestre;Year;Empresa;Justificacion;Estado;Horas" << endl;
        int P = 0;
        while (P < D)
        {
            if (Pas[P].Nombre != "")
            {
                Archivo_P << Pas[P].Nombre << ";";
                Archivo_P << Pas[P].Edad << ";";
                Archivo_P << Pas[P].Cedula << ";";
                Archivo_P << Pas[P].Password << ";";
                Archivo_P << Pas[P].Carrera << ";";
                Archivo_P << Pas[P].Semestre << ";";
                Archivo_P << Pas[P].Year << ";";
                Archivo_P << Pas[P].Empresa << ";";
                Archivo_P << Pas[P].Justificacion << ";";
                Archivo_P << Pas[P].Estado_Solicitud << ";";
                Archivo_P << Pas[P].Horas << endl;
            }
            P++;
        }
        Archivo_P.close();
    }

    ofstream Archivo_S("Base de datos/Estudiantes/Servicio.csv");
    if (Archivo_S.is_open())
    {
        Archivo_S << "Nombre;Apellido;Cedula;Dia;Mes;Year;Area;Semestre;Year_Servicio;Horas" << endl;
        int S = 0;
        while (S < D)
        {
            if (SerC[S].Nombre != "")
            {
                Archivo_S << SerC[S].Nombre << ";";
                Archivo_S << SerC[S].Apellido << ";";
                Archivo_S << SerC[S].Cedula << ";";
                Archivo_S << SerC[S].Fecha.Dia << ";";
                Archivo_S << SerC[S].Fecha.Mes << ";";
                Archivo_S << SerC[S].Fecha.Year << ";";
                Archivo_S << SerC[S].Area << ";";
                Archivo_S << SerC[S].Semestre << ";";
                Archivo_S << SerC[S].Year << ";";
                Archivo_S << SerC[S].Horas_Realizadas << endl;
            }
            S++;
        }
        Archivo_S.close();
    }
}