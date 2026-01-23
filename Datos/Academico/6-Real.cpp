#include "../../Main/Header.h"
using namespace std;

float Real ()
{
    float Real;
    int I;
    string Real_S;
    bool Real_Valid;

    cin >> Real_S;
    do {
        Real_Valid = true;

        for (I = 0 ; I < Real_S.length() ; I++)
        {
            if (!isdigit (Real_S[I]))
            {
                Real_Valid  = false;
            }
        }

        if (Real_Valid == false)
        {
            cout << RED << "Dato invalido" << RESET << endl;
            cout << "Ingrese nuevamente: ";
            cin >> Real_S;
        }
        else
        {
            Real = stof(Real_S);
        }

    } while (Real_Valid == false);

    return Real;
}