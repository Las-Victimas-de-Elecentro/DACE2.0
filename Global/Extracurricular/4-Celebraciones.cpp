#include "../../Main/Header.h"
using namespace std;

void Ver_Celebraciones (Variables (&Var), Celebraciones (&Cel)[D])
{
    int I, Opc;
    bool Hay_Cel = false;

    for (I = 0; I < D; I++)
    {

        if (Cel[I].Nombre != "")
        {

            Hay_Cel = true;

            do 
            {

                Limpiar();
                Dibujo = "Celebracion"; 
                Art();

                cout << YELLOW << "Información de la Celebración" << RESET << endl;
                cout << CYAN << "Nombre: " << Cel[I].Nombre << RESET << endl;
                cout << "Fecha: " << Cel[I].Fecha.Dia << "/" << Cel[I].Fecha.Mes << "/" << Cel[I].Fecha.Year << endl;
                cout << "Tipo: " << Cel[I].Tipo << endl;
                cout << "Descripción: " << Cel[I].Descripcion << endl;
                
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

    if (Hay_Cel == false)
    {

        Limpiar();Dibujo = "Club"; Art();
        cout << RED << "No hay celebraciones programadas actualmente." << RESET << endl;
        Continue();
    }

    if (Hay_Cel == true)
    {
        Limpiar();Dibujo = "Club"; Art();
        cout << YELLOW << "Has llegado al final de las celebraciones." << RESET << endl;
        Continue();
    }

}