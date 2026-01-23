#include "../../Main/Header.h"
using namespace std;

void Ver_Horario (Variables (&Var), Clase (&Class)[D], Estudiante (&Est)[D])
{
    int& N = Var.N;
    int I = 0, J = 0, Cont = 0;

    for (I = 0 ; I < D ; I++)
    {
        for (J = 0 ; J < D ; J++)
        {
            if (Est[N].Cedula == Class[I].Est_Class.Cedula[J])
            {
                Cont++;
            }
        }
    }

    if (Est[N].Cant_Mat != 0 && Cont != 0)
    {
        cout << CYAN << "Mi Horario Académico" << RESET << endl;
        cout << endl;

        for (I = 0 ; I < D ; I++)
        {
            for (J = 0 ; J < D ; J++)
            {
                if (Est[N].Cedula == Class[I].Est_Class.Cedula[J])
                {
                    cout << CYAN << "Materia: " << Class[I].Nombre_Materia << " | Código: " << Class[I].Codigo_Materia << " | Sección: " << Class[I].Seccion << RESET << endl;

                    if (Class[I].Class1.Virtual == true)
                    {
                        cout << Class[I].Class1.Dia << " " << Class[I].Class1.Hora_Inicio << "-" << Class[I].Class1.Hora_Fin << " | Virtual: " << Class[I].Class1.Plataforma << endl;
                    }
                    else
                    {
                        cout << Class[I].Class1.Dia << " " << Class[I].Class1.Hora_Inicio << "-" << Class[I].Class1.Hora_Fin << " | Aula: " << Class[I].Class1.Aula << endl;
                    }

                    if (Class[I].Class2.Virtual == true)
                    {
                        cout << Class[I].Class2.Dia << " " << Class[I].Class2.Hora_Inicio << "-" << Class[I].Class2.Hora_Fin << " | Virtual: " << Class[I].Class2.Plataforma << endl;
                    }
                    else
                    {
                        cout << Class[I].Class2.Dia << " " << Class[I].Class2.Hora_Inicio << "-" << Class[I].Class2.Hora_Fin << " | Aula: " << Class[I].Class2.Aula << endl;
                    }
                }
            }
        }

        cout << endl;
        Continue();
        return;
    }
    else
    {
        cout << RED << "No se encontraron materias" << RESET << endl;
        Continue();
        return;
    }
}