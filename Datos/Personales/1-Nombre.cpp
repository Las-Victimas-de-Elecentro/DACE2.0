#include "../../Main/Header.h"
using namespace std;

string Nombre_User ()
{
    int I;
    string Nombre;
    bool N_Valido, Letra_Nombre, Espacio_Nombre;

    getline (cin >> ws, Nombre);
    do {
        N_Valido = true;
        Espacio_Nombre = true;
        Letra_Nombre = true;

        for (I = 0 ; I < Nombre.length() ; I++)
        {
            if (isspace (Nombre[I]))
            {
                Espacio_Nombre = false;
            }
            else if (!isalpha (Nombre[I]))
            {
                Letra_Nombre = false;
            }
        }

        if (Nombre.length() < 3)
        {
            cout << RED << "Nombre invalido" << RESET << endl;
            N_Valido = false;
        }
        else if (Espacio_Nombre == false)
        {
            cout << RED << "Los Nombres no pueden llevar espacios" << RESET << endl;
            N_Valido = false;
        }
        else if (Letra_Nombre == false)
        {
            cout << RED << "Los Nombres no pueden llevar numeros o simbolos" << RESET << endl;
            N_Valido = false;
        }

        if (N_Valido == false)
        {
            cout << "Ingrese nuevamente: ";
            getline (cin >> ws, Nombre);
        }

    } while (N_Valido == false);

    return Nombre;
}