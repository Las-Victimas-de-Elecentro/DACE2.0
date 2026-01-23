#include "../../Main/Header.h"
using namespace std;

int Horas_Academic ()
{
    int I, Hora;
    string Hora_S;
    bool Hora_Valid;

    cin >> Hora_S;
    do {
        Hora_Valid = true;

        for (I = 0 ; I < Hora_S.length() ; I++)
        {
            if (!isdigit (Hora_S[I]))
            {
                Hora_Valid  = false;
            }
        }

        if (Hora_Valid == true)
        {
            Hora = stoi(Hora_S);

            if (Hora < 1 || Hora > 24)
            {
                Hora_Valid  = false;
            }
        }

        if (Hora_Valid == false)
        {
            cout << RED << "Dato invalido" << RESET << endl;
            cout << "Ingrese nuevamente: ";
            cin >> Hora_S;
        }

    } while (Hora_Valid == false);

    return Hora;
}