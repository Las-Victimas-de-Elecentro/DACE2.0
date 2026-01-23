#include "../Main/Header.h"
#include <ctime>
using namespace std;

void Generar_Tarjeta (Variables (&Var), Estudiante (&Est)[D], Profesor (&Prof)[D], Administrativo (&Admin)[D])
{
    int& N = Var.N;
    int I, Numero;

    srand(time(NULL));

    for (I = 0 ; I < 50 ; I++) 
    {
        Numero = rand() % 90 + 10; 

        if (Rol == "Est")
        {
            Est[N].Tarjeta[I] = Numero;
        }
        else if (Rol == "Prof")
        {
            Prof[N].Tarjeta[I] = Numero;
        }
        else if (Rol == "Admin")
        {
            Admin[N].Tarjeta[I] = Numero;
        }
    }
}