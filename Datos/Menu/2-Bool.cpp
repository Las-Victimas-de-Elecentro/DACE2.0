#include "../../Main/Header.h"
using namespace std;

bool Opc_Bool ()
{
    bool Opc;

    cin >> Opc;
    while (Opc != 0 && Opc != 1)
    {
        cout << "Opción invalida" << endl;
        cout << "Ingrese nuevamente: ";
        cin >> Opc;
    }

    return Opc;
}