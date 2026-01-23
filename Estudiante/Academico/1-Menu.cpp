#include "../../Main/Header.h"
using namespace std;

void Menu_Est_Academico (Variables (&Var), Estudiante (&Est)[D], Clase (&Class)[D], Clase_Magistral (&Mag)[D], Profesor (&Prof)[D], Administrativo (&Admin)[D], Asignacion (&Asig)[D], Materias (&Mat)[527], Plan_Evaluacion (&Plan)[D], Carnet (&Car)[D], Carnetizacion (&Carn)[D])
{
    int& N = Var.N;
    int& Opc_F = Var.Opc_F;
    int Opc;

    Limpiar();
    
    do {
        Limpiar();
        Opc_F = 12;
        Avatares(Var, Est, Prof, Admin);
        cout << "Bienvenido a la sección acádemica" << endl;
        cout << "¿Qué desea hacer?" << endl;
        cout << "1: Ver su Horario" << endl;
        cout << "2: Inscripciones" << endl;

        cout << "3: Asignaciones" << endl;
        cout << "4: Solicitudes" << endl;
        cout << "5: Reportes" << endl;
        
        cout << "6: Notas" << endl;
        cout << "7: Clases Magistrales" << endl;
        cout << "8: Planes de Evaluación" << endl;
        cout << "9: Carnetización" << endl;
        cout << "10: Pasantías" << endl;
        cout << "11: Servicio Comunitario" << endl;
        cout << "12: Salir" << endl;
        cout << "Ingrese una opción: ";
        Opc = Opc_Menu(Opc_F);

        switch (Opc)
        {
            case 1:
                Limpiar();
                Dibujo = "Academic"; Art();
                Ver_Horario (Var, Class, Est);
                break;
            case 2:
                Inscripciones (Var, Est, Class, Mag, Prof);
                break;
            case 3:
                Buscar_Asignacion (Var, Class, Est, Asig, Mat);
                break;
            case 7:
                Buscar_Magistrales (Var, Est, Class, Mag, Prof);
                break;
            case 8:
                Buscar_Plan (Var, Class, Est, Plan, Mat);
                break;
            case 9:
                Carnet_Est (Var, Est, Car, Carn);
        }

    } while (Opc != 12);
}