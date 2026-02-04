#include "../../Main/Header.h"
using namespace std;

void Gestion_Club (Variables (&Var), Clubes (&Club)[D])
{
    int& Opc_F = Var.Opc_F;
    int I, Opc, Opc_Principal;
    bool R, Hay_Clubes, Espacio_Encontrado;

    do 
    {

        Limpiar();
        Dibujo = "Club"; 
        Art();

        cout << CYAN << "Gestión de Clubes Universitarios" << RESET << endl;
        cout << "1: Ver Clubes Registrados" << endl;
        cout << "2: Añadir Nuevo Club" << endl;
        cout << "3: Salir" << endl;

        Opc_F = 3;
        cout << endl;
        cout << "Ingrese Opción: ";
        Opc_Principal = Opc_Menu(Opc_F);

        if (Opc_Principal == 1)
        {

            Hay_Clubes = false;

            for (I = 0; I < D; I++)
            {

                if (Club[I].Nombre != "" && Club[I].Activo == true)
                {

                    Hay_Clubes = true;

                    do 
                    {

                        Limpiar();
                        Dibujo = "Club"; 
                        Art();

                        cout << CYAN << "Visualización de Club #" << I + 1 << RESET << endl;
                        cout << YELLOW << "Nombre: " << Club[I].Nombre << RESET << endl;
                        cout << "Descripción: " << Club[I].Descripcion << endl;
                        cout << "Miembros Inscritos: " << Club[I].Miembros_Inscritos.size() << endl;
                        cout << "Capacidad Máxima: " << Club[I].Capacidad_Maxima << endl;
                        cout << "Horarios: " << Club[I].Horarios_Disponibles << endl;
                        
                        cout << endl;
                        cout << "1: Modificar club" << endl;
                        cout << "2: Eliminar club" << endl;
                        cout << "3: Siguiente" << endl;
                        cout << "4: Salir al menú" << endl;

                        Opc_F = 4;
                        cout << "Ingrese opción: ";
                        Opc = Opc_Menu(Opc_F);

                        if (Opc == 1)
                        {

                            Limpiar(); Dibujo = "Club"; Art();
                            cout << "Nuevo nombre: ";
                            Club[I].Nombre = Palabra();

                            Limpiar(); Dibujo = "Club"; Art();
                            cout << "Nueva descripción: ";
                            getline(cin >> ws, Club[I].Descripcion);

                            Limpiar(); Dibujo = "Club"; Art();
                            cout << "Nueva capacidad máxima (10-100): ";
                            cin >> Club[I].Capacidad_Maxima;

                            Limpiar(); Dibujo = "Club"; Art();
                            cout << "Nuevos horarios: ";
                            getline(cin >> ws, Club[I].Horarios_Disponibles);

                            cout << GREEN << "Información actualizada correctamente" << RESET << endl;
                            Continuar();
                        }

                        if (Opc == 2)
                        {

                            Limpiar(); Dibujo = "Club"; Art();
                            cout << RED << "¿Seguro que desea eliminar este club? 1: Sí / 0: No : " << RESET;
                            R = Opc_Bool();

                            if (R == 1)
                            {

                                Club[I].Nombre = "";
                                Club[I].Descripcion = "";
                                Club[I].Horarios_Disponibles = "";
                                Club[I].Capacidad_Maxima = 0;
                                Club[I].Activo = false;
                                Club[I].Miembros_Inscritos.clear();

                                cout << RED << "Club eliminado correctamente" << RESET << endl;
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

            if (Hay_Clubes == false)
            {

                Limpiar();
                Dibujo = "Club"; 
                Art();
                cout << RED << "No hay clubes registrados en el sistema" << RESET << endl;
                Continue();
            }

        }

        if (Opc_Principal == 2)
        {

            Espacio_Encontrado = false;

            for (I = 0; I < D; I++)
            {

                if (Club[I].Nombre == "")
                {

                    Limpiar(); Dibujo = "Club"; Art();
                    cout << YELLOW << "Registro de Nuevo Club" << RESET << endl;
                    cout << "Nombre: ";
                    Club[I].Nombre = Palabra();

                    Limpiar(); Dibujo = "Club"; Art();
                    cout << "Descripción: ";
                    getline(cin >> ws, Club[I].Descripcion);

                    Limpiar(); Dibujo = "Club"; Art();
                    cout << "Capacidad Máxima 10-100: ";
                    cin >> Club[I].Capacidad_Maxima;

                    Limpiar(); Dibujo = "Club"; Art();
                    cout << "Horarios: ";
                    getline(cin >> ws, Club[I].Horarios_Disponibles);

                    Club[I].Activo = true;
                    Espacio_Encontrado = true;

                    cout << GREEN << "Club añadido correctamente" << RESET << endl;
                    Continuar();
                    break;
                }

            }

            if (Espacio_Encontrado == false)
            {

                Limpiar(); Dibujo = "Club"; Art();
                cout << RED << "Límite de clubes alcanzado" << RESET << endl;
                Continue();
            }

        }

    } while (Opc_Principal != 3);

}