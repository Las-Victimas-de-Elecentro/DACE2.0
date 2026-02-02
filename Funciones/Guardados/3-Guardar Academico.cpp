#include "../../Main/Header.h"
using namespace std;

void Guardar_Academic (Variables (&Var), Estudiante (&Est)[D], Plan_Evaluacion (&Plan)[D], Reportes (&Rep)[D], Asignacion (&Asig)[D], Clase_Magistral (&Mag)[D], Solicitudes (&Soli)[D], Grupos (&Gru)[D], Clase (&Class)[D], Materias (&Mat)[527], Profesor (&Prof)[D], Administrativo (&Admin)[D])
{
    ofstream Clase("Base de datos/Docentes/Clases.csv");
    if (Clase.is_open())
    {
        Clase << "Nombre;Apellido;Cedula;Codigo;Materia;Periodo;Sección;Estudiantes;Estado;Dia1;Hora Inicio1;Hora Fin1;Aula1;Virtual1;Plataforma1;Dia2;Hora Inicio2;Hora Fin2;Aula2;Virtual2;Plataforma2" << endl;
        int C = 0;
        while (C < D)
        {
            if (Class[C].Nombre_Materia != "")
            {
                Clase << Class[C].Nombre_Profesor << ";";
                Clase << Class[C].Apellido_Profesor << ";";
                Clase << Class[C].CI_Profesor << ";";
                Clase << Class[C].Codigo_Materia << ";";
                Clase << Class[C].Nombre_Materia << ";";
                Clase << Class[C].Periodo << ";";
                Clase << Class[C].Seccion << ";";
                Clase << Class[C].Cant_Estudiantes << ";";
                Clase << Class[C].Estado << ";";
                Clase << Class[C].Class1.Dia << ";";
                Clase << Class[C].Class1.Hora_Inicio << ";";
                Clase << Class[C].Class1.Hora_Fin << ";";
                Clase << Class[C].Class1.Aula << ";";
                Clase << Class[C].Class1.Virtual << ";";
                Clase << Class[C].Class1.Plataforma << ";";
                Clase << Class[C].Class2.Dia << ";";
                Clase << Class[C].Class2.Hora_Inicio << ";";
                Clase << Class[C].Class2.Hora_Fin << ";";
                Clase << Class[C].Class2.Aula << ";";
                Clase << Class[C].Class2.Virtual << ";";
                Clase << Class[C].Class2.Plataforma << endl;
            }
            C++;
        }
        Clase.close();
    }

    ofstream Grupo("Base de datos/Docentes/Grupos.csv");
    if (Grupo.is_open())
    {
        Grupo << "Nombre;Apellido;Cedula;Codigo;Materia;Miembros;Seccion" << endl;
        
        int G = 0;
        while (G < D)
        {
            if (Gru[G].Materia != "")
            {
                Grupo << Gru[G].Nombre_Profesor << ";";
                Grupo << Gru[G].Apellido_Profesor << ";";
                Grupo << Gru[G].CI_Profesor << ";";
                Grupo << Gru[G].Codigo_Materia << ";";
                Grupo << Gru[G].Materia << ";";
                Grupo << Gru[G].Miembros << ";";
                Grupo << Gru[G].Seccion << endl;
            }
            G++;
        }
        Grupo.close();
    }

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

    ofstream Materia_Mag("Base de datos/Docentes/Magistrales.csv");
    if (Materia_Mag.is_open())
    {
        Materia_Mag << "Cedula;Nombre;Apellido;Clase;Cantidad" << endl;
        
        int M = 0;
        while (M < D)
        {
            if (Prof[M].Nombre != "")
            {
                Materia_Mag << Prof[M].Cedula << ";";
                Materia_Mag << Prof[M].Nombre << ";";
                Materia_Mag << Prof[M].Apellido << ";";
                Materia_Mag << Prof[M].Magistral << ";";
                Materia_Mag << Prof[M].Cant_Mag << endl;
            }
            M++;
        }
        Materia_Mag.close();
    }

    ofstream Asignacion("Base de datos/Docentes/Asignaciones.csv");
    if (Asignacion.is_open())
    {
        Asignacion << "Profesor;Materia;Codigo;Titulo;Descripcion;Pub_Dia;Pub_Mes;Pub_Year;Ent_Dia;Ent_Mes;Ent_Year;Estado" << endl;
        for (int i = 0; i < D; i++)
        {
            if (Asig[i].Titulo != "")
            {
                Asignacion << Asig[i].Nombre_Profesor << ";";
                Asignacion << Asig[i].Nombre_Materia << ";";
                Asignacion << Asig[i].Codigo_Materia << ";";
                Asignacion << Asig[i].Titulo << ";";
                Asignacion << Asig[i].Descripcion << ";";
                Asignacion << Asig[i].Fecha_Publicacion.Dia << ";";
                Asignacion << Asig[i].Fecha_Publicacion.Mes << ";";
                Asignacion << Asig[i].Fecha_Publicacion.Year << ";";
                Asignacion << Asig[i].Fecha_Entrega.Dia << ";";
                Asignacion << Asig[i].Fecha_Entrega.Mes << ";";
                Asignacion << Asig[i].Fecha_Entrega.Year << ";";
                Asignacion << Asig[i].Estado << endl;
            }
        }
        Asignacion.close();
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

}