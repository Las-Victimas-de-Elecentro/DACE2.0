#include "../Main/Header.h"
using namespace std;

void Mostrar_Tarjeta (Variables (&Var), Estudiante (&Est)[D], Profesor (&Prof)[D], Administrativo (&Admin)[D])
{
    int& N = Var.N;
    int Cont = 0, Valor, I, J;

    cout << CYAN << "Aqui esta tu Tarjeta de Coordenadas" << RESET << endl;
    cout << CYAN << "Guardala bien para poder iniciar sesion o recuperar tu contraseña" << RESET << endl << endl;
    
    cout << "    0  1  2  3  4  5  6  7  8  9" << endl; 
    cout << "  ————————————————————————————————" << endl;

    for (I = 0; I < 5; I++) 
    {
        cout << I << " | "; 
        for (J = 0; J < 10; J++) 
        {
            if (Rol == "Est") 
            {
                Valor = Est[N].Tarjeta[Cont];
            }
            else if (Rol == "Prof")
            {
                Valor = Prof[N].Tarjeta[Cont];
            }
            else if (Rol == "Admin")
            {
                Valor = Admin[N].Tarjeta[Cont];
            }

            if (Valor < 10)
            {
                cout << "0"; 
            }

            cout << Valor << " ";
            Cont++;
        }
        cout << endl;
    }
    cout << endl;
}