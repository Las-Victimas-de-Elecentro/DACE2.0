#include "../../Main/Header.h"
using namespace std;

void Gestion_Reportes (Variables &Var, Plan_Evaluacion (&Plan)[D], Reportes (&Rep)[D], Clase_Magistral (&Mag)[D], Solicitudes (&Soli)[D], Novedades (&Nov)[D])
{

    int& Opc_F = Var.Opc_F;
    int I, Opc;
    bool Reportes, R;

    Limpiar();
    Dibujo = "Law"; 
    Art();

    Reportes = false;

    for (I = 0; I < D; I++)
    {

        if (Rep[I].Titular != "")
        {

            Reportes = true;

            do 
            {

                Limpiar();
                Dibujo = "Law"; 
                Art();

                cout << CYAN << "Revisión de Reporte #" << I + 1 << RESET << endl;
                cout << YELLOW << "Título: " << Rep[I].Titulo << RESET << endl;
                cout << "Descripción: " << Rep[I].Descripcion << endl;
                cout << "Titular: " << Rep[I].Titular << endl;
                cout << "Problema: " << Rep[I].Problema << endl;
                cout << "Fecha: " << Rep[I].Fecha.Dia << "/" << Rep[I].Fecha.Mes << "/" << Rep[I].Fecha.Year << endl;
                
                if (Rep[I].Recibido == 1)
                {
                    cout << "Estado: " << GREEN << "Recibido" << RESET << endl;
                }
                else
                {
                    cout << "Estado: " << RED << "Sin recibir aún" << RESET << endl;
                }

                cout << endl;
                cout << "1: Marcar como Recibido" << endl;
                cout << "2: Borrar Reporte" << endl;
                cout << "3: Siguiente" << endl;
                cout << "4: Salir" << endl;
                cout << "Ingrese: ";
                
                Opc_F = 4;
                Opc = Opc_Menu(Opc_F);

                if (Opc == 1)
                {

                    if (Rep[I].Recibido == 0)
                    {
                        Rep[I].Recibido = 1;
                        Guardar_Gestion_2 (Plan, Rep, Mag, Soli, Nov);
                        cout << GREEN << "Reporte marcado como recibido" << RESET << endl;
                        Continuar();
                    }
                    else
                    {
                        cout << YELLOW << "Este reporte ya fue marcado como recibido anteriormente" << RESET << endl;
                        Continuar();
                    }

                }

                if (Opc == 2)
                {
                    cout << RED << "¿Seguro que desea borrar este reporte? Ingrese 1: Si / 0: No : " << RESET;
                    R = Opc_Bool();

                    if (R == 1)
                    {

                        Rep[I].Titulo = "";
                        Rep[I].Descripcion = "";
                        Rep[I].Titular = "";
                        Rep[I].Problema = "";
                        Rep[I].Fecha.Dia = 0;
                        Rep[I].Fecha.Mes = 0;
                        Rep[I].Fecha.Year = 0;
                        Rep[I].Recibido = 0;

                        Guardar_Gestion_2 (Plan, Rep, Mag, Soli, Nov);
                        cout << GREEN << "Reporte eliminado del sistema" << RESET << endl;
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

    if (Reportes == false)
    {

        Limpiar();
        Dibujo = "Law"; 
        Art();
        cout << RED << "No hay reportes registrados en el sistema" << RESET << endl;
        Continue();
    }
    else if (Opc != 4)
    {

        Limpiar();
        Dibujo = "Law"; 
        Art();
        cout << GREEN << "Has revisado todos los reportes disponibles" << RESET << endl;
        Continue();
    }

}