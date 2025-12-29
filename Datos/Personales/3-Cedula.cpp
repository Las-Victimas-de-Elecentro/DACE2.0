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
            cout << "Cedula invalida" << endl;
            CI_Valido = false;
        }
        else if (Espacio_Cedula == false)
        {
            cout << "Las Cedulas no pueden llevar espacios" << endl;
            CI_Valido = false;
        }
        else if (Letra_Cedula == false)
        {
            cout << "Las Cedulas no pueden llevar letras" << endl;
            CI_Valido = false;
        }
        
        if (CI_Valido == true)
        {
            Cedula = stol(Cedula_S);

            if (Cedula < 10000000)
            {
                cout << "Cedula invalida" << endl;
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