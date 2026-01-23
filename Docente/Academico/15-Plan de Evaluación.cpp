#include "../../Main/Header.h"
using namespace std;

void Plan_Evaluacion_Prof (Variables (&Var), Estudiante (&Est)[D], Plan_Evaluacion (&Plan)[D], Reportes (&Rep)[D], Asignacion (&Asig)[D], Clase_Magistral (&Mag)[D], Solicitudes (&Soli)[D], Grupos (&Gru)[D], Clase (&Class)[D], Materias (&Mat)[527], Profesor (&Prof)[D], Administrativo (&Admin)[D])
{
    int& N = Var.N;
    int& Opc_F = Var.Opc_F;

    int I, J, K, C, Valid, P = -1, Cont, Opc_Mat, Cod, Max = 0;
    bool F, Encontrada = false, R, R2, R3;
    string Elegida;

    do {
        Limpiar();
        Dibujo = "Book"; Art();
        F = false;
        cout << CYAN << "Bienvenido a la sección de Planes de Evaluación" << RESET << endl;
        if (Prof[N].Materias != "")
        {
            cout << "Materias Registradas" << endl;
            cout << "¿A que materia le ingresara una evaluación?" << endl;
            Cont = Salto_Numerado(Prof[N].Materias);
            cout << endl;
            Opc_F = Cont;
            cout << "Ingrese Opcion: ";

            Opc_Mat = Opc_Menu(Opc_F);
            Elegida = Obtener_Materia(Prof[N].Materias, Opc_Mat);
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

            Valid = false;
            for (J = 0 ; J < D ; J++)
            {
                if (Class[J].Codigo_Materia == Mat[Cod].Codigo && Class[J].Nombre_Profesor == Prof[N].Nombre)
                {
                    C = J;
                    Valid = true;
                    break;
                }
            }

            Limpiar();
            Dibujo = "Book"; Art();

            if (Valid == true)
            {
                do {
                    P = -1;
                    for (K = 0 ; K < D ; K++)
                    {
                        if (Plan[K].Nombre_Profesor == "")
                        {
                            P = K;
                            break;
                        }
                    }

                    if (P != -1)
                    {
                        do {
                            Limpiar();
                            Dibujo = "Book"; Art();
                            cout << "Ingrese la fecha de la evaluación" << endl;
                            cout << "Dia: ";
                            Plan[P].Fecha.Dia = Dia_User();
                            cout << "Mes: ";
                            Plan[P].Fecha.Mes = Mes_User();
                            cout << "Año: ";
                            Plan[P].Fecha.Year = Year_User();

                            cout << "De acuerdo, ingrese el tema de la evaluación: ";
                            getline(cin >> ws, Plan[P].Tema);

                            cout << "Ingrese la estrategia de la evaluación que se usará: ";
                            getline(cin >> ws, Plan[P].Estrategia);

                            cout << "Ingrese la ponderación que tendrá esta evaluación: ";
                            Plan[P].Ponderacion = Entero();

                            cout << "¿Está correcto? Ingrese: 1: Sí / 0: No : ";
                            R = Opc_Bool();

                        } while (R == 0);

                        Plan[P].Nombre_Profesor = Prof[N].Nombre;
                        Plan[P].CI_Profesor = Prof[N].Cedula;
                        Plan[P].Codigo_Materia = Mat[Cod].Codigo;
                        Plan[P].Nombre_Materia = Mat[Cod].Nombre;
                        Plan[P].Firmado = 0;

                        Limpiar();
                        Dibujo = "Book"; Art();

                        cout << "¿Desea asignar otra evaluación a esta materia? Ingrese: 1: Sí / 0: No : ";
                        R2 = Opc_Bool();
                        F = true;
                    }
                    else
                    {
                        cout << RED << "No es posible registrar más evaluaciones" << RESET << endl;
                        Continue();
                        R2 = 0;
                    }

                } while (R2 == 1);
            }
        }
        else
        {
            cout << RED << "No has registrado ninguna Materia" << RESET << endl;
            Continue();
            return;
        }

        if (F == true)
        {
            Limpiar();
            Dibujo = "Book"; Art();

            cout << GREEN << "Evaluación guardada correctamente" << RESET << endl;
            Guardar_Academic(Var, Est, Plan, Rep, Asig, Mag, Soli, Gru, Class, Mat, Prof, Admin);
            Continue();

            cout << "¿Desea asignar en otra materia? Ingrese: 1: Sí / 0: No : ";
            R3 = Opc_Bool();
        }

    } while (R3 == 1);
}