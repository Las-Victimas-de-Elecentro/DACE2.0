#include "../Main/Header.h"
using namespace std;

void Registro (Variables (&Var), Estudiante (&Est)[D], Profesor (&Prof)[D], Administrativo (&Admin)[D])
{

    int& N = Var.N;
    int& Opc_F = Var.Opc_F;
    string Nombre, Apellido, Correo, Password;
    long Cedula;
    int Dia, Mes, Year, Opc_C;
    int I;
    
    Limpiar();
    Dibujo = "Register"; 
    Art();
    cout << "Ingrese su Nombre: ";
    Nombre = Nombre_User();
    
    Limpiar();
    Dibujo = "Register"; 
    Art();
    cout << "Ingrese su Apellido: ";
    Apellido = Apellido_User();
    
    Limpiar();
    Dibujo = "Register"; 
    Art();
    cout << "Ingrese su Cedula: ";
    Cedula = Cedula_User();
    
    Limpiar();
    Dibujo = "Register"; 
    Art();
    cout << "Ingrese su fecha de nacimiento" << endl;
    cout << "Ingrese Dia: ";
    Dia = Dia_User();
    
    Limpiar();
    Dibujo = "Register"; 
    Art();
    cout << "Ingrese Mes: ";
    Mes = Mes_User();
    
    Limpiar();
    Dibujo = "Register"; 
    Art();
    cout << "Ingrese Año: ";
    Year = Year_User();
    
    Limpiar();
    Dibujo = "Register"; 
    Art();
    cout << "Ingrese su Correo: ";
    Correo = Correo_User();
    
    Limpiar();
    Dibujo = "Register"; 
    Art();
    cout << "Ingrese su Contraseña: ";
    Password = Password_User();

    Limpiar();
    Dibujo = "Register"; 
    Art();
    cout << CYAN << "Seleccione su Carrera:" << RESET << endl;
    cout << "1: Informática" << endl;
    cout << "2: Civil" << endl;
    cout << "3: Hidrocarburo" << endl;
    cout << "4: Medicina" << endl;
    cout << "5: Odontología" << endl;
    cout << "6: Veterinaria" << endl;
    cout << "7: Derecho" << endl;
    cout << "8: Social" << endl;
    cout << "9: Contaduría" << endl;
    cout << "10: Economía" << endl;
    cout << "Ingrese: ";
    Opc_F = 10;
    Opc_C = Opc_Menu(Opc_F);

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

    if (Opc_C == 1)
    {
        Est[N].Carrera = "Informática";
    }
    else if (Opc_C == 2)
    {
        Est[N].Carrera = "Civil";
    }
    else if (Opc_C == 3)
    {
        Est[N].Carrera = "Hidrocarburo";
    }
    else if (Opc_C == 4)
    {
        Est[N].Carrera = "Medicina";
    }
    else if (Opc_C == 5)
    {
        Est[N].Carrera = "Odontología";
    }
    else if (Opc_C == 6)
    {
        Est[N].Carrera = "Veterinaria";
    }
    else if (Opc_C == 7)
    {
        Est[N].Carrera = "Derecho";
    }
    else if (Opc_C == 8)
    {
        Est[N].Carrera = "Social";
    }
    else if (Opc_C == 9)
    {
        Est[N].Carrera = "Contaduría";
    }
    else
    {
        Est[N].Carrera = "Economía";
    }

    Limpiar();
    Registrar (Var, Est, Prof, Admin);
    Generar_Tarjeta (Var, Est, Prof, Admin);
    Guardar_Tarjetas(Est, Prof, Admin);
    Mostrar_Tarjeta (Var, Est, Prof, Admin);

    cout << GREEN << "Registro Completado" << RESET << endl;
    Continue();

}