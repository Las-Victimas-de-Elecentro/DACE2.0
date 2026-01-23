#include "../../Main/Header.h"
using namespace std;

void Oscuro_Global_Personal (Variables (&Var), Estudiante (&Est)[D], Profesor (&Prof)[D], Administrativo (&Admin)[D])
{
    int& N = Var.N;

    bool Opc;

    do {
        Limpiar();
        Dibujo = "Theme"; Art();
        cout << "Gestión de modo oscuro" << endl;
        cout << "Aquí puedes cambiar la apariencia visual" << endl;

        switch (Oscuro)
        {
            case 0:
                cout << "El Modo Oscuro está Activado. ¿Desea activar el Modo Claro? Ingrese 1:Sí / 0:No : ";
                Opc = Opc_Bool();
                if (Opc == 1)
                {
                    cout << GREEN << "Modo Claro activado" << RESET << endl;
                    Continuar();
                    Oscuro = 1;

                    if (Rol == "Est")
                    {
                        Est[N].Oscuro = 1;
                    }
                    else if (Rol == "Prof")
                    {
                        Prof[N].Oscuro = 1;
                    }
                    else if (Rol == "Admin")
                    {
                        Admin[N].Oscuro = 1;
                    } 

                    Guardar (Var, Est, Prof, Admin);
                }
                break;
            default:
                cout << "El Modo Claro está Activado. ¿Desea activar el Modo Oscuro? Ingrese 1:Sí / 0:No) : ";
                Opc = Opc_Bool();
                if (Opc == 1)
                {
                    cout << GREEN << "Modo Oscuro activado" << RESET << endl;
                    Continuar();
                    Oscuro = 0;

                    if (Rol == "Est")
                    {
                        Est[N].Oscuro = 0;
                    }
                    else if (Rol == "Prof")
                    {
                        Prof[N].Oscuro = 0;
                    }
                    else if (Rol == "Admin")
                    {
                        Admin[N].Oscuro = 0;
                    } 

                    Guardar (Var, Est, Prof, Admin);
                }
                break;
        }

    } while (Opc == 1);
}