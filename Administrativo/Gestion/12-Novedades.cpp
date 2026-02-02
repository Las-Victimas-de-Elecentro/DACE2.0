#include "../../Main/Header.h"
using namespace std;

void Gestion_Novedades (Variables &Var, Plan_Evaluacion (&Plan)[D], Reportes (&Rep)[D], Clase_Magistral (&Mag)[D], Solicitudes (&Soli)[D], Novedades (&Nov)[D])
{

    int& Opc_F = Var.Opc_F;
    int I, Opc, E;
    bool R, Hay_Registros;

    do 
    {
        Limpiar();
        Dibujo = "Noticias"; 
        Art();

        cout << CYAN << "Bienvenido a la sección de Novedades" << RESET << endl;
        cout << "¿Qué desea hacer?" << endl;
        cout << "1: Ver las novedades actuales" << endl;
        cout << "2: Ingresar novedades de la universidad" << endl;
        cout << "3: Salir" << endl;
        
        cout << endl << "Ingrese: ";

        Opc_F = 3;
        Opc = Opc_Menu(Opc_F);

        if (Opc == 1)
        {

            Hay_Registros = false;

            for (I = 0; I < 500; I++)
            {

                if (Nov[I].Hecho != "")
                {

                    Hay_Registros = true;
                    Limpiar();
                    Dibujo = "Noticias"; Art();

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

                        break;
                    }

                }

            }

            if (Hay_Registros == false)
            {

                Limpiar();
                Dibujo = "Noticias"; Art();
                cout << RED << "No hay novedades registradas en el sistema" << RESET << endl;
                Continue();
            }
            else
            {

                Limpiar();
                Dibujo = "Noticias"; Art();
                cout << GREEN << "Esas fueron todas las novedades." << RESET << endl;
                Continue();
            }

        }

        if (Opc == 2)
        {

            E = -1;
            for (I = 0; I < 500; I++)
            {

                if (Nov[I].Hecho == "")
                {

                    E = I;
                    break;
                }

            }

            if (E != -1)
            {

                Limpiar();
                Dibujo = "Noticias"; Art();
                cout << CYAN << "Registro de Nueva Novedad" << RESET << endl;

                cout << "Ingrese de qué hecho trata esta nueva novedad: ";
                getline(cin >> ws, Nov[E].Hecho);

                cout << "Fecha del suceso:" << endl;
                cout << "Día: "; 
                Nov[E].Fecha.Dia = Dia_User();
                cout << "Mes: "; 
                Nov[E].Fecha.Mes = Mes_User();
                cout << "Año: "; 
                Nov[E].Fecha.Year = Year_User();

                cout << "¿Quiénes fueron los responsables?: ";
                getline(cin >> ws, Nov[E].Responsables);

                cout << "¿Cuál fue el contexto?: ";
                getline(cin >> ws, Nov[E].Contexto);

                cout << "¿Cuál fue el lugar?: ";
                getline(cin >> ws, Nov[E].Lugar);

                Guardar_Gestion_2 (Plan, Rep, Mag, Soli, Nov);
                cout << GREEN << "Novedad publicada correctamente." << RESET << endl;
                Continuar();
            }
            else
            {
                cout << RED << "Capacidad de novedades llena" << RESET << endl;
                Continue();
            }

        }

    } while (Opc != 3);

}