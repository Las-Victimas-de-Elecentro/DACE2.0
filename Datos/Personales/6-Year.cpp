#include "../../Main/Header.h"
using namespace std;

int Year_User ()
{
    int I, Year;
    string Year_S;
    bool Y_Valido, Letra_Year, Espacio_Year;

    getline(cin >> ws, Year_S);
    do {
        Y_Valido = true;
        Espacio_Year = true;
        Letra_Year = true;

        for (I = 0 ; I < Year_S.length() ; I++)
        {
            if (isspace (Year_S[I]))
            {
                Espacio_Year = false;
            }
            else if (!isdigit (Year_S[I]))
            {
                Letra_Year = false;
            }
        }

        if (Espacio_Year == false)
        {
            cout << "Los Años no llevan espacios" << endl;
            Y_Valido = false;
        }
        else if (Letra_Year == false)
        {
            cout << "Los Años no llevan numeros o simbolos" << endl;
            Y_Valido = false;
        }

        if (Y_Valido == true)
        {
            Year = stoi(Year_S);
            
            if (Year < 1900 || Year > 2026)
            {
                cout << "Año invalido" << endl;
                Y_Valido = false;
            }
        }

        if (Y_Valido == false)
        {
            cout << "Ingrese nuevamente: ";
            getline(cin >> ws, Year_S);
        }

    } while (Y_Valido == false);

    return Year;
}