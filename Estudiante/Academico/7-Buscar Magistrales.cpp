#include "../../Main/Header.h"
using namespace std;

void Buscar_Magistrales (Variables (&Var), Estudiante (&Est)[D], Clase (&Class)[D], Clase_Magistral (&Mag)[D], Profesor (&Prof)[D])
{
    int& N = Var.N;
    int& Opc_F = Var.Opc_F;
    int Opc, I, J, C, Cont, Cupos;
    bool R, R2;

    do {
        Limpiar();
        Dibujo = "BookTwo"; Art();

        cout << "¿Desea revisar sus clases magistrales registradas? Ingrese: 1: Si / 0: No: ";
        R = Opc_Bool();

        if (R == 1)
        {
            Limpiar();
            Dibujo = "BookTwo"; Art();
            cout << CYAN << "Mis clases magistrales" << RESET << endl;
            bool Clases = false;

            for (I = 0; I < D; I++)
            {
                if (Mag[I].Nombre_Clase != "")
                {
                    for (J = 0; J < D; J++)
                    {
                        if (Mag[I].Est_Mag.Cedula[J] == Est[N].Cedula)
                        {
                            Clases = true;
                            cout << "Clase: " << Mag[I].Nombre_Clase << " | Profesor: " << Mag[I].Nombre_Profesor << endl;
                            
                            if (Mag[I].Est_Mag.Pago[J] == 1)
                            {
                                cout << "Estado: " << GREEN << "Pagada" << RESET << endl;
                            }
                            else
                            {
                                cout << "Estado: " << RED << "Pendiente por pagar" << RESET << endl;
                            }
                            cout << endl;
                        }
                    }
                }
            }

            if (Clases == false)
            {
                cout << RED << "No te has inscrito en ninguna clase magistral aún" << RESET << endl;
            }
            Continue();
        }

        Limpiar();
        Dibujo = "BookTwo"; Art();
        cout << "¿Desea buscar nuevas clases magistrales para inscribirse? 1: Si / 0: No: ";
        if (Opc_Bool() == 1)
        {
            Cont = -1;
            for (I = 0 ; I < D ; I++)
            {
                if (Mag[I].Autorizacion == 1 && Mag[I].Nombre_Clase != "" && Mag[I].Carrera == Est[N].Carrera)
                {
                    bool ya_inscrito = false;
                    for(int K = 0; K < D; K++) {
                        if(Mag[I].Est_Mag.Cedula[K] == Est[N].Cedula) ya_inscrito = true;
                    }
                    if(ya_inscrito) continue;

                    Cont++;
                    Limpiar();
                    Art();

                    Cupos = 100 - Mag[I].Cant_Estudiantes;

                    cout << CYAN << Mag[I].Nombre_Clase << RESET << endl;
                    cout << "Profesor: " << Mag[I].Nombre_Profesor << endl;
                    cout << "Cupos disponibles: " << Cupos << endl;
                    cout << "Carrera: " << Mag[I].Carrera << endl;
                    cout << "Fecha: " << Mag[I].Fecha.Dia << "/" << Mag[I].Fecha.Mes << "/" << Mag[I].Fecha.Year << endl;
                    cout << "Horas: " << Mag[I].Horas << endl;
                    cout << "Aula: " << Mag[I].Aula << endl;
                    cout << "Precio: " << Mag[I].Precio << "$" << endl;


                    if (Mag[I].Cant_Estudiantes >= 100)
                    {
                        cout << RED << "No hay cupos disponibles" << RESET << endl;
                        Continue();
                    }
                    else
                    {
                        cout << "\n1: Inscribirse" << endl;
                        cout << "2: Ver siguiente" << endl;
                        cout << "3: Salir" << endl;
                        cout << "Ingrese: ";
                        Opc = Opc_Menu(Opc_F);

                        if (Opc == 1)
                        {
                            C = -1;
                            for (J = 0 ; J < D ; J++)
                            {
                                if (Mag[I].Est_Mag.Nombre[J] == "")
                                {
                                    C = J;
                                    break;
                                }
                            }

                            if (C != -1)
                            {
                                Mag[I].Est_Mag.Cedula[C] = Est[N].Cedula;
                                Mag[I].Est_Mag.Nombre[C] = Est[N].Nombre;
                                Mag[I].Est_Mag.Apellido[C] = Est[N].Apellido;
                                Mag[I].Est_Mag.Pago[C] = 0; 
                                Mag[I].Cant_Estudiantes++;

                                Est[N].Cant_Mag++;
                                if (Est[N].Magistral == "") Est[N].Magistral = Mag[I].Nombre_Clase;
                                else Est[N].Magistral += ", " + Mag[I].Nombre_Clase;

                                cout << GREEN << "Registro exitoso pendiente por pago" << RESET << endl;
                                Guardar_Ins(Class, Est, Mag);
                                Continue();
                                break;
                            }
                        }
                        else if (Opc == 3) break;
                    }
                }
            }
            if (Cont == -1)
            {
                cout << RED << "No hay nuevas clases disponibles." << RESET << endl;
                Continue();
            }
        }

        cout << "¿Desea repetir el proceso? 1: Si / 0: No: ";
        R2 = Opc_Bool();

    } while (R2 == 1);
}