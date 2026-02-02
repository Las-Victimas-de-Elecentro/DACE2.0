#include <windows.h>
#include "Header.h"
#include <fstream>
using namespace std;

//Var Global
string Dibujo;
string Rol;
bool Oscuro;

//Academico
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
Pasantias Pas[D];
Servicio_Comunitario SerC[D];

//Social
Market_Place MP[D];
Comida_MP C_MP[D];
Articulos_MP A_MP[D];
Servicios_MP S_MP[D];
Publicaciones Publi[D];
Amigos Amig[D];
Novedades Nov[D];
Chatbot Bot[10];

//Extracurricular
Eventos Even[D];
Clubes Club[D];
Celebraciones Cel[D];

//Admin
Empleado Emp[D];
Inscrito Ins[D];


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
    Cargar (Var, Est, Plan, Rep, Asig, Mag, Soli, Gru, Class, Mat, Prof, Admin, Car, Carn, Pas, SerC, MP, C_MP, A_MP, S_MP, Amig, Publi, Emp, Ins, Nov);

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
                Sesion (Var, Est, Plan, Rep, Asig, Mag, Soli, Gru, Class, List, Mat, Prof, Admin, Car, Carn, Pas, SerC, MP, C_MP, A_MP, S_MP, Amig, Publi, Emp, Ins, Nov);
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