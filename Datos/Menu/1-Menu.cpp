#include "../../Main/Header.h"
using namespace std;

int Opc_Menu (int Opc_F)
{
    int I, Opc;
    string Opc_S;
    bool Opc_Valido;

    getline(cin >> ws, Opc_S);
    do {
        Opc_Valido = true;

        for (I = 0 ; I < Opc_S.length() ; I++)
        {
            if (!isdigit (Opc_S[I]))
            {
                Opc_Valido  = false;
            }
        }

        if (Opc_Valido == true)
        {
            Opc = stoi(Opc_S);

            if (Opc < 1 || Opc > Opc_F)
            {
                Opc_Valido  = false;
            }
        }

        if (Opc_Valido == false)
        {
            cout << "Opción invalida" << endl;
            cout << "Ingrese nuevamente: ";
            getline(cin >> ws, Opc_S);
        }

    } while (Opc_Valido == false);

    return Opc;
}