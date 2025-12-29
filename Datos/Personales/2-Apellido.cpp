#include "../../Main/Header.h"
using namespace std;

string Apellido_User ()
{
    int I;
    string Apellido;
    bool A_Valido, Letra_Apellido, Espacio_Apellido;

    getline(cin >> ws, Apellido);
    do {
        A_Valido = true;
        Espacio_Apellido = true;
        Letra_Apellido = true;

        for (I = 0 ; I < Apellido.length() ; I++)
        {
            if (isspace (Apellido[I]))
            {
                Espacio_Apellido = false;
            }
            else if (!isalpha (Apellido[I]))
            {
                Letra_Apellido = false;
            }
        }

        if (Apellido.length() < 3)
        {
            cout << "Apellido invalido" << endl;
            A_Valido = false;
        }
        else if (Espacio_Apellido == false)
        {
            cout << "Los Apellidos no pueden tener espacios" << endl;
            A_Valido = false;
        }
        else if (Letra_Apellido == false)
        {
            cout << "Los Apellidos no pueden tener numeros o simbolos" << endl;
            A_Valido = false;
        }

        if (A_Valido == false)
        {
            cout << "Ingrese nuevamente: ";
            getline(cin >> ws, Apellido);
        }

    } while (A_Valido == false);

    return Apellido;
}