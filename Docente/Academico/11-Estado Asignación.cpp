#include "../../Main/Header.h"
using namespace std;

void Estado_Asignacion (Variables (&Var), Estudiante (&Est)[D], Plan_Evaluacion (&Plan)[D], Reportes (&Rep)[D], Asignacion (&Asig)[D], Clase_Magistral (&Mag)[D], Solicitudes (&Soli)[D], Grupos (&Gru)[D], Clase (&Class)[D], Materias (&Mat)[527], Profesor (&Prof)[D], Administrativo (&Admin)[D])
{
    int& N = Var.N;
    int& Opc_F = Var.Opc_F;

    int I, Opc = 1, ID, P, Cont = -1; 
    int Aux[D];
    bool R, Valid = 0;

    Limpiar();
    Dibujo = "Notebook"; Art();

    cout << "¿Que desea hacer con sus asignaciones? Ingrese: 1: Publicar / 0: Cerrar : ";
    R = Opc_Bool();

    cout << CYAN << "Asignaciones" << RESET << endl;

    if (R == 1)
    {
        for (int I = 0 ; I < D ; I++)
        {
            if (Prof[N].Nombre == Asig[I].Nombre_Profesor)
            {
                Aux[Opc] = I;
                cout << Opc << ": "<< "Titulo: " << Asig[I].Titulo << " | Estado: " << Asig[I].Estado << " | Materia: " << Asig[I].Codigo_Materia << endl;
                Opc++;
                Cont++;
            }
        }
    }
    else
    {
        for (int I = 0 ; I < D ; I++)
        {
            if (Prof[N].Nombre == Asig[I].Nombre_Profesor && Asig[I].Estado == "Publicada")
            {
                Aux[Opc] = I;
                cout << Opc << ": "<< "Titulo: " << Asig[I].Titulo << " | Estado: " << Asig[I].Estado << " | Materia: " << Asig[I].Codigo_Materia << endl;
                Opc++;
                Cont++;
            }
        }
    }

    if (Cont != -1)
    {
        Valid = 1;
    }
    else
    {
        cout << RED << (R == 1 ? "No hay asignaciones para publicar" : "No hay asignaciones para cerrar") << RESET << endl;
        Continue();
        return;
    }

    if (Valid == 1)
    {
        Opc_F = Opc - 1;
        cout << (R == 1 ? "Ingrese la asignación a publicar: " : "Ingrese la asignación a cerrar: ");
        ID = Opc_Menu(Opc_F);

        P = Aux[ID];

        Limpiar();
        Dibujo = "Notebook"; Art();

        if (R == 1)
        {
            Asig[P].Estado = "Publicada";
            cout << GREEN << "Asignación publicada con exito" << RESET << endl;
            Continue();
        }
        else
        {
            Asig[P].Estado = "Cerrada";
            cout << RED << "Asignación cerrada. Se detienen entregas" << RESET << endl;
            Guardar_Academic(Var, Est, Plan, Rep, Asig, Mag, Soli, Gru, Class, Mat, Prof, Admin);
            Continue();
        }
    }
}