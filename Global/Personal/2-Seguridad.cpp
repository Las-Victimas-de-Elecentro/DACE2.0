#include "../../Main/Header.h"
using namespace std;

void Seguridad_Global_Personal (Variables (&Var), Estudiante (&Est)[D], Profesor (&Prof)[D], Administrativo (&Admin)[D])
{
    int& N = Var.N;
    int& Opc_F = Var.Opc_F;

    int Opc;
    bool Opc2;
    string Password, Correo;

    do {
        Opc_F = 3;

        Limpiar();
        cout << "Sistema: " << Rol;
        Dibujo = "Security"; Art();
        cout << "Gestión de seguridad" << endl;
        cout << "Aquí puedes cambiar tu contraseña o actualizar tu correo de contacto" << endl;
        cout << "Seleccione una opción de seguridad" << endl;
        cout << "1: Cambiar Contraseña" << endl;
        cout << "2: Actualizar Correo" << endl;
        cout << "3: Salir" << endl;
        cout << "Ingrese: ";
        Opc = Opc_Menu(Opc_F);

        switch (Opc)
        {
            case 1:
                cout << "Ingrese la nueva contraseña: ";
                Password = Password_User();
                cout << "¿Estás seguro de que quieres usar esta contraseña? Ingrese 1:Sí / 0:No : ";
                Opc2 = Opc_Bool();
                break;
            case 2:
                cout << "Ingrese el nuevo correo: ";
                Correo = Correo_User();
                cout << "¿Estás seguro de que quieres usar este correo? Ingrese 1:Sí / 0:No : ";
                Opc2 = Opc_Bool();
                break;
        }

        if (Opc2 == true)
        {
            switch (Opc)
            {
                case 1:
                    cout << GREEN << "Contraseña actualizada con éxito" << RESET << endl;

                    if (Rol == "Est")
                    {
                        Est[N].Password = Password;
                    }
                    else if (Rol == "Prof")
                    {
                        Prof[N].Password = Password;
                    }
                    else if (Rol == "Admin")
                    {
                        Admin[N].Password = Password;
                    } 

                    Guardar (Var, Est, Prof, Admin);
                    Continuar();
                    break;
                case 2:
                    cout << GREEN << "Correo actualizado con éxito" << RESET << endl;

                    if (Rol == "Est")
                    {
                        Est[N].Correo = Correo;
                    }
                    else if (Rol == "Prof")
                    {
                        Prof[N].Correo = Correo;
                    }
                    else if (Rol == "Admin")
                    {
                        Admin[N].Correo = Correo;
                    } 

                    Guardar (Var, Est, Prof, Admin);
                    Continuar();
                    break;
            }
        }
        
        if (Opc2 == false && Opc != 3)
        {
            cout << RED << "Cambios de seguridad cancelados" << RESET << endl;
            Continuar();
        }

    } while (Opc != 3);
}