#include "../../Main/Header.h"
using namespace std;

void Ver_Novedades (Novedades (&Nov)[D])
{

    int I;
    bool R, Hay_Registros = false;

    for (I = 0; I < 500; I++)
    {

        if (Nov[I].Hecho != "")
        {

            Hay_Registros = true;

            Limpiar();
            Dibujo = "Evento"; 
            Art();

            cout << CYAN << "Novedad #" << I + 1 << RESET << endl;
            cout << YELLOW << "Hecho: " << Nov[I].Hecho << RESET << endl;
            cout << "Fecha: " << Nov[I].Fecha.Dia << "/" << Nov[I].Fecha.Mes << "/" << Nov[I].Fecha.Year << endl;
            cout << "Responsables: " << Nov[I].Responsables << endl;
            cout << "Contexto: " << Nov[I].Contexto << endl;
            cout << "Lugar: " << Nov[I].Lugar << endl;
            
            cout << endl << "Ingrese: 1: Siguiente / 0: Salir : ";
            R = Opc_Bool();

            if (R == 0)
            {

                return;

            }

        }

    }

    if (Hay_Registros == false)
    {

        Limpiar();
        Dibujo = "Evento"; 
        Art();
        cout << RED << "No hay novedades registradas en el sistema" << RESET << endl;
        Continue();

    }
    else
    {

        Limpiar();
        Dibujo = "Evento"; 
        Art();
        cout << GREEN << "Has visto todas las novedades actuales." << RESET << endl;
        Continue();

    }

}