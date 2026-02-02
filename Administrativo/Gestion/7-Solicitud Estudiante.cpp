#include "../../Main/Header.h"
using namespace std;

void Solicitud_Estudiante (Variables &Var, Empleado (&Emp)[D], Inscrito (&Ins)[D])
{

    int& Opc_F = Var.Opc_F;
    int I, Opc, Cont, Pos;
    bool R, R3;

    do 
    {

        I = 0;
        Pos = 0;
        Cont = 0;

        Limpiar();
        Dibujo = "Estudiante"; 
        Art();

        cout << "¿Desea ingresar la solicitud de un estudiante? Ingrese: 1: Sí / 0: No : ";
        R = Opc_Bool();

        if (R == 1)
        {

            do 
            {

                for (I = 0; I < D; I++) 
                {

                    if (Ins[I].Nombre == "") 
                    {

                        Pos = I;
                        break;
                    }

                }

                Limpiar();
                Dibujo = "Estudiante"; 
                Art();
                cout << "Rellene la solicitud de estudiante" << endl;
                cout << "Ingrese su Nombre: ";
                Ins[Pos].Nombre = Nombre_User();
                
                Limpiar();
                Dibujo = "Estudiante"; 
                Art();
                cout << "Ingrese su Apellido: ";
                Ins[Pos].Apellido = Apellido_User();
                
                Limpiar();
                Dibujo = "Estudiante"; 
                Art();
                cout << "Ingrese su Cedula: ";
                Ins[Pos].Cedula = Cedula_User();
                
                Limpiar();
                Dibujo = "Estudiante"; 
                Art();
                cout << "Ingrese su fecha de nacimiento" << endl;
                cout << "Ingrese el Dia: ";
                Ins[Pos].Fecha.Dia = Dia_User();
                
                Limpiar();
                Dibujo = "Estudiante"; 
                Art();
                cout << "Ingrese el Mes: ";
                Ins[Pos].Fecha.Mes = Mes_User();
                
                Limpiar();
                Dibujo = "Estudiante"; 
                Art();
                cout << "Ingrese el Año: ";
                Ins[Pos].Fecha.Year = Year_User();
                
                Limpiar();
                Dibujo = "Estudiante"; 
                Art();
                cout << "Ingrese su Correo: ";
                Ins[Pos].Correo = Correo_User();
                
                Limpiar();
                Dibujo = "Estudiante"; 
                Art();
                cout << "Ingrese la Carrera: ";
                Ins[Pos].Carrera = Palabra();

                Limpiar();
                Dibujo = "Estudiante"; 
                Art();
                cout << "Ingrese el Año de estudio: ";
                Ins[Pos].Year = Entero();

                Limpiar();
                Dibujo = "Estudiante"; 
                Art();
                cout << "Ingrese el Semestre: ";
                Ins[Pos].Semestre = Entero();

                Ins[Pos].Aprobado = false;
                Ins[Pos].Estudiando = false;

                Limpiar();
                Dibujo = "Estudiante"; 
                Art();
                Guardar_Solicitudes (Emp, Ins);
                cout << GREEN << "Solicitud procesada con exito" << RESET << endl;
                cout << "¿Desea ingresar otra solicitud de estudiante? Ingrese 1: Sí / 0: No : ";
                R = Opc_Bool();

            } while (R == 1);

        }

        Limpiar();
        Dibujo = "Estudiante"; 
        Art();
        
        Cont = 0;
        for (I = 0; I < D; I++)
        {

            if (Ins[I].Nombre != "" && Ins[I].Aprobado == false && Ins[I].Estudiando == false)
            {
                Cont++;
            }

        }

        cout << "¿Desea revisar las solicitudes de estudiante? Ingrese: 1: Sí / 0: No : ";
        R = Opc_Bool();

        if (R == 1) 
        {

            if (Cont == 0)
            {

                cout << RED << "No existen solicitudes pendientes por revisar" << RESET << endl;
                Continue();
            }
            else
            {

                for (I = 0; I < D; I++) 
                {

                    if (Ins[I].Nombre != "" && Ins[I].Aprobado == false && Ins[I].Estudiando == false) 
                    {

                        Limpiar();
                        Dibujo = "Estudiante"; 
                        Art();
                        cout << CYAN << "Nombre: " << Ins[I].Nombre << " " << Ins[I].Apellido << RESET << endl;
                        cout << "Cedula: " << Ins[I].Cedula << endl;
                        cout << "Correo: " << Ins[I].Correo << endl;
                        cout << "Carrera: " << Ins[I].Carrera << endl;
                        cout << "Año: " << Ins[I].Year << endl;
                        cout << "Semestre: " << Ins[I].Semestre << endl;
                        
                        Opc_F = 3;
                        cout << endl << "¿Que desea hacer con esta solicitud?" << endl;
                        cout << "1: Aprobar" << endl;
                        cout << "2: Denegar" << endl;
                        cout << "3: Salir" << endl;

                        cout << "Ingrese: ";
                        Opc = Opc_Menu(Opc_F);

                        if (Opc == 1)
                        {

                            Ins[I].Aprobado = true;
                            Cambio_Solicitudes (Emp, Ins);
                            cout << GREEN << "Solicitud aprobada exitosamente" << RESET << endl;
                            Continue();
                        }

                        if (Opc == 2) 
                        {

                            Ins[I].Nombre = "";
                            Ins[I].Apellido = "";
                            Ins[I].Cedula = 0;
                            Ins[I].Correo = "";
                            Ins[I].Carrera = "";
                            Ins[I].Semestre = 0;
                            Ins[I].Year = 0;
                            Ins[I].Aprobado = false;
                            Ins[I].Estudiando = false;
                            Cambio_Solicitudes (Emp, Ins);
                            cout << RED << "Solicitud denegada y borrada" << RESET << endl;
                            Continue();
                        }

                        if (Opc == 3)
                        {

                            break;
                        }

                    }

                }

            }

        }

        Limpiar();
        Dibujo = "Estudiante"; 
        Art();
        cout << "¿Desea repetir el proceso de solicitudes y revisión? Ingrese: 1: Sí / 0: No : ";
        R3 = Opc_Bool();

    } while (R3 == 1);

}