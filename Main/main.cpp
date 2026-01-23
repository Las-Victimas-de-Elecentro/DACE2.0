#include <windows.h>
#include "Header.h"
#include <fstream>
using namespace std;

//Var Global
string Dibujo;
string Rol;
bool Oscuro;

//Registros Grandes
Estudiante Est[D];
Materias Mat[527];
Profesor Prof[D];
Administrativo Admin[D];
Bloque_Horario List[48];
Clase Class[D];
Grupos Gru[D];
Solicitudes Soli[D];
Reportes Rep[D];
Asignacion Asig[D];
Clase_Magistral Mag[D];
Plan_Evaluacion Plan[D];
Carnetizacion Carn[D];
Carnet Car[D];


int main()
{
    //Caracteres Especiales
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);
    Variables Var;

    int& Opc_F = Var.Opc_F;
    int Opc;

    //Cargar Usuarios
    Verificar_Llenado(Est, Prof, Admin);
    Llenado_Horario (List);
    Cargar (Var, Est, Plan, Rep, Asig, Mag, Soli, Gru, Class, Mat, Prof, Admin, Car, Carn);

    do {
        Limpiar();
        Dibujo = "Dace"; Art();
        Opc_F = 3;
        cout << "Bienvenido a Dace" << endl;
        cout << "Ingrese una opción" << endl;
        cout << "1: Iniciar Sesión" << endl;
        cout << "2: Registrarse" << endl;
        cout << "3: Salir" << endl;
        cout << "Ingrese: ";
        Opc = Opc_Menu(Opc_F);
        
        switch (Opc)
        {
            case 1:
                Sesion (Var, Est, Plan, Rep, Asig, Mag, Soli, Gru, Class, List, Mat, Prof, Admin, Car, Carn);
                break;
            case 2:
                Registro (Var, Est, Prof, Admin);
                break;
            default:
                cout << "Saliendo de Dace" << endl;
                break;
        }

    } while (Opc != 3);

    return 0;
}