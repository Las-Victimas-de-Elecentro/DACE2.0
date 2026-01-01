#include "../../Main/Header.h"
using namespace std;

void Avatar_Global_Personal (Usuario (&User)[500], int &N, int Opc_F)
{
    int Opc;
    bool Opc2, R;

    do {
        Opc_F = 11;
        Limpiar();
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
        cout << "Ingrese: ";
        Opc = Opc_Menu(Opc_F);

        cout << "¿Estás seguro de que quieres usar este avatar? Ingrese 1:Sí / 0:No : ";
        Opc2 = Opc_Bool();

        if (Opc2 == 1)
        {
            switch(Opc)
            {
                case 1:
                    User[N].Avatar = "Dinosaurio";
                    cout << GREEN << "Tu nuevo avatar es: Dinosaurio" << RESET << endl;
                    break;
                case 2:
                    User[N].Avatar = "Pizza";
                    cout << GREEN << "Tu nuevo avatar es: Pizza" << RESET << endl;
                    break;
                case 3:
                    User[N].Avatar = "Gato";
                    cout << GREEN << "Tu nuevo avatar es: Gato" << RESET << endl;
                    break;
                case 4:
                    User[N].Avatar = "Perro";
                    cout << GREEN << "Tu nuevo avatar es: Perro" << RESET << endl;
                    break;
                case 5:
                User[N].Avatar = "Lapiz";
                    cout << GREEN << "Tu nuevo avatar es: Lapiz" << RESET << endl;
                    break;
                case 6:
                    User[N].Avatar = "Planta";
                    cout << GREEN << "Tu nuevo avatar es: Planta" << RESET << endl;
                    break;
                case 7:
                    User[N].Avatar = "Cafe";
                    cout << GREEN << "Tu nuevo avatar es: Cafe" << RESET << endl;
                    break;
                case 8:
                    User[N].Avatar = "Ninja";
                    cout << GREEN << "Tu nuevo avatar es: Ninja" << RESET << endl;
                    break;
                case 9:
                    User[N].Avatar = "Dona";
                    cout << GREEN << "Tu nuevo avatar es: Dona" << RESET << endl;
                    break;
                case 10:
                    User[N].Avatar = "Balon";
                    cout << GREEN << "Tu nuevo avatar es: Balon" << RESET << endl;
                    break;
                default:
                    User[N].Avatar = "Default";
                    cout << GREEN << "Avatar predeterminado" << RESET << endl;
                    break;
            }
        }
        else
        {
            cout << RED << "Cambio de avatar cancelados" << RESET << endl;
        }
        
        cout << "¿Quiere cambiar el avatar nuevamente? Ingrese 1:Sí / 0:No : ";
        R = Opc_Bool();

    } while (R == 1);
}