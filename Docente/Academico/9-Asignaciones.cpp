#include "../../Main/Header.h"
using namespace std;

void Asignaciones_Prof (Variables (&Var), Estudiante (&Est)[D], Plan_Evaluacion (&Plan)[D], Reportes (&Rep)[D], Asignacion (&Asig)[D], Clase_Magistral (&Mag)[D], Solicitudes (&Soli)[D], Grupos (&Gru)[D], Clase (&Class)[D], Materias (&Mat)[527], Profesor (&Prof)[D], Administrativo (&Admin)[D])
{
    int& N = Var.N;
    int& Opc_F = Var.Opc_F;

    int Opc;
    Limpiar();
    do {
        Limpiar();
        Dibujo = "Notebook"; Art();
        Opc_F = 4;
        cout << "Gestión de Asignaciones" << endl;
        cout << "Aquí puedes crear, publicar, cerrar y consultar tus asignaciones" << endl;
        cout << "1: Crear Asignación" << endl;
        cout << "2: Publicar/Cerrar Asignación" << endl ;
        cout << "3: Ver Asignaciones" << endl;
        cout << "4: Salir" << endl;
        cout << "Ingrese: ";
        Opc = Opc_Menu(Opc_F);
        
        switch (Opc)
        {
            case 1:
                Crear_Asignacion (Var, Est, Plan, Rep, Asig, Mag, Soli, Gru, Class, Mat, Prof, Admin);
                break;
            case 2:
                Estado_Asignacion (Var, Est, Plan, Rep, Asig, Mag, Soli, Gru, Class, Mat, Prof, Admin);
                break;
            case 3:
                Listar_Asignacion (Var, Asig, Prof);
                break;
        }
        
    } while (Opc != 4);
}