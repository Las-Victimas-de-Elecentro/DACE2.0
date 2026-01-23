#include "../../Main/Header.h"
using namespace std;

void Salud_Global_Personal (Variables (&Var), Estudiante (&Est)[D], Profesor (&Prof)[D], Administrativo (&Admin)[D])
{
    int& N = Var.N;
    int& Opc_F = Var.Opc_F;

    int Opc;
    Limpiar();
    do {
        Limpiar();
        Dibujo = "Healt"; Art();
        Opc_F = 3;
        cout << "Gestión de Salud" << endl;
        cout << "Aquí puedes añadir y consultar las enfermedades que padeces" << endl;
        cout << "1: Añadir enfermedad" << endl;
        cout << "2: Ver enfermedades" << endl ;
        cout << "3: Salir" << endl;
        cout << "Ingrese: ";
        Opc = Opc_Menu(Opc_F);
        
        switch (Opc)
        {
            case 1:
                Enfermedades_Global_Personal(Var, Est, Prof, Admin);
                break;
            case 2:
                Ver_Enfermedades_Global_Personal(Var, Est, Prof, Admin);
                break;
        }
    } while (Opc != 3);
}