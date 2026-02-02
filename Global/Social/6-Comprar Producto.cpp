#include "../../Main/Header.h"
using namespace std;

void Comp_Producto (Variables (&Var), Market_Place (&MP)[D], Comida_MP (&C_MP)[D], Articulos_MP (&A_MP)[D], Servicios_MP (&S_MP)[D], Estudiante (&Est)[D], Profesor (&Prof)[D], Administrativo (&Admin)[D])
{
    int& N = Var.N;
    int& Opc_F = Var.Opc_F;
    int I, J, Opc, Unidades, Cont, Vend, Opc_C, Comp = -1;
    int Opc_Pago, Referencia;
    bool Pago_Valid = false;
    double Egresos = 0, Ingresos = 0, Precio = 0;
    float Precios;
    long Cedula_V;
    string DTB, Prod;

    for (J = 0; J < D; J++) 
    {
        if (MP[J].Cedula == Est[N].Cedula) 
        {
            Comp = J;
            break;
        }
    }

    do 
    {
        Limpiar();
        Dibujo = "Tienda"; Art();

        cout << CYAN << "Seccion de compras" << RESET << endl;
        cout << "1: Comida" << endl;
        cout << "2: Articulos" << endl;
        cout << "3: Servicios" << endl;
        cout << "4: Salir" << endl;
        cout << "Ingrese: ";

        Opc_F = 4;
        Opc = Opc_Menu(Opc_F);

        if (Opc == 4) break;

        Cont = -1;

        for (I = 0; I < D; I++) 
        {
            bool disponible = false;

            if (Opc == 1 && C_MP[I].Stock > 0 && C_MP[I].Cedula != 0 && C_MP[I].Cedula != Est[N].Cedula) disponible = true;
            else if (Opc == 2 && A_MP[I].Stock > 0 && A_MP[I].Cedula != 0 && A_MP[I].Cedula != Est[N].Cedula) disponible = true;
            else if (Opc == 3 && S_MP[I].Disp == 1 && S_MP[I].Cedula != 0 && S_MP[I].Cedula != Est[N].Cedula) disponible = true;

            if (disponible)
            {
                Cont++;
                Limpiar();
                
                if (Opc == 1) 
                {
                    Dibujo = "Comidas"; Art();
                    cout << CYAN << "Producto: " << C_MP[I].Producto << RESET << endl;
                    cout << "Vendedor: " << C_MP[I].Vendedor << " | Stock: " << C_MP[I].Stock << " | Precio: " << C_MP[I].Precio << "$" << endl << endl;
                } 
                else if (Opc == 2) 
                {
                    Dibujo = "Articulos"; Art();
                    cout << CYAN << "Producto: " << A_MP[I].Producto << RESET << endl;
                    cout << "Vendedor: " << A_MP[I].Vendedor << " | Stock: " << A_MP[I].Stock << " | Precio: " << A_MP[I].Precio << "$" << endl << endl;
                } 
                else 
                {
                    Dibujo = "Servicios"; Art();
                    cout << CYAN << "Servicio: " << S_MP[I].Producto << RESET << endl;
                    cout << "Vendedor: " << S_MP[I].Vendedor << " | Precio: " << S_MP[I].Precio << "$" << endl << endl;
                }

                cout << "1: Comprar/Contratar" << endl;
                cout << "2: Ver siguiente" << endl;
                cout << "3: Salir" << endl;
                cout << "Ingrese: ";

                Opc_F = 3;
                Opc_C = Opc_Menu(Opc_F);

                if (Opc_C == 1)
                {
                    Vend = -1;
                    if (Opc == 1) Cedula_V = C_MP[I].Cedula;
                    else if (Opc == 2) Cedula_V = A_MP[I].Cedula;
                    else Cedula_V = S_MP[I].Cedula;
                    
                    for(J = 0; J < D; J++) 
                    {
                        if(MP[J].Cedula == Cedula_V) { Vend = J; break; }
                    }

                    if (Opc != 3) 
                    {
                        cout << "Ingrese unidades: ";
                        Unidades = Entero();
                        int stock_actual = (Opc == 1) ? C_MP[I].Stock : A_MP[I].Stock;

                        while (Unidades < 1 || Unidades > stock_actual) 
                        {
                            cout << RED << "Cantidad invalida" << RESET << endl;
                            cout << "Ingrese nuevamente: ";
                            Unidades = Entero();
                        }
                        Precios = (Opc == 1) ? C_MP[I].Precio : A_MP[I].Precio;
                        Precio = Precios * Unidades;
                    } 
                    else 
                    {
                        Unidades = 1;
                        Precio = S_MP[I].Precio;
                    }

                    DTB = (Opc == 1) ? C_MP[I].Datos_Bancarios : (Opc == 2) ? A_MP[I].Datos_Bancarios : S_MP[I].Datos_Bancarios;

                    Limpiar();
                    Dibujo = "Money"; Art();
                    cout << YELLOW << "Metodos de pago disponibles" << RESET << endl;
                    cout << "1: Transferencia Bancaria" << endl;
                    cout << "2: Pago Movil" << endl;
                    cout << "Seleccione: ";
                    Opc_F = 2;
                    Opc_Pago = Opc_Menu(Opc_F);

                    Limpiar();
                    Dibujo = "Money"; Art();
                    cout << "Datos del vendedor:" << endl;
                    cout << GREEN << DTB << RESET << endl;
                    cout << "Ingrese numero de Referencia: ";
                    Referencia = Entero();

                    Limpiar();
                    Dibujo = "Money"; Art();
                    cout << YELLOW << "Se ha efectuado el pago de " << Precio << "$. Muchas gracias." << RESET << endl;
                    Pago_Valid = true;
                    Ingresos = Precio;
                    Egresos = Precio;
                    
                    if (Pago_Valid) 
                    {
                        MP[Vend].Ingresos += Ingresos;
                        MP[Vend].Boveda += Ingresos;
                        MP[Comp].Boveda -= Egresos;
                        MP[Comp].Egresos += Egresos;

                        if (Opc == 1) { C_MP[I].Stock -= Unidades; Prod = C_MP[I].Producto; }
                        else if (Opc == 2) { A_MP[I].Stock -= Unidades; Prod = A_MP[I].Producto; }
                        else { Prod = S_MP[I].Producto; }

                        MP[Vend].Bitacora += ", Venta: " + Prod + " x" + to_string(Unidades) + " | Comprador: " + MP[Comp].Usuario;
                        MP[Comp].Bitacora += ", Compra: " + Prod + " x" + to_string(Unidades) + " | Vendedor: " + MP[Vend].Usuario;

                        Guardar_MarketPlace(MP, C_MP, A_MP, S_MP);
                        cout << GREEN << "Procesado con exito." << RESET << endl;
                        Continue();
                    }
                    break;
                }
                else if (Opc_C == 3) break;
            }
        }

        if (Cont == -1 && Opc != 4) 
        {
            cout << RED << "No hay productos disponibles en esta categoria" << RESET << endl;
            Continue();
        }

    } while (Opc != 4);
}