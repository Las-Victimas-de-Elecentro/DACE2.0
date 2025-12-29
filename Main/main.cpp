#include "Header.h"
#include <windows.h>
using namespace std;
int main()
{
    //Caracteres Especiales
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    string Rol;
    bool Oscuro = 0;
    int N, Opc_F;
    Usuario User[500];
    Nacimiento Fecha[500];

    User[0].Nombre = "Carlos";
    User[0].Apellido = "Anton";
    User[0].Cedula = 32922274;
    User[0].Fecha.Dia = 29;
    User[0].Fecha.Mes = 3;
    User[0].Fecha.Year = 2007;
    User[0].Correo = "xyz.antcar@gmail.com";
    User[0].Password = "ANT.car.123:";

    int Opc;
    do {
        cout << "Bienvenido a Dace" << endl;
        cout << "Ingrese una opción" << endl;
        cout << "1: Iniciar Sesión" << endl;
        cout << "2: Registrarse" << endl;
        cout << "3: Salir" << endl;
        cout << "Ingrese: ";
        cin >> Opc;
        while (Opc < 1 || Opc > 3)
        {
            cout << "Solo ingrese valores entre 1-3: ";
            cin >> Opc;
        }

        switch (Opc)
        {
            case 1:
                Sesion (User, N, Opc_F, Rol, Oscuro);
            case 2:
                Registro (User);
                break;
            default:
                cout << "Saliendo de Dace" << endl;
                break;
        }

    } while (Opc != 3);

    return 0;
}

/*Realizar un programa en el que se registre y hayan 
sesiones de usuarios para una plataforma básica.

Pasos a seguir:

1) Tanto el registro, como el inicio de sesión, tendrán que ser hechos 
en funciones, ya que, retornarán al Main un solo tipo de dato.

2) La verificación es crucial; se tiene que validar que efectivamente 
el usuario se registre con un correo, y se tiene que verificar que 
la contraseña cumpla con ciertos estándares, como: Usar una letra Mayúscula, 
letras minúsculas, signos de puntuación, etc.

3) Al registrar al usuario, estos datos tienen que ser guardados en 
variables globales, para ser utilizados durante todo el proyecto para 
asegurarnos de que el usuario interactúe con la plataforma estando logueado.

Datos curiosos:

1) La plataforma no tiene que estar a estas alturas completa, eso será 
una actividad a futuro, como plataforma intermediaria, puedes saludar al usuario.

2) En el dado caso de que quieras realizar una edición de datos, la 
puedes hacer, pero eso sí, tiene que tener seguridad, porque estos tipo de 
datos son muy importantes y se tiene que verificar que el usuario dueño de 
la cuenta sea el que quiera cambiar o el correo, o la contraseña.*/