#include "../../Main/Header.h"
using namespace std;

void Ver_Enfermedades_Global_Personal (Variables (&Var), Estudiante (&Est)[D], Profesor (&Prof)[D], Administrativo (&Admin)[D])
{
    int& N = Var.N;

    Limpiar();
    Dibujo = "Healt"; Art();
    cout << "Enfermedades que padeces" << endl;
    cout << endl;

    if (Rol == "Est")
    {
        if (Est[N].Enf.Transmisibles != "") {
            cout << MAGENTA << "Transmisibles:" << RESET << endl;
            Salto_Linea(Est[N].Enf.Transmisibles);
            cout << "\n" << endl;
        }

        if (Est[N].Enf.Cronicas != "") {
            cout << MAGENTA << "Cronicas:" << RESET << endl;
            Salto_Linea(Est[N].Enf.Cronicas);
            cout << "\n" << endl;
        }

        if (Est[N].Enf.Neurologicas != "") {
            cout << MAGENTA << "Neurologicas:" << RESET << endl;
            Salto_Linea(Est[N].Enf.Neurologicas);
            cout << "\n" << endl;
        }

        if (Est[N].Enf.Neoplasias != "") {
            cout << MAGENTA << "Neoplasias (Tumores):" << RESET << endl;
            Salto_Linea(Est[N].Enf.Neoplasias);
            cout << "\n" << endl;
        }

        if (Est[N].Enf.Autoinmunes != "") {
            cout << MAGENTA << "Autoinmunes:" << RESET << endl;
            Salto_Linea(Est[N].Enf.Autoinmunes);
            cout << "\n" << endl;
        }

        if (Est[N].Enf.Transtornos != "") {
            cout << MAGENTA << "Transtornos Mentales:" << RESET << endl;
            Salto_Linea(Est[N].Enf.Transtornos);
            cout << "\n" << endl;
        }

        if (Est[N].Enf.Lesiones != "") {
            cout << MAGENTA << "Lesiones Fisicas:" << RESET << endl;
            Salto_Linea(Est[N].Enf.Lesiones);
            cout << "\n" << endl;
        }

        if (Est[N].Enf.Congenitas != "") {
            cout << MAGENTA << "Congenitas (De nacimiento):" << RESET << endl;
            Salto_Linea(Est[N].Enf.Congenitas);
            cout << "\n" << endl;
        }

        if (Est[N].Enf.Metabolicos != "") {
            cout << MAGENTA << "Metabolicos:" << RESET << endl;
            Salto_Linea(Est[N].Enf.Metabolicos);
            cout << "\n" << endl;
        }

        if (Est[N].Enf.Ocupacionales != "") {
            cout << MAGENTA << "Ocupacionales:" << RESET << endl;
            Salto_Linea(Est[N].Enf.Ocupacionales);
            cout << "\n" << endl;
        }
    }
    else if (Rol == "Prof")
    {
        if (Prof[N].Enf.Transmisibles != "") {
            cout << MAGENTA << "Transmisibles:" << RESET << endl;
            Salto_Linea(Prof[N].Enf.Transmisibles);
            cout << "\n" << endl;
        }

        if (Prof[N].Enf.Cronicas != "") {
            cout << MAGENTA << "Cronicas:" << RESET << endl;
            Salto_Linea(Prof[N].Enf.Cronicas);
            cout << "\n" << endl;
        }

        if (Prof[N].Enf.Neurologicas != "") {
            cout << MAGENTA << "Neurologicas:" << RESET << endl;
            Salto_Linea(Prof[N].Enf.Neurologicas);
            cout << "\n" << endl;
        }

        if (Prof[N].Enf.Neoplasias != "") {
            cout << MAGENTA << "Neoplasias (Tumores):" << RESET << endl;
            Salto_Linea(Prof[N].Enf.Neoplasias);
            cout << "\n" << endl;
        }

        if (Prof[N].Enf.Autoinmunes != "") {
            cout << MAGENTA << "Autoinmunes:" << RESET << endl;
            Salto_Linea(Prof[N].Enf.Autoinmunes);
            cout << "\n" << endl;
        }

        if (Prof[N].Enf.Transtornos != "") {
            cout << MAGENTA << "Transtornos Mentales:" << RESET << endl;
            Salto_Linea(Prof[N].Enf.Transtornos);
            cout << "\n" << endl;
        }

        if (Prof[N].Enf.Lesiones != "") {
            cout << MAGENTA << "Lesiones Fisicas:" << RESET << endl;
            Salto_Linea(Prof[N].Enf.Lesiones);
            cout << "\n" << endl;
        }

        if (Prof[N].Enf.Congenitas != "") {
            cout << MAGENTA << "Congenitas (De nacimiento):" << RESET << endl;
            Salto_Linea(Prof[N].Enf.Congenitas);
            cout << "\n" << endl;
        }

        if (Prof[N].Enf.Metabolicos != "") {
            cout << MAGENTA << "Metabolicos:" << RESET << endl;
            Salto_Linea(Prof[N].Enf.Metabolicos);
            cout << "\n" << endl;
        }

        if (Prof[N].Enf.Ocupacionales != "") {
            cout << MAGENTA << "Ocupacionales:" << RESET << endl;
            Salto_Linea(Prof[N].Enf.Ocupacionales);
            cout << "\n" << endl;
        }
    }
    else if (Rol == "Admin")
    {
        if (Admin[N].Enf.Transmisibles != "") {
            cout << MAGENTA << "Transmisibles:" << RESET << endl;
            Salto_Linea(Admin[N].Enf.Transmisibles);
            cout << "\n" << endl;
        }

        if (Admin[N].Enf.Cronicas != "") {
            cout << MAGENTA << "Cronicas:" << RESET << endl;
            Salto_Linea(Admin[N].Enf.Cronicas);
            cout << "\n" << endl;
        }

        if (Admin[N].Enf.Neurologicas != "") {
            cout << MAGENTA << "Neurologicas:" << RESET << endl;
            Salto_Linea(Admin[N].Enf.Neurologicas);
            cout << "\n" << endl;
        }

        if (Admin[N].Enf.Neoplasias != "") {
            cout << MAGENTA << "Neoplasias (Tumores):" << RESET << endl;
            Salto_Linea(Admin[N].Enf.Neoplasias);
            cout << "\n" << endl;
        }

        if (Admin[N].Enf.Autoinmunes != "") {
            cout << MAGENTA << "Autoinmunes:" << RESET << endl;
            Salto_Linea(Admin[N].Enf.Autoinmunes);
            cout << "\n" << endl;
        }

        if (Admin[N].Enf.Transtornos != "") {
            cout << MAGENTA << "Transtornos Mentales:" << RESET << endl;
            Salto_Linea(Admin[N].Enf.Transtornos);
            cout << "\n" << endl;
        }

        if (Admin[N].Enf.Lesiones != "") {
            cout << MAGENTA << "Lesiones Fisicas:" << RESET << endl;
            Salto_Linea(Admin[N].Enf.Lesiones);
            cout << "\n" << endl;
        }

        if (Admin[N].Enf.Congenitas != "") {
            cout << MAGENTA << "Congenitas (De nacimiento):" << RESET << endl;
            Salto_Linea(Admin[N].Enf.Congenitas);
            cout << "\n" << endl;
        }

        if (Admin[N].Enf.Metabolicos != "") {
            cout << MAGENTA << "Metabolicos:" << RESET << endl;
            Salto_Linea(Admin[N].Enf.Metabolicos);
            cout << "\n" << endl;
        }

        if (Admin[N].Enf.Ocupacionales != "") {
            cout << MAGENTA << "Ocupacionales:" << RESET << endl;
            Salto_Linea(Admin[N].Enf.Ocupacionales);
            cout << "\n" << endl;
        }
    }

    Continue();
}