#include "../../Main/Header.h"
using namespace std;

int Opc_ID (int Opc_F)
{
    int I, Opc;
    string Opc_S;
    bool Opc_Valido;

    cin >> Opc_S;
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

            if (Opc < 0 || Opc > Opc_F)
            {
                Opc_Valido  = false;
            }
        }

        if (Opc_Valido == false)
        {
            cout << RED << "Opción invalida" << RESET << endl;
            cout << "Ingrese nuevamente: ";
            cin >> Opc_S;
        }

    } while (Opc_Valido == false);

    return Opc;
}