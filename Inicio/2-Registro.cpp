#include <iostream>
#include <string>
#include "../Cabeceras/Modulos.h"
#include "../Cabeceras/Registros.h"
using namespace std;

void Registro (Usuario (&User)[500])
{
    string Nombre, Apellido, Cedula_S, Dia_S, Mes_S, Year_S, Correo, Password, Confirm;
    int I, P, Cont, Dia, Mes, Year;
    long Cedula;
    bool Punto, C_Valido, Espacio_Correo;
    bool P_Valido, Espacio_Password, Mayuscula, Minuscula, Numero, Simbolo;
    bool N_Valido, Letra_Nombre, Espacio_Nombre;
    bool A_Valido, Letra_Apellido, Espacio_Apellido;
    bool CI_Valido, Letra_Cedula, Espacio_Cedula;
    bool D_Valido, Letra_Dia, Espacio_Dia;
    bool M_Valido, Letra_Mes, Espacio_Mes;
    bool Y_Valido, Letra_Year, Espacio_Year;

    cout << "Ingrese su Nombre: ";
    getline (cin >> ws, Nombre);
    do {
        N_Valido = true;
        Espacio_Nombre = true;
        Letra_Nombre = true;

        for (I = 0 ; I < Nombre.length() ; I++)
        {
            if (isspace (Nombre[I]))
            {
                Espacio_Nombre = false;
            }
            else if (!isalpha (Nombre[I]))
            {
                Letra_Nombre = false;
            }
        }

        if (Nombre.length() < 3)
        {
            cout << "Nombre invalido" << endl;
            N_Valido = false;
        }
        else if (Espacio_Nombre == false)
        {
            cout << "Los Nombres no pueden llevar espacios" << endl;
            N_Valido = false;
        }
        else if (Letra_Nombre == false)
        {
            cout << "Los Nombres no pueden llevar numeros o simbolos" << endl;
            N_Valido = false;
        }

        if (N_Valido == false)
        {
            cout << "Ingrese nuevamente: ";
            getline (cin >> ws, Nombre);
        }

    } while (N_Valido == false);

    cout << "Ingrese su Apellido: ";
    getline(cin >> ws, Apellido);
    do {
        A_Valido = true;
        Espacio_Apellido = true;
        Letra_Apellido = true;

        for (I = 0 ; I < Apellido.length() ; I++)
        {
            if (isspace (Apellido[I]))
            {
                Espacio_Apellido = false;
            }
            else if (!isalpha (Apellido[I]))
            {
                Letra_Apellido = false;
            }
        }

        if (Apellido.length() < 3)
        {
            cout << "Apellido invalido" << endl;
            A_Valido = false;
        }
        else if (Apellido == Nombre)
        {
            cout << "El Apellido no puede ser igual al Nombre" << endl;
            A_Valido = false;
        }
        else if (Espacio_Apellido == false)
        {
            cout << "Los Apellidos no pueden tener espacios" << endl;
            A_Valido = false;
        }
        else if (Letra_Apellido == false)
        {
            cout << "Los Apellidos no pueden tener numeros o simbolos" << endl;
            A_Valido = false;
        }

        if (A_Valido == false)
        {
            cout << "Ingrese nuevamente: ";
            getline(cin >> ws, Apellido);
        }

    } while (A_Valido == false);

    cout << "Ingrese su Cedula: ";
    getline(cin >> ws, Cedula_S);
    do {
        CI_Valido = true;
        Espacio_Cedula = true;
        Letra_Cedula = true;

        for (I = 0 ; I < Cedula_S.length() ; I++)
        {
            if (isspace (Cedula_S[I]))
            {
                Espacio_Cedula = false;
            }
            else if (isalpha (Cedula_S[I]))
            {
                Letra_Cedula = false;
            }
        }

        if (Cedula_S.length() < 7 || Cedula_S.length() > 8)
        {
            cout << "Cedula invalida" << endl;
            CI_Valido = false;
        }
        else if (Espacio_Cedula == false)
        {
            cout << "Las Cedulas no pueden llevar espacios" << endl;
            CI_Valido = false;
        }
        else if (Letra_Cedula == false)
        {
            cout << "Las Cedulas no pueden llevar letras" << endl;
            CI_Valido = false;
        }
        
        if (CI_Valido == true)
        {
            Cedula = stol(Cedula_S);

            if (Cedula < 10000000)
            {
                cout << "Cedula invalida" << endl;
                CI_Valido = false;
            }
        }

        if (CI_Valido == false)
        {
            cout << "Ingrese nuevamente: ";
            getline(cin >> ws, Cedula_S);
        }

    } while (CI_Valido == false);

    cout << "Ingrese su fecha de nacimiento" << endl;
    cout << "Ingrese Dia: ";
    getline(cin >> ws, Dia_S);
    do {
        D_Valido = true;
        Espacio_Dia = true;
        Letra_Dia = true;

        for (I = 0 ; I < Dia_S.length() ; I++)
        {
            if (isspace (Dia_S[I]))
            {
                Espacio_Dia = false;
            }
            else if (isalpha (Dia_S[I]))
            {
                Letra_Dia = false;
            }
        }

        if (Dia_S.length() < 2)
        {
            cout << "Día invalido" << endl;
            D_Valido = false;
        }
        else if (Espacio_Dia == false)
        {
            cout << "Los días no llevan espacios" << endl;
            D_Valido = false;
        }
        else if (Letra_Dia == false)
        {
            cout << "Los días no llevan numeros o simbolos" << endl;
            D_Valido = false;
        }

        if (D_Valido == true)
        {
            Dia = stoi(Dia_S);
            
            if (Dia < 1 || Dia > 31)
            {
                cout << "Dia invalido" << endl;
                D_Valido = false;
            }
        }

        if (D_Valido == false)
        {
            cout << "Ingrese nuevamente: ";
            getline(cin >> ws, Dia_S);
        }

    } while (D_Valido == false);

    cout << "Ingrese Mes: ";
    getline(cin >> ws, Mes_S);
    do {
        M_Valido = true;
        Espacio_Mes = true;
        Letra_Mes = true;

        for (I = 0 ; I < Mes_S.length() ; I++)
        {
            if (isspace (Mes_S[I]))
            {
                Espacio_Mes = false;
            }
            else if (isalpha (Mes_S[I]))
            {
                Letra_Mes = false;
            }
        }

        if (Mes_S.length() < 2)
        {
            cout << "Mes invalido" << endl;
            M_Valido = false;
        }
        else if (Espacio_Dia == false)
        {
            cout << "Los meses no llevan espacios" << endl;
            M_Valido = false;
        }
        else if (Letra_Dia == false)
        {
            cout << "Los meses no llevan numeros o simbolos" << endl;
            M_Valido = false;
        }

        if (M_Valido == true)
        {
            Mes = stoi(Mes_S);
            
            if (Mes < 1 || Mes > 12)
            {
                cout << "Mes invalido" << endl;
                M_Valido = false;
            }
        }

        if (M_Valido == false)
        {
            cout << "Ingrese nuevamente: ";
            getline(cin >> ws, Mes_S);
        }

    } while (M_Valido == false);

    cout << "Ingrese Año: ";
    getline(cin >> ws, Year_S);
    do {
        Y_Valido = true;
        Espacio_Year = true;
        Letra_Year = true;

        for (I = 0 ; I < Year_S.length() ; I++)
        {
            if (isspace (Year_S[I]))
            {
                Espacio_Year = false;
            }
            else if (isalpha (Year_S[I]))
            {
                Letra_Year = false;
            }
        }

        if (Year_S.length() < 4)
        {
            cout << "Año invalido" << endl;
            Y_Valido = false;
        }
        else if (Espacio_Dia == false)
        {
            cout << "Los Años no llevan espacios" << endl;
            Y_Valido = false;
        }
        else if (Letra_Dia == false)
        {
            cout << "Los Años no llevan numeros o simbolos" << endl;
            Y_Valido = false;
        }

        if (Y_Valido == true)
        {
            Year = stoi(Year_S);
            
            if (Year < 1900 || Year > 2026)
            {
                cout << "Año invalido" << endl;
                Y_Valido = false;
            }
        }

        if (Y_Valido == false)
        {
            cout << "Ingrese nuevamente: ";
            getline(cin >> ws, Year_S);
        }

    } while (Y_Valido == false);

    cout << "Ingrese su Correo: ";
    getline (cin >> ws, Correo);
    do {
        Cont = 0;
        Punto = false;
        C_Valido = true;
        Espacio_Correo = true;

        for (I = 0 ; I < Correo.length() ; I++)
        {
            if (isspace (Correo[I]))
            {
                Espacio_Correo = false;
            }
            else if (Correo[I] == '@')
            {
                Cont = Cont + 1;
            }
            else if (Cont == 1 && Correo[I] == '.')
            {
                Punto = true;
            }
        }

        if (Correo.length() < 3)
        {
            cout << "El Correo es muy corto" << endl;
            C_Valido = false;
        }
        else if (Espacio_Correo == false)
        {
            cout << "El Correo no puede llevar espacios" << endl;
            C_Valido = false;
        }
        else if (Cont != 1)
        {
            cout << "El Correo solo puede llevar un @" << endl;
            C_Valido = false;
        }
        else if (Correo[0] == '@' || Correo[Correo.length() - 1] == '@')
        {
            cout << "El Correo no puede llevar un @ al inicio o final del Correo" << endl;
            C_Valido = false;

        }
        else if (Punto == false)
        {
            cout << "El Correo debe contener un punto despues del @" << endl;
            C_Valido = false;
        }

        if (C_Valido == false)
        {
            cout << "ingrese nuevamente: ";
            getline (cin >> ws, Correo);
        }

    } while (C_Valido == false);

    cout << "Ingrese su Contraseña: ";
    getline (cin >> ws, Password);
    do{
        P_Valido = true;
        Mayuscula = false;
        Minuscula = false;
        Simbolo = false;
        Espacio_Password = true;

        for (I = 0 ; I < Password.length() ; I++)
        {
            if (isspace (Password[I]))
            {
                Espacio_Password = false;
            }
            else if (isupper (Password[I]))
            {
                Mayuscula = true;
            }
            else if (islower (Password[I]))
            {
                Minuscula = true;
            }
            else if (isdigit (Password[I]))
            {
                Numero = true;
            }
            else
            {
                Simbolo = true;
            }
        }

        if (Password.length() < 8)
        {
            cout << "La Contraseña debe de tener minimo 8 caracteres" << endl;
            P_Valido = false;
        }
        else if (Espacio_Password == false)
        {
            cout << "La Contraseña no puede tener espacios" << endl;
            P_Valido = false;
        }
        else if (Mayuscula == false)
        {
            cout << "La Contraseña debe de tener letras Mayusculas" << endl;
            P_Valido = false;
        }
        else if (Minuscula == false)
        {
            cout << "La Contraseña debe de tener letras Minusculas" << endl;
            P_Valido = false;
        }
        else if (Numero == false)
        {
            cout << "La Contraseña debe de tener Numeros" << endl;
            P_Valido = false;
        }
        else if (Simbolo == false)
        {
            cout << "La Contraseña debe de tener Simbolos" << endl;
            P_Valido = false;
        }

        if (P_Valido == false)
        {
            cout << "Ingrese nuevamente: ";
            getline (cin >> ws, Password);
        }

    } while (P_Valido == false);

    cout << "Confirme su Contraseña: ";
    cin >> Confirm;
    while (Confirm != Password)
    {
        cout << "Las contraseña no coincide: ";
        cin >> Confirm;
    }

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
