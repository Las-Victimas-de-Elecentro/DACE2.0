#include "../../Main/Header.h"
using namespace std;

void Solicitud_Empleado (Variables &Var, Empleado (&Emp)[D], Inscrito (&Ins)[D])
{

    int& Opc_F = Var.Opc_F;
    int I, J, T, Opc, Cont, Pos;
    bool R, R2, R3;

    do 
    {

        I = 0;
        J = 0;
        T = 0;
        Pos = 0;
        Cont = 0;

        Limpiar();
        Dibujo = "Empleado"; 
        Art();

        cout << "¿Desea ingresar la solicitud de un empleo? Ingrese: 1: Sí / 0: No : ";
        R = Opc_Bool();

        if (R == 1)
        {

            do 
            {

                for (I = 0; I < D; I++) 
                {

                    if (Emp[I].Nombre == "") 
                    {

                        Pos = I;
                        break;
                    }

                }

                Limpiar();
                Dibujo = "Empleado"; 
                Art();
                cout << "Rellene la solicitud de empleo" << endl;
                cout << "Ingrese su Nombre: ";
                Emp[Pos].Nombre = Nombre_User();
                
                Limpiar();
                Dibujo = "Empleado"; 
                Art();
                cout << "Ingrese su Apellido: ";
                Emp[Pos].Apellido = Apellido_User();
                
                Limpiar();
                Dibujo = "Empleado"; 
                Art();
                cout << "Ingrese su Cedula: ";
                Emp[Pos].Cedula = Cedula_User();
                
                Limpiar();
                Dibujo = "Empleado"; 
                Art();
                cout << "Ingrese su fecha de nacimiento" << endl;
                cout << "Ingrese el Dia: ";
                Emp[Pos].Fecha.Dia = Dia_User();
                
                Limpiar();
                Dibujo = "Empleado"; 
                Art();
                cout << "Ingrese el Mes: ";
                Emp[Pos].Fecha.Mes = Mes_User();
                
                Limpiar();
                Dibujo = "Empleado"; 
                Art();
                cout << "Ingrese el Año: ";
                Emp[Pos].Fecha.Year = Year_User();
                
                Limpiar();
                Dibujo = "Empleado"; 
                Art();
                cout << "Ingrese su Correo: ";
                Emp[Pos].Correo = Correo_User();
                
                Limpiar();
                Dibujo = "Empleado"; 
                Art();
                cout << "Indique cual es su experiencia de trabajo: ";
                Emp[Pos].Experiencia = Contenido();

                Limpiar();
                Dibujo = "Empleado"; 
                Art();
                cout << "Ingrese su descripcion: ";
                Emp[Pos].Descripcion = Contenido();

                Emp[Pos].Aprobado = false;
                Emp[Pos].Trabajando = false;

                Limpiar();

                for (J = 0; J < 20; J++) 
                {

                    Limpiar();
                    Dibujo = "Empleado"; 
                    Art();

                    cout << "Ingrese el titulo Nro " << J + 1 << ": ";
                    Emp[Pos].Titulo[J] = Palabra();

                    if (J < 19) 
                    {

                        cout << "¿Desea agregar otro titulo? Ingrese: 1: Si / 0: No : ";
                        R2 = Opc_Bool();
                        
                        if (R2 == 0) 
                        {

                            break;
                        }

                    }

                }

                Limpiar();
                Dibujo = "Empleado"; 
                Art();
                Guardar_Solicitudes (Emp, Ins);
                cout << GREEN << "Solicitud procesada con exito" << RESET << endl;
                cout << "¿Desea ingresar otra solicitud de empleo? Ingrese 1: Sí / 0: No : ";
                R = Opc_Bool();

            } while (R == 1);

        }

        Limpiar();
        Dibujo = "Empleado"; 
        Art();
        
        Cont = 0;
        for (I = 0; I < D; I++)
        {

            if (Emp[I].Nombre != "" && Emp[I].Aprobado == false && Emp[I].Trabajando == false)
            {

                Cont++;
            }

        }

        cout << "¿Desea revisar las solicitudes de empleo? Ingrese: 1: Sí / 0: No : ";
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

                    if (Emp[I].Nombre != "" && Emp[I].Aprobado == false && Emp[I].Trabajando == false) 
                    {

                        Limpiar();
                        Dibujo = "Empleado"; 
                        Art();
                        cout << CYAN << "Nombre: " << Emp[I].Nombre << " " << Emp[I].Apellido << RESET << endl;
                        cout << "Cedula: " << Emp[I].Cedula << endl;
                        cout << "Correo: " << Emp[I].Correo << endl;
                        cout << "Experiencia: " << Emp[I].Experiencia << endl;
                        cout << "Descripción: " << Emp[I].Descripcion << endl;
                        cout << "Titulos obtenidos: " << endl;
                        
                        for (T = 0; T < 20; T++) 
                        {

                            if (Emp[I].Titulo[T] != "") 
                            {

                                cout << "- " << Emp[I].Titulo[T] << endl;
                            }

                        }

                        Opc_F = 3;
                        cout << endl << "¿Que desea hacer con esta solicitud?" << endl;
                        cout << "1: Aprobar" << endl;
                        cout << "2: Denegar" << endl;
                        cout << "3: Salir" << endl;
                        cout << "Ingrese: ";
                        Opc = Opc_Menu(Opc_F);

                        if (Opc == 1)
                        {

                            Emp[I].Aprobado = true;
                            Cambio_Solicitudes (Emp, Ins);
                            cout << GREEN << "Solicitud aprobada exitosamente" << RESET << endl;
                            Continue();
                        }

                        if (Opc == 2) 
                        {

                            Emp[I].Nombre = "";
                            Emp[I].Apellido = "";
                            Emp[I].Cedula = 0;
                            Emp[I].Correo = "";
                            Emp[I].Experiencia = "";
                            Emp[I].Descripcion = "";
                            
                            for (T = 0; T < 20; T++) 
                            {

                                Emp[I].Titulo[T] = "";
                            }
                            
                            Emp[I].Aprobado = false;
                            Emp[I].Trabajando = false;
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
        Dibujo = "Empleado"; Art();
        cout << "¿Desea repetir el proceso de solicitudes y revisión? Ingrese: 1: Sí / 0: No : ";
        R3 = Opc_Bool();

    } while (R3 == 1);

}