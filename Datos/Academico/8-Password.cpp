#include "../../Main/Header.h"
using namespace std;

void Password_Academic (Variables (&Var), Estudiante (&Est)[D], Profesor (&Prof)[D], Administrativo (&Admin)[D])
{
    int& N = Var.N;
    int I;
    bool Valid;
    string Password;

    cout << "Ingrese su Contraseña: ";
    cin >> Password;

    do {
        for (I = 0 ; I < D ; I++)
        {
            if (Est[N].Password == Password)
            {
                Valid = true;
                break;
            }
            else if (Prof[N].Password == Password)
            {
                Valid = true;
                break;
            }
            else if (Admin[N].Password == Password)
            {
                Valid = true;
                break;
            }
        }

        if (Valid == false)
        {
            cout << RED << "Las contraseña no coinciden" << RESET << endl;
            cout << "Ingrese su contraseña nuevamente: ";
            cin >> Password;
        }
        else
        {
            cout << GREEN << "Registro exitoso" << RESET << endl;
            Continue();
        }

    } while (Valid == false);

}