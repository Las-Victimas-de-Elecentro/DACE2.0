#include "../../Main/Header.h"
using namespace std;

void Pasantias_Est (Variables (&Var), Estudiante (&Est)[D], Pasantias (&Pas)[D], Profesor (&Prof)[D], Administrativo (&Admin)[D], Servicio_Comunitario (&SerC)[D])
{
    int& N = Var.N;
    int& Opc_F = Var.Opc_F;
    Est[N].UC_Aprobadas = 500;
    int Opc_Emp, Opc, P = -1, I, J;
    float Horas_Nuevas;
    bool UC_Validas = 0;

    Limpiar();
    Dibujo = "Pasantias"; Art();

    if (Est[N].Pasantias == 1)
    {
        Limpiar();
        Dibujo = "Pasantias"; Art();
        cout << YELLOW << "Ya hiciste las pasantías" << RESET << endl;
        Continue();
        return;
    }

    string Carrera = Est[N].Carrera;
    int UC = Est[N].UC_Aprobadas;

    if (Carrera == "Informática" && UC >= 110) UC_Validas = 1;
    else if (Carrera == "Civil" && UC >= 130) UC_Validas = 1;
    else if (Carrera == "Hidrocarburos" && UC >= 140) UC_Validas = 1;
    else if (Carrera == "Medicina" && UC >= 70) UC_Validas = 1;
    else if (Carrera == "Odontología" && UC >= 58) UC_Validas = 1;
    else if (Carrera == "Veterinaria" && UC >= 80) UC_Validas = 1;
    else if (Carrera == "Derecho" && UC >= 95) UC_Validas = 1;
    else if (Carrera == "Comunicación" && UC >= 115) UC_Validas = 1;
    else if (Carrera == "Contaduría" && UC >= 180) UC_Validas = 1;
    else if (Carrera == "Economía" && UC >= 160) UC_Validas = 1;

    if (!UC_Validas)
    {
        cout << RED << "Usted no posee el minimo de Unidades de credito necesarias para poder realizar pasantías" << RESET << endl;
        cout << "Carrera: " << Carrera << " | UC Aprobadas: " << UC << endl;
        Continue();
        return;
    }

    for (I = 0 ; I < D ; I++)
    {
        if (Pas[I].Cedula == Est[N].Cedula)
        {
            P = I;
            break;
        }
    }

    if (P == -1)
    {
        cout << RED << "Usted no posee una cuenta en el sistema de pasantías" << RESET << endl;
        cout << "¿Desea crear una cuenta? Ingrese: 1: Sí / 0: No: ";
        if (Opc_Bool())
        {
            Limpiar();
            Dibujo = "Pasantias"; Art();

            Password_Academic(Var, Est, Prof, Admin); 
            
            for (J = 0 ; J < D ; J++)
            {
                if (Pas[J].Nombre == "")
                {
                    Pas[J].Nombre = Est[N].Nombre;
                    Pas[J].Cedula = Est[N].Cedula;
                    Pas[J].Carrera = Est[N].Carrera;
                    Pas[J].Semestre = Est[N].Semestre;
                    Pas[J].Year = Est[N].Year;
                    Pas[J].Empresa = " ";
                    Pas[J].Estado_Solicitud = 0;
                    Pas[J].Horas = 0;
                    P = J;
                    Guardar_Pasantias_Servicio(Pas, SerC);
                    break;
                }
            }
        }
        else
        {
            return;
        }
    }

    do
    {
        Limpiar();
        Dibujo = "Pasantias"; Art();
        Opc_F = 5;
        cout << CYAN << "Panel de pasantías - Usuario: " << Pas[P].Nombre << RESET << endl;
        cout << "¿Que desea hacer?" << endl;
        cout << "1: Empresas del listado" << endl;
        cout << "2: Agregar empresa propia" << endl;
        cout << "3: Revisar estatus de solicitud" << endl;
        cout << "4: Cargar horas de jornada" << endl;
        cout << "5: Salir" << endl;
        cout << "Ingrese opción: ";
        Opc = Opc_Menu(Opc_F);

        if (Opc == 1)
        {
            if (Pas[P].Estado_Solicitud == 0)
            {
                Limpiar();
                Dibujo = "Pasantias"; Art();
                cout << CYAN << "Locaciones disponibles para " << Pas[P].Carrera << RESET << endl;

                if (Pas[P].Carrera == "Informática")
                {
                    cout << "1: SIAR Valencia" << endl;
                    cout << "2: UCAB Caracas" << endl;
                    cout << "3: Deinsa Global" << endl;
                }
                else if (Pas[P].Carrera == "Civil")
                {
                    cout << "1: UCAB Guayana" << endl;
                    cout << "2: PepsiCo" << endl;
                    cout << "3: Febeca C.A." << endl;
                }
                else if (Pas[P].Carrera == "Hidrocarburos")
                {
                    cout << "1: PDVSA" << endl;
                    cout << "2: Chevron" << endl;
                    cout << "3: Schlumberger" << endl;
                }
                else if (Pas[P].Carrera == "Medicina")
                {
                    cout << "1: Hospital Central" << endl;
                    cout << "2: Clínica El Ávila" << endl;
                    cout << "3: Cruz Roja" << endl;
                }
                else if (Pas[P].Carrera == "Odontología")
                {
                    cout << "1: Centro Odontológico Integral" << endl;
                    cout << "2: Salud Chacao" << endl;
                    cout << "3: Dentis C.A." << endl;
                }
                else if (Pas[P].Carrera == "Veterinaria")
                {
                    cout << "1: Zoológico de Caricuao" << endl;
                    cout << "2: Clínica Veterinaria SOS" << endl;
                    cout << "3: Agropecuaria El Samán" << endl;
                }
                else if (Pas[P].Carrera == "Derecho")
                {
                    cout << "1: Escritorio Jurídico Mendoza" << endl;
                    cout << "2: Tribunal Supremo de Justicia" << endl;
                    cout << "3: Ministerio Público" << endl;
                }
                else if (Pas[P].Carrera == "Comunicación")
                {
                    cout << "1: Venevisión" << endl;
                    cout << "2: El Nacional" << endl;
                    cout << "3: Unión Radio" << endl;
                }
                else if (Pas[P].Carrera == "Contaduría")
                {
                    cout << "1: Deloitte" << endl;
                    cout << "2: KPMG" << endl;
                    cout << "3: PwC Venezuela" << endl;
                }
                else if (Pas[P].Carrera == "Economía")
                {
                    cout << "1: Banco Central de Venezuela" << endl;
                    cout << "2: Bolsa de Valores de Caracas" << endl;
                    cout << "3: Ecoanalítica" << endl;
                }

                Opc_F = 3;
                cout << "Ingrese: ";
                Opc_Emp = Opc_Menu(Opc_F);
                Pas[P].Estado_Solicitud = 1;

                switch (Opc_Emp)
                {
                    case 1:
                        if (Pas[P].Carrera == "Informática") { Pas[P].Empresa = "SIAR Valencia"; }
                        else if (Pas[P].Carrera == "Civil") { Pas[P].Empresa = "UCAB Guayana"; }
                        else if (Pas[P].Carrera == "Hidrocarburos") { Pas[P].Empresa = "PDVSA"; }
                        else if (Pas[P].Carrera == "Medicina") { Pas[P].Empresa = "Hospital Central"; }
                        else if (Pas[P].Carrera == "Odontología") { Pas[P].Empresa = "Centro Odontológico Integral"; }
                        else if (Pas[P].Carrera == "Veterinaria") { Pas[P].Empresa = "Zoológico de Caricuao"; }
                        else if (Pas[P].Carrera == "Derecho") { Pas[P].Empresa = "Escritorio Jurídico Mendoza"; }
                        else if (Pas[P].Carrera == "Comunicación") { Pas[P].Empresa = "Venevisión"; }
                        else if (Pas[P].Carrera == "Contaduría") { Pas[P].Empresa = "Deloitte"; }
                        else if (Pas[P].Carrera == "Economía") { Pas[P].Empresa = "Banco Central de Venezuela"; }
                        break;
                    case 2:
                        if (Pas[P].Carrera == "Informática") { Pas[P].Empresa = "UCAB Caracas"; }
                        else if (Pas[P].Carrera == "Civil") { Pas[P].Empresa = "PepsiCo"; }
                        else if (Pas[P].Carrera == "Hidrocarburos") { Pas[P].Empresa = "Chevron"; }
                        else if (Pas[P].Carrera == "Medicina") { Pas[P].Empresa = "Clínica El Ávila"; }
                        else if (Pas[P].Carrera == "Odontología") { Pas[P].Empresa = "Salud Chacao"; }
                        else if (Pas[P].Carrera == "Veterinaria") { Pas[P].Empresa = "Clínica Veterinaria SOS"; }
                        else if (Pas[P].Carrera == "Derecho") { Pas[P].Empresa = "Tribunal Supremo de Justicia"; }
                        else if (Pas[P].Carrera == "Comunicación") { Pas[P].Empresa = "El Nacional"; }
                        else if (Pas[P].Carrera == "Contaduría") { Pas[P].Empresa = "KPMG"; }
                        else if (Pas[P].Carrera == "Economía") { Pas[P].Empresa = "Bolsa de Valores de Caracas"; }
                        break;
                    case 3:
                        if (Pas[P].Carrera == "Informática") { Pas[P].Empresa = "Deinsa Global"; }
                        else if (Pas[P].Carrera == "Civil") { Pas[P].Empresa = "Febeca C.A."; }
                        else if (Pas[P].Carrera == "Hidrocarburos") { Pas[P].Empresa = "Schlumberger"; }
                        else if (Pas[P].Carrera == "Medicina") { Pas[P].Empresa = "Cruz Roja"; }
                        else if (Pas[P].Carrera == "Odontología") { Pas[P].Empresa = "Dentis C.A."; }
                        else if (Pas[P].Carrera == "Veterinaria") { Pas[P].Empresa = "Agropecuaria El Samán"; }
                        else if (Pas[P].Carrera == "Derecho") { Pas[P].Empresa = "Ministerio Público"; }
                        else if (Pas[P].Carrera == "Comunicación") { Pas[P].Empresa = "Unión Radio"; }
                        else if (Pas[P].Carrera == "Contaduría") { Pas[P].Empresa = "PwC Venezuela"; }
                        else if (Pas[P].Carrera == "Economía") { Pas[P].Empresa = "Ecoanalítica"; }
                        break;
                }
                Guardar_Pasantias_Servicio(Pas, SerC);
                cout << GREEN << "Solicitud registrada con éxito." << RESET << endl;
                Continue();
            }
            else
            {
                Limpiar();
                Dibujo = "Pasantias"; Art();
                cout << YELLOW << "Ya tienes una solicitud activa." << RESET << endl;
                Continue();
            }
        }
        else if (Opc == 2)
        {
            if (Pas[P].Estado_Solicitud == 0)
            {
                Limpiar();
                Dibujo = "Pasantias"; Art();
                cout << "Nombre de la empresa: "; 
                Pas[P].Empresa = Palabra();
                cout << "Justificación: "; 
                Pas[P].Justificacion = Palabra();
                Pas[P].Estado_Solicitud = 2;
                Guardar_Pasantias_Servicio(Pas, SerC);
                cout << GREEN << "Su petición ha sido elevada para revisión." << RESET << endl;
                Continue();
            }
            else
            {
                Limpiar();
                Dibujo = "Pasantias"; Art();
                cout << YELLOW << "Ya tienes una solicitud activa." << RESET << endl;
                Continue();
            }
        }
        else if (Opc == 3)
        {
            Limpiar();
            Dibujo = "Pasantias"; Art();
            cout << CYAN << "Empresa: " << RESET << Pas[P].Empresa << endl;
            if (Pas[P].Estado_Solicitud == 1)
            { 
                cout << GREEN << "Estatus: Aprobada" << RESET << endl;
            }
            else if (Pas[P].Estado_Solicitud == 2)
            { 
                cout << YELLOW << "Estatus: En proceso" << RESET << endl;
            }
            else
            {
                cout << RED << "Estatus: Sin solicitud" << RESET << endl;
            }
            Continue();
        }
        else if (Opc == 4)
        {
            if (Pas[P].Estado_Solicitud == 1)
            {
                Limpiar();
                Dibujo = "Pasantias"; Art();
                cout << CYAN << "Horas de la jornada (máx 8)" << RESET << endl;
                cout << "Ingrese Horas: ";
                Horas_Nuevas = Jornada();
                Pas[P].Horas += Horas_Nuevas;
                cout << "Total de horas: " << Pas[P].Horas << "/320" << endl;
                if (Pas[P].Horas >= 320)
                {
                    cout << GREEN << "Has completado tus pasantías" << RESET << endl;
                    Est[N].Pasantias = 1;
                }
                Guardar_Pasantias_Servicio(Pas, SerC);
                Continue();
            }
            else
            {
                Limpiar();
                Dibujo = "Pasantias"; Art();
                cout << RED << "No puede cargar horas sin una solicitud aprobada" << RESET << endl;
                Continue();
            }
        }

    } while (Opc != 5);
}