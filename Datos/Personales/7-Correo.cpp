#include "../../Main/Header.h"
using namespace std;

string Correo_User ()
{
    int I, Cont;
    string Correo;
    bool Punto, C_Valido, Espacio_Correo;


    getline (cin >> ws, Correo);
    do {
        Cont = 0;
        Punto = false;
        C_Valido = true;
        Espacio_Correo = true;

        for (I = 0 ; I < Correo.length() ; I++)
        {
            if (isspace (Correo[I]))
            {
                Espacio_Correo = false;
            }
            else if (Correo[I] == '@')
            {
                Cont = Cont + 1;
            }
            else if (Cont == 1 && Correo[I] == '.')
            {
                Punto = true;
            }
        }

        if (Correo.length() < 3)
        {
            cout << RED << "El Correo es muy corto" << RESET << endl;
            C_Valido = false;
        }
        else if (Espacio_Correo == false)
        {
            cout << RED << "El Correo no puede llevar espacios" << RESET << endl;
            C_Valido = false;
        }
        else if (Cont != 1)
        {
            cout << RED << "El Correo solo puede llevar un @" << RESET << endl;
            C_Valido = false;
        }
        else if (Correo[0] == '@' || Correo[Correo.length() - 1] == '@')
        {
            cout << RED << "El Correo no puede llevar un @ al inicio o final del Correo" << RESET << endl;
            C_Valido = false;

        }
        else if (Punto == false)
        {
            cout << RED << "El Correo debe contener un punto despues del @" << RESET << endl;
            C_Valido = false;
        }

        if (C_Valido == false)
        {
            cout << "ingrese nuevamente: ";
            getline (cin >> ws, Correo);
        }

    } while (C_Valido == false);

    return Correo;
}