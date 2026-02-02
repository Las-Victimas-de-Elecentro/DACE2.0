#include "../../Main/Header.h"
using namespace std;

int Jornada_C ()
{
    int I, Jornada;
    string Jornada_S;
    bool Jornada_Valid;

    cin >> Jornada_S;
    do {
        Jornada_Valid = true;

        for (I = 0 ; I < Jornada_S.length() ; I++)
        {
            if (!isdigit (Jornada_S[I]))
            {
                Jornada_Valid  = false;
            }
        }

        if (Jornada_Valid == true)
        {
            Jornada = stoi(Jornada_S);
            
            if (Jornada < 1 || Jornada > 3)
            {
                Jornada_Valid = false;
            }
        }

        if (Jornada_Valid == false)
        {
            cout << RED << "Dato invalido" << RESET << endl;
            cout << "Ingrese nuevamente: ";
            cin >> Jornada_S;
        }

    } while (Jornada_Valid == false);

    return Jornada;
}