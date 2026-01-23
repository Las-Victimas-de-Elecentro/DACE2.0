#include "../../Main/Header.h"
using namespace std;

float Notas ()
{
    int I, Nota;
    string Nota_S;
    bool Nota_Valid;

    cin >> Nota_S;
    do {
        Nota_Valid = true;

        for (I = 0 ; I < Nota_S.length() ; I++)
        {
            if (!isdigit (Nota_S[I]))
            {
                Nota_Valid  = false;
            }
        }

        if (Nota_Valid == true)
        {
            Nota = stoi(Nota_S);
            if (Nota < 1 || Nota > 100)
            {
                Nota_Valid = false;
            }
        }

        if (Nota_Valid == false)
        {
            cout << RED << "Nota invalida solo numeros entre 1-100" << RESET << endl;
            cout << "Ingrese nuevamente: ";
            cin >> Nota_S;
        }

    } while (Nota_Valid == false);

    return Nota;
}