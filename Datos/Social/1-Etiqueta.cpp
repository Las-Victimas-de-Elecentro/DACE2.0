#include "../../Main/Header.h"
using namespace std;

string Etiqueta()
{
    int I;
    string Etiqueta;
    bool E_Valido;

    cin >> Etiqueta;
    do {
        E_Valido = true;

        if (Etiqueta.length() < 1)
        {
            cout << RED << "Dato invalido" << RESET << endl;
            E_Valido = false;
        }

        if (E_Valido == false)
        {
            cout << "Ingrese nuevamente: ";
            getline (cin >> ws, Etiqueta);
        }

    } while (E_Valido == false);

    return Etiqueta;
}