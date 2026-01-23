#include "../../Main/Header.h"
using namespace std;

void Registrar_Reporte (Variables (&Var), Estudiante (&Est)[D], Plan_Evaluacion (&Plan)[D], Reportes (&Rep)[D], Asignacion (&Asig)[D], Clase_Magistral (&Mag)[D], Solicitudes (&Soli)[D], Grupos (&Gru)[D], Clase (&Class)[D], Materias (&Mat)[527], Profesor (&Prof)[D], Administrativo (&Admin)[D])
{
    int& N = Var.N;
    int& Opc_F = Var.Opc_F;

    int I = 0, E = 0, Cont = -1, Report = -1;
    bool R, R2, R3;

    do {
        I = 0; E = 0; Cont = -1; Report = -1;
        
        Limpiar();
        Dibujo = "Law"; Art();

        cout << "¿Desea revisar algun reporte suyo? Ingrese: 1: Sí / 0: No: ";
        R = Opc_Bool();

        Limpiar();
        Dibujo = "Law"; Art();

        if (R == 1)
        {
            for (I = 0 ; I < D ; I++)
            {
                if (Prof[N].Nombre == Rep[I].Titular)
                {
                    cout << GREEN << "Reporte Numero: " << I+1 << RESET << endl;
                    cout << Rep[I].Titulo << endl;
                    cout << Rep[I].Descripcion << endl;
                    cout << Rep[I].Titular << endl;
                    cout << Rep[I].Problema << endl;
                    cout << Rep[I].Fecha.Dia << "/" << Rep[I].Fecha.Mes << "/" << Rep[I].Fecha.Year << endl;

                    if (Rep[I].Recibido == 1)
                    {
                        cout << GREEN << "Reporte recibido, se tomará en cuenta para su posible solución" << RESET << endl;
                    }
                    else
                    {
                        cout << RED << "Reporte sin recibir, siga esperando respuesta" << RESET << endl;
                    }
                    Report++;
                }
            }

            if (Report == -1)
            {
                cout << RED << "No tienes ningun reporte registrado" << RESET << endl;
            }
            Continue();
        }

        Limpiar();
        Dibujo = "Law"; Art();

        cout << "¿Desea registrar un nuevo reporte? Ingrese: 1: Sí / 0: No: ";
        R2 = Opc_Bool();

        Limpiar();
        Dibujo = "Law"; Art();
        
        if (R2 == 1)
        {
            for (I = 0 ; I < D ; I++)
            {
                if (Rep[I].Titular == "")
                {
                    Cont++;
                }
            }

            if (Cont != -1)
            {
                for (I = 0 ; I < D ; I++)
                {
                    if (Rep[I].Titular == "")
                    {
                        E = I;
                        break;
                    }
                }

                Limpiar();
                Dibujo = "Law"; Art();

                cout << CYAN << "Registro de Reporte Académico" << RESET << endl;
                Rep[E].Titular = Prof[N].Nombre;
                cout << "Título del reporte: ";
                getline (cin >> ws, Rep[E].Titulo);
                cout << "Describa el problema o incidencia: ";
                getline (cin >> ws, Rep[E].Descripcion);
                cout << "Problema en cuestión: ";
                getline (cin >> ws, Rep[E].Problema);
                cout << "Fecha" << endl;
                cout << "Dia: ";
                Rep[E].Fecha.Dia = Dia_User();
                cout << "Mes: ";
                Rep[E].Fecha.Mes = Mes_User();
                cout << "Año: ";
                Rep[E].Fecha.Year = Year_User();
                Rep[E].Recibido = 0;
                cout << GREEN << "El reporte ha sido enviado. La institución escuchará su voz" << RESET << endl;
                Guardar_Academic(Var, Est, Plan, Rep, Asig, Mag, Soli, Gru, Class, Mat, Prof, Admin);
                Continuar();
            }
            else
            {
                cout << RED << "No es posible registrar más reportes" << RESET << endl;
                Continue();
            }
        }

        cout << "¿Desea repetir el proceso de reportes? Ingrese: 1: Sí / 0: No: ";
        R3 = Opc_Bool();

    } while (R3 == 1);

    return;
}