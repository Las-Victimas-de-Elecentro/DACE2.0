#include "../../Main/Header.h"
using namespace std;

bool Opc_Bool ()
{
    string Opc_S;
    int I, Opc_N;
    bool Opc, Opc_Valido;

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
            Opc_N = stoi(Opc_S);

            if (Opc_N != 0 && Opc_N != 1)
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
        else
        {
            if (Opc_N == 1)
            {
                Opc = 1;
            }
            else
            {
                Opc = 0;
            }
        }
    } while (Opc_Valido == false);

    return Opc;
}