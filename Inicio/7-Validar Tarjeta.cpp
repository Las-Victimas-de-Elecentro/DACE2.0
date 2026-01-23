#include "../Main/Header.h"
using namespace std;

bool Validar_Coordenada (Variables (&Var), Estudiante (&Est)[D], Profesor (&Prof)[D], Administrativo (&Admin)[D])
{
    int& N = Var.N;
    int Posicion, Respuesta, Correcto, F, C;

    Posicion = rand() % 50; 
    F = Posicion / 10;
    C = Posicion % 10;

    cout << "\nIngrese el valor en [Fila " << F << ", Columna " << C << "]: ";
    cin >> Respuesta;

    if (Rol == "Est") 
    {
        Correcto = Est[N].Tarjeta[Posicion];
    }
    else if (Rol == "Prof") 
    {
        Correcto = Prof[N].Tarjeta[Posicion];
    }
    else if (Rol == "Admin") 
    {
        Correcto = Admin[N].Tarjeta[Posicion];
    }

    if (Respuesta == Correcto) 
    {
        return true;
    } 
    return false;
}