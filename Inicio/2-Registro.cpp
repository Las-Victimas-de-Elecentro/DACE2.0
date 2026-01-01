#include "../Main/Header.h"
using namespace std;

void Registro (Usuario (&User)[500], int &N)
{
    string Nombre, Apellido, Correo, Password;
    long Cedula;
    int Dia, Mes, Year;
    int I, P;
    
    Limpiar();

    Dibujo = "Register"; Art();
    cout << "Ingrese su Nombre: ";
    Nombre = Nombre_User();
    Limpiar();

    Dibujo = "Register"; Art();
    cout << "Ingrese su Apellido: ";
    Apellido = Apellido_User();
    Limpiar();

    Dibujo = "Register"; Art();
    cout << "Ingrese su Cedula: ";
    Cedula = Cedula_User();
    Limpiar();

    Dibujo = "Register"; Art();
    cout << "Ingrese su fecha de nacimiento" << endl;
    cout << "Ingrese Dia: ";
    Dia = Dia_User();
    Limpiar();

    Dibujo = "Register"; Art();
    cout << "Ingrese Mes: ";
    Mes = Mes_User();
    Limpiar();

    Dibujo = "Register"; Art();
    cout << "Ingrese Año: ";
    Year = Year_User();
    Limpiar();

    Dibujo = "Register"; Art();
    cout << "Ingrese su Correo: ";
    Correo = Correo_User();
    Limpiar();

    Dibujo = "Register"; Art();
    cout << "Ingrese su Contraseña: ";
    Password = Password_User();

    // Registros

    for (I = 0 ; I < 500 ; I++)
    {
        if (User[I].Nombre == "")
        {
            N = I;
            break;
        }
    }

    User[N].Nombre = Nombre;
    User[N].Apellido = Apellido;
    User[N].Cedula = Cedula;
    User[N].Fecha.Dia = Dia;
    User[N].Fecha.Mes = Mes;
    User[N].Fecha.Year = Year;
    User[N].Correo = Correo;
    User[N].Password = Password;

    cout << GREEN << "Registro Completado" << RESET << endl;
}
