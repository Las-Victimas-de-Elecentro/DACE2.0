#include "../../Main/Header.h"
using namespace std;

void Modificar_Datos_Emp (Variables (&Var), Estudiante (&Est)[D], Profesor (&Prof)[D], Administrativo (&Admin)[D])
{

    int& Opc_F = Var.Opc_F;
    int& Av = Var.Av;
    string& Rol_G = Var.Rol_G;

    string Nombre, Nombre2, Apellido, Apellido2, Direccion, Parroquia, Password, Correo;
    int Opc, Etnia, Dia, Mes, Year;
    long long Telefono;
    bool Genero;

    do 
    {

        Limpiar();
        Dibujo = "User_G"; 
        Art();
        
        Opc_F = 13;
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
        cout << "11: Contraseña" << endl;
        cout << "12: Correo" << endl;
        cout << "13: Salir" << endl;
        cout << "Ingrese: ";
        Opc = Opc_Menu(Opc_F);

        Limpiar();
        Dibujo = "User_G"; 
        Art();

        switch (Opc)
        {

            case 1:
                cout << "Ingrese el nuevo Nombre: ";
                Nombre = Nombre_User();

                if (Rol_G == "Est")
                {

                    Est[Av].Nombre = Nombre;
                }
                else if (Rol_G == "Prof")
                {

                    Prof[Av].Nombre = Nombre;
                }
                else if (Rol_G == "Admin")
                {

                    Admin[Av].Nombre = Nombre;
                }

                Cambio_Gestion (Var, Est, Prof, Admin);
                cout << GREEN << "El nuevo Nombre ahora es: " << Nombre << RESET << endl;
                Continuar();
                break;

            case 2:
                if ( (Rol_G == "Est" && Est[Av].Nombre2 != "") || (Rol_G == "Prof" && Prof[Av].Nombre2 != "") || (Rol_G == "Admin" && Admin[Av].Nombre2 != "") )
                {

                    cout << "Ingrese el nuevo Nombre: ";
                    Nombre2 = Nombre_User();

                    if (Rol_G == "Est")
                    {

                        Est[Av].Nombre2 = Nombre2;
                    }
                    else if (Rol_G == "Prof")
                    {

                        Prof[Av].Nombre2 = Nombre2;
                    }
                    else if (Rol_G == "Admin")
                    {

                        Admin[Av].Nombre2 = Nombre2;
                    }

                    Cambio_Gestion (Var, Est, Prof, Admin);
                    cout << GREEN << "El nuevo Nombre ahora es: " << Nombre2 << RESET << endl;
                    Continuar();
                }
                else
                {

                    cout << RED << "Error no existe Dato para modificar" << RESET << endl;
                    Continue();
                }

                break;

            case 3:
                cout << "Ingrese el nuevo Apellido: ";
                Apellido = Apellido_User();

                if (Rol_G == "Est")
                {

                    Est[Av].Apellido = Apellido;
                }
                else if (Rol_G == "Prof")
                {

                    Prof[Av].Apellido = Apellido;
                }
                else if (Rol_G == "Admin")
                {

                    Admin[Av].Apellido = Apellido;
                }

                Cambio_Gestion (Var, Est, Prof, Admin);
                cout << GREEN << "El nuevo Apellido ahora es: " << Apellido << RESET << endl;
                Continuar();
                break;

            case 4:
                if ((Rol_G == "Est" && Est[Av].Apellido2 != "") || (Rol_G == "Prof" && Prof[Av].Apellido2 != "") || (Rol_G == "Admin" && Admin[Av].Apellido2 != ""))
                {

                    cout << "Ingrese el nuevo Apellido: ";
                    Apellido2 = Apellido_User();

                    if (Rol_G == "Est")
                    {

                        Est[Av].Apellido2 = Apellido2;
                    }
                    else if (Rol_G == "Prof")
                    {

                        Prof[Av].Apellido2 = Apellido2;
                    }
                    else if (Rol_G == "Admin")
                    {

                        Admin[Av].Apellido2 = Apellido2;
                    }

                    Cambio_Gestion (Var, Est, Prof, Admin);
                    cout << GREEN << "El nuevo Apellido ahora es: " << Apellido2 << RESET << endl;
                    Continuar();
                }
                else
                {

                    cout << RED << "Error no existe Dato para modificar" << RESET << endl;
                    Continue();
                }

                break;

            case 5:
                cout << "Ingrese la nueva fecha de nacimiento" << endl;
                cout << "Ingrese el Dia: ";
                Dia = Dia_User();
                cout << "Ingrese el Mes: ";
                Mes = Mes_User();
                cout << "Ingrese el Año: ";
                Year = Year_User();

                if (Rol_G == "Est")
                {

                    Est[Av].Fecha.Dia = Dia;
                    Est[Av].Fecha.Mes = Mes;
                    Est[Av].Fecha.Year = Year;
                }
                else if (Rol_G == "Prof")
                {

                    Prof[Av].Fecha.Dia = Dia;
                    Prof[Av].Fecha.Mes = Mes;
                    Prof[Av].Fecha.Year = Year;
                }
                else if (Rol_G == "Admin")
                {

                    Admin[Av].Fecha.Dia = Dia;
                    Admin[Av].Fecha.Mes = Mes;
                    Admin[Av].Fecha.Year = Year;
                }

                Cambio_Gestion (Var, Est, Prof, Admin);
                cout << GREEN << "La nueva fecha de nacimiento es: " << Dia << "/" << Mes << "/" << Year << RESET << endl;
                Continuar();
                break;

            case 6:
                if ((Rol_G == "Est" && Est[Av].Direccion != "") || (Rol_G == "Prof" && Prof[Av].Direccion != "") || (Rol_G == "Admin" && Admin[Av].Direccion != ""))
                {

                    cout << "Ingrese la nueva Dirección: ";
                    getline (cin >> ws, Direccion);

                    if (Rol_G == "Est")
                    {

                        Est[Av].Direccion = Direccion;
                    }
                    else if (Rol_G == "Prof")
                    {

                        Prof[Av].Direccion = Direccion;
                    }
                    else if (Rol_G == "Admin")
                    {

                        Admin[Av].Direccion = Direccion;
                    }

                    Cambio_Gestion (Var, Est, Prof, Admin);
                    cout << GREEN << "La nueva Dirección añadida" << RESET << endl;
                    Continuar();
                }
                else
                {

                    cout << RED << "Error no existe Dato para modificar" << RESET << endl;
                    Continue();
                }

                break;

            case 7:
                if ((Rol_G == "Est" && Est[Av].Telefono != 0) || (Rol_G == "Prof" && Prof[Av].Telefono != 0) || (Rol_G == "Admin" && Admin[Av].Telefono != 0))
                {

                    cout << "Ingrese el nuevo numero de Telefono: ";
                    Telefono = Telefono_User();

                    if (Rol_G == "Est")
                    {

                        Est[Av].Telefono = Telefono;
                    }
                    else if (Rol_G == "Prof")
                    {

                        Prof[Av].Telefono = Telefono;
                    }
                    else if (Rol_G == "Admin")
                    {

                        Admin[Av].Telefono = Telefono;
                    }

                    Cambio_Gestion (Var, Est, Prof, Admin);
                    cout << GREEN << "El nuevo numero de Telefono ahora es: " << Telefono << RESET << endl;
                    Continuar();
                }
                else
                {

                    cout << RED << "Error no existe Dato para modificar" << RESET << endl;
                    Continue();
                }

                break;

            case 8:
                if ((Rol_G == "Est" && Est[Av].Genero != "") || (Rol_G == "Prof" && Prof[Av].Genero != "") || (Rol_G == "Admin" && Admin[Av].Genero != ""))
                {

                    cout << "Ingrese el Genero" << endl;
                    cout << "0: Masculino" << endl;
                    cout << "1: Femenino" << endl;
                    cout << "Ingrese: ";
                    Genero = Opc_Bool();

                    if (Rol_G == "Est")
                    {

                        Est[Av].Genero = (Genero == 0) ? "Masculino" : "Femenino";
                    }
                    else if (Rol_G == "Prof")
                    {

                        Prof[Av].Genero = (Genero == 0) ? "Masculino" : "Femenino";
                    }
                    else if (Rol_G == "Admin")
                    {

                        Admin[Av].Genero = (Genero == 0) ? "Masculino" : "Femenino";
                    }

                    Cambio_Gestion (Var, Est, Prof, Admin);
                    cout << GREEN << "Genero Modificado" << RESET << endl;
                    Continuar();
                }
                else
                {

                    cout << RED << "Error no existe Dato para modificar" << RESET << endl;
                    Continue();
                }

                break;

            case 9:
                if ((Rol_G == "Est" && Est[Av].Parroquia != "") || (Rol_G == "Prof" && Prof[Av].Parroquia != "") || (Rol_G == "Admin" && Admin[Av].Parroquia != ""))
                {

                    cout << "Ingrese la nueva Parroquia: ";
                    Parroquia = Palabra();

                    if (Rol_G == "Est")
                    {

                        Est[Av].Parroquia = Parroquia;
                    }
                    else if (Rol_G == "Prof")
                    {

                        Prof[Av].Parroquia = Parroquia;
                    }
                    else if (Rol_G == "Admin")
                    {

                        Admin[Av].Parroquia = Parroquia;
                    }

                    Cambio_Gestion (Var, Est, Prof, Admin);
                    cout << GREEN << "La nueva Parroquia añadida" << RESET << endl;
                    Continuar();
                }
                else
                {

                    cout << RED << "Error no existe Dato para modificar" << RESET << endl;
                    Continue();
                }

                break;

            case 10:
                if ((Rol_G == "Est" && Est[Av].Etnia != "") || (Rol_G == "Prof" && Prof[Av].Etnia != "") || (Rol_G == "Admin" && Admin[Av].Etnia != ""))
                {

                    Opc_F = 3;
                    cout << "Ingrese el Etnia" << endl;
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

                    if (Rol_G == "Est")
                    {

                        Est[Av].Etnia = etniaStr;
                    }
                    else if (Rol_G == "Prof")
                    {

                        Prof[Av].Etnia = etniaStr;
                    }
                    else if (Rol_G == "Admin")
                    {

                        Admin[Av].Etnia = etniaStr;
                    }

                    Cambio_Gestion (Var, Est, Prof, Admin);
                    cout << GREEN << "La nueva Etnia ahora es: " << etniaStr << RESET << endl;
                    Continuar();
                }
                else
                {

                    cout << RED << "Error no existe Dato para modificar" << RESET << endl;
                    Continue();
                }

                break;

            case 11:
                cout << "Ingrese la nueva contraseña: ";
                Password = Password_User();

                if (Rol_G == "Est")
                {

                    Est[Av].Password = Password;
                }
                else if (Rol_G == "Prof")
                {

                    Prof[Av].Password = Password;
                }
                else if (Rol_G == "Admin")
                {

                    Admin[Av].Password = Password;
                }

                Cambio_Gestion (Var, Est, Prof, Admin);
                cout << GREEN << "La nueva contraseña actualizada con éxito" << RESET << endl;
                Continuar();
                break;

            case 12:
                cout << "Ingrese el nuevo correo: ";
                Correo = Correo_User();

                if (Rol_G == "Est")
                {

                    Est[Av].Correo = Correo;
                }
                else if (Rol_G == "Prof")
                {

                    Prof[Av].Correo = Correo;
                }
                else if (Rol_G == "Admin")
                {

                    Admin[Av].Correo = Correo;
                }

                Cambio_Gestion (Var, Est, Prof, Admin);
                cout << GREEN << "El nuevo correo actualizado con éxito" << RESET << endl;
                Continuar();
                break;

        }

    } while (Opc != 13);

}