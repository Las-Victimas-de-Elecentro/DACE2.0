#include "../../Main/Header.h"
using namespace std;

void Menu_Gestion_Admin (Variables (&Var), Empleado (&Emp)[D], Inscrito (&Ins)[D], Profesor (&Prof)[D], Administrativo (&Admin)[D], Estudiante (&Est)[D], Plan_Evaluacion (&Plan)[D], Reportes (&Rep)[D], Clase_Magistral (&Mag)[D], Solicitudes (&Soli)[D], Novedades (&Nov)[D], Pasantias (&Pas)[D], Servicio_Comunitario (&SerC)[D], Carnet (&Car)[D], Carnetizacion (&Carn)[D], Clubes (&Club)[D], Celebraciones (&Cel)[D], Eventos (&Even)[D], Becas (&Beca)[D])
{
    int& N = Var.N;
    int& Opc_F = Var.Opc_F;
    int Opc;
    
    do {
        Limpiar();
        Dibujo = "Gestion"; Art();
        Opc_F = 19;
        cout << CYAN << "Bienvenido a la sección de Administrador " << Admin[N].Nombre << RESET << endl;
        cout << "¿Que desea hacer?" << endl;
        cout << "1: Ingresar solicitudes de empleo" << endl;
        cout << "2: Gestionar empleados" << endl;
        cout << "3: Eliminar empleados" << endl;
        cout << "4: Solicitud de inscripción de Estudiantes" << endl;
        cout << "5: Gestionar estudiantes" << endl;
        cout << "6: Eliminar estudiantes" << endl;
        cout << "7: Solicitudes" << endl;
        cout << "8: Reportes" << endl;
        cout << "9: Agregar novedades" << endl;
        cout << "10: Servicio Comunitario" << endl;
        cout << "11: Pasantías" << endl;
        cout << "12: Clases Magistrales" << endl;
        cout << "13: Planes de Evaluación" << endl;
        cout << "14: Carnetización" << endl;
        cout << "15: Gestión Clubes" << endl;
        cout << "16: Gestión Celebraciones" << endl;
        cout << "17: Gestión Eventos" << endl;
        cout << "18: Gestión Becas" << endl;
        cout << "19: Salir" << endl;
        cout << "Ingrese: ";
        Opc = Opc_Menu(Opc_F);

        switch (Opc)
        {
            case 1:
                Solicitud_Empleado (Var, Emp, Ins);
                break;
            case 2:
                Gestionar_Empleado (Var, Emp, Prof, Admin, Est, Ins);
                break;
            case 3:
                Eliminar_Empleado (Var, Emp, Prof, Admin, Est, Ins);
                break;
            case 4:
                Solicitud_Estudiante (Var, Emp, Ins);
                break;
            case 5:
                Gestionar_Estudiante (Var, Emp, Ins, Est, Prof, Admin);
                break;
            case 6:
                Eliminar_Estudiante (Var, Emp, Est, Prof, Admin);
                break;
            case 7:
                Gestion_Solicitudes (Var, Plan, Rep, Mag, Soli, Nov);
                break;
            case 8:
                Gestion_Reportes (Var, Plan, Rep, Mag, Soli, Nov);
                break;
            case 9:
                Gestion_Novedades (Var, Plan, Rep, Mag, Soli, Nov);
                break;
            case 10:
                Gestion_Comunitario (Var, Pas, SerC);
                break;
            case 11:
                Gestion_Pasantias (Var, Pas, SerC);
                break;
            case 12:
                Gestion_Magistrales (Var, Plan, Rep, Mag, Soli, Nov);
                break;
            case 13:
                Gestion_Plan_Evaluacion (Var, Plan, Rep, Mag, Soli, Nov);
                break;
            case 14:
                Gestion_Carnet (Var, Car, Carn);
                break;
            case 15:
                Gestion_Club (Var, Club);
                break;
            case 16:
                Gestion_Celebraciones (Var, Cel);
                break;
            case 17:
                Gestion_Eventos (Var, Even);
                break;
            case 18:
                Aceptar_Becas (Var, Beca);
                break;

        }

    } while (Opc != 19);
}