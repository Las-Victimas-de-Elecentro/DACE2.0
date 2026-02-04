#include "../../Main/Header.h"
using namespace std;

void Inscripcion_Club (Variables (&Var), Clubes (&Club)[D], Estudiante (&Est)[D], Profesor (&Prof)[D])
{
    int& Opc_F = Var.Opc_F;
    int& N_User = Var.N; 
    int I, Opc, Cupos;
    bool Hay_Clubes, Ya_en_Club;
    
    long Cedula;
    string Nombre;
    string Apellido;

    if (Rol == "Est")
    {

        Cedula = Est[N_User].Cedula;
        Nombre = Est[N_User].Nombre;
        Apellido = Est[N_User].Apellido;
        Ya_en_Club = Est[N_User].Club;
    }

    if (Rol == "Prof")
    {

        Cedula = Prof[N_User].Cedula;
        Nombre = Prof[N_User].Nombre;
        Apellido = Prof[N_User].Apellido;
        Ya_en_Club = Prof[N_User].Club;
    }

    if (Ya_en_Club == true)
    {

        for (I = 0; I < D; I++)
        {

            for (int J = 0; J < Club[I].Miembros_Inscritos.size(); J++)
            {

                if (Club[I].Miembros_Inscritos[J].Cedula == Cedula)
                {

                    Limpiar();Dibujo = "Club"; Art();

                    Cupos = Club[I].Capacidad_Maxima - Club[I].Miembros_Inscritos.size();

                    cout << YELLOW << "Información de tu Club Actual" << RESET << endl;
                    cout << CYAN << "Nombre: " << Club[I].Nombre << RESET << endl;
                    cout << "Descripción: " << Club[I].Descripcion << endl;
                    cout << "Horarios: " << Club[I].Horarios_Disponibles << endl;
                    cout << "Capacidad Máxima: " << Club[I].Capacidad_Maxima << endl;
                    cout << "Cupos Libres: " << Cupos << endl;
                    cout << "Miembros actuales: " << Club[I].Miembros_Inscritos.size() << endl;
                    
                    cout << endl;
                    cout << "1: Eliminar inscripción" << endl;
                    cout << "0: Salir" << endl;
                    
                    cout << "Ingrese opción: ";
                    Opc_F = 1;
                    Opc = Opc_Menu(Opc_F);

                    if (Opc == 1)
                    {

                        Club[I].Miembros_Inscritos.erase(Club[I].Miembros_Inscritos.begin() + J);

                        if (Rol == "Est")
                        {

                            Est[N_User].Club = false;
                        }

                        if (Rol == "Prof")
                        {

                            Prof[N_User].Club = false;
                        }

                        Limpiar();Dibujo = "Club"; Art();
                        cout << GREEN << "Te has retirado del club exitosamente." << RESET << endl;
                        Continue();
                    }

                    return;
                }

            }

        }

    }

    if (Ya_en_Club == false)
    {

        Hay_Clubes = false;

        for (I = 0; I < D; I++)
        {

            if (Club[I].Nombre != "" && Club[I].Activo == true)
            {

                Hay_Clubes = true;

                do 
                {

                    Limpiar();
                    Dibujo = "Club"; 
                    Art();

                    Cupos = Club[I].Capacidad_Maxima - Club[I].Miembros_Inscritos.size();

                    cout << CYAN << "Club Disponible: " << Club[I].Nombre << RESET << endl;
                    cout << "Descripción: " << Club[I].Descripcion << endl;
                    cout << "Horarios: " << Club[I].Horarios_Disponibles << endl;
                    cout << "Cupos disponibles: " << Cupos << endl;

                    cout << endl;
                    cout << "1: Inscribirse" << endl;
                    cout << "2: Ver Siguiente" << endl;
                    cout << "3: Salir" << endl;

                    cout << "Ingrese opción: ";
                    Opc_F = 3;
                    Opc = Opc_Menu(Opc_F);

                    if (Opc == 1)
                    {

                        if (Cupos <= 0)
                        {

                            cout << RED << "No hay cupos disponibles" << RESET << endl;
                            Continue();
                        }

                        if (Cupos > 0)
                        {

                            Estudiante_Club Nuevo;
                            Nuevo.Cedula = Cedula;
                            Nuevo.Nombre = Nombre;
                            Nuevo.Apellido = Apellido;

                            Club[I].Miembros_Inscritos.push_back(Nuevo);

                            if (Rol == "Est")
                            {

                                Est[N_User].Club = true;
                            }

                            if (Rol == "Prof")
                            {

                                Prof[N_User].Club = true;
                            }

                            Limpiar();Dibujo = "Club"; Art();
                            cout << GREEN << "Inscripción exitosa" << RESET << endl;
                            Continuar();
                            return; 
                        }

                    }

                } while (Opc != 2 && Opc != 3);

                if (Opc == 3)
                {

                    break;
                }

            }

        }

        if (Hay_Clubes == false)
        {

            Limpiar();Dibujo = "Club"; Art();
            cout << RED << "No hay clubes disponibles en este momento" << RESET << endl;
            Continue();
        }

    }

}