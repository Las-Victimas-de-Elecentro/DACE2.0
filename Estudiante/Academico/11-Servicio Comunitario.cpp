#include "../../Main/Header.h"
using namespace std;

void Comunitario_Est (Variables (&Var), Estudiante (&Est)[D], Pasantias (&Pas)[D], Servicio_Comunitario (&SerC)[D])
{
    int& N = Var.N;
    int& Opc_F = Var.Opc_F;
    Est[N].UC_Aprobadas = 100;
    int Opc, P = -1, J, Pensum;
    float Horas_Nuevas; 
    double Mitad;

    if (Est[N].Comunitario == 1)
    {
        Limpiar();
        Dibujo = "Servicio"; Art();
        cout << YELLOW << "Usted ya ha completado su Servicio Comunitario." << RESET << endl;
        Continue();
        return;
    }

    for (J = 0 ; J < D ; J++)
    {
        if (SerC[J].Cedula == Est[N].Cedula)
        {
            P = J;
            break;
        }
    }

    if (Est[N].Carrera == "Informática") { Pensum = 56; }
    else if (Est[N].Carrera == "Civil") { Pensum = 63; }
    else if (Est[N].Carrera == "Hidrocarburos") { Pensum = 36; }
    else if (Est[N].Carrera == "Medicina") { Pensum = 48; }
    else if (Est[N].Carrera == "Odontología") { Pensum = 48; }
    else if (Est[N].Carrera == "Veterinaria") { Pensum = 41; }
    else if (Est[N].Carrera == "Derecho") { Pensum = 55; }
    else if (Est[N].Carrera == "Comunicación") { Pensum = 58; }
    else if (Est[N].Carrera == "Contaduría") { Pensum = 48; }
    else { Pensum = 45; }

    Mitad = (double)Pensum / 2.0;

    if (P == -1)
    {
        Limpiar();
        Dibujo = "Servicio"; Art();
        
        if (Est[N].UC_Aprobadas >= Mitad)
        {
            cout << GREEN << "Usted califica para iniciar el Servicio Comunitario." << RESET << endl;
            cout << "¿Desea inscribirse ahora? Ingrese: 1: Sí / 0: No : ";
            if (Opc_Bool())
            {
                for (J = 0 ; J < D ; J++)
                {
                    if (SerC[J].Cedula == 0)
                    {
                        SerC[J].Nombre = Est[N].Nombre;
                        SerC[J].Fecha.Dia = Est[N].Fecha.Dia;
                        SerC[J].Fecha.Mes = Est[N].Fecha.Mes;
                        SerC[J].Fecha.Year = Est[N].Fecha.Year;
                        SerC[J].Cedula = Est[N].Cedula;
                        SerC[J].Area = Est[N].Carrera;
                        SerC[J].Semestre = Est[N].Semestre; 
                        SerC[J].Year = Est[N].Year;
                        SerC[J].Horas_Realizadas = 0; 
                        P = J;
                        cout << GREEN << "Inscripción exitosa." << RESET << endl;
                        Guardar_Pasantias_Servicio(Pas, SerC);
                        Continue();
                        break;
                    }
                }
            }
            else { return; }
        }
        else
        {
            cout << RED << "Usted no califica para realizar servicio comunitario todavía." << RESET << endl;
            cout << "Requiere: " << Mitad << " materias. Usted tiene: " << Est[N].UC_Aprobadas << endl;
            Continue();
            return;
        }
    }

    do
    {
        Limpiar();
        Dibujo = "Servicio"; Art();

        cout << CYAN << "Servicio Comunitario - Usuario: " << SerC[P].Nombre << RESET << endl;
        cout << "¿Que desea hacer?" << endl;
        cout << "1: Cargar horas de jornada" << endl;
        cout << "2: Revisar total de horas" << endl;
        cout << "3: Salir" << endl;
        cout << "Ingrese opción: ";

        Opc_F = 3;
        Opc = Opc_Menu(Opc_F);

        if (Opc == 1)
        {
            Limpiar();
            Dibujo = "Servicio"; Art();
            cout << "Horas de la jornada 1-3: ";
            Horas_Nuevas = Jornada_C(); 

            SerC[P].Horas_Realizadas += Horas_Nuevas;
            cout << GREEN << "Horas añadidas." << RESET << endl;

            if (SerC[P].Horas_Realizadas >= 120)
            {
                cout << GREEN << "Servicio Comunitario Finalizado." << RESET << endl;
                Est[N].Comunitario = 1;
                SerC[P].Cedula = 0; 
                Guardar_Pasantias_Servicio(Pas, SerC);
                Continue();
                return; 
            }
            Guardar_Pasantias_Servicio(Pas, SerC);
            Continue();
        }
        else if (Opc == 2)
        {
            Limpiar();
            Dibujo = "Servicio"; Art();
            cout << "Progreso: " << YELLOW << SerC[P].Horas_Realizadas << RESET << " / 120 horas." << endl;
            Continue();
        }

    } while (Opc != 3);
}