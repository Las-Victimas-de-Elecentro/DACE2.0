#include "../../Main/Header.h"
using namespace std;

void Salud_Global_Personal (Usuario (&User)[500], int &N, int Opc_F)
{
    int Opc;
    bool R;
    Limpiar();
    do {
        Limpiar();
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
                Enfermedades_Global_Personal(User, N, Opc_F);
                break;
            case 2:
                Ver_Enfermedades_Global_Personal(User, N);
                break;
        }
    } while (Opc != 3);
}