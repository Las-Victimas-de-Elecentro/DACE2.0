#include "../../Main/Header.h"
using namespace std;

void Listar_Asignacion (Variables (&Var), Asignacion (&Asig)[D], Profesor (&Prof)[D])
{
    int& N = Var.N;
    int I = 0, J = 0;
    int Cont = -1;
    
    for (J = 0 ; J < D ; J++)
    {
        if (Prof[N].Nombre == Asig[I].Nombre_Profesor)
        {
            Cont++;
        }
    }

    Limpiar();
    Dibujo = "Notebook"; Art();

    if (Cont != -1)
    {
        cout << CYAN << "Mis Asignaciones" << RESET << endl;
        cout << endl;

        for (I = 0 ; I < D ; I++)
        {
            if (Prof[N].Nombre == Asig[I].Nombre_Profesor)
            {
                cout << "Titulo: " << Asig[I].Titulo << " | Estado: " << Asig[I].Estado << " | Materia: " << Asig[I].Codigo_Materia << endl;
            }
        }

        cout << endl;
        Continue();
    }
    else
    {
        cout << RED << "Aún no tienes asignaciones" << RESET << endl;
        Continue();
    }
    return;
}