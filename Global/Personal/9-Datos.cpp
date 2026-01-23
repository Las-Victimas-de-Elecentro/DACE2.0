#include "../../Main/Header.h"
using namespace std;

void Datos_Global (Variables (&Var), Estudiante (&Est)[D], Profesor (&Prof)[D], Administrativo (&Admin)[D])
{
    int& Opc_F = Var.Opc_F;

    int Opc;
    do {
        Opc_F = 4;
        Limpiar();
        Dibujo = "User"; Art();
        cout << "Gestión de Información" << endl;
        cout << "Aquí puedes consultar o cambiar tu información personal" << endl;
        cout << "1: Ver información Personal" << endl;
        cout << "2: Agregar información Personal" << endl ;
        cout << "3: Modificar información Personal" << endl;
        cout << "4: Salir" << endl;
        cout << "Ingrese: ";
        Opc = Opc_Menu(Opc_F);

        switch(Opc)
        {
            case 1:
                Info_Global_Personal(Var, Est, Prof, Admin);
                break;
            case 2:
                Datos_Extras_Global(Var, Est, Prof, Admin);
                break;
            case 3:
                Modificar_Datos_Global(Var, Est, Prof, Admin);
        }
        
    } while (Opc != 4);
}