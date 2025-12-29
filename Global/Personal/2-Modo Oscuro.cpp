#include "../../Main/Header.h"
using namespace std;

void Oscuro_Global_Personal (bool &Oscuro)
{
    bool Opc, R;

    Limpiar();

    cout << "Gestión de modo oscuro" << endl;
    cout << "Aquí puedes cambiar la apariencia visual" << endl;

    do {
        switch (Oscuro)
        {
            case 0:
                cout << "El Modo Claro está Activado. ¿Desea desactivarlo? Ingrese 1:Sí / 0:No : ";
                Opc = Opc_Bool();
                if (Opc == 1)
                {
                    cout << "Modo Oscuro activado" << endl;
                    Oscuro = 1;
                }
                break;
            default:
                cout << "El Modo Oscuro está Activado. ¿Desea activar el Modo Oscuro? Ingrese 1:Sí / 0:No) : ";
                Opc = Opc_Bool();
                if (Opc == 1)
                {
                    cout << "Modo Claro activado" << endl;
                    Oscuro = 0;
                }
                break;
        }

        cout << "¿Quiere cambiar de tema nuevamente? Ingrese 1:Sí / 0:No : ";
        R = Opc_Bool();
    } while (R == 1);
}