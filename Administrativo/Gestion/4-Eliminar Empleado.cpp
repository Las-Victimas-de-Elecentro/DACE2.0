#include "../../Main/Header.h"
using namespace std;

void Eliminar_Empleado(Variables &Var, Empleado (&Emp)[D], Profesor (&Prof)[D], Administrativo (&Admin)[D], Estudiante (&Est)[D], Inscrito (&Ins)[D])
{

    int& Opc_F = Var.Opc_F;
    int& Av = Var.Av;
    string& Rol_G = Var.Rol_G; 
    int& N = Var.N;

    int Opc, Opc2, I, K;
    long Cedula_Busq, Mi_Cedula, Cedula_Objetivo;
    bool R, Hay_Registros;
    string Rol_Emp;

    Mi_Cedula = 0;
    if (Rol == "Prof")
    {
        Mi_Cedula = Prof[N].Cedula;
    }
    else if (Rol == "Admin")
    {
        Mi_Cedula = Admin[N].Cedula;
    }

    do 
    {

        Limpiar();
        Dibujo = "Eliminar"; Art();
        cout << CYAN << "Eliminar Empleados" << RESET << endl;
        cout << "1: Ver lista de personal para eliminar" << endl;
        cout << "2: Buscar por cédula para eliminar" << endl;
        cout << "3: Salir" << endl;
        cout << "Ingrese: ";

        Opc_F = 3;
        Opc = Opc_Menu(Opc_F);

        if (Opc == 1 || Opc == 2)
        {

            Limpiar();
            if (Opc == 1)
            {

                Dibujo = "Empleado"; Art();
                cout << "¿Qué lista desea ver? Ingrese: 1: Docentes / 0: Administrativos : ";
            }
            else
            {

                Dibujo = "Search"; Art();
                cout << "¿En qué área desea buscar? Ingrese: 1: Docentes / 0: Administrativos : ";
            }
            
            R = Opc_Bool();
            Rol_G = (R == 1) ? "Prof" : "Admin";
            Hay_Registros = false;

            if (Opc == 1)
            {

                for (I = 0; I < D; I++)
                {

                    bool existe = false;
                    if (R == 1 && Prof[I].Nombre != "") { existe = true; Rol_Emp = "Prof"; }
                    if (R == 0 && Admin[I].Nombre != "") { existe = true; Rol_Emp = "Admin"; }

                    if (existe == true)
                    {

                        Hay_Registros = true;
                        Av = I;

                        do 
                        {

                            Limpiar();
                            Avatares_Emp(Var, Est, Prof, Admin);

                            if (Rol_Emp == "Prof")
                            {

                                cout << CYAN << "Nombre: " << Prof[I].Nombre << " " << Prof[I].Apellido << RESET << endl;
                                cout << "Cargo: " << Prof[I].Cargo << endl;
                            }
                            else
                            {

                                cout << CYAN << "Nombre: " << Admin[I].Nombre << " " << Admin[I].Apellido << RESET << endl;
                                cout << "Cargo: " << Admin[I].Cargo << endl;
                            }

                            cout << "1: Eliminar Perfil" << endl;
                            cout << "2: Siguiente" << endl;
                            cout << "3: Salir" << endl;
                            cout << "Ingrese: ";
                            
                            Opc_F = 3; 
                            Opc2 = Opc_Menu(Opc_F);

                            if (Opc2 == 1)
                            {

                                Cedula_Objetivo = (Rol_Emp == "Prof") ? Prof[I].Cedula : Admin[I].Cedula;

                                if (Cedula_Objetivo == Mi_Cedula)
                                {
                                    Limpiar();
                                    Avatares_Emp(Var, Est, Prof, Admin);
                                    cout << RED << "No puedes eliminar tu propio perfil" << RESET << endl;
                                    Continuar();
                                    Opc2 = 2;
                                }
                                else
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

                            }

                        } while (Opc2 != 2 && Opc2 != 3);

                        if (Opc2 == 3) { break; }
                    }

                }

            }
            else
            {

                Limpiar();
                Dibujo = "Search"; Art();
                cout << "Ingrese Cédula a eliminar: "; 
                Cedula_Busq = Cedula_User();
                int Pos = -1;

                for (I = 0; I < D; I++)
                {

                    if (R == 1 && Prof[I].Cedula == Cedula_Busq && Prof[I].Nombre != "") { Pos = I; Rol_Emp = "Prof"; break; }
                    if (R == 0 && Admin[I].Cedula == Cedula_Busq && Admin[I].Nombre != "") { Pos = I; Rol_Emp = "Admin"; break; }
                }

                if (Pos != -1)
                {

                    I = Pos; Av = Pos;
                    
                    if (Cedula_Busq == Mi_Cedula)
                    {

                        Limpiar();
                        Avatares_Emp(Var, Est, Prof, Admin);
                        cout << RED << "No puedes eliminar tu propio perfil" << RESET << endl;
                        Continuar();
                    }
                    else
                    {

                        Limpiar();
                        Avatares_Emp(Var, Est, Prof, Admin);

                        if (Rol_Emp == "Prof")
                        {

                            cout << CYAN << "Empleado: " << Prof[I].Nombre << " " << Prof[I].Apellido << RESET << endl;
                            cout << "Cargo: " << Prof[I].Cargo << endl;
                        }
                        else
                        {

                            cout << CYAN << "Empleado: " << Admin[I].Nombre << " " << Admin[I].Apellido << RESET << endl;
                            cout << "Cargo: " << Admin[I].Cargo << endl;
                        }

                        cout << endl << RED << "¿Seguro que desea eliminar este perfil? Ingrese: 1: Si / 0: No : ";
                        
                        R = Opc_Bool();
                        if (R == 1)
                        {

                            goto Borrar_Registro;
                        }
                    }

                }
                else
                {

                    Limpiar(); Dibujo = "Search"; Art();
                    cout << RED << "El empleado no fue encontrado" << RESET << endl;
                    Continue();
                }

            }

            if (false) 
            {
                Borrar_Registro:
                if (Rol_Emp == "Prof")
                {

                    Prof[I].Avatar = "";
                    Prof[I].Nombre = "";
                    Prof[I].Nombre2 = "";
                    Prof[I].Apellido = "";
                    Prof[I].Apellido2 = "";
                    Prof[I].Cedula = 0;
                    Prof[I].Fecha.Dia = 0;
                    Prof[I].Fecha.Mes = 0;
                    Prof[I].Fecha.Year = 0;
                    Prof[I].Cargo = "";
                    Prof[I].Direccion = "";
                    Prof[I].Telefono = 0;
                    Prof[I].Genero = "";
                    Prof[I].Parroquia = "";
                    Prof[I].Etnia = "";
                    Prof[I].Correo = "";
                    Prof[I].Password = "";
                    Prof[I].Oscuro = false;
                    Prof[I].Materias = "";
                    Prof[I].Magistral = "";
                    Prof[I].Cant_Mat = 0;
                    Prof[I].Cant_Mag = 0;
                    Prof[I].Amigos = 0;
                    Prof[I].Enf.Transmisibles = "";
                    Prof[I].Enf.Cronicas = "";
                    Prof[I].Enf.Neurologicas = "";
                    Prof[I].Enf.Neoplasias = "";
                    Prof[I].Enf.Autoinmunes = "";
                    Prof[I].Enf.Transtornos = "";
                    Prof[I].Enf.Lesiones = "";
                    Prof[I].Enf.Congenitas = "";
                    Prof[I].Enf.Metabolicos = "";
                    Prof[I].Enf.Ocupacionales = "";
                    for (K = 0; K < 50; K++) 
                    { 
                        Prof[I].Tarjeta[K] = 0; 
                    }

                }
                else
                {

                    Admin[I].Avatar = "";
                    Admin[I].Nombre = "";
                    Admin[I].Nombre2 = "";
                    Admin[I].Apellido = "";
                    Admin[I].Apellido2 = "";
                    Admin[I].Cedula = 0;
                    Admin[I].Fecha.Dia = 0;
                    Admin[I].Fecha.Mes = 0;
                    Admin[I].Fecha.Year = 0;
                    Admin[I].Cargo = "";
                    Admin[I].Direccion = "";
                    Admin[I].Telefono = 0;
                    Admin[I].Genero = "";
                    Admin[I].Parroquia = "";
                    Admin[I].Etnia = "";
                    Admin[I].Correo = "";
                    Admin[I].Password = "";
                    Admin[I].Oscuro = false;
                    Admin[I].Enf.Transmisibles = "";
                    Admin[I].Enf.Cronicas = "";
                    Admin[I].Enf.Neurologicas = "";
                    Admin[I].Enf.Neoplasias = "";
                    Admin[I].Enf.Autoinmunes = "";
                    Admin[I].Enf.Transtornos = "";
                    Admin[I].Enf.Lesiones = "";
                    Admin[I].Enf.Congenitas = "";
                    Admin[I].Enf.Metabolicos = "";
                    Admin[I].Enf.Ocupacionales = "";
                    for (K = 0; K < 50; K++) 
                    { 
                        Admin[I].Tarjeta[K] = 0; 
                    }

                }

                Cambio_Gestion(Var, Est, Prof, Admin);
                cout << GREEN << "Empleado eliminado exitosamente" << RESET << endl;
                Continue();
            }

            if (Opc == 1 && Hay_Registros == false)
            {

                Limpiar(); Dibujo = "Eliminar"; Art();
                cout << RED << "No se encontraron empleados registrados" << RESET << endl;
                Continue();
            }

        }

    } while (Opc != 3);

}