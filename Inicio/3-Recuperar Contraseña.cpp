#include "../Main/Header.h"

using namespace std;

void Recuperar_Password (Variables (&Var), Estudiante (&Est)[D], Profesor (&Prof)[D], Administrativo (&Admin)[D])
{

    int Aciertos = 0, K;
    string Clave;

    for (K = 0; K < 2; K++) 
    {

        Limpiar();
        Dibujo = "Bloqueado";
        Art();

        cout << "Validación " << (K + 1) << " de 2: ";

        if (Validar_Coordenada(Var, Est, Prof, Admin)) 
        {

            Aciertos++;
            Limpiar();
            Dibujo = "Login";
            Art();
            cout << GREEN << "Correcto." << RESET << endl;
            Continue();

        }
        else
        {

            Limpiar();
            Dibujo = "Bloqueado";
            Art();
            cout << RED << "Incorrecto." << RESET << endl;
            Continue();

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

        Limpiar();
        Dibujo = "Login";
        Art();
        cout << "Su clave es: " << YELLOW << Clave << RESET << endl;
        Continuar();

    }

    return;

}