#include "../../Main/Header.h"
using namespace std;

void Seguridad_Global_Personal (Usuario (&User)[500], int &N, int Opc_F, string Rol)
{
    int Opc;
    bool Opc2, R;
    string Password, Correo;

    Opc_F = 2;

    Limpiar();

    cout << "Gestión de seguridad" << endl;
    cout << "Aquí puedes cambiar tu contraseña o actualizar tu correo de contacto" << endl;
    do {
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
                    cout << "Contraseña actualizada con éxito" << endl;
                    break;
                default:
                    cout << "Correo actualizado con éxito" << endl;
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
            cout << "Cambios de seguridad cancelados" << endl;
        }

        cout << "¿Desea cambiar otro dato de seguridad? Ingrese 1:Sí, 0:No : ";
        R = Opc_Bool();

    } while (R == 1);
}