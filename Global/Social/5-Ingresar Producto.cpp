#include "../../Main/Header.h"
using namespace std;

void Ing_Producto (Variables (&Var), Market_Place (&MP)[D], Comida_MP (&C_MP)[D], Articulos_MP (&A_MP)[D], Servicios_MP (&S_MP)[D], Estudiante (&Est)[D], Profesor (&Prof)[D], Administrativo (&Admin)[D])
{
    int& N = Var.N;
    int& Opc_F = Var.Opc_F;

    int I, J, Opc, M = -1;

    for (J = 0; J < D; J++)
    {
        if (MP[J].Cedula == Est[N].Cedula)
        {
            M = J;
            break;
        }
    }

    do {
        Limpiar();
        Dibujo = "Tienda"; Art();
        cout << CYAN << "Ingrese el tipo de producto" << RESET << endl;
        cout << "1: Comida" << endl;
        cout << "2: Articulos" << endl;
        cout << "3: Servicios" << endl;
        cout << "4: Salir" << endl;
        cout << "Ingrese: ";
        Opc_F = 4;
        Opc = Opc_Menu(Opc_F);

        switch (Opc)
        {
            case 1:
                for (I = 0; I < D; I++)
                {
                    if (C_MP[I].Cedula == 0)
                    {
                        C_MP[I].Vendedor = MP[M].Usuario;
                        C_MP[I].Cedula = MP[M].Cedula;
                        C_MP[I].Contacto = MP[M].Contacto;
                        C_MP[I].Datos_Bancarios = MP[M].Datos_Bancarios;

                        Limpiar();
                        Dibujo = "Comidas"; Art();
                        cout << "Ingrese el producto a vender: ";
                        C_MP[I].Producto = Palabra();

                        Limpiar();
                        Dibujo = "Comidas"; Art();
                        cout << "Ingrese el stock del producto 1-25: ";
                        C_MP[I].Stock = Entero();

                        while (C_MP[I].Stock < 1 || C_MP[I].Stock > 25)
                        {
                            Limpiar();
                            Dibujo = "Comidas"; Art();
                            cout << RED << "Rango de stock erroneo" << RESET << endl;
                            cout << "Ingrese nuevamente: ";
                            C_MP[I].Stock = Entero();
                        }

                        Limpiar();
                        Dibujo = "Comidas"; Art();
                        cout << "Ingrese el precio: ";
                        C_MP[I].Precio = Real();
                        Guardar_MarketPlace (MP, C_MP, A_MP, S_MP);
                        cout << GREEN << "Ahora su producto se encuentra en la seccion de comida del Market Place" << RESET << endl;
                        Continue();
                        break;
                    }
                }
                break;

            case 2:
                for (I = 0; I < D; I++)
                {
                    if (A_MP[I].Cedula == 0)
                    {
                        A_MP[I].Vendedor = MP[M].Usuario;
                        A_MP[I].Cedula = MP[M].Cedula;
                        A_MP[I].Contacto = MP[M].Contacto;
                        A_MP[I].Datos_Bancarios = MP[M].Datos_Bancarios;

                        Limpiar();
                        Dibujo = "Articulos"; Art();
                        cout << "Ingrese el producto a vender: ";
                        A_MP[I].Producto = Palabra();

                        Limpiar();
                        Dibujo = "Articulos"; Art();
                        cout << "Ingrese el stock del producto 1-25: ";
                        A_MP[I].Stock = Entero();

                        while (A_MP[I].Stock < 1 || A_MP[I].Stock > 25)
                        {
                            Limpiar();
                            Dibujo = "Articulos"; Art();
                            cout << RED << "Rango de stock erroneo" << RESET << endl;
                            cout << "Ingrese nuevamente: ";
                            A_MP[I].Stock = Entero();
                        }

                        Limpiar();
                        Dibujo = "Articulos"; Art();
                        cout << "Ingrese el precio: ";
                        A_MP[I].Precio = Real();
                        Guardar_MarketPlace (MP, C_MP, A_MP, S_MP);
                        cout << GREEN << "Ahora su producto se encuentra en la seccion de articulos del Market Place" << RESET << endl;
                        Continue();
                        break;
                    }
                }
                break;

            case 3:
                for (I = 0; I < D; I++)
                {
                    if (S_MP[I].Cedula == 0)
                    {
                        S_MP[I].Vendedor = MP[M].Usuario;
                        S_MP[I].Cedula = MP[M].Cedula;
                        S_MP[I].Contacto = MP[M].Contacto;
                        S_MP[I].Datos_Bancarios = MP[M].Datos_Bancarios;

                        Limpiar();
                        Dibujo = "Servicios"; Art();
                        cout << "Ingrese el servicio a proporcionar: ";
                        S_MP[I].Producto = Palabra();

                        Limpiar();
                        Dibujo = "Servicios"; Art();
                        cout << "¿Cual es su disponibilidad? Ingrese: 1: Si hay / 0: No hay : ";
                        S_MP[I].Disp = Opc_Bool();

                        Limpiar();
                        Dibujo = "Servicios"; Art();
                        cout << "Ingrese el precio: ";
                        S_MP[I].Precio = Real();
                        Guardar_MarketPlace (MP, C_MP, A_MP, S_MP);
                        cout << GREEN << "Ahora su producto se encuentra en la seccion de servicios del Market Place" << RESET << endl;
                        Continue();
                        break;
                    }
                }
                break;
        }

    } while (Opc != 4);
}