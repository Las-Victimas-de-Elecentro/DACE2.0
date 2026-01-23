#include "../../Main/Header.h"
using namespace std;

void Buscar_Plan (Variables (&Var), Clase (&Class)[D], Estudiante (&Est)[D], Plan_Evaluacion (&Plan)[D], Materias (&Mat)[527])
{
    int& N = Var.N;
    int I, J, K, Cont, Opc_F, Opc_Mat, Cod, Encontrada, R;
    string Elegida;

    do
    {
        Limpiar();
        Dibujo = "Notebook"; Art();

        Cont = 0;
        Cod = -1;
        Encontrada = 0;

        if (Est[N].Materias != "")
        {
            cout << CYAN << "Planes de evaluación" << RESET << endl;
            cout << "Materias Registradas" << endl;
            cout << "¿De qué materia desea ver el plan de evaluación?" << endl;
            
            Opc_F = Salto_Numerado(Est[N].Materias);
            cout << endl << "Ingrese Opcion: ";

            Opc_Mat = Opc_Menu(Opc_F);
            Elegida = Obtener_Materia(Est[N].Materias, Opc_Mat);

            for (I = 0 ; I < 527 ; I++)
            {
                if (Mat[I].Nombre.find(Elegida) != string::npos)
                {
                    Encontrada = 1;
                    cout << GREEN << "Materia " << Elegida << " Seleccionada" << RESET << endl;
                    Cod = I;
                    Continue();
                    break;
                }
            }

            Limpiar();
            Dibujo = "Notebook"; Art();

            if (Encontrada == 1)
            {
                cout << CYAN << "Cronograma de Evaluaciones: " << Elegida << RESET << endl << endl;

                for (I = 0 ; I < D ; I++)
                {
                    if (Class[I].Codigo_Materia == Mat[Cod].Codigo)
                    {
                        for (J = 0 ; J < D ; J++)
                        {
                            if (Est[N].Cedula == Class[I].Est_Class.Cedula[J])
                            {
                                for (K = 0 ; K < D ; K++)
                                {
                                    if (Plan[K].Codigo_Materia == Class[I].Codigo_Materia && Plan[K].Nombre_Profesor == Class[I].Nombre_Profesor)
                                    {
                                        cout << "Profesor: " << Plan[K].Nombre_Profesor << endl;
                                        cout << "Tema: " << Plan[K].Tema << endl;
                                        cout << "Estrategia: " << Plan[K].Estrategia << endl;
                                        cout << "Fecha: " << Plan[K].Fecha.Dia << "/" << Plan[K].Fecha.Mes << "/" << Plan[K].Fecha.Year << endl;
                                        cout << "Ponderación: " << Plan[K].Ponderacion << "%" << endl;

                                        if (Plan[K].Firmado == 1)
                                        {
                                            cout << "Estado: " << GREEN << "Valido por dirección" << RESET << endl;
                                        }
                                        else
                                        {
                                            cout << "Estado: " << RED << "No está firmado aún" << RESET << endl;
                                        }
                                        Cont++;
                                    }
                                }
                            }
                        }
                    }
                }
            }

            if (Cont == 0 && Encontrada == 1)
            {
                cout << RED << "No hay un plan de evaluación registrado para esta materia." << RESET << endl;
                Continue();
            }
        }
        else
        {
            cout << RED << "Usted no tiene materias registradas." << RESET << endl;
            Continue();
        }

        cout << endl << "¿Desea ver otro plan de evaluación? 1: Sí / 0: No : ";
        R = Opc_Bool();

    } while (R == 1);
}