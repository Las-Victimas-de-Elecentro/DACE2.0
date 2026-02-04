#include "../../Main/Header.h"
using namespace std;

void Mostrar_Grupos (Variables (&Var), Grupos (&Gru)[D])
{
    int I, Opc;
    bool Hay_Grupos = false;

    for (I = 0; I < D; I++)
    {

        if (Gru[I].Nombre_Profesor != "")
        {

            Hay_Grupos = true;

            do 
            {

                Limpiar();
                Dibujo = "Estudiante"; 
                Art();

                cout << CYAN << "Información del Grupo Académico" << RESET << endl;
                cout << "Profesor: " << Gru[I].Nombre_Profesor << endl;
                cout << YELLOW << "Materia (Código): " << Gru[I].Codigo_Materia << RESET << endl;
                cout << "Cantidad de Miembros: " << Gru[I].Miembros << endl;
                cout << "Sección: " << Gru[I].Seccion << endl;

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

    if (Hay_Grupos == false)
    {

        Limpiar();
        Dibujo = "Estudiante"; 
        Art();

        cout << RED << "No hay grupos registrados en el sistema actualmente." << RESET << endl;
        Continue();

    }

    if (Hay_Grupos == true)
    {

        Limpiar();
        Dibujo = "Estudiante"; 
        Art();

        cout << YELLOW << "Has llegado al final de la lista de grupos." << RESET << endl;
        Continue();

    }

}