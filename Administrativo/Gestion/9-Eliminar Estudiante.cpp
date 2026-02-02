#include "../../Main/Header.h"
using namespace std;

void Eliminar_Estudiante (Variables &Var, Empleado (&Emp)[D], Estudiante (&Est)[D], Profesor (&Prof)[D], Administrativo (&Admin)[D])
{

    int& Opc_F = Var.Opc_F;
    int& Av = Var.Av;
    string& Rol_G = Var.Rol_G; 

    int Opc, Opc2, I, K;
    long Cedula_Busq;
    bool Encontrado, Hay_Registros, R;

    do 
    {

        Limpiar();
        Dibujo = "Eliminar"; 
        Art();

        cout << CYAN << "Eliminar Estudiantes" << RESET << endl;
        cout << "1: Ver lista de estudiantes para eliminar" << endl;
        cout << "2: Buscar estudiante por cédula para eliminar" << endl;
        cout << "3: Salir" << endl;
        cout  << "Ingrese: ";

        Opc_F = 3;
        Opc = Opc_Menu(Opc_F);

        Hay_Registros = false;

        if (Opc == 1)
        {

            Rol_G = "Est";

            for (I = 0; I < D; I++)
            {

                if (Est[I].Nombre != "")
                {

                    Hay_Registros = true;
                    Av = I;

                    do 
                    {

                        Limpiar();
                        Avatares_Emp(Var, Est, Prof, Admin);

                        cout << CYAN << "Nombre: " << Est[I].Nombre << " " << Est[I].Apellido << RESET << endl;
                        cout << "Carrera: " << Est[I].Carrera << endl;
                        cout << "Cédula: " << Est[I].Cedula << endl;

                        cout << endl;
                        
                        cout << "1: Eliminar Perfil" << endl;
                        cout << "2: Siguiente" << endl;
                        cout << "3: Salir" << endl;
                        
                        cout  << "Ingrese: ";
                        
                        Opc_F = 3; 
                        Opc2 = Opc_Menu(Opc_F);

                        if (Opc2 == 1)
                        {

                            Limpiar();
                            Avatares_Emp(Var, Est, Prof, Admin);
                            cout << RED << "¿Seguro que desea eliminar este perfil? Ingrese: 1: Si / 0: No : ";
                            
                            R = Opc_Bool();
                            if (R == 1)
                            {

                                goto Borrar_Registro;
                            }

                        }

                    } while (Opc2 != 2 && Opc2 != 3);

                    if (Opc2 == 3) 
                    { 
                        
                        break; 
                    }

                }

            }

            if (Hay_Registros == false)
            {

                Limpiar();
                Dibujo = "Eliminar"; 
                Art();
                cout << RED << "No hay estudiantes registrados en el sistema" << RESET << endl;
                Continue();
            }

        }

        if (Opc == 2)
        {

            Limpiar();
            Dibujo = "Search"; 
            Art();
            cout << "Ingrese Cédula del estudiante a eliminar: "; 
            Cedula_Busq = Cedula_User();
            Encontrado = false;

            for (I = 0; I < D; I++)
            {

                if (Est[I].Cedula == Cedula_Busq && Est[I].Nombre != "")
                {

                    Av = I; 
                    Rol_G = "Est"; 
                    Encontrado = true; 
                    break;
                }

            }

            if (Encontrado == true)
            {

                Limpiar();
                Avatares_Emp (Var, Est, Prof, Admin);

                cout << CYAN << "Estudiante: " << Est[Av].Nombre << " " << Est[Av].Apellido << RESET << endl;
                cout << "Carrera: " << Est[Av].Carrera << endl;

                cout << endl << RED << "¿Seguro que desea eliminar este perfil? Ingrese: 1: Si / 0: No : ";
                
                R = Opc_Bool();
                if (R == 1)
                {

                    I = Av;
                    goto Borrar_Registro;
                }

            }
            else
            {

                Limpiar();
                Dibujo = "Search"; 
                Art();
                cout << RED << "El estudiante no fue encontrado" << RESET << endl;
                Continuar();
            }

        }

        if (false) 
        {

            Borrar_Registro:

            Est[I].Avatar = "Default";
            Est[I].Nombre = "";
            Est[I].Nombre2 = "";
            Est[I].Apellido = "";
            Est[I].Apellido2 = "";
            Est[I].Cedula = 0;
            Est[I].Fecha.Dia = 0;
            Est[I].Fecha.Mes = 0;
            Est[I].Fecha.Year = 0;
            Est[I].Direccion = "";
            Est[I].Telefono = 0;
            Est[I].Genero = "";
            Est[I].Parroquia = "";
            Est[I].Etnia = "";
            Est[I].Correo = "";
            Est[I].Password = "";
            Est[I].Carrera = "";
            Est[I].Semestre = 0;
            Est[I].Year = 0;
            Est[I].UC_Aprobadas = 0;
            Est[I].Oscuro = false;
            Est[I].Pasantias = false;
            Est[I].Comunitario = false;
            Est[I].Amigos = 0;
            Est[I].Enf.Transmisibles = "";
            Est[I].Enf.Cronicas = "";
            Est[I].Enf.Neurologicas = "";
            Est[I].Enf.Neoplasias = "";
            Est[I].Enf.Autoinmunes = "";
            Est[I].Enf.Transtornos = "";
            Est[I].Enf.Lesiones = "";
            Est[I].Enf.Congenitas = "";
            Est[I].Enf.Metabolicos = "";
            Est[I].Enf.Ocupacionales = "";

            for (K = 0; K < 50; K++) 
            { 
                Est[I].Tarjeta[K] = 0; 
            }

            Cambio_Gestion(Var, Est, Prof, Admin);
            
            Limpiar();
            Avatares_Emp (Var, Est, Prof, Admin);
            cout << GREEN << "Estudiante eliminado exitosamente" << RESET << endl;
            Continue();
        }

    } while (Opc != 3);

}