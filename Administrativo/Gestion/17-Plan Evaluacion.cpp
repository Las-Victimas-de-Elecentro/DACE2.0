#include "../../Main/Header.h"
using namespace std;

void Gestion_Plan_Evaluacion (Variables &Var, Plan_Evaluacion (&Plan)[D], Reportes (&Rep)[D], Clase_Magistral (&Mag)[D], Solicitudes (&Soli)[D], Novedades (&Nov)[D])
{

    int& Opc_F = Var.Opc_F;
    int I, Opc_Menu_Principal, Opc_Sub, CI_Busqueda;
    string Codigo_Busqueda; 
    bool Encontrado;

    do
    {

        Limpiar(); Dibujo = "Book"; Art();

        cout << CYAN << "Gestión de Planes de Evaluación" << RESET << endl;
        cout << "1: Ver todos los planes registrados" << endl;
        cout << "2: Buscar plan por código de materia" << endl;
        cout << "3: Buscar plan por cédula del profesor" << endl;
        cout << "4: Salir" << endl;
        cout << "Ingrese opción: ";
        Opc_F = 4;
        Opc_Menu_Principal = Opc_Menu(Opc_F);

        if (Opc_Menu_Principal == 1 || Opc_Menu_Principal == 2 || Opc_Menu_Principal == 3)
        {

            Encontrado = false;
            
            if (Opc_Menu_Principal == 2)
            {
                Limpiar(); Dibujo = "Book"; Art();
                cout << "Ingrese el código de la materia a buscar: ";
                cin >> Codigo_Busqueda;
            }

            if (Opc_Menu_Principal == 3)
            {
                Limpiar(); Dibujo = "Book"; Art();
                cout << "Ingrese la cédula del profesor: ";
                CI_Busqueda = Entero();
            }

            for (I = 0; I < D; I++)
            {

                if (Plan[I].Nombre_Materia != "")
                {

                    bool Coincide = false;

                    if (Opc_Menu_Principal == 1)
                    {

                        Coincide = true;
                    }

                    if (Opc_Menu_Principal == 2 && Plan[I].Codigo_Materia == Codigo_Busqueda)
                    {

                        Coincide = true;
                    }

                    if (Opc_Menu_Principal == 3 && Plan[I].CI_Profesor == CI_Busqueda)
                    {

                        Coincide = true;
                    }

                    if (Coincide == true)
                    {

                        Encontrado = true;
                        Limpiar();
                        Dibujo = "Book"; Art();

                        cout << CYAN << "Datos del Plan de Evaluación #" << I + 1 << RESET << endl;
                        cout << "Profesor: " << Plan[I].Nombre_Profesor << " (C.I: " << Plan[I].CI_Profesor << ")" << endl;
                        cout << "Materia: " << Plan[I].Nombre_Materia << " [" << Plan[I].Codigo_Materia << "]" << endl;
                        cout << "Fecha: " << Plan[I].Fecha.Dia << "/" << Plan[I].Fecha.Mes << "/" << Plan[I].Fecha.Year << endl;
                        cout << "Tema: " << Plan[I].Tema << endl;
                        cout << "Estrategia: " << Plan[I].Estrategia << endl;
                        cout << "Ponderación: " << Plan[I].Ponderacion << "%" << endl;

                        if (Plan[I].Firmado == 1)
                        {

                            cout << "Estado: " << GREEN << "Firmado" << RESET << endl;
                        }

                        if (Plan[I].Firmado == 0)
                        {

                            cout << "Estado: " << RED << "Pendiente de firma" << RESET << endl;
                        }

                        cout << endl;
                        
                        if (Plan[I].Firmado == 0)
                        {

                            cout << "1: Firmar plan" << endl;
                        }

                        if (Plan[I].Firmado == 1)
                        {

                            cout << "1: Quitar firma" << endl;
                        }

                        cout << "2: Siguiente" << endl;
                        cout << "3: Salir" << endl;

                        cout << "Ingrese opción: ";
                        Opc_F = 3;
                        Opc_Sub = Opc_Menu(Opc_F);

                        if (Opc_Sub == 1)
                        {

                            if (Plan[I].Firmado == 1)
                            {

                                Plan[I].Firmado = 0;
                                Limpiar(); Dibujo = "Book"; Art();
                                cout << RED << "Firma removida" << RESET << endl;
                            }

                            if (Plan[I].Firmado == 0)
                            {

                                Plan[I].Firmado = 1;
                                Limpiar(); Dibujo = "Book"; Art();
                                cout << GREEN << "Plan firmado correctamente" << RESET << endl;
                            }

                            Guardar_Gestion_2 (Plan, Rep, Mag, Soli, Nov);
                            Continue();
                        }

                        if (Opc_Sub == 3)
                        {

                            break;
                        }

                    }

                }

            }

            if (Encontrado == false)
            {
                Limpiar(); Dibujo = "Book"; Art();
                cout << RED << "No se encontraron registros" << RESET << endl;
                Continue();
            }

        }

    } while (Opc_Menu_Principal != 4);

}