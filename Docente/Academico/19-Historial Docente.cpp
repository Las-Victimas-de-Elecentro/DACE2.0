#include "../../Main/Header.h"
using namespace std;

void Historial_Labor_Docente (Variables (&Var), Clase (&Class)[D], Profesor (&Prof)[D])
{
    int& N = Var.N;
    int I, Opc;
    bool Hay_Clases = false;

    Limpiar();
    Dibujo = "Empleado"; 
    Art();

    for (I = 0; I < D; I++)
    {

        if (Class[I].Nombre_Profesor == Prof[N].Nombre && Class[I].Periodo != "")
        {

            Hay_Clases = true;

            do 
            {

                Limpiar();
                Dibujo = "Empleado"; 
                Art();

                cout << YELLOW << "Historial Labor Docente" << RESET << endl;
                cout << "Materia: " << CYAN << Class[I].Nombre_Materia << RESET << endl;
                cout << "Código: " << Class[I].Codigo_Materia << endl;
                cout << "Período: " << Class[I].Periodo << endl;
                cout << "Sección: " << Class[I].Seccion << endl;
                cout << "Estudiantes inscritos: " << Class[I].Cant_Estudiantes << endl;

                cout << "Horario Clase 1:" << endl;
                cout << "Día: " << Class[I].Class1.Dia << " (" << Class[I].Class1.Hora_Inicio << " - " << Class[I].Class1.Hora_Fin << ")" << endl;
                cout << "Aula: " << Class[I].Class1.Aula << endl;
                
                if (Class[I].Class2.Dia != "")
                {

                    cout << "Horario Clase 2:" << endl;
                    cout << "Día: " << Class[I].Class2.Dia << " (" << Class[I].Class2.Hora_Inicio << " - " << Class[I].Class2.Hora_Fin << ")" << endl;
                    cout << "Aula: " << Class[I].Class2.Aula << endl;
                }

                cout << endl;
                cout << "1: Ver Siguiente Materia" << endl;
                cout << "0: Salir" << endl;

                cout << "Ingrese opción: ";
                Opc = Opc_Bool();

                if (Opc == 1)
                {

                    break;
                }

                if (Opc == 0)
                {

                    return;
                }

            } while (Opc != 1);

        }

    }

    if (Hay_Clases == false)
    {

        Limpiar();
        Dibujo = "Empleado"; 
        Art();
        cout << RED << "No tienes materias impartidas en tu historial actualmente" << RESET << endl;
        Continue();
    }

    if (Hay_Clases == true)
    {

        cout << YELLOW << "Has revisado todas tus materias impartidas" << RESET << endl;
        Continue();
    }

}