#include "../../Main/Header.h"
using namespace std;

void Gestionar_Estudiante (Variables (&Var), Empleado (&Emp)[D], Inscrito (&Ins)[D], Estudiante (&Est)[D], Profesor (&Prof)[D], Administrativo (&Admin)[D])
{
    int& Opc_F = Var.Opc_F;
    int& Av = Var.Av;
    string& Rol_G = Var.Rol_G; 

    int Opc, Opc2, I, J;
    long Cedula_Busq;
    bool Encontrado, Hay_Registros;

    do 
    {
        Limpiar();
        Dibujo = "Estudiante"; 
        Art();

        cout << CYAN << "Gestión de Estudiantes" << RESET << endl;
        cout << "1: Revisar solicitudes de inscripción" << endl;
        cout << "2: Ver lista de estudiantes activos" << endl;
        cout << "3: Buscar estudiante por cédula" << endl;
        cout << "4: Salir" << endl;
        
        cout << "Ingrese: ";

        Opc_F = 4;
        Opc = Opc_Menu(Opc_F);

        Hay_Registros = false;

        if (Opc == 1)
        {

            for (I = 0; I < D; I++)
            {

                if (Ins[I].Nombre != "" && Ins[I].Aprobado == true && Ins[I].Estudiando == false)
                {

                    Hay_Registros = true;

                    do 
                    {
                        Limpiar();
                        Dibujo = "Estudiante"; 
                        Art();

                        cout << CYAN << "Solicitud de Inscripción: " << Ins[I].Nombre << " " << Ins[I].Apellido << RESET << endl;
                        cout << "Cedula: " << Ins[I].Cedula << endl;
                        cout << "Correo: " << Ins[I].Correo << endl;
                        cout << "Carrera: " << Ins[I].Carrera << endl;
                        cout << "Año: " << Ins[I].Year << endl;
                        cout << "Semestre: " << Ins[I].Semestre << endl;
                        
                        cout << endl << "¿Qué desea hacer con esta solicitud?" << endl;
                        
                        cout << "1: Inscribir formalmente" << endl;
                        cout << "2: Ver siguiente" << endl;
                        cout << "3: Salir" << endl;
                        
                        cout << "Ingrese: ";

                        Opc_F = 3;
                        Opc2 = Opc_Menu(Opc_F);

                        if (Opc2 == 1)
                        {

                            for (J = 0; J < D; J++)
                            {

                                if (Est[J].Nombre == "")
                                {

                                    Est[J].Avatar = "Default";
                                    Est[J].Nombre = Ins[I].Nombre;
                                    Est[J].Nombre2 = "";
                                    Est[J].Apellido = Ins[I].Apellido;
                                    Est[J].Apellido2 = "";
                                    Est[J].Cedula = Ins[I].Cedula;
                                    Est[J].Fecha.Dia = Ins[I].Fecha.Dia;
                                    Est[J].Fecha.Mes = Ins[I].Fecha.Mes;
                                    Est[J].Fecha.Year = Ins[I].Fecha.Year;
                                    Est[J].Direccion = "";
                                    Est[J].Telefono = 0;
                                    Est[J].Genero = "";
                                    Est[J].Parroquia = "";
                                    Est[J].Etnia = "";
                                    Est[J].Correo = Ins[I].Correo;
                                    Est[J].Password = "";
                                    Est[J].Carrera = Ins[I].Carrera;
                                    Est[J].Semestre = Ins[I].Semestre;
                                    Est[J].Year = Ins[I].Year;
                                    Est[J].UC_Aprobadas = 0;
                                    Est[J].Oscuro = 0;
                                    Est[J].Pasantias = 0;
                                    Est[J].Comunitario = 0;
                                    Est[J].Amigos = 0;
                                    
                                    Rol_G = "Est"; 
                                    Av = J;
                                    break;
                                }

                            }

                            Ins[I].Estudiando = true; 
                            Guardar_Gestion(Var, Est, Prof, Admin);
                            
                            Limpiar();
                            Dibujo = "Estudiante"; 
                            Art();
                            cout << GREEN << "Estudiante inscrito exitosamente" << RESET << endl;
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
                Dibujo = "Estudiante"; 
                Art();
                cout << RED << "No se encontraron solicitudes aprobadas pendientes por inscribir" << RESET << endl;
                Continue();
            }

        }

        if (Opc == 2)
        {

            Hay_Registros = false;
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
                        Avatares_Emp (Var, Est, Prof, Admin);
                        
                        cout << CYAN << "Nombre: " << Est[I].Nombre << " " << Est[I].Apellido << RESET << endl;
                        cout << "Carrera: " << Est[I].Carrera << endl;
                        cout << "Semestre: " << Est[I].Semestre << endl;

                        cout << endl;
                        
                        cout << "1: Modificar Perfil" << endl;
                        cout << "2: Siguiente" << endl;
                        cout << "3: Salir" << endl;
                        
                        cout << "Ingrese: ";

                        Opc_F = 3;
                        Opc2 = Opc_Menu(Opc_F);
                        
                        if (Opc2 == 1) 
                        {
                            Modificar_Datos_Emp (Var, Est, Prof, Admin);
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
                Dibujo = "Estudiante"; 
                Art();
                cout << RED << "No hay estudiantes registrados en el sistema" << RESET << endl;
                Continue();
            }

        }

        if (Opc == 3)
        {

            Limpiar();
            Dibujo = "Search"; 
            Art();
            cout << "Ingrese Cédula del estudiante a buscar: "; 
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

                cout << CYAN << "Estudiante Encontrado: " << Est[Av].Nombre << " " << Est[Av].Apellido << RESET << endl;
                cout << "Carrera: " << Est[Av].Carrera << endl;

                cout << endl << "¿Desea modificar este perfil? Ingrese: 1: Sí / 0: No : ";
                
                if (Opc_Bool() == 1) 
                {

                    Modificar_Datos_Emp (Var, Est, Prof, Admin);
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

    } while (Opc != 4);

}