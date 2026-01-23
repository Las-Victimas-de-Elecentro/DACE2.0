#include "../../Main/Header.h"
using namespace std;

void Buscar_Asignacion (Variables (&Var), Clase (&Class)[D], Estudiante (&Est)[D], Asignacion (&Asig)[D], Materias (&Mat)[527])
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
            cout << "Materias Registradas" << endl;
            cout << "¿De qué materia desea ver las asignaciones?" << endl;
            
            Opc_F = Salto_Numerado(Est[N].Materias);
            cout << endl;
            cout << "Ingrese Opcion: ";

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
                cout << CYAN << "Asignaciones de " << Elegida << RESET << endl << endl;

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
                                    if (Asig[K].Nombre_Profesor == Class[I].Nombre_Profesor && Asig[K].Codigo_Materia == Class[I].Codigo_Materia && Asig[K].Estado != "Borrador")
                                    {
                                        cout << "Profesor: " << Asig[K].Nombre_Profesor << endl;
                                        cout << "Título: " << Asig[K].Titulo << endl;
                                        cout << "Descripción: " << Asig[K].Descripcion << endl;
                                        cout << "Publicación: " << Asig[K].Fecha_Publicacion.Dia << "/" << Asig[K].Fecha_Publicacion.Mes << "/" << Asig[K].Fecha_Publicacion.Year << endl;
                                        cout << "Entrega: " << Asig[K].Fecha_Entrega.Dia << "/" << Asig[K].Fecha_Entrega.Mes << "/" << Asig[K].Fecha_Entrega.Year << endl;
                                        cout << "Estado: " << Asig[K].Estado << endl;
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
                cout << RED << "No hay asignaciones publicadas para esta materia" << RESET << endl;
                Continuar();
            }
        }
        else
        {
            cout << RED << "Usted no tiene materias registradas." << RESET << endl;
            Continuar();
        }

        cout << endl;
        cout << "¿Desea ver otra asignacion? Ingrese: 1: Sí / 0: No : ";
        R = Opc_Bool();

    } while (R == 1);
}