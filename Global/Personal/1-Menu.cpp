#include "../../Main/Header.h"
using namespace std;

void Menu_Global_Personal (Variables (&Var), Estudiante (&Est)[D], Profesor (&Prof)[D], Administrativo (&Admin)[D])
{
    int& N = Var.N;
    int& Opc_F = Var.Opc_F;
    int Opc;
    string Nombre;
    bool R;

    Limpiar();
    
    do {
        R = 0;

        if (Rol == "Est")
        {
            Nombre = "Estudiante";
            Opc_F = 7;
        }
        else if (Rol == "Prof")
        {
            Nombre = "Docente";
            Opc_F = 7;
        }
        else if (Rol == "Admin")
        {
            Nombre = "Administrativo";
            Opc_F = 8;
        }

        Limpiar();
        
        Avatares(Var, Est, Prof, Admin);
        cout << CYAN << "Bienvenido a tu perfil personal de " << Nombre << RESET << endl;
        cout << "Aqui puedes gestionar tu informacion, seguridad y preferencias" << endl;
        cout << "1: Información personal" << endl;
        cout << "2: Seguridad" << endl;
        cout << "3: Historial Académico" << endl;
        cout << "4: Modo Oscuro" << endl;
        cout << "5: Avatar" << endl;
        cout << "6: Salud" << endl;
        if (Rol == "Admin")
        {
            cout << "7: Estadísticas" << endl;
        }
        else
        {
            cout << "7: Salir" << endl;
        }
        if (Rol == "Admin")
        {
            cout << "8: Salir" << endl;
        }
        cout << "Ingrese una opción: ";
        Opc = Opc_Menu(Opc_F);

        switch (Opc)
        {
            case 1:
                Datos_Global(Var, Est, Prof, Admin);
                break;
            case 2:
                Seguridad_Global_Personal (Var, Est, Prof, Admin);
                break;
            case 4:
                Oscuro_Global_Personal (Var, Est, Prof, Admin);
                break;
            case 5:
                Avatar_Global_Personal (Var, Est, Prof, Admin);
                break;
            case 6:
                Salud_Global_Personal(Var, Est, Prof, Admin);
                break;
            case 7:
                if (Rol == "Admin")
                {
                    //Algo
                    break;
                }
                else
                {
                    cout << "Cerrando Sesión";
                    R = 1;
                    break;
                }
            case 8:
                if (Rol == "Admin")
                {
                    cout << "Cerrando Sesión";
                    R = 1;
                    break;    
                }
        }

    } while (R != 1);
}