#include "../Main/Header.h"
#include <ctime>
using namespace std;

void Llenado_Horario (Bloque_Horario (&List)[48])
{
    
    string dias[6] = {"Lunes", "Martes", "Miércoles", "Jueves", "Viernes", "Sábado"};
    int I, J, ID = 0;
    List[1].ID_Bloque = 1;
    for (I = 0; I < 6; I++)
    {
        for (J = 1; J <= 8; J++)
        {
            List[ID].ID_Bloque = ID;
            List[ID].Dia = dias[I];

            switch (J)
            {
                case 1:
                    List[ID].Hora_Inicio = "07:00"; 
                    List[ID].Hora_Fin = "08:30";
                    break;
                case 2:
                    List[ID].Hora_Inicio = "08:30";
                    List[ID].Hora_Fin = "10:00";
                    break;
                case 3:
                    List[ID].Hora_Inicio = "10:00";
                    List[ID].Hora_Fin = "11:30";
                    break;
                case 4:
                    List[ID].Hora_Inicio = "11:30";
                    List[ID].Hora_Fin = "13:00";
                    break;
                case 5:
                    List[ID].Hora_Inicio = "13:00";
                    List[ID].Hora_Fin = "14:30";
                    break;
                case 6:
                    List[ID].Hora_Inicio = "14:30";
                    List[ID].Hora_Fin = "16:00";
                    break;
                case 7:
                    List[ID].Hora_Inicio = "16:00";
                    List[ID].Hora_Fin = "17:30";
                    break;
                case 8:
                    List[ID].Hora_Inicio = "17:30";
                    List[ID].Hora_Fin = "19:00";
                    break;
            }
            
            ID++;
        }
    }
}