#include "../../Main/Header.h"
using namespace std;

void Agregar_Materia (Variables (&Var), Estudiante (&Est)[D], Plan_Evaluacion (&Plan)[D], Materias (&Mat)[527], Profesor (&Prof)[D], Administrativo (&Admin)[D])
{
    int& N = Var.N;
    int& Opc_F = Var.Opc_F;

    int Cant, I, J;
    string Materia, Codigo;
    bool Encontrada;

    Limpiar();

    Opc_F = 50;
    Dibujo = "Book"; Art();
    cout << "¿Cuántas materias vas a registrar?" << endl;
    cout << "El limite de materias a elegir es de 50" << endl;
    cout << "Ingrese: ";
    Cant = Opc_Menu(Opc_F);

    //Reinicia las materias registradas
    Prof[N].Materias = "";

    for (I = 0 ; I < Cant ; I++)
    {
        do {
            Limpiar();
            Dibujo = "Book"; Art();
            Encontrada = 0;

            cout << "Ingrese el nombre de la materia que registrara: ";
            Materia = Palabra();
            cout << "Ingrese el codigo de la materia: ";
            Codigo = Codigo_Academic();

            Limpiar();
            Dibujo = "Book"; Art();
            for (J = 0 ; J < 527 ; J++)
            {
                if (Materia == Mat[J].Nombre || Codigo == Mat[J].Codigo)
                {
                    Encontrada = 1;
                    break;
                }
            }

            if (Encontrada == 1)
            {
                cout << GREEN << "Materia Encontrada" << RESET << endl;
                cout << "Impartira la materia llamada: " << Mat[J].Nombre << endl;
                Prof[N].Cant_Mat++;
                if (Prof[N].Materias == "") 
                {
                    Prof[N].Materias = Mat[J].Nombre;
                } 
                else 
                {
                    Prof[N].Materias += ", " + Mat[J].Nombre;
                }
                Guardar (Var, Est, Prof, Admin);
                Continuar();
                break;
            }
            else
            {
                cout << RED << "Materia no encontrada intente de nuevo" << RESET << endl;
                Continuar();
            }

        } while (Encontrada == 0);
    }


}