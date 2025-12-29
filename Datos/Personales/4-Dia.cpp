#include "../../Main/Header.h"
using namespace std;

int Dia_User ()
{
    int I, Dia;
    string Dia_S;
    bool D_Valido, Letra_Dia, Espacio_Dia;

    getline(cin >> ws, Dia_S);
    do {
        D_Valido = true;
        Espacio_Dia = true;
        Letra_Dia = true;

        for (I = 0 ; I < Dia_S.length() ; I++)
        {
            if (isspace (Dia_S[I]))
            {
                Espacio_Dia = false;
            }
            else if (!isdigit (Dia_S[I]))
            {
                Letra_Dia = false;
            }
        }

        if (Espacio_Dia == false)
        {
            cout << "Los días no llevan espacios" << endl;
            D_Valido = false;
        }
        else if (Letra_Dia == false)
        {
            cout << "Los días no llevan numeros o simbolos" << endl;
            D_Valido = false;
        }

        if (D_Valido == true)
        {
            Dia = stoi(Dia_S);
            
            if (Dia < 1 || Dia > 31)
            {
                cout << "Dia invalido" << endl;
                D_Valido = false;
            }
        }

        if (D_Valido == false)
        {
            cout << "Ingrese nuevamente: ";
            getline(cin >> ws, Dia_S);
        }

    } while (D_Valido == false);

    return Dia;
}