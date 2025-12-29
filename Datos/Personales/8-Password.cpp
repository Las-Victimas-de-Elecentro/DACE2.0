#include "../../Main/Header.h"
using namespace std;

string Password_User ()
{
    int I;
    string Password, Confirm;
    bool P_Valido, Espacio_Password, Mayuscula, Minuscula, Numero, Simbolo;

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

    return Password;
}