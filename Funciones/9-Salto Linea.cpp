#include "../Main/Header.h"
using namespace std;

void Salto_Linea (string Texto)
{
    int I;

    if (Texto == "" || Texto == " ")
    {
        cout << "Ninguna";
        return;
    }

    for (I = 0; I < Texto.length(); I++)
    {
        if (Texto[I] == ',') {
            cout << "\n";
            
            if (I + 1 < Texto.length() && Texto[I + 1] == ' ')
            {
                I++; 
            }
        } 
        else
        {
            cout << Texto[I];
        }
    }
}