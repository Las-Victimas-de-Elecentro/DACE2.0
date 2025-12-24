#include <iostream>
#include <string>
#include "../Cabeceras/Modulos.h"
#include "../Cabeceras/Registros.h"
using namespace std;

void Inicio (Usuario (&User)[500], int &N)
{
    int I, Opc;
    string Opc_S;
    bool Opc_Valido;

    do {
        cout << "Bienvenido seleccione una opción" << endl;
        cout << "1: Ver Perfil" << endl;
        cout << "2: Cerrar Sesión" << endl;
        cout << "Ingrese una opción: ";
        getline(cin >> ws, Opc_S);
        do {
            Opc_Valido = true;

            if (Opc_S.length() < 1)
            {
                cout << "Opción invalida" << endl;
                Opc_Valido  = false;
            }
            
            if (Opc_Valido == true)
            {
                if (isalpha (Opc_S[0]))
                {
                    cout << "Opción invalida" << endl;
                    Opc_Valido  = false;
                }
            }

            if (Opc_Valido == true)
            {
                Opc = stoi(Opc_S);

                if (Opc < 1 || Opc > 2)
                {
                    cout << "Opción invalida" << endl;
                    Opc_Valido  = false;
                }
            }

            if (Opc_Valido == false)
            {
                cout << "Ingrese nuevamente: ";
                getline(cin >> ws, Opc_S);
            }

        } while (Opc_Valido == false);

        switch (Opc)
        {
            case 1:
                Perfil (User, N);
            default:
                cout << "Cerrando Sesión" << endl;
        }

    } while (Opc != 2);
}