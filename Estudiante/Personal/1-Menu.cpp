#include "../../Main/Header.h"
using namespace std;

void Menu_Est_Personal (Usuario (&User)[500], int &N, int Opc_F, string Rol, bool &Oscuro)
{
    int I, Opc;
    string Opc_S;
    bool Opc_Valido;

    //Validación de opciones
    Opc_F = 7;

    do {
        Limpiar();
        
        cout << "Bienvenido a tu perfil personal de estudiante" << endl;
        cout << "Aqui puedes gestionar tu informacion, seguridad y preferencias" << endl;
        cout << "1: Información personal" << endl;
        cout << "2: Seguridad" << endl;
        cout << "3: Historial Académico" << endl;
        cout << "4: Modo Oscuro" << endl;
        cout << "5: Avatar" << endl;
        cout << "6: Salud" << endl;
        cout << "7: Salir" << endl;
        cout << "Ingrese una opción: ";
        Opc = Opc_Menu(Opc_F);

        switch (Opc)
        {
            case 1:
                Info_Est_Personal(User, N);
                break;
            case 2:
                Seguridad_Global_Personal (User, N, Opc_F, Rol);
                break;
            case 4:
                Oscuro_Global_Personal (Oscuro);
        }

    } while (Opc != 7);
}