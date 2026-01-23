#include "../Main/Header.h"
using namespace std;

void Guardar_Tarjetas(Estudiante (&Est)[D], Profesor (&Prof)[D], Administrativo (&Admin)[D])
{
    int I, J;

    ofstream Tarjetas_Est("Base de datos/Estudiantes/Tarjetas.csv");
    if (Tarjetas_Est.is_open())
    {
        Tarjetas_Est << "Cedula;Nombre;Apellido;0;1;2;3;4;5;6;7;8;9;10;11;12;13;14;15;16;17;18;19;20;21;22;23;24;25;26;27;28;29;30;31;32;33;34;35;36;37;38;39;40;41;42;43;44;45;46;47;48;49" << endl;
        I = 0;
        while (I < D)
        {
            if (Est[I].Nombre != "")
            {
                Tarjetas_Est << Est[I].Cedula << ";";
                Tarjetas_Est << Est[I].Nombre << ";";
                Tarjetas_Est << Est[I].Apellido;
                J = 0;
                while (J < 50)
                {
                    Tarjetas_Est << ";" << Est[I].Tarjeta[J];
                    J++;
                }
                Tarjetas_Est << endl;
            }
            I++;
        }
        Tarjetas_Est.close();
    }

    ofstream Tarjetas_Prof("Base de datos/Docentes/Tarjetas.csv");
    if (Tarjetas_Prof.is_open())
    {
        Tarjetas_Prof << "Cedula;Nombre;Apellido;0;1;2;3;4;5;6;7;8;9;10;11;12;13;14;15;16;17;18;19;20;21;22;23;24;25;26;27;28;29;30;31;32;33;34;35;36;37;38;39;40;41;42;43;44;45;46;47;48;49" << endl;
        I = 0;
        while (I < D)
        {
            if (Prof[I].Nombre != "")
            {
                Tarjetas_Prof << Prof[I].Cedula << ";";
                Tarjetas_Prof << Prof[I].Nombre << ";";
                Tarjetas_Prof << Prof[I].Apellido;
                J = 0;
                while (J < 50)
                {
                    Tarjetas_Prof << ";" << Prof[I].Tarjeta[J];
                    J++;
                }
                Tarjetas_Prof << endl;
            }
            I++;
        }
        Tarjetas_Prof.close();
    }

    ofstream Tarjetas_Admin("Base de datos/Administrativos/Tarjetas.csv");
    if (Tarjetas_Admin.is_open())
    {
        Tarjetas_Admin << "Cedula;Nombre;Apellido;0;1;2;3;4;5;6;7;8;9;10;11;12;13;14;15;16;17;18;19;20;21;22;23;24;25;26;27;28;29;30;31;32;33;34;35;36;37;38;39;40;41;42;43;44;45;46;47;48;49" << endl;
        I = 0;
        while (I < D)
        {
            if (Admin[I].Nombre != "")
            {
                Tarjetas_Admin << Admin[I].Cedula << ";";
                Tarjetas_Admin << Admin[I].Nombre << ";";
                Tarjetas_Admin << Admin[I].Apellido;
                J = 0;
                while (J < 50)
                {
                    Tarjetas_Admin << ";" << Admin[I].Tarjeta[J];
                    J++;
                }
                Tarjetas_Admin << endl;
            }
            I++;
        }
        Tarjetas_Admin.close();
    }
}