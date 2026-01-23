#include "../../Main/Header.h"
using namespace std;

string Parroquia_User ()
{
    int I;
    string Parroquia;
    bool P_Valido, Letra_Parroquia;

    getline(cin >> ws, Parroquia);
    do {
        P_Valido = true;
        Letra_Parroquia = true;

        for (I = 0 ; I < Parroquia.length() ; I++)
        {
            if (!isalpha (Parroquia[I]))
            {
                Letra_Parroquia = false;
            }
        }

        if (Parroquia.length() < 3)
        {
            cout << RED << "Parroquia invalido" << RESET << endl;
            P_Valido = false;
        }
        else if (Letra_Parroquia == false)
        {
            cout << RED << "Los Parroquias no pueden tener numeros o simbolos" << RESET << endl;
            P_Valido = false;
        }

        if (P_Valido == false)
        {
            cout << "Ingrese nuevamente: ";
            getline(cin >> ws, Parroquia);
        }

    } while (P_Valido == false);

    return Parroquia;
}