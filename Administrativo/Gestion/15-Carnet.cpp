#include "../../Main/Header.h"
using namespace std;

void Gestion_Carnet (Variables &Var, Carnet (&Car)[D], Carnetizacion (&Carn)[D])
{

    int& Opc_F = Var.Opc_F;
    int I, Opc_Carrera, Opc_Menu_Principal, Opc_Jornada;
    bool R3, Jornadas;

    do
    {
        Limpiar();
        Dibujo = "Card"; 
        Art();

        cout << CYAN << "Bienvenido a la sección de Carnetización" << RESET << endl;
        cout << "1: Aperturar una nueva jornada" << endl;
        cout << "2: Ver jornadas existentes" << endl;
        cout << "3: Salir" << endl;
        
        cout << "Ingrese opción: ";
        Opc_F = 3;
        Opc_Menu_Principal = Opc_Menu(Opc_F);

        if (Opc_Menu_Principal == 1)
        {

            int E = -1;
            for (I = 0; I < D; I++)
            {

                if (Carn[I].Carrera == "")
                {

                    E = I;
                    break;
                }

            }

            if (E != -1)
            {

                Limpiar();
                Dibujo = "Card"; Art();
                cout << CYAN << "Configuración de Nueva Jornada" << RESET << endl;
                cout << "¿En qué carrera desea realizar la jornada?" << endl;
                cout << "1: Informática" << endl;
                cout << "2: Civil" << endl;
                cout << "3: Hidrocarburos" << endl;
                cout << "4: Medicina" << endl;
                cout << "5: Odontología" << endl;
                cout << "6: Veterinaria" << endl;
                cout << "7: Derecho" << endl;
                cout << "8: Comunicación Social" << endl;
                cout << "9: Contaduría" << endl;
                cout << "10: Economía" << endl;

                cout << "Seleccione la Carrera: ";
                Opc_F = 10;
                Opc_Carrera = Opc_Menu(Opc_F);

                if (Opc_Carrera == 1)
                {
                    Carn[E].Carrera = "Informática";
                }

                if (Opc_Carrera == 2)
                {
                    Carn[E].Carrera = "Civil";
                }

                if (Opc_Carrera == 3)
                {
                    Carn[E].Carrera = "Hidrocarburos";
                }

                if (Opc_Carrera == 4)
                {
                    Carn[E].Carrera = "Medicina";
                }

                if (Opc_Carrera == 5)
                {
                    Carn[E].Carrera = "Odontología";
                }

                if (Opc_Carrera == 6)
                {
                    Carn[E].Carrera = "Veterinaria";
                }

                if (Opc_Carrera == 7)
                {
                    Carn[E].Carrera = "Derecho";
                }

                if (Opc_Carrera == 8)
                {
                    Carn[E].Carrera = "Comunicación";
                }

                if (Opc_Carrera == 9)
                {
                    Carn[E].Carrera = "Contaduría";
                }

                if (Opc_Carrera == 10)
                {
                    Carn[E].Carrera = "Economía";
                }

                Limpiar();
                Dibujo = "Card"; 
                Art();
                cout << "Ingrese el lugar de la jornada: ";
                getline(cin >> ws, Carn[E].Lugar);

                Limpiar(); Dibujo = "Card"; Art();
                cout << "Ingrese la fecha de la jornada:" << endl;
                cout << "Día: ";
                Carn[E].Fecha.Dia = Dia_User();

                Limpiar(); Dibujo = "Card"; Art();
                cout << "Mes: ";
                Carn[E].Fecha.Mes = Mes_User();

                Limpiar(); Dibujo = "Card"; Art();
                cout << "Año: ";
                Carn[E].Fecha.Year = Year_User();

                Limpiar(); Dibujo = "Card"; Art();
                cout << "Ingrese el precio del carnet $: ";
                Carn[E].Precio = Real();

                Limpiar(); Dibujo = "Card"; Art();
                cout << "¿Desea activar esta jornada ahora? Ingrese: 1: Sí / 0: No : ";
                R3 = Opc_Bool();

                if (R3 == 1)
                {
                    Carn[E].Activo = 1;
                }
                else
                {
                    Carn[E].Activo = 0;
                }

                Limpiar(); Dibujo = "Card"; Art();
                Guardar_Carn(Car, Carn);
                cout << GREEN << "Jornada registrada correctamente" << RESET << endl;
                Continue();
            }

        }

        if (Opc_Menu_Principal == 2)
        {

            Jornadas = false;

            for (I = 0; I < D; I++)
            {

                if (Carn[I].Carrera != "")
                {

                    Jornadas = true;

                    do
                    {

                        Limpiar();
                        Dibujo = "Card"; Art();
                        cout << CYAN << "Datos de la Jornada #" << I + 1 << RESET << endl;
                        cout << "Carrera: " << Carn[I].Carrera << endl;
                        cout << "Lugar: " << Carn[I].Lugar << endl;
                        cout << "Fecha: " << Carn[I].Fecha.Dia << "/" << Carn[I].Fecha.Mes << "/" << Carn[I].Fecha.Year << endl;
                        cout << "Precio: " << Carn[I].Precio << "$" << endl;

                        if (Carn[I].Activo == 1)
                        {
                            cout << "Estado: " << GREEN << "Activa" << RESET << endl;
                            cout << endl;
                            cout << "1: Desactivar" << endl;
                        }
                        else
                        {

                            cout << "Estado: " << RED << "Inactiva" << RESET << endl;
                            cout << endl;
                            cout << "1: Activar jornada" << endl;
                        }

                        cout << "2: Siguiente" << endl;
                        cout << "3: Salir" << endl;

                        cout << "Ingrese opción: ";
                        Opc_F = 3;
                        Opc_Jornada = Opc_Menu(Opc_F);

                        if (Opc_Jornada == 1)
                        {

                            if (Carn[I].Activo == 1)
                            {

                                Carn[I].Activo = 0;
                                cout << RED << "Jornada desactivada" << RESET << endl;
                            }
                            else
                            {

                                Carn[I].Activo = 1;
                                cout << GREEN << "Jornada activada" << RESET << endl;
                            }
                            Guardar_Carn(Car, Carn);
                            Continuar();
                        }

                    } while (Opc_Jornada == 1);

                    if (Opc_Jornada == 3)
                    {

                        break;
                    }

                }

            }

            if (Jornadas == false)
            {
                Limpiar();
                Dibujo = "Card"; 
                Art();
                cout << RED << "No existen operativos de carnetización registrados" << RESET << endl;
                Continue();
            }

        }

    } while (Opc_Menu_Principal != 3);

}