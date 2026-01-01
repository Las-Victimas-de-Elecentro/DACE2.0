#include "../../Main/Header.h"
using namespace std;

long Cedula_User ()
{
    int I;
    string Cedula_S;
    long Cedula;
    bool CI_Valido, Letra_Cedula, Espacio_Cedula;

    getline(cin >> ws, Cedula_S);
    do {
        CI_Valido = true;
        Espacio_Cedula = true;
        Letra_Cedula = true;

        for (I = 0 ; I < Cedula_S.length() ; I++)
        {
            if (isspace (Cedula_S[I]))
            {
                Espacio_Cedula = false;
            }
            else if (!isdigit (Cedula_S[I]))
            {
                Letra_Cedula = false;
            }
        }

        if (Cedula_S.length() < 7 || Cedula_S.length() > 8)
        {
            cout << RED << "Cedula invalida" << RESET << endl;
            CI_Valido = false;
        }
        else if (Espacio_Cedula == false)
        {
            cout << RED << "Las Cedulas no pueden llevar espacios" << RESET << endl;
            CI_Valido = false;
        }
        else if (Letra_Cedula == false)
        {
            cout << RED << "Las Cedulas no pueden llevar letras" << RESET << endl;
            CI_Valido = false;
        }
        
        if (CI_Valido == true)
        {
            Cedula = stol(Cedula_S);

            if (Cedula < 10000000)
            {
                cout << RED << "Cedula invalida" << RESET << endl;
                CI_Valido = false;
            }
        }

        if (CI_Valido == false)
        {
            cout << "Ingrese nuevamente: ";
            getline(cin >> ws, Cedula_S);
        }

    } while (CI_Valido == false);

    return Cedula;
}