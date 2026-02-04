#include "../../Main/Header.h"
using namespace std;

void Gestion_Celebraciones (Variables (&Var), Celebraciones (&Cel)[D])
{
    int& Opc_F = Var.Opc_F;
    int I, Opc, Opc_Menu_Principal;
    bool R, Hay_Celebraciones, Espacio_Encontrado;

    do 
    {

        Limpiar();
        Dibujo = "Celebracion"; 
        Art();

        cout << CYAN << "Gestión de Celebraciones Universitarios" << RESET << endl;
        cout << "1: Ver Celebraciones Registradas" << endl;
        cout << "2: Añadir Nueva Celebración" << endl;
        cout << "3: Salir" << endl;

        Opc_F = 3;
        cout << "Ingrese Opción: ";
        Opc_Menu_Principal = Opc_Menu(Opc_F);

        if (Opc_Menu_Principal == 1)
        {

            Hay_Celebraciones = false;

            for (I = 0; I < D; I++)
            {

                if (Cel[I].Nombre != "")
                {

                    Hay_Celebraciones = true;

                    do 
                    {

                        Limpiar();
                        Dibujo = "Celebracion"; 
                        Art();

                        cout << CYAN << "Datos de la Celebración #" << I + 1 << RESET << endl;
                        cout << "Nombre: " << Cel[I].Nombre << endl;
                        cout << "Fecha: " << Cel[I].Fecha.Dia << "/" << Cel[I].Fecha.Mes << "/" << Cel[I].Fecha.Year << endl;
                        cout << "Tipo: " << Cel[I].Tipo << endl;
                        cout << "Descripción: " << Cel[I].Descripcion << endl;
                        cout << endl;

                        cout << "1: Modificar celebración" << endl;
                        cout << "2: Eliminar celebración" << endl;
                        cout << "3: Siguiente" << endl;
                        cout << "4: Salir al menú" << endl;

                        Opc_F = 4;
                        cout << "Ingrese opción: ";
                        Opc = Opc_Menu(Opc_F);

                        if (Opc == 1)
                        {

                            Limpiar();
                            Dibujo = "Celebracion"; 
                            Art();
                            cout << "Nuevo nombre: ";
                            Cel[I].Nombre = Palabra();

                            Limpiar();
                            Dibujo = "Celebracion"; 
                            Art();
                            cout << "Nueva Fecha de Celebración" << endl;
                            cout << "Dia: ";
                            Cel[I].Fecha.Dia = Dia_User();

                            Limpiar();
                            Dibujo = "Celebracion"; 
                            Art();
                            cout << "Mes: ";
                            Cel[I].Fecha.Mes = Mes_User();

                            Limpiar();
                            Dibujo = "Celebracion"; 
                            Art();
                            cout << "Año: ";
                            Cel[I].Fecha.Year = Year_User();

                            Limpiar();
                            Dibujo = "Celebracion"; 
                            Art();
                            cout << "Nuevo tipo: ";
                            Cel[I].Tipo = Palabra();

                            Limpiar();
                            Dibujo = "Celebracion"; 
                            Art();
                            cout << "Nueva descripción: ";
                            getline(cin >> ws, Cel[I].Descripcion);

                            cout << GREEN << "Celebración modificada correctamente" << RESET << endl;
                            Continuar();
                        }

                        if (Opc == 2)
                        {

                            Limpiar();
                            Dibujo = "Celebracion"; 
                            Art();
                            cout << RED << "¿Seguro que desea eliminar esta celebración? 1: Sí / 0: No : " << RESET;
                            R = Opc_Bool();

                            if (R == 1)
                            {

                                Cel[I].Nombre = "";
                                Cel[I].Fecha.Dia = 0;
                                Cel[I].Fecha.Mes = 0;
                                Cel[I].Fecha.Year = 0;
                                Cel[I].Tipo = "";
                                Cel[I].Descripcion = "";

                                Limpiar();
                                Dibujo = "Celebracion"; 
                                Art();
                                cout << RED << "Celebración borrada correctamente" << RESET << endl;
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

            if (Hay_Celebraciones == false)
            {

                Limpiar(); 
                Dibujo = "Celebracion"; 
                Art();
                cout << RED << "No hay celebraciones registradas" << RESET << endl;
                Continue();
            }

        }

        if (Opc_Menu_Principal == 2)
        {

            Espacio_Encontrado = false;

            for (I = 0; I < D; I++)
            {

                if (Cel[I].Nombre == "")
                {

                    Limpiar();
                    Dibujo = "Celebracion"; 
                    Art();
                    cout << "Nombre de la nueva celebración: ";
                    Cel[I].Nombre = Palabra();

                    Limpiar();
                    Dibujo = "Celebracion"; 
                    Art();
                    cout << "Fecha de la celebración" << endl;
                    cout << "Dia: ";
                    Cel[I].Fecha.Dia = Dia_User();

                    Limpiar();
                    Dibujo = "Celebracion"; 
                    Art();
                    cout << "Mes: ";
                    Cel[I].Fecha.Mes = Mes_User();

                    Limpiar();
                    Dibujo = "Celebracion"; 
                    Art();
                    cout << "Año: ";
                    Cel[I].Fecha.Year = Year_User();

                    Limpiar();
                    Dibujo = "Celebracion"; 
                    Art();
                    cout << "Tipo de celebración: ";
                    Cel[I].Tipo = Palabra();

                    Limpiar();
                    Dibujo = "Celebracion"; 
                    Art();
                    cout << "Descripción: ";
                    getline(cin >> ws, Cel[I].Descripcion);

                    Espacio_Encontrado = true;
                    cout << GREEN << "Celebración agregada con éxito" << RESET << endl;
                    Continuar();
                    break;
                }

            }

            if (Espacio_Encontrado == false)
            {

                Limpiar();
                Dibujo = "Celebracion"; 
                Art();
                cout << RED << "Límite de celebraciones alcanzado" << RESET << endl;
                Continue();
            }

        }

    } while (Opc_Menu_Principal != 3);

}