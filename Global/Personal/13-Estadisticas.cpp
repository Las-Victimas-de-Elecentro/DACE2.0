#include "../../Main/Header.h"
using namespace std;

void Estadisticas(Variables (&Var), Administrativo (&Admin)[D], Profesor (&Prof)[D], Estudiante (&Est)[D])
{
    int& Opc_F = Var.Opc_F;
    int I, Opc, SubOpc;
    bool Hay_Datos;

    do
    {

        Limpiar();
        Dibujo = "Empleado";
        Art();

        cout << CYAN << "Menú de Estadísticas del Sistema" << RESET << endl;
        cout << "1: Ver Estadísticas Administrativos" << endl;
        cout << "2: Ver Estadísticas Docentes" << endl;
        cout << "3: Ver Estadísticas Estudiantes" << endl;
        cout << "4: Salir" << endl;
        cout << "Ingrese opción: ";
        Opc_F = 4;
        Opc = Opc_Menu(Opc_F);

        if (Opc == 1)
        {

            Hay_Datos = false;
            for (I = 0; I < D; I++)
            {

                if (Admin[I].Nombre != "")
                {

                    Hay_Datos = true;
                    do
                    {

                        Limpiar();
                        Dibujo = "Empleado";
                        Art();
                        cout << CYAN << "Estadísticas Administrativo" << RESET << endl;
                        cout << "Nombre: " << Admin[I].Nombre << endl;
                        cout << "Cédula: " << Admin[I].Cedula << endl;
                        cout << "Fecha de Nacimiento: " << Admin[I].Fecha.Dia << "/" << Admin[I].Fecha.Mes << "/" << Admin[I].Fecha.Year << endl;
                        cout << "Cargo: " << Admin[I].Cargo << endl;
                        cout << "Correo Electrónico: " << Admin[I].Correo << endl;

                        cout << endl;
                        cout << "1: Siguiente" << endl;
                        cout << "0: Salir" << endl;
                        
                        cout << "Ingrese opción: ";
                        SubOpc = Opc_Bool();

                        if (SubOpc == 1)
                        {

                            break;
                        }

                        if (SubOpc == 0)
                        {

                            I = D; 
                            break;
                        }

                    } while (SubOpc != 1);

                }

            }

            if (Hay_Datos == false)
            {

                cout << RED << "No hay administrativos registrados" << RESET << endl;
                Continue();
            }

        }

        if (Opc == 2)
        {

            Hay_Datos = false;
            for (I = 0; I < D; I++)
            {

                if (Prof[I].Nombre != "")
                {

                    Hay_Datos = true;
                    do
                    {

                        Limpiar();
                        Dibujo = "Empleado";
                        Art();
                        cout << CYAN << "Estadísticas Docente" << RESET << endl;
                        cout << "Nombre: " << Prof[I].Nombre << endl;
                        cout << "Cédula: " << Prof[I].Cedula << endl;
                        cout << "Fecha de Nacimiento: " << Prof[I].Fecha.Dia << "/" << Prof[I].Fecha.Mes << "/" << Prof[I].Fecha.Year << endl;
                        cout << "Correo Electrónico: " << Prof[I].Correo << endl;
                        cout << "Materias: " << Prof[I].Materias << endl;
                        cout << "Cantidad de Materias: " << Prof[I].Cant_Mat << endl;

                        cout << endl;
                        cout << "1: Siguiente" << endl;
                        cout << "0: Salir" << endl;
                        
                        cout << "Ingrese opción: ";
                        SubOpc = Opc_Bool();

                        if (SubOpc == 1)
                        {

                            break;
                        }

                        if (SubOpc == 0)
                        {

                            I = D;
                            break;
                        }

                    } while (SubOpc != 1);

                }

            }

            if (Hay_Datos == false)
            {
                Limpiar();
                Dibujo = "Empleado";
                Art();
                cout << RED << "No hay docentes registrados" << RESET << endl;
                Continue();
            }

        }

        if (Opc == 3)
        {

            Hay_Datos = false;
            for (I = 0; I < D; I++)
            {

                if (Est[I].Nombre != "")
                {

                    Hay_Datos = true;
                    do
                    {

                        Limpiar();
                        Dibujo = "Empleado";
                        Art();
                        cout << CYAN << "Estadísticas Estudiante" << RESET << endl;
                        cout << "Nombre: " << Est[I].Nombre << endl;
                        cout << "Cédula: " << Est[I].Cedula << endl;
                        cout << "Fecha de Nacimiento: " << Est[I].Fecha.Dia << "/" << Est[I].Fecha.Mes << "/" << Est[I].Fecha.Year << endl;
                        cout << "Correo Electrónico: " << Est[I].Correo << endl;
                        cout << "Carrera: " << Est[I].Carrera << endl;
                        cout << "Año: " << Est[I].Year << endl;
                        cout << "Semestre: " << Est[I].Semestre << endl;

                        cout << endl;
                        cout << "1: Siguiente" << endl;
                        cout << "0: Salir" << endl;
                        
                        cout << "Ingrese opción: ";
                        SubOpc = Opc_Bool();

                        if (SubOpc == 1)
                        {

                            break;
                        }

                        if (SubOpc == 0)
                        {

                            I = D;
                            break;
                        }

                    } while (SubOpc != 1);

                }

            }

            if (Hay_Datos == false)
            {
                Limpiar();
                Dibujo = "Empleado";
                Art();
                cout << RED << "No hay estudiantes registrados" << RESET << endl;
                Continue();
            }

        }

    } while (Opc != 4);

}