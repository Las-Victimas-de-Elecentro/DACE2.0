#include "../../Main/Header.h"
using namespace std;

void Avatar_Global_Personal (Variables (&Var), Estudiante (&Est)[D], Profesor (&Prof)[D], Administrativo (&Admin)[D])
{
    int& N = Var.N;
    int& Opc_F = Var.Opc_F;

    int Opc;
    bool Opc2;
    string Avatar;

    do {
        Opc_F = 12;
        Limpiar();
        Avatares(Var, Est, Prof, Admin);
        cout << "Gestión de avatar" << endl;
        cout << "Puedes seleccionar un avatar o dejar el predeterminado." << endl;
        cout << "Seleccione una opción" << endl;
        cout << "1: Dinosaurio" << endl;
        cout << "2: Pizza" << endl;
        cout << "3: Gato" << endl;
        cout << "4: Perro" << endl;
        cout << "5: Lapiz" << endl;
        cout << "6: Planta" << endl;
        cout << "7: Cafe" << endl;
        cout << "8: Ninja" << endl;
        cout << "9: Dona" << endl;
        cout << "10: Balon" << endl;
        cout << "11: Predeterminado" << endl;
        cout << "12: Salir" << endl;
        cout << "Ingrese: ";
        Opc = Opc_Menu(Opc_F);

        if (Opc != 12)
        {
            cout << "¿Estás seguro de que quieres usar este avatar? Ingrese 1:Sí / 0:No : ";
            Opc2 = Opc_Bool();
        }

        if (Opc2 == 1)
        {
            switch(Opc)
            {
                case 1:
                    Avatar = "Dinosaurio";
                    cout << GREEN << "Tu nuevo avatar es: Dinosaurio" << RESET << endl;
                    Continuar();
                    break;
                case 2:
                    Avatar = "Pizza";
                    cout << GREEN << "Tu nuevo avatar es: Pizza" << RESET << endl;
                    Continuar();
                    break;
                case 3:
                    Avatar = "Gato";
                    cout << GREEN << "Tu nuevo avatar es: Gato" << RESET << endl;
                    Continuar();
                    break;
                case 4:
                    Avatar = "Perro";
                    cout << GREEN << "Tu nuevo avatar es: Perro" << RESET << endl;
                    Continuar();
                    break;
                case 5:
                    Avatar = "Lapiz";
                    cout << GREEN << "Tu nuevo avatar es: Lapiz" << RESET << endl;
                    Continuar();
                    break;
                case 6:
                    Avatar = "Planta";
                    cout << GREEN << "Tu nuevo avatar es: Planta" << RESET << endl;
                    Continuar();
                    break;
                case 7:
                    Avatar = "Cafe";
                    cout << GREEN << "Tu nuevo avatar es: Cafe" << RESET << endl;
                    Continuar();
                    break;
                case 8:
                    Avatar = "Ninja";
                    cout << GREEN << "Tu nuevo avatar es: Ninja" << RESET << endl;
                    Continuar();
                    break;
                case 9:
                    Avatar = "Dona";
                    cout << GREEN << "Tu nuevo avatar es: Dona" << RESET << endl;
                    Continuar();
                    break;
                case 10:
                    Avatar = "Balon";
                    cout << GREEN << "Tu nuevo avatar es: Balon" << RESET << endl;
                    Continuar();
                    break;
                case 11:
                    Avatar = "Default";
                    cout << GREEN << "Avatar predeterminado" << RESET << endl;
                    Continuar();
                    break;
            }

            if (Rol == "Est")
            {
                Est[N].Avatar = Avatar;
            }
            else if (Rol == "Prof")
            {
                Prof[N].Avatar = Avatar;
            }
            else if (Rol == "Admin")
            {
                Admin[N].Avatar = Avatar;
            } 

            Guardar (Var, Est, Prof, Admin);
        }
        else
        {
            cout << RED << "Cambio de avatar cancelados" << RESET << endl;
            Continuar();
        }

    } while (Opc != 12);
}