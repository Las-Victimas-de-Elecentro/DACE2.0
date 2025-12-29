#include "../Main/Header.h"
using namespace std;

void Registro (Usuario (&User)[500])
{
    string Nombre, Apellido, Correo, Password;
    long Cedula;
    int Dia, Mes, Year;
    int I, P;
    
    Limpiar();

    cout << "Ingrese su Nombre: ";
    Nombre = Nombre_User();
    Limpiar();

    cout << "Ingrese su Apellido: ";
    Apellido = Apellido_User();
    Limpiar();

    cout << "Ingrese su Cedula: ";
    Cedula = Cedula_User();
    Limpiar();

    cout << "Ingrese su fecha de nacimiento" << endl;
    cout << "Ingrese Dia: ";
    Dia = Dia_User();
    Limpiar();

    cout << "Ingrese Mes: ";
    Mes = Mes_User();
    Limpiar();

    cout << "Ingrese Año: ";
    Year = Year_User();
    Limpiar();

    cout << "Ingrese su Correo: ";
    Correo = Correo_User();
    Limpiar();

    cout << "Ingrese su Contraseña: ";
    Password = Password_User();
    Limpiar();

    // Registros

    for (I = 0 ; I < 500 ; I++)
    {
        if (User[I].Nombre == "")
        {
            P = I;
            break;
        }
    }

    User[P].Nombre = Nombre;
    User[P].Apellido = Apellido;
    User[P].Cedula = Cedula;
    User[P].Fecha.Dia = Dia;
    User[P].Fecha.Mes = Mes;
    User[P].Fecha.Year = Year;
    User[P].Correo = Correo;
    User[P].Password = Password;

    cout << "Registro Completado" << endl;
}
