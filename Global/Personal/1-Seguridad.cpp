#include "../../Main/Header.h"
using namespace std;

void Seguridad_Global_Personal (Usuario (&User)[500], int &N, int Opc_F, string Rol)
{
    int Opc;
    bool Opc2, R;
    string Password, Correo;

    do {
        Opc_F = 2;
        Limpiar();
        Dibujo = "Security"; Art();
        cout << "Gestión de seguridad" << endl;
        cout << "Aquí puedes cambiar tu contraseña o actualizar tu correo de contacto" << endl;
        cout << "Seleccione una opción de seguridad" << endl;
        cout << "1: Cambiar Contraseña" << endl;
        cout << "2: Actualizar Correo" << endl;
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
            default:
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
                    break;
                default:
                    cout << GREEN << "Correo actualizado con éxito" << RESET << endl;
                    break;
            }
            
            if (Rol == "Estudiante")
            {
                User[N].Password = Password;
            }
            else if (Rol == "Profesor")
            {

            }
            else if (Rol == "Admin")
            {
                
            }
        }
        else
        {
            cout << RED << "Cambios de seguridad cancelados" << RESET << endl;
        }

        cout << "¿Desea cambiar otro dato de seguridad? Ingrese 1:Sí, 0:No : ";
        R = Opc_Bool();

    } while (R == 1);
}