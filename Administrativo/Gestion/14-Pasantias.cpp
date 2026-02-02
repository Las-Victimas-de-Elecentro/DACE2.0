#include "../../Main/Header.h"
using namespace std;

void Gestion_Pasantias (Variables &Var, Pasantias (&Pas)[D], Servicio_Comunitario (&SerC)[D])
{

    int& Opc_F = Var.Opc_F;
    int I, Opc;
    bool R, Hay_Solicitudes;

    Limpiar();
    Dibujo = "Pasantias"; 
    Art();

    Hay_Solicitudes = false;

    for (I = 0; I < D; I++)
    {

        if (Pas[I].Nombre != "")
        {

            Hay_Solicitudes = true;

            do 
            {

                Limpiar();
                Dibujo = "Pasantias"; 
                Art();

                cout << CYAN << "Revisión de Pasantías #" << I + 1 << RESET << endl;
                cout << YELLOW << "Estudiante: " << Pas[I].Nombre << RESET << endl;
                cout << "Cédula: " << Pas[I].Cedula << endl;
                cout << "Carrera: " << Pas[I].Carrera << endl;
                cout << "Semestre: " << Pas[I].Semestre << " | Año: " << Pas[I].Year << endl;
                cout << "Empresa: " << Pas[I].Empresa << endl;
                cout << "Horas: " << Pas[I].Horas << "/320" << endl;

                if (Pas[I].Estado_Solicitud == 1)
                {
                    cout << "Estado: " << GREEN << "Aprobada" << RESET << endl;
                }
                else if (Pas[I].Estado_Solicitud == 2)
                {
                    cout << "Estado: " << YELLOW << "En espera de revisión" << endl;
                }
                else
                {
                    cout << "Estado: " << RED << "Sin solicitud / Rechazada" << RESET << endl;
                }

                cout << endl;

                if (Pas[I].Estado_Solicitud != 1)
                {
                    cout << "1: Aprobarla" << endl;
                    cout << "2: Rechazarla" << endl;
                    cout << "3: Siguiente" << endl;
                    cout << "4: Salir" << endl;
                    Opc_F = 4;
                }
                else
                {
                    cout << "2: Rechazarla" << endl;
                    cout << "3: Siguiente" << endl;
                    cout << "4: Salir" << endl;
                    Opc_F = 4;
                }

                cout << "Ingrese opción: ";
                Opc = Opc_Menu(Opc_F);

                if (Opc == 1 && Pas[I].Estado_Solicitud != 1)
                {

                    Pas[I].Estado_Solicitud = 1;
                    Guardar_Pasantias_Servicio(Pas, SerC);
                    cout << GREEN << "Solicitud aprobada correctamente" << RESET << endl;
                    Continue();
                }

                if (Opc == 2)
                {

                    cout << RED << "¿Seguro que desea rechazar esta solicitud? 1: Sí / 0: No : " << RESET;
                    R = Opc_Bool();

                    if (R == 1)
                    {

                        Pas[I].Estado_Solicitud = 0;
                        Guardar_Pasantias_Servicio(Pas, SerC);
                        cout << RED << "Solicitud rechazada" << RESET << endl;
                        Continuar();
                    }

                }

            } while (Opc != 3 && Opc != 4);

            if (Opc == 4)
            {

                break;
            }

        }

    }

    if (Hay_Solicitudes == false)
    {

        Limpiar();
        Dibujo = "Pasantias"; 
        Art();
        cout << RED << "No hay solicitudes de pasantías registradas" << RESET << endl;
        Continue();
    }
    else
    {

        if (Opc != 4)
        {

            Limpiar();
            Dibujo = "Pasantias"; 
            Art();
            cout << GREEN << "Has terminado de revisar todas las solicitudes" << RESET << endl;
            Continue();
        }

    }

}