#include "../Main/Header.h"
using namespace std;

void Principal_Global (Variables (&Var), Estudiante (&Est)[D], Plan_Evaluacion (&Plan)[D], Reportes (&Rep)[D], Asignacion (&Asig)[D], Clase_Magistral (&Mag)[D], Solicitudes (&Soli)[D], Grupos (&Gru)[D], Clase (&Class)[D], Bloque_Horario (&List)[48], Materias (&Mat)[527], Profesor (&Prof)[D], Administrativo (&Admin)[D], Carnet (&Car)[D], Carnetizacion (&Carn)[D])
{
    int& N = Var.N;
    int& Opc_F = Var.Opc_F;

    int I, Opc, Opc_2;
    string Opc_S, Cargo, Nombre;
    bool Opc_Valido;

    Limpiar();
    
    if (Rol == "Admin")
    {
        do {
            Limpiar();
            Opc_F = 3;
            cout << "Bienvenido Administrativo " << Admin[N].Nombre << endl;
            Avatares(Var, Est, Prof, Admin);
            cout << "¿A dónde deseas acceder?" << endl;
            cout << "1: Ver las opciones de su perfil" << endl;
            cout << "2: Ver las opciones de administrativo" << endl;
            cout << "3: Salir" << endl;
            cout << "Ingrese una opción: ";
            Opc_2 = Opc_Menu(Opc_F);

            switch (Opc_2)
            {
                case 1:
                    Menu_Global_Personal(Var, Est, Prof, Admin);
                    break;
                case 2:

                    break;
                case 3:
                    cout << "Cerrando Sesión";
                    break;
            }
        } while (Opc_2 != 3);
    }
    else
    {
        do {
            if (Rol == "Est")
            {
                Cargo = "Estudiante ";
                Nombre = Est[N].Nombre;
            }
            else if (Rol == "Prof")
            {
                Cargo = "Docente ";
                Nombre = Prof[N].Nombre;
            }

            Limpiar();
            Opc_F = 5;
            cout << "Bienvenido " << Cargo << Nombre << endl;
            Avatares(Var, Est, Prof, Admin);
            cout << "¿A dónde deseas acceder?" << endl;
            cout << "1: Sección Académica" << endl;
            cout << "2: Sección Personal" << endl;
            cout << "3: Sección Social" << endl;
            cout << "4: Sección Extracurricular" << endl;
            cout << "5: Salir" << endl;
            cout << "Ingrese una opción: ";
            Opc = Opc_Menu(Opc_F);

            switch (Opc)
            {
                case 1:
                    if (Rol == "Prof")
                    {
                        Menu_Prof_Academic (Var, Est, Plan, Rep, Asig, Mag, Soli, Gru, Class, List, Mat, Prof, Admin);
                    }
                    else
                    {
                        Menu_Est_Academico (Var, Est, Class, Mag, Prof, Admin, Asig, Mat, Plan, Car, Carn);
                    }
                    break;
                case 2:
                    Menu_Global_Personal(Var, Est, Prof, Admin);
                    break;
                case 5:
                    cout << RED << "Cerrando Sesión" << RESET << endl;
                    Continuar();
                    return;
                    break;
            }
        } while (Opc != 5);
    }
}