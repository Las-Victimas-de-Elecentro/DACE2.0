#include "../../Main/Header.h"
using namespace std;

void Menu_Social_Global (Variables (&Var), Market_Place (&MP)[D], Comida_MP (&C_MP)[D], Articulos_MP (&A_MP)[D], Servicios_MP (&S_MP)[D], Estudiante (&Est)[D], Profesor (&Prof)[D], Administrativo (&Admin)[D], Amigos (&Amig)[D], Publicaciones (&Publi)[D])
{
    int& N = Var.N;
    int& Opc_F = Var.Opc_F;
    int Opc;
    string Nombre;

    Limpiar();
    
    do {
        if (Rol == "Est")
        {
            Nombre = Est[N].Nombre;
        }
        else if (Rol == "Prof")
        {
            Nombre = Prof[N].Nombre;
        }
        else if (Rol == "Admin")
        {
            Nombre = Admin[N].Nombre;
        }

        Limpiar();
        Avatares(Var, Est, Prof, Admin);
        Opc_F = 6;
        cout << CYAN << "Bienvenido a la sección Social " << Nombre << RESET << endl;
        cout << "Aquí puedes interactuar con amigos" << endl;
        cout << "¿Qué desea hacer?" << endl;
        cout << "1: Mostrar Novedades" << endl;
        cout << "2: Mostrar Grupos" << endl;
        cout << "3: Sección de Amigos" << endl;
        cout << "4: Marketplace" << endl;
        cout << "5: Foro de Estudiantes" << endl;
        cout << "6: Salir" << endl;
        cout << "Ingrese: " << endl;
        Opc = Opc_Menu(Opc_F);

        switch (Opc)
        {
            case 1:
                break;
            case 2:
                break;
            case 3:
                Amigos_Global (Var, Est, Prof, Admin, Amig);
                break;
            case 4:
                Marketplace (Var, MP, C_MP, A_MP, S_MP, Est, Prof, Admin);
                break;
            case 5:
                Menu_Foro_Estudiantes (Var, Est, Prof, Admin, Amig, Publi);
                break;
        }

    } while (Opc != 6);
}