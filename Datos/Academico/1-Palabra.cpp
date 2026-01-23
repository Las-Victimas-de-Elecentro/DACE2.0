#include "../../Main/Header.h"
using namespace std;

string Palabra()
{
    int I;
    string Palabra;
    bool P_Valido, Numero_Palabra;

    getline (cin >> ws, Palabra);
    do {
        P_Valido = true;
        Numero_Palabra = true;

        for (I = 0 ; I < Palabra.length() ; I++)
        {
            if (isdigit (Palabra[I]))
            {
                Numero_Palabra = false;
            }
        }

        if (Palabra.length() < 3)
        {
            cout << RED << "Dato invalido" << RESET << endl;
            P_Valido = false;
        }
        else if (Numero_Palabra == false)
        {
            cout << RED << "No puede llevar numeros o simbolos" << RESET << endl;
            P_Valido = false;
        }

        if (P_Valido == false)
        {
            cout << "Ingrese nuevamente: ";
            getline (cin >> ws, Palabra);
        }

    } while (P_Valido == false);

    return Palabra;
}