#include "../../Main/Header.h"
using namespace std;

void Asignar_Horario (Variables (&Var), Estudiante (&Est)[D], Plan_Evaluacion (&Plan)[D], Reportes (&Rep)[D], Asignacion (&Asig)[D], Clase_Magistral (&Mag)[D], Solicitudes (&Soli)[D], Grupos (&Gru)[D], Clase (&Class)[D], Bloque_Horario (&List)[48], Materias (&Mat)[527], Profesor (&Prof)[D], Administrativo (&Admin)[D])
{
    int& N = Var.N;
    int& Opc_F = Var.Opc_F;
    
    int I, J, Cont, Opc_Mat, ID, P, G, Cod, Max, Aula, Seccion, K, Cant_Class, AulaBase;
    bool Opc, Encontrada, R, R_Repetir;
    string Elegida;

    do {
        P = -1; G = -1; Encontrada = false;
        Limpiar();
        Dibujo = "BookTwo"; Art();

        if (Prof[N].Materias != "")
        {
            cout << CYAN << "Materias Registradas" << RESET << endl;
            cout << "¿Que materia desea impartir?" << endl;
            Cont = Salto_Numerado(Prof[N].Materias);
            
            Opc_F = Cont;
            cout << endl;
            cout << "Ingrese Opcion: ";
            Opc_Mat = Opc_Menu(Opc_F);
            Elegida = Obtener_Materia(Prof[N].Materias, Opc_Mat);

            for (J = 0; J < 527; J++)
            {
                if (Mat[J].Nombre.find(Elegida) != string::npos)
                {
                    Encontrada = true;
                    Cod = J;
                    break; 
                }
            }

            for (I = 0 ; I < D ; I++)
            {
                if (Class[I].Periodo == "")
                {
                    P = I;
                    break;
                }
            }

            if (P == -1) 
            {
                cout << RED << "No hay espacio para más clases" << RESET << endl;
                Continue();
                return;
            }

            Limpiar();
            Dibujo = "BookTwo"; Art();

            do {
                cout << "Ingrese el período actual: ";
                cin >> Class[P].Periodo;
                cout << "¿Está seguro? Ingrese: 1: Sí / 0: No : ";
                R = Opc_Bool();
            } while (R == 0);

            cout << "¿Cuantas clases semanales tendrá esta materia? Ingrese: 1: Dos / 0: Una : ";
            Cant_Class = Opc_Bool();

            Class[P].Nombre_Materia = Mat[Cod].Nombre;
            Class[P].Codigo_Materia = Mat[Cod].Codigo;

            Max = 0;
            for (I = 0; I < D; I++)
            {
                if (Class[I].Codigo_Materia != "")
                {
                    if (Class[I].Class1.Aula > Max) Max = Class[I].Class1.Aula;
                    if (Class[I].Class2.Aula > Max) Max = Class[I].Class2.Aula;
                }
            }
            
            AulaBase = Max + 1;

            for (K = 0 ; K < (Cant_Class == 1 ? 2 : 1) ; K++)
            {
                Limpiar();
                Dibujo = "BookTwo"; Art();
                
                cout << CYAN << "Asignación de Horario Número: " << K + 1 << RESET << endl;
                cout << "¿La clase será 1: Normal / 0: Virtual? : ";
                Opc = Opc_Bool();

                Limpiar();
                Bloques_Disponibles(List);
                Opc_F = 48;
                cout << "Ingrese el ID del bloque para el Horario Número " << K + 1 << ": ";
                ID = Opc_ID(Opc_F);

                Aula = AulaBase + K;

                if (K == 0)
                {
                    Class[P].Class1.Dia = List[ID].Dia;
                    Class[P].Class1.Hora_Inicio = List[ID].Hora_Inicio;
                    Class[P].Class1.Hora_Fin = List[ID].Hora_Fin;
                    Class[P].Class1.Aula = Aula;
                    Class[P].Class1.Virtual = !Opc;
                    if (Opc == 1) Class[P].Class1.Plataforma = "Ninguna";
                    else 
                    {
                        Limpiar();
                        Dibujo = "BookTwo"; Art();
                        cout << "Plataforma virtual: ";
                        Class[P].Class1.Plataforma = Palabra();
                    }
                }
                else
                {
                    Class[P].Class2.Dia = List[ID].Dia;
                    Class[P].Class2.Hora_Inicio = List[ID].Hora_Inicio;
                    Class[P].Class2.Hora_Fin = List[ID].Hora_Fin;
                    Class[P].Class2.Aula = Aula;
                    Class[P].Class2.Virtual = !Opc;
                    if (Opc == 1) Class[P].Class2.Plataforma = "Ninguna";
                    else 
                    {
                        Limpiar();
                        Dibujo = "BookTwo"; Art();
                        cout << "Plataforma virtual: ";
                        Class[P].Class2.Plataforma = Palabra();
                    }
                }
            }

            Max = 0;
            for (I = 0; I < D; I++)
            {
                if (Class[I].Codigo_Materia == Mat[Cod].Codigo)
                {
                    if (Class[I].Seccion > Max) Max = Class[I].Seccion;
                }
            }
            Seccion = Max + 1;

            for (I = 0 ; I < D ; I++)
            {
                if (Gru[I].Nombre_Profesor == "")
                {
                    G = I;
                    break;
                }
            }

            if (G != -1)
            {
                Class[P].Seccion = Seccion;
                Class[P].Nombre_Profesor = Prof[N].Nombre;
                Class[P].Apellido_Profesor = Prof[N].Apellido;
                Class[P].CI_Profesor = Prof[N].Cedula;
                Class[P].Estado = "Libre";

                Gru[G].Seccion = Seccion;
                Gru[G].Nombre_Profesor = Prof[N].Nombre;
                Gru[G].Apellido_Profesor = Prof[N].Apellido;
                Gru[G].CI_Profesor = Prof[N].Cedula;
                Gru[G].Codigo_Materia = Mat[Cod].Codigo;
                Gru[G].Materia = Mat[Cod].Nombre;
                Gru[G].Miembros = 1;
            }

            Limpiar();
            Dibujo = "BookTwo"; Art();
            cout << GREEN << "Datos guardados correctamente" << RESET << endl;
            Guardar_Academic(Var, Est, Plan, Rep, Asig, Mag, Soli, Gru, Class, Mat, Prof, Admin);
            
            cout << "¿Desea asignar horario a otra materia? Ingrese: 1: Sí / 0: No : ";
            R_Repetir = Opc_Bool();
        }
        else
        {
            cout << RED << "No has registrado ninguna Materia" << RESET << endl;
            Continue();
            return;
        }

    } while (R_Repetir == 1);
}