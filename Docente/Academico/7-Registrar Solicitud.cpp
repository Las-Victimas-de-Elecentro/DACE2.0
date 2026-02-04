#include "../../Main/Header.h"
using namespace std;

void Registrar_Solicitud (Variables (&Var), Estudiante (&Est)[D], Plan_Evaluacion (&Plan)[D], Reportes (&Rep)[D], Asignacion (&Asig)[D], Clase_Magistral (&Mag)[D], Solicitudes (&Soli)[D], Grupos (&Gru)[D], Clase (&Class)[D], Materias (&Mat)[527], Profesor (&Prof)[D], Administrativo (&Admin)[D])
{

    int& N = Var.N;
    int& Opc_F = Var.Opc_F;

    int I = 0, S = -1, Cont = -1, Solic = -1, E;
    bool R, R2, R_Repetir;
    string Nombre_Usuario;

    if (Rol == "Est")
    {

        Nombre_Usuario = Est[N].Nombre;

    }
    else if (Rol == "Prof")
    {

        Nombre_Usuario = Prof[N].Nombre;

    }
    else
    {

        Nombre_Usuario = Admin[N].Nombre;

    }

    do {

        I = 0; S = -1; Cont = -1; Solic = -1;

        Limpiar();
        Dibujo = "Paper"; Art();

        cout << "¿Desea revisar alguna solicitud suya? Ingrese: 1: Sí / 0: No: ";
        R = Opc_Bool();

        Limpiar();
        Dibujo = "Paper"; Art();

        if (R == 1)
        {

            Limpiar();
            Dibujo = "Paper"; Art();

            for (I = 0 ; I < D ; I++)
            {

                if (Nombre_Usuario == Soli[I].Titular)
                {

                    cout << CYAN << "Solicitud Numero: " << I+1 << RESET << endl;
                    cout << Soli[I].Titulo << endl;
                    cout << Soli[I].Descripcion << endl;
                    cout << Soli[I].Titular << endl;
                    cout << Soli[I].Destinatario << endl;
                    cout << Soli[I].Fecha.Dia << "/" << Soli[I].Fecha.Mes << "/" << Soli[I].Fecha.Year << endl;
                    
                    if (Soli[I].Estado == 1)
                    {

                        cout << GREEN << "Solicitud aprobada, espere sus resultados" << RESET << endl;

                    }
                    else
                    {

                        cout << RED << "Solicitud sin aprobar aún, siga esperando respuesta" << RESET << endl;

                    }

                    Solic++;

                }

            }

            if (Solic == -1)
            {

                cout << RED << "No tienes ninguna solicitud registrada" << RESET << endl;

            }

            Continue();

        }

        Limpiar();
        Dibujo = "Paper"; Art();

        cout << "¿Desea registrar una solicitud? Ingrese: 1: Sí / 0: No: ";
        R2 = Opc_Bool();

        Limpiar();
        Dibujo = "Paper"; Art();

        if (R2 == 1)
        {

            for (I = 0 ; I < D ; I++)
            {

                if (Soli[I].Titular == "")
                {

                    Cont++;

                }

            }

            if (Cont != -1)
            {

                for (I = 0 ; I < D ; I++)
                {

                    if (Soli[I].Titular == "")
                    {

                        E = I;
                        break;

                    }

                }

                cout << CYAN << "Registro de Solicitud Académica" << RESET << endl;
                
                Soli[E].Titular = Nombre_Usuario;

                cout << "Título de la solicitud: ";
                getline (cin >> ws, Soli[E].Titulo);

                cout << "Tipo de solicitud (Acta, Constancia, Soporte) y breve descripción: ";
                getline (cin >> ws, Soli[E].Descripcion);

                cout << "Destinatario: ";
                getline (cin >> ws, Soli[E].Destinatario);

                cout << "Fecha" << endl;

                cout << "Dia: ";
                Soli[E].Fecha.Dia = Dia_User();

                cout << "Mes: ";
                Soli[E].Fecha.Mes = Mes_User();

                cout << "Año: ";
                Soli[E].Fecha.Year = Year_User();

                Soli[E].Estado = 0;
                
                Guardar_Academic(Var, Est, Plan, Rep, Asig, Mag, Soli, Gru, Class, Mat, Prof, Admin);

                cout << GREEN << "Su petición ha sido elevada. El sistema la custodiará hasta ser atendida" << RESET << endl;

                Continuar();

            }
            else
            {

                cout << RED << "No es posible registrar más solicitudes" << RESET << endl;
                Continue();

            }

        }

        cout << "¿Desea repetir el proceso de solicitudes? Ingrese: 1: Sí / 0: No: ";
        R_Repetir = Opc_Bool();

    } while (R_Repetir == 1);

    return;

}