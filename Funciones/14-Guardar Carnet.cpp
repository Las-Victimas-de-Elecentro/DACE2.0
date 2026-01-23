#include "../Main/Header.h"
using namespace std;

void Guardar_Carn (Carnet (&Car)[D], Carnetizacion (&Carn)[D])
{
    ofstream Escribir_Est_Jor("Base de datos/Administrativos/Carnet.csv");
    if (Escribir_Est_Jor.is_open())
    {
        Escribir_Est_Jor << "Cedula;Nombre;Apellido;Pago" << endl;
        int C = 0;
        while (C < D)
        {
            if (Carn[C].Est.Cedula != 0)
            {
                Escribir_Est_Jor << Carn[C].Est.Cedula << ";";
                Escribir_Est_Jor << Carn[C].Est.Nombre << ";";
                Escribir_Est_Jor << Carn[C].Est.Apellido << ";";
                Escribir_Est_Jor << Carn[C].Est.Pago << endl;
            }
            C++;
        }
        Escribir_Est_Jor.close();
    }

    ofstream Escribir_Jor("Base de datos/Administrativos/Jornada Carnet.csv");
    if (Escribir_Jor.is_open())
    {
        Escribir_Jor << "Lugar;Carrera;Dia;Mes;Year;Precio;Activo" << endl;
        int CJ = 0;
        while (CJ < D)
        {
            if (Carn[CJ].Lugar != "")
            {
                Escribir_Jor << Carn[CJ].Lugar << ";";
                Escribir_Jor << Carn[CJ].Carrera << ";";
                Escribir_Jor << Carn[CJ].Fecha.Dia << ";";
                Escribir_Jor << Carn[CJ].Fecha.Mes << ";";
                Escribir_Jor << Carn[CJ].Fecha.Year << ";";
                Escribir_Jor << Carn[CJ].Precio << ";";
                Escribir_Jor << Carn[CJ].Activo << endl;
            }
            CJ++;
        }
        Escribir_Jor.close();
    }

    ofstream Escribir_Car("Base de datos/Estudiantes/Carnet.csv");
    if (Escribir_Car.is_open())
    {
        Escribir_Car << "Nombre;Apellido;Cedula;Carrera;Dia;Mes;Year" << endl;
        int CE = 0;
        while (CE < D)
        {
            if (Car[CE].Cedula != 0)
            {
                Escribir_Car << Car[CE].Nombre << ";";
                Escribir_Car << Car[CE].Apellido << ";";
                Escribir_Car << Car[CE].Cedula << ";";
                Escribir_Car << Car[CE].Carrera << ";";
                Escribir_Car << Car[CE].Vencido.Dia << ";";
                Escribir_Car << Car[CE].Vencido.Mes << ";";
                Escribir_Car << Car[CE].Vencido.Year << endl;
            }
            CE++;
        }
        Escribir_Car.close();
    }
}