#include "../../Main/Header.h"
using namespace std;

void Gestion_Ayudas (Variables (&Var), Ayuda_Social (&Soci)[D], Ayuda_Animal (&Anim)[D])
{

    int& Opc_F = Var.Opc_F;
    int I, Opc, Opc_Principal, Opc_Ver;
    bool R, Hay_Registros, Espacio_Encontrado;

    do 
    {

        Limpiar(); Dibujo = "Help"; Art();

        cout << CYAN << "Apartado de Ayudas Universitarias" << RESET << endl;
        cout << "1: Ver Ayudas Registradas" << endl;
        cout << "2: Registrar Nueva Ayuda" << endl;
        cout << "3: Salir" << endl;

        Opc_F = 3;
        cout << "Ingrese Opción: ";
        Opc_Principal = Opc_Menu(Opc_F);

        if (Opc_Principal == 1)
        {

            Limpiar();
            Dibujo = "Help"; 
            Art();

            cout << YELLOW << "¿Qué tipo de ayudas desea consultar?" << RESET << endl;
            cout << "1: Ayudas Sociales" << endl;
            cout << "2: Ayudas Animales" << endl;

            Opc_F = 2;
            cout << "Ingrese Opción: ";
            Opc_Ver = Opc_Menu(Opc_F);

            Hay_Registros = false;

            if (Opc_Ver == 1)
            {

                for (I = 0; I < D; I++)
                {

                    if (Soci[I].Nombre_Afectado != "")
                    {

                        Hay_Registros = true;

                        Limpiar();
                        Dibujo = "Help"; 
                        Art();

                        cout << GREEN << "Ayuda Social #" << I + 1 << RESET << endl;
                        cout << "Nombre del afectado: " << Soci[I].Nombre_Afectado << endl;
                        cout << "Razón: " << Soci[I].Razon << endl;
                        cout << "Contacto: " << Soci[I].Contacto << endl;
                        cout << endl;

                        cout << "1: Siguiente" << endl;
                        cout << "0: Salir" << endl;
                        cout << "Ingrese Opción: ";

                        Opc_F = 1;
                        R = Opc_Bool();

                        if (R == 0)
                        {

                            break;

                        }

                    }

                }

            }
            else
            {

                for (I = 0; I < D; I++)
                {

                    if (Anim[I].Nombre_Animal != "")
                    {

                        Hay_Registros = true;

                        Limpiar();
                        Dibujo = "Help"; 
                        Art();

                        cout << PURPLE << "Ayuda Animal #" << I + 1 << RESET << endl;
                        cout << "Nombre del animal: " << Anim[I].Nombre_Animal << endl;
                        cout << "Tipo: " << Anim[I].Tipo_Animal << " | Raza: " << Anim[I].Raza << endl;
                        cout << "Razón: " << Anim[I].Razon << endl;
                        cout << "Contacto: " << Anim[I].Contacto << endl;
                        cout << endl;

                        cout << "1: Siguiente" << endl;
                        cout << "0: Salir" << endl;
                        cout << "Ingrese Opción: ";

                        Opc_F = 1;
                        R = Opc_Bool();

                        if (R == 0)
                        {

                            break;

                        }

                    }

                }

            }

            if (Hay_Registros == false)
            {

                Limpiar();
                Dibujo = "Help"; 
                Art();
                cout << RED << "No hay registros en esta categoría" << RESET << endl;
                Continue();

            }

        }

        if (Opc_Principal == 2)
        {

            Limpiar();
            Dibujo = "Help"; 
            Art();

            cout << YELLOW << "¿Qué tipo de ayuda desea registrar?" << RESET << endl;
            cout << "1: Ayuda Social" << endl;
            cout << "2: Ayuda Animal" << endl;

            cout << "Ingrese Opción: ";
            Opc_F = 2;
            Opc_Ver = Opc_Menu(Opc_F);

            Espacio_Encontrado = false;

            if (Opc_Ver == 1)
            {

                for (I = 0; I < D; I++)
                {

                    if (Soci[I].Nombre_Afectado == "")
                    {

                        Limpiar();
                        Dibujo = "Help"; 
                        Art();
                        cout << CYAN << "Registro de Ayuda Social" << RESET << endl;

                        cout << "Nombre de la persona afectada: ";
                        Soci[I].Nombre_Afectado = Nombre_User();

                        Limpiar(); Dibujo = "Help"; Art();

                        cout << "Razón de la ayuda: ";
                        getline(cin >> ws, Soci[I].Razon);

                        Limpiar(); Dibujo = "Help"; Art();

                        cout << "Información de contacto: ";
                        getline(cin >> ws, Soci[I].Contacto);


                        Limpiar(); Dibujo = "Help"; Art();

                        Espacio_Encontrado = true;
                        cout << GREEN << "Registro Social completado exitosamente" << RESET << endl;
                        Continue();
                        break;

                    }

                }

            }
            else
            {

                for (I = 0; I < D; I++)
                {

                    if (Anim[I].Nombre_Animal == "")
                    {

                        Limpiar();
                        Dibujo = "Help"; 
                        Art();
                        cout << CYAN << "Registro de Ayuda Animal" << RESET << endl;

                        Limpiar(); Dibujo = "Help"; Art();
                        cout << "Nombre del animal: ";
                        Anim[I].Nombre_Animal = Palabra();

                        Limpiar(); Dibujo = "Help"; Art();
                        cout << "Tipo de animal: ";
                        Anim[I].Tipo_Animal = Palabra();

                        Limpiar(); Dibujo = "Help"; Art();
                        cout << "Raza: ";
                        Anim[I].Raza = Palabra();

                        Limpiar(); Dibujo = "Help"; Art();
                        cout << "Razón de la ayuda: ";
                        getline(cin >> ws, Anim[I].Razon);

                        Limpiar(); Dibujo = "Help"; Art();
                        cout << "Información de contacto: ";
                        getline(cin >> ws, Anim[I].Contacto);

                        Limpiar(); Dibujo = "Help"; Art();
                        Espacio_Encontrado = true;
                        cout << GREEN << "Registro Animal completado exitosamente" << RESET << endl;
                        Continue();
                        break;

                    }

                }

            }

            if (Espacio_Encontrado == false)
            {

                Limpiar();
                Dibujo = "Help"; 
                Art();
                cout << RED << "Capacidad máxima de registros alcanzada" << RESET << endl;
                Continue();

            }

        }

    } while (Opc_Principal != 3);

}