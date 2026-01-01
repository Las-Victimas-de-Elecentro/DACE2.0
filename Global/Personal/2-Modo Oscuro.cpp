#include "../../Main/Header.h"
using namespace std;

void Oscuro_Global_Personal ()
{
    bool Opc;

    do {
        Limpiar();
        Dibujo = "Theme"; Art();
        cout << "Gestión de modo oscuro" << endl;
        cout << "Aquí puedes cambiar la apariencia visual" << endl;

        switch (Oscuro)
        {
            case 0:
                cout << "El Modo Oscuro está Activado. ¿Desea activar el Modo Claro? Ingrese 1:Sí / 0:No : ";
                Opc = Opc_Bool();
                if (Opc == 1)
                {
                    cout << GREEN << "Modo Claro activado" << RESET << endl;
                    Oscuro = 1;
                }
                break;
            default:
                cout << "El Modo Claro está Activado. ¿Desea activar el Modo Oscuro? Ingrese 1:Sí / 0:No) : ";
                Opc = Opc_Bool();
                if (Opc == 1)
                {
                    cout << GREEN << "Modo Oscuro activado" << RESET << endl;
                    Oscuro = 0;
                }
                break;
        }

    } while (Opc == 1);
}