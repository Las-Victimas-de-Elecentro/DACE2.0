#include "../../Main/Header.h"
using namespace std;

void Info_Global_Personal (Variables (&Var), Estudiante (&Est)[D], Profesor (&Prof)[D], Administrativo (&Admin)[D])
{
    int& N = Var.N;

    string Nombre, Nombre2, Apellido, Apellido2, Direccion, Genero, Parroquia, Etnia, Correo;
    int Dia, Mes, Year;
    long Cedula;
    long long Telefono;

    if (Rol == "Est")
    {
        Nombre = Est[N].Nombre;
        Nombre2 = Est[N].Nombre2;
        Apellido = Est[N].Apellido;
        Apellido2 = Est[N].Apellido2;
        Cedula = Est[N].Cedula;
        Dia = Est[N].Fecha.Dia;
        Mes = Est[N].Fecha.Mes;
        Year = Est[N].Fecha.Year;
        Direccion = Est[N].Direccion;
        Telefono = Est[N].Telefono;
        Genero = Est[N].Genero;
        Parroquia = Est[N].Parroquia;
        Etnia = Est[N].Etnia;
        Correo = Est[N].Correo;
    }
    else if (Rol == "Prof")
    {
        Nombre = Prof[N].Nombre;
        Nombre2 = Prof[N].Nombre2;
        Apellido = Prof[N].Apellido;
        Apellido2 = Prof[N].Apellido2;
        Cedula = Prof[N].Cedula;
        Dia = Prof[N].Fecha.Dia;
        Mes = Prof[N].Fecha.Mes;
        Year = Prof[N].Fecha.Year;
        Direccion = Prof[N].Direccion;
        Telefono = Prof[N].Telefono;
        Genero = Prof[N].Genero;
        Parroquia = Prof[N].Parroquia;
        Etnia = Prof[N].Etnia;
        Correo = Prof[N].Correo;
    }
    else if (Rol == "Admin")
    {
        Nombre = Admin[N].Nombre;
        Nombre2 = Admin[N].Nombre2;
        Apellido = Admin[N].Apellido;
        Apellido2 = Admin[N].Apellido2;
        Cedula = Admin[N].Cedula;
        Dia = Admin[N].Fecha.Dia;
        Mes = Admin[N].Fecha.Mes;
        Year = Admin[N].Fecha.Year;
        Direccion = Admin[N].Direccion;
        Telefono = Admin[N].Telefono;
        Genero = Admin[N].Genero;
        Parroquia = Admin[N].Parroquia;
        Etnia = Admin[N].Etnia;
        Correo = Admin[N].Correo;
    }

    Limpiar();
    Dibujo = "User"; Art();
    
    cout << "Información personal" << endl;

    cout << "Nombre: " << Nombre << endl;

    if (Nombre2 != "")
    {
        cout << "Segundo Nombre: " << Nombre2 << endl;
    }

    cout << "Apellido: " << Apellido << endl;

    if (Apellido2 != "")
    {
        cout << "Segundo Apellido: " << Apellido2 << endl;
    }

    cout << "Cedula: " << Cedula << endl;

    cout << "Fecha de nacimiento: " << Dia << "/" << Mes << "/" << Year <<endl;

    if (Direccion != "")
    {
        cout << "Dirección: " << Direccion << endl;
    }

    if (Telefono != 0)
    {
        cout << "Telefono: " << Telefono << endl;
    }

    if (Genero != "")
    {
        cout << "Genero: " << Genero << endl;
    }

    if (Parroquia != "")
    {
        cout << "Parroquia: " << Parroquia << endl;
    }

    if (Etnia != "")
    {
        cout << "Etnia: " << Etnia << endl;
    }

    cout << "Correo: " << Correo << endl;

    Continue();
}