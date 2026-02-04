#include "../../Main/Header.h"
using namespace std;

void Menu_Foro_Estudiantes (Variables (&Var), Estudiante (&Est)[D], Profesor (&Prof)[D], Administrativo (&Admin)[D], Amigos (&Amig)[D], Publicaciones (&Publi)[D])
{
    int& N = Var.N;
    int& Opc_F = Var.Opc_F;
    int Opc;

    do 
    {
        Limpiar();
        Dibujo = "Friends"; Art();
        Opc_F = 5; 

        cout << CYAN << "Bienvenido al Foro de Estudiantes" << RESET << endl;

        cout << "1: Crear publicación" << endl;
        cout << "2: Ver publicaciones" << endl;
        cout << "3: Buscar publicaciones" << endl;
        cout << "4: Ver tus publicaciones" << endl;
        cout << "5: Salir" << endl;

        cout << "Ingrese: ";
        Opc = Opc_Menu(Opc_F);

        switch (Opc)
        {
            case 1:
                Crear_Publicacion (Var, Est, Publi);
                break;

            case 2:
                Ver_Publicaciones (Var, Est, Publi, Prof, Admin, Amig);
                break;

            case 3:
                Buscar_Publicaciones (Var, Est, Publi, Prof, Admin, Amig);
                break;

            case 4:
                Gestionar_Publicaciones_Propias (Var, Est, Publi, Prof, Admin);
                break;
        }

    } while (Opc != 5);
}