#include "../Main/Header.h"
using namespace std;

int Salto_Numerado(string Texto)
{
    int I;
    int Contador = 1;

    if (Texto == "" || Texto == " " || Texto.length() < 2)
    {
        return 0; 
    }

    cout << Contador << ": ";
    for (I = 0; I < Texto.length(); I++)
    {
        if (Texto[I] == ',') 
        {
            Contador++;
            cout << "\n" << Contador << ": ";
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
    return Contador;
}