#include "../../Main/Header.h"
using namespace std;

void Crear_Asignacion (Variables (&Var), Estudiante (&Est)[D], Plan_Evaluacion (&Plan)[D], Reportes (&Rep)[D], Asignacion (&Asig)[D], Clase_Magistral (&Mag)[D], Solicitudes (&Soli)[D], Grupos (&Gru)[D], Clase (&Class)[D], Materias (&Mat)[527], Profesor (&Prof)[D], Administrativo (&Admin)[D])
{
    int& N = Var.N;
    int& Opc_F = Var.Opc_F;

    int I, J, Cont, Opc_Mat, Cod, A;
    string Elegida;
    bool Encontrada, R2, R;

    do {
        Limpiar();
        Dibujo = "Notebook"; Art();
        R2 = false;

        if (Prof[N].Materias != "")
        {
            cout << CYAN << "Materias Registradas" << RESET << endl;
            cout << "¿Que materia desea impartir?" << endl;
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

            Limpiar();
            Dibujo = "Notebook"; Art();

            do {
                Limpiar();
                Dibujo = "Notebook"; Art();

                A = -1;
                for (J = 0 ; J < D ; J++)
                {
                    if (Asig[J].Nombre_Profesor == "")
                    {
                        A = J;
                        break;
                    }
                }

                if (A != -1)
                {
                    Limpiar();
                    Dibujo = "Notebook"; Art();
                    cout << "Creando asignacion para: " << Mat[Cod].Nombre << endl;

                    Asig[A].Nombre_Materia = Mat[Cod].Nombre;
                    Asig[A].Codigo_Materia = Mat[Cod].Codigo;
                    Asig[A].Nombre_Profesor = Prof[N].Nombre;
                    
                    cout << "Título: ";
                    getline(cin >> ws, Asig[A].Titulo);
                    
                    cout << "Descripción: ";
                    getline(cin >> ws, Asig[A].Descripcion);
                    
                    cout << "Fecha de publicación" << endl;
                    cout << "Dia: ";
                    Asig[A].Fecha_Publicacion.Dia = Dia_User();
                    cout << "Mes: ";
                    Asig[A].Fecha_Publicacion.Mes = Mes_User();
                    cout << "Año: ";
                    Asig[A].Fecha_Publicacion.Year = Year_User();

                    cout << "Fecha de entrega" << endl;
                    cout << "Dia: ";
                    Asig[A].Fecha_Entrega.Dia = Dia_User();
                    cout << "Mes: ";
                    Asig[A].Fecha_Entrega.Mes = Mes_User();
                    cout << "Año: ";
                    Asig[A].Fecha_Entrega.Year = Year_User();
                    
                    Asig[A].Estado = "Borrador";
                    
                    cout << GREEN << "La tarea ha sido guardada en borradores" << RESET << endl;
                    Guardar_Academic(Var, Est, Plan, Rep, Asig, Mag, Soli, Gru, Class, Mat, Prof, Admin);
                    
                    cout << "¿Desea crear otra asignación? Ingrese: 1: Sí / 0: No : ";
                    R = Opc_Bool();
                }
                else
                {
                    cout << RED << "No es posible registrar más asignaciones, memoria llena" << RESET << endl;
                    Continue();
                    R = false;
                }

            } while (R == true);

            cout << "¿Desea asignar para otra materia? Ingrese: 1: Sí / 0: No : ";
            R2 = Opc_Bool();
        }
        else
        {
            cout << RED << "No has registrado ninguna Materia" << RESET << endl;
            Continue();
            return;
        }

    } while (R2 == true);

    return;
}