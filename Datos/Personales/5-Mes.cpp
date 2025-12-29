#include "../../Main/Header.h"
using namespace std;

int Mes_User ()
{
    int I, Mes;
    string Mes_S;
    bool M_Valido, Letra_Mes, Espacio_Mes;

    getline(cin >> ws, Mes_S);
    do {
        M_Valido = true;
        Espacio_Mes = true;
        Letra_Mes = true;

        for (I = 0 ; I < Mes_S.length() ; I++)
        {
            if (isspace (Mes_S[I]))
            {
                Espacio_Mes = false;
            }
            else if (!isdigit (Mes_S[I]))
            {
                Letra_Mes = false;
            }
        }

        if (Espacio_Mes == false)
        {
            cout << "Los meses no llevan espacios" << endl;
            M_Valido = false;
        }
        else if (Letra_Mes == false)
        {
            cout << "Los meses no llevan numeros o simbolos" << endl;
            M_Valido = false;
        }

        if (M_Valido == true)
        {
            Mes = stoi(Mes_S);
            
            if (Mes < 1 || Mes > 12)
            {
                cout << "Mes invalido" << endl;
                M_Valido = false;
            }
        }

        if (M_Valido == false)
        {
            cout << "Ingrese nuevamente: ";
            getline(cin >> ws, Mes_S);
        }

    } while (M_Valido == false);

    return Mes;
}