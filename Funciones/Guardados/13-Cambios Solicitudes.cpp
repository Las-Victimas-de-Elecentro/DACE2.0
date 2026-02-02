#include "../../Main/Header.h"
using namespace std;

void Cambio_Solicitudes (Empleado (&Emp)[D], Inscrito (&Ins)[D])
{

    ofstream ArchivoEmp("Base de datos/Solicitudes/Empleados.csv");
    if (ArchivoEmp.is_open())
    {
        ArchivoEmp << "Nombre;Apellido;Cedula;Dia;Mes;Year;Correo;Experiencia;Descripcion;";
        for (int I = 0; I < 20; I++) 
        {
            ArchivoEmp << "Titulo" << I + 1 << ";";
        }
        ArchivoEmp << "Aprobado;Trabajando" << endl;

        int E = 0;
        while (E < D)
        {
            if (Emp[E].Nombre != "")
            {
                ArchivoEmp << Emp[E].Nombre << ";";
                ArchivoEmp << Emp[E].Apellido << ";";
                ArchivoEmp << Emp[E].Cedula << ";";
                ArchivoEmp << Emp[E].Fecha.Dia << ";";
                ArchivoEmp << Emp[E].Fecha.Mes << ";";
                ArchivoEmp << Emp[E].Fecha.Year << ";";
                ArchivoEmp << Emp[E].Correo << ";";
                ArchivoEmp << Emp[E].Experiencia << ";";
                ArchivoEmp << Emp[E].Descripcion << ";";
                
                for (int i = 0; i < 20; i++)
                {
                    ArchivoEmp << Emp[E].Titulo[i] << ";";
                }
                
                ArchivoEmp << Emp[E].Aprobado << ";";
                ArchivoEmp << Emp[E].Trabajando << endl;
            }
            E++;
        }
        ArchivoEmp.close();
    }

    ofstream ArchivoIns("Base de datos/Solicitudes/Inscritos.csv");
    if (ArchivoIns.is_open())
    {
        ArchivoIns << "Nombre;Apellido;Cedula;Dia;Mes;Year;Correo;Carrera;Semestre;YearEstudio;Aprobado;Estudiando" << endl;

        int I = 0;
        while (I < D)
        {
            if (Ins[I].Nombre != "")
            {
                ArchivoIns << Ins[I].Nombre << ";";
                ArchivoIns << Ins[I].Apellido << ";";
                ArchivoIns << Ins[I].Cedula << ";";
                ArchivoIns << Ins[I].Fecha.Dia << ";";
                ArchivoIns << Ins[I].Fecha.Mes << ";";
                ArchivoIns << Ins[I].Fecha.Year << ";";
                ArchivoIns << Ins[I].Correo << ";";
                ArchivoIns << Ins[I].Carrera << ";";
                ArchivoIns << Ins[I].Semestre << ";";
                ArchivoIns << Ins[I].Year << ";";
                ArchivoIns << Ins[I].Aprobado << ";";
                ArchivoIns << Ins[I].Estudiando << endl;
            }
            I++;
        }
        ArchivoIns.close();
    }

}