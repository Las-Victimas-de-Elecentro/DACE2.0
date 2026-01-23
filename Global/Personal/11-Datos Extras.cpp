#include "../../Main/Header.h"
using namespace std;

void Datos_Extras_Global (Variables (&Var), Estudiante (&Est)[D], Profesor (&Prof)[D], Administrativo (&Admin)[D])
{
    int& N = Var.N;
    int& Opc_F = Var.Opc_F;

    string Nombre2, Apellido2, Direccion, Parroquia;
    int Etnia;
    long long Telefono;
    bool Genero;

    Limpiar();

    Dibujo = "User"; Art();
    cout << "Ingrese su segundo Nombre: ";
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
    Limpiar();

    Dibujo = "User"; Art();
    cout << "Ingrese su segundo Apellido: ";
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
    Limpiar();

    Dibujo = "User"; Art();
    cout << "Ingrese su Dirección: ";
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
    Limpiar();

    Dibujo = "User"; Art();
    cout << "Ingrese su numero de Telefono: ";
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
    Limpiar();

    Dibujo = "User"; Art();
    cout << "Ingrese su Genero" << endl;
    cout << "0: Masculino" << endl;
    cout << "1: Femenino" << endl;
    cout << "Ingrese: ";
    Genero = Opc_Bool();
    if (Rol == "Est")
    {
        if (Genero == 0)
        {
            Est[N].Genero = "Masculino";
        }
        else
        {
            Est[N].Genero = "Femeninno";
        }
    }
    else if (Rol == "Prof")
    {
        if (Genero == 0)
        {
            Prof[N].Genero = "Masculino";
        }
        else
        {
            Prof[N].Genero = "Femeninno";
        }
    }
    else if (Rol == "Admin")
    {
        if (Genero == 0)
        {
            Admin[N].Genero = "Masculino";
        }
        else
        {
            Admin[N].Genero = "Femeninno";
        }
    }
    Guardar(Var, Est, Prof, Admin);
    Limpiar();

    Dibujo = "User"; Art();
    cout << "Ingrese su Parroquia: ";
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
    Guardar(Var, Est, Prof, Admin);
    Limpiar();

    Dibujo = "User"; Art();
    Opc_F = 3;
    cout << "Ingrese su Etnia" << endl;
    cout << "1: Ninguna" << endl;
    cout << "2: Wayuu Pusháima" << endl;
    cout << "3: WARAO" << endl;
    cout << "Ingrese: ";
    Etnia = Opc_Menu(Opc_F);
    
    if (Rol == "Est")
    {
        switch(Etnia)
        {
            case 1:
                Est[N].Etnia = "Ninguna";
                break;
            case 2:
                Est[N].Etnia = "Wayuu Pusháima";
                break;
            case 3:
                Est[N].Etnia = "WARAO";
                break;
        }
    }
    else if (Rol == "Prof")
    {
        switch(Etnia)
        {
            case 1:
                Prof[N].Etnia = "Ninguna";
                break;
            case 2:
                Prof[N].Etnia = "Wayuu Pusháima";
                break;
            case 3:
                Prof[N].Etnia = "WARAO";
                break;
        }
    }
    else if (Rol == "Admin")
    {
        switch(Etnia)
        {
            case 1:
                Admin[N].Etnia = "Ninguna";
                break;
            case 2:
                Admin[N].Etnia = "Wayuu Pusháima";
                break;
            case 3:
                Admin[N].Etnia = "WARAO";
                break;
        }
    }
    Guardar(Var, Est, Prof, Admin);
    Limpiar();
}