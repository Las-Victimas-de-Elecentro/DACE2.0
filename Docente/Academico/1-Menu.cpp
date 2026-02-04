#include "../../Main/Header.h"
using namespace std;

void Menu_Prof_Academic (Variables (&Var), Estudiante (&Est)[D], Plan_Evaluacion (&Plan)[D], Reportes (&Rep)[D], Asignacion (&Asig)[D], Clase_Magistral (&Mag)[D], Solicitudes (&Soli)[D], Grupos (&Gru)[D], Clase (&Class)[D], Bloque_Horario (&List)[48], Materias (&Mat)[527], Profesor (&Prof)[D], Administrativo (&Admin)[D])
{
    int& N = Var.N;
    int& Opc_F = Var.Opc_F;
    int Opc;

    Limpiar();

    do {
        Limpiar();
        Opc_F = 11;
        Avatares(Var, Est, Prof, Admin);
        cout << CYAN << "Bienvenido al sistema DACE - Sección Académica (Docente)" << RESET << endl;
        cout << "Seleccione una opción, Docente" << endl;
        cout << "1: Registrar Materias" << endl;
        cout << "2: Asignar Horario" << endl;
        cout << "3: Ver Mi Horario" << endl;
        cout << "4: Registrar Solicitud" << endl;
        cout << "5: Registrar Reporte" << endl;
        cout << "6: Asignaciones" << endl;
        cout << "7: Clases Magistrales" << endl;
        cout << "8: Plan de Evaluación" << endl;
        cout << "9: Cargar notas en el sistema" << endl;
        cout << "10: Historial Docente" << endl;
        cout << "11: Salir" << endl;
        cout << "Ingrese una opción: ";
        Opc = Opc_Menu(Opc_F);

        switch (Opc)
        {
            case 1:
                Agregar_Materia (Var, Est, Plan, Mat, Prof, Admin);
                break;
            case 2:
                Asignar_Horario (Var, Est, Plan, Rep, Asig, Mag, Soli, Gru, Class, List, Mat, Prof, Admin);
                break;
            case 3:
                Limpiar();
                Dibujo = "Academic"; Art();
                Listar_Horario (Var, Class, Prof);
                break;
            case 4:
                Registrar_Solicitud (Var, Est, Plan, Rep, Asig, Mag, Soli, Gru, Class, Mat, Prof, Admin);
                break;
            case 5:
                Registrar_Reporte (Var, Est, Plan, Rep, Asig, Mag, Soli, Gru, Class, Mat, Prof, Admin);
                break;
            case 6:
                Asignaciones_Prof (Var, Est, Plan, Rep, Asig, Mag, Soli, Gru, Class, Mat, Prof, Admin);
                break;
            case 7:
                Magistrales_Prof (Var, Est, Plan, Rep, Asig, Mag, Soli, Gru, Class, Mat, Prof, Admin);
                break;
            case 8:
                Plan_Evaluacion_Prof (Var, Est, Plan, Rep, Asig, Mag, Soli, Gru, Class, Mat, Prof, Admin);
                break;
            case 9:
                Cargar_Notas (Var, Est, Plan, Rep, Asig, Mag, Soli, Gru, Class, Mat, Prof, Admin);
                break;
            case 10:
                Historial_Labor_Docente (Var, Class, Prof);
                break;
        }

    } while (Opc != 11);
}