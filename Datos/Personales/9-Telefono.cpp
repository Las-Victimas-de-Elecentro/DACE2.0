#include "../../Main/Header.h"
using namespace std;

long long Telefono_User ()
{
    int I;
    string Telefono_S;
    long long Telefono;
    bool Telefono_Valido, Letra_Telefono, Espacio_Telefono;

    getline(cin >> ws, Telefono_S);
    do {
        Telefono_Valido = true;
        Espacio_Telefono = true;
        Letra_Telefono = true;

        for (I = 0 ; I < Telefono_S.length() ; I++)
        {
            if (isspace (Telefono_S[I]))
            {
                Espacio_Telefono = false;
            }
            else if (!isdigit (Telefono_S[I]))
            {
                Letra_Telefono = false;
            }
        }

        if (Telefono_S.length() < 10 || Telefono_S.length() > 11)
        {
            cout << RED << "Numero Invalido" << RESET << endl;
            Telefono_Valido = false;
        }
        else if (Espacio_Telefono == false)
        {
            cout << RED << "Las Numeros no pueden llevar espacios" << RESET << endl;
            Telefono_Valido = false;
        }
        else if (Letra_Telefono == false)
        {
            cout << RED << "Las Numeros no pueden llevar letras" << RESET << endl;
            Telefono_Valido = false;
        }
        
        if (Telefono_Valido == true)
        {
            Telefono = stoll(Telefono_S);

            if (Telefono < 4120000000LL || Telefono > 4269999999LL)
            {
                cout << RED << "Numero Invalido" << RESET << endl;
                Telefono_Valido = false;
            }
        }

        if (Telefono_Valido == false)
        {
            cout << "Ingrese nuevamente: ";
            getline(cin >> ws, Telefono_S);
        }

    } while (Telefono_Valido == false);

    return Telefono;
}