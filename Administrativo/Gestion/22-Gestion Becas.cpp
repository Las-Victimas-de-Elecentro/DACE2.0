#include "../../Main/Header.h"

using namespace std;

void Aceptar_Becas (Variables (&Var), Becas (&Beca)[D])
{

    int& Opc_F = Var.Opc_F;
    int I, Opc;
    bool Hay_Pendientes = false;

    for (I = 0; I < D; I++)
    {

        if (Beca[I].Nombre != "" && Beca[I].Verificada == false)
        {

            Hay_Pendientes = true;

            do 
            {

                Limpiar();
                Dibujo = "Beca"; 
                Art();

                cout << CYAN << "Revisión de Solicitud #" << I + 1 << RESET << endl;
                cout << "Nombre: " << Beca[I].Nombre << endl;
                cout << "Cedula: " << Beca[I].CI << endl;
                cout << "Motivo: " << Beca[I].Motivo << endl;
                cout << "Carta Motivación: " << Beca[I].Carta_Motivacion << endl;
                cout << "Carta Recomendación: " << Beca[I].Carta_Recomendacion << endl;

                cout << endl << "1: Aprobar Beca" << endl;
                cout << "2: Siguiente" << endl;
                cout << "3: Salir" << endl;

                Opc_F = 3;
                cout << "Ingrese opción: ";
                Opc = Opc_Menu(Opc_F);

                if (Opc == 1)
                {

                    Beca[I].Verificada = true;

                    Limpiar();
                    Dibujo = "Beca"; 
                    Art();

                    cout << GREEN << "La beca de " << Beca[I].Nombre << " ha sido aprobada." << RESET << endl;
                    Continuar();
                    
                    Opc = 2;

                }

            } while (Opc != 2 && Opc != 3);

            if (Opc == 3)
            {

                return;

            }

        }

    }

    if (Hay_Pendientes == false)
    {

        Limpiar();
        Dibujo = "Beca"; 
        Art();

        cout << GREEN << "No hay solicitudes pendientes por el momento" << RESET << endl;
        Continue();

    }
    else
    {

        Limpiar();
        Dibujo = "Beca"; 
        Art();

        cout << YELLOW << "Has llegado al final de las solicitudes" << RESET << endl;
        Continuar();

    }

}