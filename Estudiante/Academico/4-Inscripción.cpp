#include "../../Main/Header.h"
using namespace std;

void Inscripcion_Est (Variables (&Var), Estudiante (&Est)[D], Clase (&Class)[D], Clase_Magistral (&Mag)[D], Profesor (&Prof)[D])
{
    int& N = Var.N;
    string& Car = Var.Car;
    int I, J, C, Cont = -1, Cupos;
    bool R = false;
    
    for (I = 0 ; I < D ; I++)
    {
        if (Class[I].Nombre_Materia == Car && Class[I].Nombre_Materia != "")
        {
            Cont++;
            Limpiar();
            Dibujo = "BookTwo"; Art();

            Cupos = 50 - Class[I].Cant_Estudiantes;
            
            cout << "Profesor: " << Class[I].Nombre_Profesor << " " << Class[I].Apellido_Profesor << endl;
            cout << "Sección: " << Class[I].Seccion << endl;
            cout << "Cupos: " << Cupos << endl;
            cout << "Día 1: " << Class[I].Class1.Dia << endl;
            cout << "Hora de inicio: " << Class[I].Class1.Hora_Inicio << endl;
            cout << "Hora que finaliza: " << Class[I].Class1.Hora_Fin << endl;
            cout << "Aula: " << Class[I].Class1.Aula << endl;
            cout << "Día 2: " << Class[I].Class2.Dia << endl;
            cout << "Hora de inicio: " << Class[I].Class2.Hora_Inicio << endl;
            cout << "Hora que finaliza: " << Class[I].Class2.Hora_Fin << endl;
            cout << "Aula: " << Class[I].Class2.Aula << endl;

            if (Class[I].Cant_Estudiantes >= 50)
            {
                cout << RED << "No hay cupos disponibles" << RESET << endl;
                Continue();
            }
            else
            {
                cout << "¿Desea inscribir la materia? 1: Sí / 0: No : ";
                R = Opc_Bool();
                if (R == 1)
                {
                    C = -1;
                    for (J = 0 ; J < D ; J++)
                    {
                        if (Class[I].Est_Class.Nombre[J] == "")
                        {
                            C = J;
                            break;
                        }
                    }
                    if (C != -1)
                    {
                        Class[I].Est_Class.Cedula[C] = Est[N].Cedula;
                        Class[I].Est_Class.Nombre[C] = Est[N].Nombre;
                        Class[I].Est_Class.Apellido[C] = Est[N].Apellido;
                        Class[I].Cant_Estudiantes++;

                        Est[N].Cant_Mat++;
                        if (Est[N].Materias == "") 
                        {
                            Est[N].Materias = Car;
                        } 
                        else 
                        {
                            Est[N].Materias += ", " + Car;
                        }

                        cout << GREEN << "Inscrito con éxito." << RESET << endl;
                        Guardar_Ins(Class, Est, Mag);
                        Continue();
                        return;
                    }
                }
            }
        }
    }
    if (Cont == -1)
    {
        Limpiar();
        cout << RED << "No existen clases para esta materia" << RESET << endl;
        Continue();
        return;
    }
}