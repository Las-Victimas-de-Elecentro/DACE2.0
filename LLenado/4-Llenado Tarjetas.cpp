#include "../Main/Header.h"
#include <ctime>
using namespace std;

void Llenado_Tarjetas (Profesor (&Prof)[D], Administrativo (&Admin)[D])
{
    int I, J;
    srand(time(NULL));

    I = 0;
    while (I < 31)
    {
        for (J = 0; J < 50; J++)
        {
            Prof[I].Tarjeta[J] = rand() % 90 + 10;
        }
        I++;
    }

    I = 0;
    while (I < 4)
    {
        for (J = 0; J < 50; J++)
        {
            Admin[I].Tarjeta[J] = rand() % 90 + 10;
        }
        I++;
    }
}