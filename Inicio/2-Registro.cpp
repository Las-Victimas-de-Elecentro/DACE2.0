#include "../Main/Header.h"
using namespace std;

void Registro (Variables (&Var), Estudiante (&Est)[D], Profesor (&Prof)[D], Administrativo (&Admin)[D])
{
    int& N = Var.N;

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
    Limpiar();

    // Registros

    for (I = 0 ; I < D ; I++)
    {
        if (Est[I].Nombre == "")
        {
            N = I;
            break;
        }
    }

    Rol = "Est";
    
    Est[N].Avatar = "Default";
    Est[N].Nombre = Nombre;
    Est[N].Apellido = Apellido;
    Est[N].Cedula = Cedula;
    Est[N].Fecha.Dia = Dia;
    Est[N].Fecha.Mes = Mes;
    Est[N].Fecha.Year = Year;
    Est[N].Correo = Correo;
    Est[N].Password = Password;
    Est[N].Oscuro = 0;

    Est[N].Carrera = "Informática";

    Registrar (Var, Est, Prof, Admin);
    Generar_Tarjeta (Var, Est, Prof, Admin);
    Guardar_Tarjetas(Est, Prof, Admin);
    Mostrar_Tarjeta (Var, Est, Prof, Admin);

    cout << GREEN << "Registro Completado" << RESET << endl;
    Continue();
}
