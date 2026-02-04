#include "../../Main/Header.h"
using namespace std;

void Menu_Global_Personal (Variables (&Var), Estudiante (&Est)[D], Profesor (&Prof)[D], Administrativo (&Admin)[D], Clase (&Class)[D], Becas (&Beca)[D])
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
            Opc_F = 7;
        }

        Limpiar();
        
        Avatares(Var, Est, Prof, Admin);
        cout << CYAN << "Bienvenido a tu perfil personal de " << Nombre << RESET << endl;
        cout << "Aqui puedes gestionar tu informacion, seguridad y preferencias" << endl;
        cout << "1: Información personal" << endl;
        cout << "2: Seguridad" << endl;

        if (Rol == "Admin")
        {
            cout << "3: Estadísticas" << endl;
        }
        else
        {
            cout << "3: Historial Académico" << endl;
        }

        cout << "4: Modo Oscuro" << endl;
        cout << "5: Avatar" << endl;
        cout << "6: Salud" << endl;

        if (Rol == "Admin" || Rol == "Prof")
        {
            cout << "7: Salir" << endl;
        }
        else
        {
            cout << "7: Becas" << endl;
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
            case 3:
                if (Rol == "Prof")
                {
                    Historial_Labor_Docente (Var, Class, Prof);
                }
                else if (Rol == "Admin")
                {
                    Estadisticas (Var, Admin, Prof, Est);
                    break;
                }
                else
                {
                    Historial (Var, Est);
                }
                break;
            case 4:
                Oscuro_Global_Personal (Var, Est, Prof, Admin);
                break;
            case 5:
                Avatar_Global_Personal (Var, Est, Prof, Admin);
                break;
            case 6:
                Salud_Global_Personal (Var, Est, Prof, Admin);
                break;
            case 7:
                if (Rol == "Admin" || Rol == "Prof")
                {
                    cout << "Cerrando Sesión";
                    R = 1;
                    break;     
                }
                else
                {
                    Registrar_Becas (Var, Est, Beca);
                    break;
                }
        }

    } while (R != 1);
}