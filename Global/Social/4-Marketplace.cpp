#include "../../Main/Header.h"
using namespace std;

void Marketplace (Variables (&Var), Market_Place (&MP)[D], Comida_MP (&C_MP)[D], Articulos_MP (&A_MP)[D], Servicios_MP (&S_MP)[D], Estudiante (&Est)[D], Profesor (&Prof)[D], Administrativo (&Admin)[D])
{
    int& N = Var.N;
    int& Opc_F = Var.Opc_F;

    int I, Opc;
    string Telefono, Banco, Cedula, Password, Pass;
    bool C_true = false, R;

    Limpiar();
    Dibujo = "Marketplace"; Art();
    cout << CYAN << "Bienvenido al Market Place" << RESET << endl;
    
    for (I = 0; I < D; I++)
    {
        if (MP[I].Cedula == Est[N].Cedula)
        {
            C_true = true;
            cout << "Ingrese su contraseña de Marketplace: ";
            cin >> Password;

            while (Password != MP[I].Password)
            {
                cout << RED << "Contraseña Incorrecta" << RESET << endl;
                cout << "Ingrese nuevamente: ";
                cin >> Password;
            }
            break; 
        }
    }

    if (C_true == false)
    {
        cout << "¿No posee cuenta en el Market Place desea crear una? Ingrese: 1: Si / 0: No : ";
        R = Opc_Bool();

        if (R == true)
        {
            for (I = 0; I < D; I++)
            {
                if (MP[I].Cedula == 0)
                {
                    MP[I].Usuario = Est[N].Nombre;
                    MP[I].Cedula = Est[N].Cedula;
                    MP[I].Contacto = Est[N].Correo;
                    MP[I].Area = Est[N].Carrera;
                    MP[I].Boveda = 0;
                    MP[I].Ingresos = 0;
                    MP[I].Egresos = 0;
                    MP[I].Bitacora = "Cuenta creada";

                    Limpiar();
                    Dibujo = "Marketplace"; Art();
                    cout << CYAN << "Registro de Datos Bancarios" << RESET << endl;
                    
                    cout << "Ingrese su numero de telefono: ";
                    Telefono = to_string(Telefono_User());
                    
                    Limpiar();
                    Dibujo = "Marketplace"; Art();
                    cout << CYAN << "Registro de Datos Bancarios" << RESET << endl;

                    cout << "Ingrese su Banco: ";
                    Banco = Palabra();
                    
                    Limpiar();
                    Dibujo = "Marketplace"; Art();
                    cout << CYAN << "Registro de Datos Bancarios" << RESET << endl;

                    cout << "Cedula para pagos: ";
                    Cedula = to_string(Cedula_User());
                    
                    MP[I].Datos_Bancarios = Telefono + "/" + Banco + "/" + Cedula;

                    Limpiar();
                    Dibujo = "Marketplace"; Art();
                    cout << CYAN << "Registro de Datos Bancarios" << RESET << endl;

                    cout << "Ingrese la contraseña que va a utilizar: ";
                    Pass = Password_User();

                    MP[I].Password = Pass;
                    C_true = true;
                    Guardar_MarketPlace (MP, C_MP, A_MP, S_MP);
                    cout << GREEN << "Cuenta creada con éxito." << RESET << endl;
                    Continue();
                    break;
                }
            }
        }
        else
        {
            return; 
        }
    }

    if (C_true == true)
    {
        do
        {
            Limpiar();
            Dibujo = "Marketplace"; Art();
            cout << CYAN << "Menu Marketplace" << RESET << endl;
            cout << "1: Ingresar un producto" << endl;
            cout << "2: Comprar un producto" << endl;
            cout << "3: Editar un producto" << endl;
            cout << "4: Salir" << endl;
            cout << "Ingrese opción: ";
            Opc_F = 4;
            Opc = Opc_Menu(Opc_F);

            switch (Opc)
            {
                case 1:
                    Ing_Producto (Var, MP, C_MP, A_MP, S_MP, Est, Prof, Admin);
                    break;
                case 2:
                    Comp_Producto (Var, MP, C_MP, A_MP, S_MP, Est, Prof, Admin);
                    break;
                case 3:
                    Mod_Producto (Var, MP, C_MP, A_MP, S_MP, Est, Prof, Admin);
                    break;
            }
        } while (Opc != 4);
    }
}