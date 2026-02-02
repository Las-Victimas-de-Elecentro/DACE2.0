#include "../../Main/Header.h"
using namespace std;

void Gestion_Solicitudes (Variables &Var, Plan_Evaluacion (&Plan)[D], Reportes (&Rep)[D], Clase_Magistral (&Mag)[D], Solicitudes (&Soli)[D], Novedades (&Nov)[D])
{
    int& Opc_F = Var.Opc_F;
    int I, Opc;
    bool Solicitud, R;

    Limpiar();
    Dibujo = "Paper"; 
    Art();

    Solicitud = false;

    for (I = 0; I < D; I++)
    {

        if (Soli[I].Titular != "")
        {

            Solicitud = true;

            do 
            {
                Limpiar();
                Dibujo = "Paper"; 
                Art();

                cout << CYAN << "Revisión de Solicitud #" << I + 1 << RESET << endl;
                cout << YELLOW << "Título: " << Soli[I].Titulo << RESET << endl;
                cout << "Descripción: " << Soli[I].Descripcion << endl;
                cout << "Titular: " << Soli[I].Titular << endl;
                cout << "Destinatario: " << Soli[I].Destinatario << endl;
                cout << "Fecha: " << Soli[I].Fecha.Dia << "/" << Soli[I].Fecha.Mes << "/" << Soli[I].Fecha.Year << endl;
                
                if (Soli[I].Estado == 1)
                {
                    cout << "Estado: " << GREEN << "Aprobada" << RESET << endl;
                }
                else
                {
                    cout << "Estado: " << RED << "Pendiente" << RESET << endl;
                }

                cout << endl;
                cout << "1: Aprobar Solicitud" << endl;
                cout << "2: Borrar Solicitud" << endl;
                cout << "3: Siguiente" << endl;
                cout << "4: Salir" << endl;
                cout << "Ingrese: ";
                
                Opc_F = 4;
                Opc = Opc_Menu(Opc_F);

                if (Opc == 1)
                {

                    if (Soli[I].Estado == 0)
                    {

                        Soli[I].Estado = 1;
                        Guardar_Gestion_2 (Plan, Rep, Mag, Soli, Nov);
                        cout << GREEN << "Solicitud aprobada exitosamente" << RESET << endl;
                        Continuar();
                    }
                    else
                    {
                        cout << YELLOW << "Esta solicitud ya se encuentra aprobada" << RESET << endl;
                        Continuar();
                    }

                }

                if (Opc == 2)
                {

                    cout << RED << "¿Seguro que desea borrar esta solicitud? Ingrese 1: Si / 0: No : " << RESET;
                    R = Opc_Bool();

                    if (R == 1)
                    {

                        Soli[I].Titulo = "";
                        Soli[I].Descripcion = "";
                        Soli[I].Titular = "";
                        Soli[I].Destinatario = "";
                        Soli[I].Fecha.Dia = 0;
                        Soli[I].Fecha.Mes = 0;
                        Soli[I].Fecha.Year = 0;
                        Soli[I].Estado = 0;

                        Guardar_Gestion_2 (Plan, Rep, Mag, Soli, Nov);
                        cout << GREEN << "Solicitud eliminada" << RESET << endl;
                        Continuar();
                        Opc = 3;
                    }

                }

            } while (Opc != 3 && Opc != 4);

            if (Opc == 4)
            {
                break;
            }

        }

    }

    if (Solicitud == false)
    {
        Limpiar();
        Dibujo = "Paper"; 
        Art();
        cout << RED << "No hay solicitudes pendientes en el sistema" << RESET << endl;
        Continue();
    }
    else if (Opc != 4)
    {

        Limpiar();
        Dibujo = "Paper"; 
        Art();
        cout << GREEN << "Has revisado todas las solicitudes disponibles" << RESET << endl;
        Continue();
    }

}