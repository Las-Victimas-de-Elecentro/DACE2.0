#include "../../Main/Header.h"
using namespace std;

void Mod_Producto (Variables (&Var), Market_Place (&MP)[D], Comida_MP (&C_MP)[D], Articulos_MP (&A_MP)[D], Servicios_MP (&S_MP)[D], Estudiante (&Est)[D], Profesor (&Prof)[D], Administrativo (&Admin)[D])
{
    int& N = Var.N;
    int& Opc_F = Var.Opc_F;
    int I, J, Opc, Cont, Opc_M, M = -1;

    for (J = 0; J < D; J++) 
    {
        if (MP[J].Cedula == Est[N].Cedula) 
        {
            M = J;
            break;
        }
    }

    do 
    {
        Limpiar();
        Dibujo = "Tienda"; Art();
        cout << CYAN << "Gestionar sus publicaciones" << RESET << endl;
        cout << "¿Que desea editar?" << endl;
        cout << "1: Comida" << endl;
        cout << "2: Articulos" << endl;
        cout << "3: Servicios" << endl;
        cout << "4: Salir" << endl;
        cout << "Ingrese area: ";

        Opc_F = 4;
        Opc = Opc_Menu(Opc_F);

        if (Opc == 4) 
        {
            break;
        }

        Cont = -1;

        for (I = 0; I < D; I++) 
        {
            bool es_mio = false;
            
            if (Opc == 1 && C_MP[I].Cedula == Est[N].Cedula && C_MP[I].Cedula != 0) 
            {
                es_mio = true;
            }

            else if (Opc == 2 && A_MP[I].Cedula == Est[N].Cedula && A_MP[I].Cedula != 0) 
            {
                es_mio = true;
            }

            else if (Opc == 3 && S_MP[I].Cedula == Est[N].Cedula && S_MP[I].Cedula != 0) 
            {
                es_mio = true;
            }

            if (es_mio)
            {
                Cont++;
                Limpiar();
                
                if (Opc == 1) 
                {
                    Dibujo = "Comidas"; Art();
                    cout << YELLOW << "Producto: " << C_MP[I].Producto << RESET << endl;
                    cout << "Stock Actual: " << C_MP[I].Stock << " | Precio: " << C_MP[I].Precio << "$" << endl << endl;
                } 

                else if (Opc == 2) 
                {
                    Dibujo = "Articulos"; Art();
                    cout << YELLOW << "Producto: " << A_MP[I].Producto << RESET << endl;
                    cout << "Stock Actual: " << A_MP[I].Stock << " | Precio: " << A_MP[I].Precio << "$" << endl << endl;
                } 

                else 
                {
                    Dibujo = "Servicios"; Art();
                    cout << YELLOW << "Servicio: " << S_MP[I].Producto << RESET << endl;
                    cout << "Disponibilidad: " << (S_MP[I].Disp ? "Si" : "No") << " | Precio: " << S_MP[I].Precio << "$" << endl << endl;
                }

                cout << "1: Modificar datos" << endl;
                cout << "2: Eliminar publicacion" << endl;
                cout << "3: Ver siguiente" << endl;
                cout << "4: Volver al menu" << endl;
                cout << "Ingrese: ";

                Opc_F = 4;
                Opc_M = Opc_Menu(Opc_F);

                if (Opc_M == 1) 
                {
                    if (Opc == 1) 
                    {
                        Limpiar();
                        Dibujo = "Tienda"; Art();
                        cout << "Nuevo nombre: ";
                        C_MP[I].Producto = Palabra();

                        Limpiar();
                        Dibujo = "Tienda"; Art();
                        cout << "Nuevo Stock 1-25: ";
                        C_MP[I].Stock = Entero();

                        while (C_MP[I].Stock < 1 || C_MP[I].Stock > 25) 
                        {
                            Limpiar();
                            Dibujo = "Tienda"; Art();
                            cout << RED << "Rango invalido" << RESET << endl;
                            cout << "Ingrese nuevamente: ";
                            C_MP[I].Stock = Entero();
                        }

                        Limpiar();
                        Dibujo = "Tienda"; Art();
                        cout << "Nuevo Precio: ";
                        C_MP[I].Precio = Real();
                    } 

                    else if (Opc == 2) 
                    {
                        Limpiar();
                        Dibujo = "Tienda"; Art();
                        cout << "Nuevo nombre: ";
                        A_MP[I].Producto = Palabra();

                        Limpiar();
                        Dibujo = "Tienda"; Art();
                        cout << "Nuevo Stock 1-25: ";
                        A_MP[I].Stock = Entero();

                        while (A_MP[I].Stock < 1 || A_MP[I].Stock > 25) 
                        {
                            Limpiar();
                            Dibujo = "Tienda"; Art();
                            cout << RED << "Rango invalido" << RESET << endl;
                            cout << "Ingrese nuevamente: ";
                            A_MP[I].Stock = Entero();
                        }

                        Limpiar();
                        Dibujo = "Tienda"; Art();
                        cout << "Nuevo Precio: ";
                        A_MP[I].Precio = Real();
                    } 

                    else 
                    {
                        Limpiar();
                        Dibujo = "Tienda"; Art();
                        cout << "Nuevo nombre: ";
                        S_MP[I].Producto = Palabra();

                        Limpiar();
                        Dibujo = "Tienda"; Art();
                        cout << "¿Cual es su disponibilidad? Ingrese: 1: Si hay / 0: No hay : ";
                        S_MP[I].Disp = Opc_Bool();

                        Limpiar();
                        Dibujo = "Tienda"; Art();
                        cout << "Nuevo Precio: ";
                        S_MP[I].Precio = Real();
                    }

                    Guardar_MarketPlace(MP, C_MP, A_MP, S_MP);
                    cout << endl << GREEN << "Cambios guardados exitosamente" << RESET << endl;
                    Continue();
                }

                else if (Opc_M == 2) 
                {
                    cout << endl << RED << "¿Seguro que desea eliminarlo? Ingrese: 1:Si / 0:No : " << RESET;

                    if (Opc_Bool() == 1) 
                    {
                        for (int K = I; K < D - 1; K++) 
                        {
                            if (Opc == 1) 
                            {
                                C_MP[K] = C_MP[K + 1];
                            }

                            else if (Opc == 2) 
                            {
                                A_MP[K] = A_MP[K + 1];
                            }

                            else 
                            {
                                S_MP[K] = S_MP[K + 1];
                            }
                        }

                        if (Opc == 1) 
                        {
                            C_MP[D-1] = {};
                        }

                        else if (Opc == 2) 
                        {
                            A_MP[D-1] = {};
                        }

                        else 
                        {
                            S_MP[D-1] = {};
                        }

                        Guardar_MarketPlace(MP, C_MP, A_MP, S_MP);
                        cout << GREEN << "Publicacion eliminada correctamente" << RESET << endl;
                        Continue();
                        I--; 
                    }
                }

                else if (Opc_M == 4) 
                {
                    break; 
                }
            }
        }

        if (Cont == -1 && Opc != 4) 
        {
            cout << endl << RED << "No tienes productos publicados en esta categoria" << RESET << endl;
            Continue();
        }

    } while (Opc != 4);
}