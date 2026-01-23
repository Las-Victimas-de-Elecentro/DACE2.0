#include "../../Main/Header.h"
using namespace std;

string Codigo_Academic()
{
    int I;
    string Codigo;
    bool C_Valido, Alfanumerico;

    getline(cin >> ws, Codigo);
    do {
        C_Valido = true;
        Alfanumerico = true;

        for (I = 0; I < Codigo.length(); I++)
        {
            unsigned char C = Codigo[I];

            if (isalnum(C) == false)
            {
                Alfanumerico = false;
                break;
            }
        }

        if (Codigo.length() < 3)
        {
            cout << RED << "Codigo invalido" << RESET << endl;
            C_Valido = false;
        }
        else if (Alfanumerico == false)
        {
            cout << RED << "Los Codigos no pueden llevar numeros" << RESET << endl;
            C_Valido = false;
        }

        if (C_Valido == false)
        {
            cout << "Ingrese nuevamente: ";
            getline(cin >> ws, Codigo);
        }

    } while (C_Valido == false);

    return Codigo;
}