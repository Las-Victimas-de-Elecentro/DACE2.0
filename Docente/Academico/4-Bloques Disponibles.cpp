#include "../../Main/Header.h"
using namespace std;

void Bloques_Disponibles (Bloque_Horario (&List)[48])
{
    int I = 0;

    cout << CYAN << "Bloques disponibles" << RESET << endl;
    cout << endl;
    for (I = 0 ; I < 48 ; I++)
    {
        if (I > 0 && List[I].Dia != List[I - 1].Dia)
        {
            cout << endl;
        }

        cout << CYAN << "ID: " << RESET << List[I].ID_Bloque << " | " << List[I].Dia << " " << List[I].Hora_Inicio << "-" << List[I].Hora_Fin << endl;

    }
}