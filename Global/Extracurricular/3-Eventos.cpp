#include "../../Main/Header.h"
using namespace std;

void Ver_Eventos (Variables (&Var), Eventos (&Even)[D])
{
    int I, Opc;
    bool Hay_Even = false;

    for (I = 0; I < D; I++)
    {

        if (Even[I].Nombre != "")
        {

            Hay_Even = true;

            do 
            {

                Limpiar();
                Dibujo = "Evento"; 
                Art();

                cout << YELLOW << "Información del Evento" << RESET << endl;
                cout << "ID: " << Even[I].ID << endl;
                cout << CYAN << "Nombre: " << Even[I].Nombre << RESET << endl;
                cout << "Fecha: " << Even[I].Fecha.Dia << "/" << Even[I].Fecha.Mes << "/" << Even[I].Fecha.Year << endl;
                cout << "Tipo: " << Even[I].Tipo << endl;
                cout << "Descripción: " << Even[I].Descripcion << endl;

                cout << endl;
                cout << "1: Ver Siguiente" << endl;
                cout << "0: Salir" << endl;

                cout << "Ingrese opción: ";
                Opc = Opc_Bool();

                if (Opc == 1)
                {

                    break;
                }

                if (Opc == 0)
                {

                    return;
                }

            } while (Opc != 1);

        }

    }

    if (Hay_Even == false)
    {

        Limpiar();Dibujo = "Club"; Art();
        cout << RED << "No hay eventos registrados en el sistema." << RESET << endl;
        Continue();
    }

    if (Hay_Even == true)
    {
        Limpiar();Dibujo = "Club"; Art();
        cout << YELLOW << "Has llegado al final de los eventos." << RESET << endl;
        Continue();
    }

}