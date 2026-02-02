#include "../../Main/Header.h"
using namespace std;

int Entero ()
{
    int I, Entero;
    string Entero_S;
    bool Entero_Valid;

    cin >> Entero_S;
    do {
        Entero_Valid = true;

        for (I = 0 ; I < Entero_S.length() ; I++)
        {
            if (!isdigit (Entero_S[I]))
            {
                Entero_Valid  = false;
            }
        }

        if (Entero_Valid == true)
        {
            Entero = stoi(Entero_S);
            
            if (Entero < 1)
            {
                Entero_Valid = false;
            }
        }

        if (Entero_Valid == false)
        {
            cout << RED << "Dato invalido" << RESET << endl;
            cout << "Ingrese nuevamente: ";
            cin >> Entero_S;
        }

    } while (Entero_Valid == false);

    return Entero;
}