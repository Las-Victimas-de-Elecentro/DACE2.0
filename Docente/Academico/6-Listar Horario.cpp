#include "../../Main/Header.h"
using namespace std;

void Listar_Horario (Variables (&Var), Clase (&Class)[D], Profesor (&Prof)[D])
{
    int& N = Var.N;
    int I = 0, J = 0, Cont = -1;

    for (J = 0 ; J < D ; J++)
    {
        if (Class[J].Nombre_Profesor == Prof[N].Nombre)
        {
            Cont++;
        }
    }

    if (Prof[N].Cant_Mat != 0 && Cont != -1)
    {
        cout << CYAN << "Mi Horario Académico" << RESET << endl;
        cout << endl;

        for (I = 0 ; I < D ; I++)
        {
            if (Prof[N].Cedula == Class[I].CI_Profesor)
            {
                cout << CYAN << "Materia: " << Class[I].Nombre_Materia << " | Código: " << Class[I].Codigo_Materia << " | Periodo: " << Class[I].Periodo << " | Sección: " << Class[I].Seccion << " | Inscritos: " << Class[I].Cant_Estudiantes << RESET << endl;

                cout << Class[I].Class1.Dia << " " << Class[I].Class1.Hora_Inicio << "-" << Class[I].Class1.Hora_Fin << " | Aula: " << Class[I].Class1.Aula << endl;
                
                if (Class[I].Class2.Aula != 0)
                {

                    cout << Class[I].Class2.Dia << " " << Class[I].Class2.Hora_Inicio << "-" << Class[I].Class2.Hora_Fin << " | Aula: " << Class[I].Class2.Aula << endl;
                }
                cout << endl;
            }
        }

        Continue();
        return;
    }
    else
    {
        cout << RED << "Aún no tiene bloques asignados." << RESET << endl;
        Continue();
        return;
    }
}