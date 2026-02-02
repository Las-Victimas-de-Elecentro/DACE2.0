#include "../../Main/Header.h"
using namespace std;

void Gestionar_Empleado (Variables (&Var), Empleado (&Emp)[D], Profesor (&Prof)[D], Administrativo (&Admin)[D], Estudiante (&Est)[D], Inscrito (&Ins)[D])
{

    int& Opc_F = Var.Opc_F;
    int& Av = Var.Av;
    string& Rol_G = Var.Rol_G; 

    int Opc, Opc2, Opc3, I, J, T;
    long Cedula_Busq;
    bool R, Encontrado, Hay_Registros;

    do 
    {

        Limpiar();
        Dibujo = "Empleado"; Art();

        cout << CYAN << "Gestión de Personal" << RESET << endl;
        
        cout << "1: Revisar solicitudes de empleo" << endl;
        cout << "2: Ver lista de personal" << endl;
        cout << "3: Buscar por cédula" << endl;
        cout << "4: Salir" << endl;
        cout << "Ingrese: ";

        Opc_F = 4;
        Opc = Opc_Menu(Opc_F);

        Hay_Registros = false;

        if (Opc == 1)
        {

            for (I = 0; I < D; I++)
            {

                if (Emp[I].Nombre != "" && Emp[I].Aprobado == true && Emp[I].Trabajando == false)
                {

                    Hay_Registros = true;

                    do 
                    {
                        Limpiar();
                        Dibujo = "Empleado"; Art();

                        cout << CYAN << "Solicitud de: " << Emp[I].Nombre << " " << Emp[I].Apellido << RESET << endl;
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
                        
                        cout << endl << "¿Qué desea hacer con esta solicitud?" << endl;
                        
                        cout << "1: Añadirlo a la base de datos" << endl;
                        cout << "2: Ver siguiente" << endl;
                        cout << "3: Salir" << endl;
                        cout << "Ingrese: ";

                        Opc_F = 3;
                        Opc2 = Opc_Menu(Opc_F);

                        if (Opc2 == 1)
                        {

                            Limpiar();
                            Dibujo = "Empleado"; Art();
                            cout << "¿En qué cargo lo va a registrar?" << endl << endl;
                            
                            cout << "1: Docente" << endl;
                            cout << "2: Director Administrativo" << endl;
                            cout << "3: Vicerrector Académico" << endl;
                            cout << "4: Asistente Administrativo" << endl;
                            cout << "5: Rector General" << endl;
                            cout << "Ingrese: ";

                            Opc_F = 5;
                            Opc3 = Opc_Menu(Opc_F);

                            for (J = 0; J < D; J++)
                            {

                                if (Opc3 == 1)
                                {

                                    if (Prof[J].Nombre == "")
                                    {

                                        Prof[J].Avatar = "Default";
                                        Prof[J].Nombre = Emp[I].Nombre;
                                        Prof[J].Nombre2 = "";
                                        Prof[J].Apellido = Emp[I].Apellido;
                                        Prof[J].Apellido2 = "";
                                        Prof[J].Cedula = Emp[I].Cedula;
                                        Prof[J].Fecha.Dia = Emp[I].Fecha.Dia;
                                        Prof[J].Fecha.Mes = Emp[I].Fecha.Mes;
                                        Prof[J].Fecha.Year = Emp[I].Fecha.Year;
                                        Prof[J].Cargo = "Docente";
                                        Prof[J].Direccion = "";
                                        Prof[J].Telefono = 0;
                                        Prof[J].Genero = "";
                                        Prof[J].Parroquia = "";
                                        Prof[J].Etnia = "";
                                        Prof[J].Correo = Emp[I].Correo;
                                        Prof[J].Password = "";
                                        Prof[J].Oscuro = false;
                                        
                                        Rol_G = "Prof"; 
                                        Av = J;
                                        break;
                                    }

                                }
                                else
                                {

                                    if (Admin[J].Nombre == "")
                                    {

                                        Admin[J].Avatar = "Default";
                                        Admin[J].Nombre = Emp[I].Nombre;
                                        Admin[J].Nombre2 = "";
                                        Admin[J].Apellido = Emp[I].Apellido;
                                        Admin[J].Apellido2 = "";
                                        Admin[J].Cedula = Emp[I].Cedula;
                                        Admin[J].Fecha.Dia = Emp[I].Fecha.Dia;
                                        Admin[J].Fecha.Mes = Emp[I].Fecha.Mes;
                                        Admin[J].Fecha.Year = Emp[I].Fecha.Year;
                                        Admin[J].Cargo = "Administrativo";
                                        Admin[J].Direccion = "";
                                        Admin[J].Telefono = 0;
                                        Admin[J].Genero = "";
                                        Admin[J].Parroquia = "";
                                        Admin[J].Etnia = "";
                                        Admin[J].Correo = Emp[I].Correo;
                                        Admin[J].Password = "";
                                        Admin[J].Oscuro = false;
                                        
                                        Rol_G = "Admin"; 
                                        Av = J;
                                        break;
                                    }

                                }

                            }

                            Emp[I].Trabajando = true; 
                            Guardar_Gestion(Var, Est, Prof, Admin);
                            
                            Limpiar();
                            Dibujo = "Empleado"; Art();
                            cout << GREEN << "Empleado añadido exitosamente" << RESET << endl;
                            Continue();
                            break; 
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
                Dibujo = "Empleado"; Art();
                cout << RED << "No se encontraron solicitudes pendientes" << RESET << endl;
                Continue();
            }

        }

        if (Opc == 2)
        {

            Limpiar();
            Dibujo = "Empleado"; Art();
            cout << "¿Qué lista desea ver? Ingrese: 1: Docentes / 0: Administrativos : ";
            R = Opc_Bool();

            if (R == 1)
            {

                Rol_G = "Prof";
            }
            else
            {

                Rol_G = "Admin";
            }

            Hay_Registros = false;

            for (I = 0; I < D; I++)
            {

                bool existe = false;

                if (R == 1)
                {

                    if (Prof[I].Nombre != "")
                    {

                        existe = true;
                    }

                }
                else
                {

                    if (Admin[I].Nombre != "")
                    {

                        existe = true;
                    }

                }

                if (existe == true)
                {

                    Hay_Registros = true;
                    Av = I; 

                    do 
                    {
                        Limpiar();
                        Avatares_Emp(Var, Est, Prof, Admin);
                        
                        if (R == 1)
                        {

                            cout << CYAN << "Nombre: " << Prof[I].Nombre << " " << Prof[I].Apellido << RESET << endl;
                            cout << "Cargo: " << Prof[I].Cargo << endl;
                        }
                        else
                        {

                            cout << CYAN << "Nombre: " << Admin[I].Nombre << " " << Admin[I].Apellido << RESET << endl;
                            cout << "Cargo: " << Admin[I].Cargo << endl;
                        }

                        cout << endl;
                        
                        cout << "1: Modificar Perfil" << endl;
                        cout << "2: Siguiente" << endl;
                        cout << "3: Salir" << endl;
                        cout << "Ingrese: ";

                        Opc_F = 3;
                        Opc2 = Opc_Menu(Opc_F);
                        
                        if (Opc2 == 1) 
                        {

                            Modificar_Datos_Emp(Var, Est, Prof, Admin);
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
                Dibujo = "Empleado"; Art();
                cout << RED << "No se encontraron empleados registrados en esta área" << RESET << endl;
                Continue();
            }

        }

        if (Opc == 3)
        {

            Limpiar();
            Dibujo = "Search"; Art();
            cout << "¿En qué área desea buscar? Ingrese: 1: Docentes / 0: Administrativos : ";
            R = Opc_Bool();

            Limpiar();
            Dibujo = "Search"; Art();
            cout << "Ingrese Cédula a buscar: "; 
            Cedula_Busq = Cedula_User();
            Encontrado = false;

            for (I = 0; I < D; I++)
            {

                if (R == 1)
                {

                    if (Prof[I].Cedula == Cedula_Busq && Prof[I].Nombre != "")
                    {

                        Av = I; 
                        Rol_G = "Prof"; 
                        Encontrado = true; 
                        break;
                    }

                }
                else
                {

                    if (Admin[I].Cedula == Cedula_Busq && Admin[I].Nombre != "")
                    {

                        Av = I; 
                        Rol_G = "Admin"; 
                        Encontrado = true; 
                        break;
                    }

                }

            }

            if (Encontrado == true)
            {

                Limpiar();
                Avatares_Emp(Var, Est, Prof, Admin);

                if (Rol_G == "Prof")
                {

                    cout << CYAN << "Empleado Encontrado: " << Prof[Av].Nombre << " " << Prof[Av].Apellido << RESET << endl;
                }
                else
                {

                    cout << CYAN << "Empleado Encontrado: " << Admin[Av].Nombre << " " << Admin[Av].Apellido << RESET << endl;
                }

                cout << endl << "¿Desea modificar este perfil? Ingrese: 1: Sí / 0: No : ";
                
                if (Opc_Bool() == 1) 
                {

                    Modificar_Datos_Emp(Var, Est, Prof, Admin);
                }

            }
            else
            {

                Limpiar();
                Dibujo = "Search"; Art();
                cout << RED << "El empleado no fue encontrado" << RESET << endl;
                Continuar();
            }

        }

    } while (Opc != 4);

}