#include "../../Main/Header.h"
using namespace std;

void Guardar_Gestion_2 (Plan_Evaluacion (&Plan)[D], Reportes (&Rep)[D], Clase_Magistral (&Mag)[D], Solicitudes (&Soli)[D], Novedades (&Nov)[D])
{

    ofstream Solicitud("Base de datos/Docentes/Solicitudes.csv");
    if (Solicitud.is_open())
    {
        Solicitud << "Titulo;Descripcion;Titular;Destinatario;Dia;Mes;Año;Estado" << endl;
        int S = 0;
        while (S < D)
        {
            if (Soli[S].Titulo != "")
            {
                Solicitud << Soli[S].Titulo << ";";
                Solicitud << Soli[S].Descripcion << ";";
                Solicitud << Soli[S].Titular << ";";
                Solicitud << Soli[S].Destinatario << ";";
                Solicitud << Soli[S].Fecha.Dia << ";";
                Solicitud << Soli[S].Fecha.Mes << ";";
                Solicitud << Soli[S].Fecha.Year << ";";
                Solicitud << Soli[S].Estado << endl;
            }
            S++;
        }
        Solicitud.close();
    }

    ofstream Magistral("Base de datos/Docentes/Clases Magistrales.csv");
    if (Magistral.is_open())
    {
        Magistral << "Profesor;Apellido;Cedula;Carrera;Clase;Dia;Mes;Year;Horas;Aula;Estudiantes;Precio;Autorizacion" << endl;
        for (int i = 0; i < D; i++)
        {
            if (Mag[i].Nombre_Clase != "")
            {
                Magistral << Mag[i].Nombre_Profesor << ";";
                Magistral << Mag[i].Apellido_Profesor << ";";
                Magistral << Mag[i].CI_Profesor << ";";
                Magistral << Mag[i].Carrera << ";";
                Magistral << Mag[i].Nombre_Clase << ";";
                Magistral << Mag[i].Fecha.Dia << ";";
                Magistral << Mag[i].Fecha.Mes << ";";
                Magistral << Mag[i].Fecha.Year << ";";
                Magistral << Mag[i].Horas << ";";
                Magistral << Mag[i].Aula << ";";
                Magistral << Mag[i].Cant_Estudiantes << ";";
                Magistral << Mag[i].Precio << ";";
                Magistral << Mag[i].Autorizacion << endl;
            }
        }
        Magistral.close();
    }

    ofstream Reporte("Base de datos/Docentes/Reportes.csv");
    if (Reporte.is_open())
    {
        Reporte << "Titulo;Descripcion;Titular;Problema;Dia;Mes;Year;Recibido" << endl;
        for (int i = 0; i < D; i++)
        {
            if (Rep[i].Titular != "")
            {
                Reporte << Rep[i].Titulo << ";";
                Reporte << Rep[i].Descripcion << ";";
                Reporte << Rep[i].Titular << ";";
                Reporte << Rep[i].Problema << ";";
                Reporte << Rep[i].Fecha.Dia << ";";
                Reporte << Rep[i].Fecha.Mes << ";";
                Reporte << Rep[i].Fecha.Year << ";";
                Reporte << Rep[i].Recibido << endl;
            }
        }
        Reporte.close();
    }

    ofstream Archivo_Plan("Base de datos/Docentes/Plan_Evaluacion.csv");
    if (Archivo_Plan.is_open())
    {
        Archivo_Plan << "Profesor;Cedula;Codigo;Materia;Dia;Mes;Year;Tema;Estrategia;Ponderacion;Firmado" << endl;
        for (int i = 0; i < D; i++)
        {
            if (Plan[i].Nombre_Materia != "")
            {
                Archivo_Plan << Plan[i].Nombre_Profesor << ";";
                Archivo_Plan << Plan[i].CI_Profesor << ";";
                Archivo_Plan << Plan[i].Codigo_Materia << ";";
                Archivo_Plan << Plan[i].Nombre_Materia << ";";
                Archivo_Plan << Plan[i].Fecha.Dia << ";";
                Archivo_Plan << Plan[i].Fecha.Mes << ";";
                Archivo_Plan << Plan[i].Fecha.Year << ";";
                Archivo_Plan << Plan[i].Tema << ";";
                Archivo_Plan << Plan[i].Estrategia << ";";
                Archivo_Plan << Plan[i].Ponderacion << ";";
                Archivo_Plan << Plan[i].Firmado << endl;
            }
        }
        Archivo_Plan.close();
    }

    ofstream ArchivoNov("Base de datos/Administrativos/Novedades.csv");
    if (ArchivoNov.is_open())
    {
        ArchivoNov << "Hecho;Dia;Mes;Year;Responsables;Contexto;Lugar" << endl;

        int I = 0;
        while (I < D)
        {
            if (Nov[I].Hecho != "")
            {
                ArchivoNov << Nov[I].Hecho << ";";
                ArchivoNov << Nov[I].Fecha.Dia << ";";
                ArchivoNov << Nov[I].Fecha.Mes << ";";
                ArchivoNov << Nov[I].Fecha.Year << ";";
                ArchivoNov << Nov[I].Responsables << ";";
                ArchivoNov << Nov[I].Contexto << ";";
                ArchivoNov << Nov[I].Lugar << endl;
            }
            I++;
        }
        ArchivoNov.close();
    }

}