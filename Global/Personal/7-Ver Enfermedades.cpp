#include "../../Main/Header.h"
using namespace std;

void Ver_Enfermedades_Global_Personal (Usuario (&User)[500], int &N)
{
    Limpiar();
    cout << "Enfermedades que padeces" << endl;
    cout << endl;

    if (User[N].Enf.Transmisibles != "")
    {
        cout << MAGENTA << "Transmisibles" << RESET << endl;
        cout << User[N].Enf.Transmisibles << endl;
        cout << endl;
    }

    if (User[N].Enf.Cronicas != "")
    {
        cout << MAGENTA << "Cronicas" << RESET << endl;
        cout << User[N].Enf.Cronicas << endl;
        cout << endl;
    }

    if (User[N].Enf.Neurologicas != "")
    {
        cout << MAGENTA << "Neurologicas" << RESET << endl;
        cout << User[N].Enf.Neurologicas << endl;
        cout << endl;
    }

    if (User[N].Enf.Neoplasias != "")
    {
        cout << MAGENTA << "Neoplasias" << RESET << endl;
        cout << User[N].Enf.Neoplasias << endl;
        cout << endl;
    }

    if (User[N].Enf.Autoinmunes != "")
    {
        cout << MAGENTA << "Autoinmunes" << RESET << endl;
        cout << User[N].Enf.Autoinmunes << endl;
        cout << endl;
    }

    if (User[N].Enf.Transtornos != "")
    {
        cout << MAGENTA << "Transtornos" << RESET << endl;
        cout << User[N].Enf.Transtornos << endl;
        cout << endl;
    }

    if (User[N].Enf.Lesiones != "")
    {
        cout << MAGENTA << "Lesiones" << RESET << endl;
        cout << User[N].Enf.Lesiones << endl;
        cout << endl;
    }

    if (User[N].Enf.Congenitas != "")
    {
        cout << MAGENTA << "Congenitas" << RESET << endl;
        cout << User[N].Enf.Congenitas << endl;
        cout << endl;
    }

    if (User[N].Enf.Metabolicos != "")
    {
        cout << MAGENTA << "Metabolicos" << RESET << endl;
        cout << User[N].Enf.Metabolicos << endl;
        cout << endl;
    }

    if (User[N].Enf.Ocupacionales != "")
    {
        cout << MAGENTA << "Ocupacionales" << RESET << endl;
        cout << User[N].Enf.Ocupacionales << endl;
        cout << endl;
    }

    cout << "Presiona cualquier tecla para salir" << endl;
    cin.ignore();
    cin.get();
}