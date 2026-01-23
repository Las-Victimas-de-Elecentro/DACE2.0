#include "../Main/Header.h"
using namespace std;

void Recuperar_Password (Variables (&Var), Estudiante (&Est)[D], Profesor (&Prof)[D], Administrativo (&Admin)[D])
{
    static int Fallidos = 0; 
    int Aciertos = 0, K;
    string Clave;

    if (Fallidos >= 3) 
    {
        cout << RED << "\nCuenta Bloqueada" << RESET << endl;
        return;
    }

    for (K = 0; K < 2; K++) 
    {
        cout << "\nValidación " << (K + 1) << " de 2:";
        if (Validar_Coordenada(Var, Est, Prof, Admin)) 
        {
            Aciertos++;
            cout << GREEN << "Correcto." << RESET << endl;
        }
        else
        {
            cout << RED << "Incorrecto." << RESET << endl;
        }
    }

    if (Aciertos == 2) 
    {
        if (Rol == "Est") 
        {
            Clave = Est[Var.N].Password;
        }
        else if (Rol == "Prof") 
        {
            Clave = Prof[Var.N].Password;
        }
        else if (Rol == "Admin") 
        {
            Clave = Admin[Var.N].Password;
        }

        cout << "\nSu clave es: " << YELLOW << Clave << RESET << endl;
        Fallidos = 0;
    } 
    else 
    {
        Fallidos++;
        cout << RED << "\nError. Intentos: " << Fallidos << "/3" << RESET << endl;
    }
}