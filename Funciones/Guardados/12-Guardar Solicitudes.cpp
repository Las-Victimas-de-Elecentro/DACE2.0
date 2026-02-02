#include "../../Main/Header.h"
using namespace std;

void Guardar_Solicitudes (Empleado (&Emp)[D], Inscrito (&Ins)[D])
{
    ifstream Verificar_E("Base de datos/Solicitudes/Empleados.csv");
    bool Vacio_E = (Verificar_E.peek() == ifstream::traits_type::eof());
    Verificar_E.close();

    ofstream ArchivoEmp("Base de datos/Solicitudes/Empleados.csv", ios::app);
    if (ArchivoEmp.is_open())
    {
        if (Vacio_E == true)
        {
            ArchivoEmp << "Nombre;Apellido;Cedula;Dia;Mes;Year;Correo;Experiencia;Descripcion;";
            for (int i = 0; i < 20; i++)
            {
                ArchivoEmp << "Titulo" << i + 1 << ";";
            }
            ArchivoEmp << "Aprobado;Trabajando" << endl;
        }

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

    ifstream Verificar_I("Base de datos/Solicitudes/Inscritos.csv");
    bool Vacio_I = (Verificar_I.peek() == ifstream::traits_type::eof());
    Verificar_I.close();

    ofstream ArchivoIns("Base de datos/Solicitudes/Inscritos.csv", ios::app);
    if (ArchivoIns.is_open())
    {
        if (Vacio_I == true)
        {
            ArchivoIns << "Nombre;Apellido;Cedula;Dia;Mes;Year;Correo;Carrera;Semestre;YearEstudio;Aprobado;Estudiando" << endl;
        }

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