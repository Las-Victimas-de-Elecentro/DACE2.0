#include "../../Main/Header.h"
using namespace std;

string Contenido()
{
    int I;
    string Contenido;
    bool C_Valido;

    getline (cin >> ws, Contenido);
    do {
        C_Valido = true;

        if (Contenido.length() < 1)
        {
            cout << RED << "Dato invalido" << RESET << endl;
            C_Valido = false;
        }

        if (C_Valido == false)
        {
            cout << "Ingrese nuevamente: ";
            getline (cin >> ws, Contenido);
        }

    } while (C_Valido == false);

    return Contenido;
}