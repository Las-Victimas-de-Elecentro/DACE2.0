#include "../../Main/Header.h"
using namespace std;

void Gestion_Comunitario (Variables &Var, Pasantias (&Pas)[D], Servicio_Comunitario (&SerC)[D])
{

    bool R;

    Limpiar();
    Dibujo = "Paper"; 
    Art();

    cout << CYAN << "Bienvenido a la sección de Servicio Comunitario" << RESET << endl;

    if (Var.Comunitario == false)
    {

        cout << RED << "Estado actual: Inscripciones cerradas" << RESET << endl;
        cout << "¿Desea habilitar las inscripciones? Ingrese 1: Sí / 0: No : ";
        R = Opc_Bool();

        if (R == 1)
        {
            Limpiar();
            Dibujo = "Paper"; 
            Art();
            Var.Comunitario = true;
            Guardar_Pasantias_Servicio(Pas, SerC);
            cout << GREEN << "Las inscripciones de servicio comunitario han sido abiertas." << RESET << endl;
        }

    }
    else
    {
        cout << GREEN << "Estado actual: Inscripciones abiertas" << RESET << endl;
        cout << "¿Desea deshabilitar las inscripciones? Ingrese 1: Sí / 0: No : ";
        R = Opc_Bool();

        if (R == 1)
        {
            Limpiar();
            Dibujo = "Paper"; 
            Art();
            Var.Comunitario = false;
            Guardar_Pasantias_Servicio(Pas, SerC);
            cout << RED << "Las inscripciones de servicio comunitario han sido cerradas" << RESET << endl;
        }

    }

    Continue();
}