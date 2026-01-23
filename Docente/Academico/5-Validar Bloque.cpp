#include "../../Main/Header.h"
using namespace std;

bool Validar_Materia (Variables (&Var), Bloque_Horario (&List)[48], Clase (&Class)[D], Profesor (&Prof)[D])
{
    int& N = Var.N;
    int I;
    bool Valid = 1;

    for (I = 0 ; I < D ; I++) 
    {
        if (Class[I].CI_Profesor == Prof[N].Cedula)
        {
            int Cant1 = 0;
            int Cant2 = 0;

            if (Class[I].Class1.Dia == List[I].Dia)
            {
                if (Class[I].Class1.Hora_Inicio == List[I].Hora_Inicio)
                {
                    Cant1++;
                }
                
                if (Class[I].Class1.Hora_Fin == List[I].Hora_Fin)
                {
                    Cant1++;
                }
            }

            if (Class[I].Class2.Dia == List[I].Dia)
            {
                if (Class[I].Class2.Hora_Inicio == List[I].Hora_Inicio)
                {
                    Cant2++;
                }
                
                if (Class[I].Class2.Hora_Fin == List[I].Hora_Fin)
                {
                    Cant2++;
                }
            }
            
            if (Cant1 > 1 || Cant2 > 1)
            {
                Valid = 0;
                break;
            }
        }
    }

    return Valid;
}