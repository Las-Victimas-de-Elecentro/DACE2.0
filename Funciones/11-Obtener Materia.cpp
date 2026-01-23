#include "../Main/Header.h"
using namespace std;

string Obtener_Materia (string Texto, int Seleccion) 
{
    string Encontrada = "";
    int Cont = 1;
    
    for (int i = 0; i < Texto.length(); i++) 
    {
        if (Texto[i] == ',') 
        {
            Cont++;
            if (Cont > Seleccion) break;
        } 
        else if (Cont == Seleccion) 
        {
            if (!(Encontrada.empty() && Texto[i] == ' ')) 
            {
                Encontrada += Texto[i];
            }
        }
    }
    return Encontrada;
}