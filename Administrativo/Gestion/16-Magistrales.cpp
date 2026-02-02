#include "../../Main/Header.h"
using namespace std;

void Gestion_Magistrales (Variables &Var, Plan_Evaluacion (&Plan)[D], Reportes (&Rep)[D], Clase_Magistral (&Mag)[D], Solicitudes (&Soli)[D], Novedades (&Nov)[D])
{

    int& Opc_F = Var.Opc_F;
    int I, Opc_Aprobacion;
    bool Magistrales;

    Magistrales = false;

    for (I = 0; I < D; I++)
    {

        if (Mag[I].Nombre_Clase != "")
        {

            Magistrales = true;

            do
            {

                Limpiar();
                Dibujo = "BookTwo"; 
                Art();
                
                cout << CYAN << "Revisión de Clase Magistral #" << I + 1 << RESET << endl;
                cout << "Materia: " << Mag[I].Nombre_Clase << endl;
                cout << "Profesor: " << Mag[I].Nombre_Profesor << " " << Mag[I].Apellido_Profesor << endl;
                cout << "Cédula: " << Mag[I].CI_Profesor << endl;
                cout << "Carrera: " << Mag[I].Carrera << endl;
                cout << "Fecha: " << Mag[I].Fecha.Dia << "/" << Mag[I].Fecha.Mes << "/" << Mag[I].Fecha.Year << endl;
                cout << "Aula: " << Mag[I].Aula << " | Duración: " << Mag[I].Horas << "h" << endl;
                cout << "Precio: " << Mag[I].Precio << "$" << endl;

                if (Mag[I].Autorizacion == 1)
                {

                    cout << "Estado: " << GREEN << "Aprobada" << RESET << endl;
                    cout << endl;
                    cout << "1: Desautorizar clase" << endl;
                }
                else
                {

                    cout << "Estado: " << RED << "Pendiente de aprobación" << RESET << endl;
                    cout << endl;
                    cout << "1: Aprobar clase" << endl;
                }

                cout << "2: Siguiente" << endl;
                cout << "3: Salir" << endl;

                cout << "Ingrese opción: ";
                Opc_F = 3;
                Opc_Aprobacion = Opc_Menu(Opc_F);

                if (Opc_Aprobacion == 1)
                {

                    if (Mag[I].Autorizacion == 1)
                    {

                        Mag[I].Autorizacion = 0;
                        cout << RED << "Clase desautorizada" << RESET << endl;
                    }
                    else
                    {

                        Mag[I].Autorizacion = 1;
                        cout << GREEN << "Clase aprobada con éxito" << RESET << endl;
                    }
                    
                    Guardar_Gestion_2 (Plan, Rep, Mag, Soli, Nov);
                    Continue();
                }

            } while (Opc_Aprobacion == 1);

            if (Opc_Aprobacion == 3)
            {

                return;
            }

        }

    }

    if (Magistrales == false)
    {

        Limpiar();
        Dibujo = "BookTwo"; Art();
        cout << RED << "No hay solicitudes de clases magistrales registradas" << RESET << endl;
        Continue();
    }
    else
    {

        cout << YELLOW << "No hay más clases por revisar" << RESET << endl;
        Continue();
    }

}