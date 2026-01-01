#include "../Main/Header.h"
using namespace std;

void Sesion (Usuario (&User)[500], int &N, int Opc_F, string Rol)
{
    string Correo, Password;
    int I;
    bool User_Valido;

    Limpiar();
    Dibujo = "Login"; Art();
    cout << "Ingrese su Correo: ";
    cin >> Correo;
    cout << "Ingrese su Contraseña: ";
    cin >> Password;
    do {
        for (I = 0 ; I < 500 ; I++)
        {
            if (User[I].Correo == Correo && User[I].Password == Password)
            {
                User_Valido = true;
                N = I;
            }
        }

        if (User_Valido == false)
        {
            Limpiar();
            Dibujo = "Login"; Art();
            cout << RED << "Correo o Contraseña incorrecta" << RESET << endl;
            cout << "Ingrese su Correo nuevamente: ";
            cin >> Correo;
            cout << "Ingrese su Contraseña nuevamente: ";
            cin >> Password;
        }
        else
        {
            cout << GREEN << "Inicio de Sesión exitoso" << RESET << endl;
        }

    } while (User_Valido == false);

    Menu_Est_Personal(User, N, Opc_F, Rol);
}