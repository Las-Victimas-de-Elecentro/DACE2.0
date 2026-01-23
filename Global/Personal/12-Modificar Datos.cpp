#include "../../Main/Header.h"
using namespace std;

void Modificar_Datos_Global (Variables (&Var), Estudiante (&Est)[D], Profesor (&Prof)[D], Administrativo (&Admin)[D])
{
    int& N = Var.N;
    int& Opc_F = Var.Opc_F;

    string Nombre, Nombre2, Apellido, Apellido2, Direccion, Parroquia;
    int Opc, Etnia, Dia, Mes, Year;
    long long Telefono;
    bool Genero;
    do 
    {
        Limpiar();
        Dibujo = "User"; Art();
        Opc_F = 11;
        cout << "¿Que desea cambiar?" << endl;
        cout << "1: Nombre" << endl;
        cout << "2: Segundo Nombre" << endl;
        cout << "3: Apellido" << endl;
        cout << "4: Segundo Apellido" << endl;
        cout << "5: Fecha de nacimiento" << endl;
        cout << "6: Dirección" << endl;
        cout << "7: Telefono" << endl;
        cout << "8: Genero" << endl;
        cout << "9: Parroquia" << endl;
        cout << "10: Etnia" << endl;
        cout << "11: Salir" << endl;
        cout << "Ingrese: ";
        Opc = Opc_Menu(Opc_F);

        Limpiar();
        Dibujo = "User"; Art();

        switch (Opc)
        {
            case 1:
                cout << "Ingrese su nuevo Nombre: ";
                Nombre = Nombre_User();
                if (Rol == "Est")
                {
                    Est[N].Nombre = Nombre;
                }
                else if (Rol == "Prof")
                {
                    Prof[N].Nombre = Nombre;
                }
                else if (Rol == "Admin")
                {
                    Admin[N].Nombre = Nombre;
                }
                Guardar(Var, Est, Prof, Admin);
                cout << GREEN << "Tu nuevo Nombre ahora es: " << Nombre << RESET << endl;
                Continuar();
                break;

            case 2:
                if ( (Rol == "Est" && Est[N].Nombre2 != "") || (Rol == "Prof" && Prof[N].Nombre2 != "") || (Rol == "Admin" && Admin[N].Nombre2 != "") )
                {
                    cout << "Ingrese su nuevo Nombre: ";
                    Nombre2 = Nombre_User();
                    if (Rol == "Est")
                    {
                        Est[N].Nombre2 = Nombre2;
                    }
                    else if (Rol == "Prof")
                    {
                        Prof[N].Nombre2 = Nombre2;
                    }
                    else if (Rol == "Admin")
                    {
                        Admin[N].Nombre2 = Nombre2;
                    }
                    Guardar(Var, Est, Prof, Admin);
                    cout << GREEN << "Tu nuevo Nombre ahora es: " << Nombre2 << RESET << endl;
                    Continuar();
                }
                else
                {
                    cout << RED << "Error no existe Dato para modificar" << RESET << endl;
                    Continue();
                }
                break;

            case 3:
                cout << "Ingrese su nuevo Apellido: ";
                Apellido = Apellido_User();
                if (Rol == "Est")
                {
                    Est[N].Apellido = Apellido;
                }
                else if (Rol == "Prof")
                {
                    Prof[N].Apellido = Apellido;
                }
                else if (Rol == "Admin")
                {
                    Admin[N].Apellido = Apellido;
                }
                Guardar(Var, Est, Prof, Admin);
                cout << GREEN << "Tu nuevo Apellido ahora es: " << Apellido << RESET << endl;
                Continuar();
                break;

            case 4:
                if ((Rol == "Est" && Est[N].Apellido2 != "") || (Rol == "Prof" && Prof[N].Apellido2 != "") || (Rol == "Admin" && Admin[N].Apellido2 != ""))
                {
                    cout << "Ingrese su nuevo Apellido: ";
                    Apellido2 = Apellido_User();
                    if (Rol == "Est")
                    {
                        Est[N].Apellido2 = Apellido2;
                    }
                    else if (Rol == "Prof")
                    {
                        Prof[N].Apellido2 = Apellido2;
                    }
                    else if (Rol == "Admin")
                    {
                        Admin[N].Apellido2 = Apellido2;
                    }
                    Guardar(Var, Est, Prof, Admin);
                    cout << GREEN << "Tu nuevo Apellido ahora es: " << Apellido2 << RESET << endl;
                    Continuar();
                }
                else
                {
                    cout << RED << "Error no existe Dato para modificar" << RESET << endl;
                    Continue();
                }
                break;

            case 5:
                cout << "Ingrese su nueva fecha de nacimiento" << endl;
                cout << "Ingrese Dia: ";
                Dia = Dia_User();
                cout << "Ingrese Mes: ";
                Mes = Mes_User();
                cout << "Ingrese Año: ";
                Year = Year_User();

                if (Rol == "Est")
                {
                    Est[N].Fecha.Dia = Dia;
                    Est[N].Fecha.Mes = Mes;
                    Est[N].Fecha.Year = Year;
                }
                else if (Rol == "Prof")
                {
                    Prof[N].Fecha.Dia = Dia;
                    Prof[N].Fecha.Mes = Mes;
                    Prof[N].Fecha.Year = Year;
                }
                else if (Rol == "Admin")
                {
                    Admin[N].Fecha.Dia = Dia;
                    Admin[N].Fecha.Mes = Mes;
                    Admin[N].Fecha.Year = Year;
                }
                Guardar(Var, Est, Prof, Admin);
                cout << GREEN << "Tu nueva fecha de nacimiento es: " << Dia << "/" << Mes << "/" << Year << RESET << endl;
                Continuar();
                break;

            case 6:
                if ((Rol == "Est" && Est[N].Direccion != "") || (Rol == "Prof" && Prof[N].Direccion != "") || (Rol == "Admin" && Admin[N].Direccion != ""))
                {
                    cout << "Ingrese su nueva Dirección: ";
                    getline (cin >> ws, Direccion);
                    if (Rol == "Est")
                    {
                        Est[N].Direccion = Direccion;
                    }
                    else if (Rol == "Prof")
                    {
                        Prof[N].Direccion = Direccion;
                    }
                    else if (Rol == "Admin")
                    {
                        Admin[N].Direccion = Direccion;
                    }
                    Guardar(Var, Est, Prof, Admin);
                    cout << GREEN << "Nueva Dirección añadida: " << RESET << endl;
                    Continuar();
                }
                else
                {
                    cout << RED << "Error no existe Dato para modificar" << RESET << endl;
                    Continue();
                }
                break;

            case 7:
                if ((Rol == "Est" && Est[N].Telefono != 0) || (Rol == "Prof" && Prof[N].Telefono != 0) || (Rol == "Admin" && Admin[N].Telefono != 0))
                {
                    cout << "Ingrese su nuevo numero de Telefono: ";
                    Telefono = Telefono_User();
                    if (Rol == "Est")
                    {
                        Est[N].Telefono = Telefono;
                    }
                    else if (Rol == "Prof")
                    {
                        Prof[N].Telefono = Telefono;
                    }
                    else if (Rol == "Admin")
                    {
                        Admin[N].Telefono = Telefono;
                    }
                    Guardar(Var, Est, Prof, Admin);
                    cout << GREEN << "Tu nuevo numero de Telefono ahora es: " << Telefono << RESET << endl;
                    Continuar();
                }
                else
                {
                    cout << RED << "Error no existe Dato para modificar" << RESET << endl;
                    Continue();
                }
                break;

            case 8:
                if ((Rol == "Est" && Est[N].Genero != "") || (Rol == "Prof" && Prof[N].Genero != "") || (Rol == "Admin" && Admin[N].Genero != ""))
                {
                    cout << "Ingrese su Genero" << endl;
                    cout << "0: Masculino" << endl;
                    cout << "1: Femenino" << endl;
                    cout << "Ingrese: " << endl;
                    Genero = Opc_Bool();

                    if (Rol == "Est")
                    {
                        Est[N].Genero = (Genero == 0) ? "Masculino" : "Femeninno";
                    }
                    else if (Rol == "Prof")
                    {
                        Prof[N].Genero = (Genero == 0) ? "Masculino" : "Femeninno";
                    }
                    else if (Rol == "Admin")
                    {
                        Admin[N].Genero = (Genero == 0) ? "Masculino" : "Femeninno";
                    }

                    Guardar(Var, Est, Prof, Admin);
                    cout << GREEN << "Genero Modificado: " << RESET << endl;
                    Continuar();
                }
                else
                {
                    cout << RED << "Error no existe Dato para modificar" << RESET << endl;
                    Continue();
                }
                break;

            case 9:
                if ((Rol == "Est" && Est[N].Parroquia != "") || (Rol == "Prof" && Prof[N].Parroquia != "") || (Rol == "Admin" && Admin[N].Parroquia != ""))
                {
                    cout << "Ingrese su nueva Parroquia: ";
                    Parroquia = Parroquia_User();
                    if (Rol == "Est")
                    {
                        Est[N].Parroquia = Parroquia;
                    }
                    else if (Rol == "Prof")
                    {
                        Prof[N].Parroquia = Parroquia;
                    }
                    else if (Rol == "Admin")
                    {
                        Admin[N].Parroquia = Parroquia;
                    }
                    cout << GREEN << "Nueva Parroquia añadida: " << RESET << endl;
                    Continuar();
                }
                else
                {
                    cout << RED << "Error no existe Dato para modificar" << RESET << endl;
                    Continue();
                }
                break;

            case 10:
                if ((Rol == "Est" && Est[N].Etnia != "") || (Rol == "Prof" && Prof[N].Etnia != "") || (Rol == "Admin" && Admin[N].Etnia != ""))
                {
                    Opc_F = 3;
                    cout << "Ingrese su Etnia" << endl;
                    cout << "1: Ninguna" << endl;
                    cout << "2: Wayuu Pusháima" << endl;
                    cout << "3: WARAO" << endl;
                    cout << "Ingrese: ";
                    Etnia = Opc_Menu(Opc_F);
                    
                    string etniaStr;
                    if (Etnia == 1)
                    {
                        etniaStr = "Ninguna";
                    }
                    else if (Etnia == 2)
                    {
                        etniaStr = "Wayuu Pusháima";
                    }
                    else if (Etnia == 3)
                    {
                        etniaStr = "WARAO";
                    }

                    if (Rol == "Est")
                    {
                        Est[N].Etnia = etniaStr;
                    }
                    else if (Rol == "Prof")
                    {
                        Prof[N].Etnia = etniaStr;
                    }
                    else if (Rol == "Admin")
                    {
                        Admin[N].Etnia = etniaStr;
                    }

                    Guardar(Var, Est, Prof, Admin);
                    cout << GREEN << "Tu Etnia ahora es: " << etniaStr << RESET << endl;
                    Continuar();
                }
                else
                {
                    cout << RED << "Error no existe Dato para modificar" << RESET << endl;
                    Continue();
                }
                break;
        }
    } while (Opc != 11);
}