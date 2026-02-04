#include "../../Main/Header.h"
using namespace std;

void Menu_Extra (Variables (&Var), Estudiante (&Est)[D], Profesor (&Prof)[D], Clubes (&Club)[D], Celebraciones (&Cel)[D], Eventos (&Even)[D])
{
    int& N = Var.N;
    int& Opc_F = Var.Opc_F;

    int Opc;
    Limpiar();
    do {
        Limpiar();
        Dibujo = "Extra"; Art();
        Opc_F = 4;
        cout << "Sistema Extracurricular" << endl;
        cout << "1: Ver Clubs" << endl;
        cout << "2: Ver Eventos" << endl;
        cout << "3: Ver Celebraciones" << endl;
        cout << "4: Salir" << endl;
        cout << "Ingrese: ";
        Opc = Opc_Menu(Opc_F);
        
        switch (Opc)
        {
            case 1:
                Inscripcion_Club (Var, Club, Est, Prof);
                break;
            case 2:
                Ver_Eventos (Var, Even);
                break;
            case 3:
                Ver_Celebraciones (Var, Cel);
                break;
        }
    } while (Opc != 4);
}