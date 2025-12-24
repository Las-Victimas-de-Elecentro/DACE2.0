#include <iostream>
#include <string>
#include "../Cabeceras/Modulos.h"
#include "../Cabeceras/Registros.h"
using namespace std;

void Perfil (Usuario (&User)[500], int &N)
{
    cout << "Perfil" << endl;
    cout << "Nombre: " << User[N].Nombre << endl;
    cout << "Apellido: " << User[N].Apellido << endl;
    cout << "Cedula: " << User[N].Cedula << endl;
    cout << "Fecha de nacimiento" << endl;
    cout << "Dia: " << User[N].Fecha.Dia << endl;
    cout << "Mes: " << User[N].Fecha.Mes << endl;
    cout << "Año: " << User[N].Fecha.Year << endl;
    cout << "Correo: " << User[N].Correo << endl;

    cout << "Preciona cualquier tecla para salir" << endl;
    cin.ignore();
    cin.get();
}