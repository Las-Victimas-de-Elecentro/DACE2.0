#include "../../Main/Header.h"
using namespace std;

void Gestion_Eventos (Variables (&Var), Eventos (&Even)[D])
{
    int& Opc_F = Var.Opc_F;
    int I, Opc, Opc_Principal;
    bool R, Hay_Eventos, Espacio_Encontrado;

    do 
    {

        Limpiar();
        Dibujo = "Evento"; Art();

        cout << CYAN << "Gestión de Eventos Universitarios" << RESET << endl;
        cout << "1: Ver Eventos Registrados" << endl;
        cout << "2: Añadir Nuevo Evento" << endl;
        cout << "3: Salir" << endl;

        Opc_F = 3;
        cout << "Ingrese Opción: ";
        Opc_Principal = Opc_Menu(Opc_F);

        if (Opc_Principal == 1)
        {

            Hay_Eventos = false;

            for (I = 0; I < D; I++)
            {

                if (Even[I].Nombre != "")
                {

                    Hay_Eventos = true;

                    do 
                    {

                        Limpiar();
                        Dibujo = "Evento"; 
                        Art();

                        cout << CYAN << "Datos del Evento #" << I + 1 << RESET << endl;
                        cout << "Nombre: " << Even[I].Nombre << endl;
                        cout << "Fecha: " << Even[I].Fecha.Dia << "/" << Even[I].Fecha.Mes << "/" << Even[I].Fecha.Year << endl;
                        cout << "Tipo: " << Even[I].Tipo << endl;
                        cout << "Descripción: " << Even[I].Descripcion << endl;
                        cout << endl;

                        cout << "1: Modificar Evento" << endl;
                        cout << "2: Eliminar Evento" << endl;
                        cout << "3: Siguiente" << endl;
                        cout << "4: Salir al menú" << endl;

                        Opc_F = 4;
                        cout << "Ingrese opción: ";
                        Opc = Opc_Menu(Opc_F);

                        if (Opc == 1)
                        {

                            Limpiar(); Dibujo = "Evento"; Art();
                            cout << "Nuevo nombre: ";
                            Even[I].Nombre = Palabra();

                            Limpiar(); Dibujo = "Evento"; Art();
                            cout << "Nueva Fecha del Evento" << endl;
                            cout << "Dia: ";
                            Even[I].Fecha.Dia = Dia_User();

                            Limpiar(); Dibujo = "Evento"; Art();
                            cout << "Mes: ";
                            Even[I].Fecha.Mes = Mes_User();

                            Limpiar(); Dibujo = "Evento"; Art();
                            cout << "Año: ";
                            Even[I].Fecha.Year = Year_User();

                            Limpiar(); Dibujo = "Evento"; Art();
                            cout << "Nuevo tipo: ";
                            Even[I].Tipo = Palabra();

                            Limpiar(); Dibujo = "Evento"; Art();
                            cout << "Nueva descripción: ";
                            getline(cin >> ws, Even[I].Descripcion);

                            Limpiar(); Dibujo = "Evento"; Art();
                            cout << GREEN << "Evento modificado correctamente" << RESET << endl;
                            Continuar();
                        }

                        if (Opc == 2)
                        {

                            Limpiar(); Dibujo = "Evento"; Art();
                            cout << RED << "¿Seguro que desea eliminar este Evento? 1: Sí / 0: No : " << RESET;
                            R = Opc_Bool();

                            if (R == 1)
                            {

                                Even[I].Nombre = "";
                                Even[I].Fecha.Dia = 0;
                                Even[I].Fecha.Mes = 0;
                                Even[I].Fecha.Year = 0;
                                Even[I].Tipo = "";
                                Even[I].Descripcion = "";

                                Limpiar(); Dibujo = "Evento"; Art();
                                cout << RED << "Evento borrado correctamente" << RESET << endl;
                                Continue();
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

            if (Hay_Eventos == false)
            {

                Limpiar(); Dibujo = "Evento"; Art();
                cout << RED << "No hay Eventos registrados" << RESET << endl;
                Continue();
            }

        }

        if (Opc_Principal == 2)
        {

            Espacio_Encontrado = false;

            for (I = 0; I < D; I++)
            {

                if (Even[I].Nombre == "")
                {

                    Limpiar(); Dibujo = "Evento"; Art();
                    cout << "Nombre del nuevo Evento: ";
                    Even[I].Nombre = Palabra();

                    Limpiar(); Dibujo = "Evento"; Art();
                    cout << "Fecha del Evento" << endl;
                    cout << "Dia: ";
                    Even[I].Fecha.Dia = Dia_User();

                    Limpiar(); Dibujo = "Evento"; Art();
                    cout << "Mes: ";
                    Even[I].Fecha.Mes = Mes_User();

                    Limpiar(); Dibujo = "Evento"; Art();
                    cout << "Año: ";
                    Even[I].Fecha.Year = Year_User();

                    Limpiar(); Dibujo = "Evento"; Art();
                    cout << "Tipo de Evento: ";
                    Even[I].Tipo = Palabra();

                    Limpiar(); Dibujo = "Evento"; Art();
                    cout << "Descripción: ";
                    getline(cin >> ws, Even[I].Descripcion);

                    Espacio_Encontrado = true;
                    Limpiar(); Dibujo = "Evento"; Art();
                    cout << GREEN << "Evento agregado exitosamente" << RESET << endl;
                    Continuar();
                    break;
                }

            }

            if (Espacio_Encontrado == false)
            {

                Limpiar(); Dibujo = "Evento"; Art();
                cout << RED << "Límite de Eventos alcanzado" << RESET << endl;
                Continue();
            }

        }

    } while (Opc_Principal != 3);

}