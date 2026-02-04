#include "../../Main/Header.h"
using namespace std;

void Historial (Variables (&Var), Estudiante (&Est)[D])
{

    int& N = Var.N;

    if (Est[N].Carrera == "Informática")
    {

        Hist_Inf(Var, Est);

    }
    else if (Est[N].Carrera == "Civil")
    {

        Hist_Civ(Var, Est);

    }
    else if (Est[N].Carrera == "Hidrocarburo")
    {

        Hist_Hid(Var, Est);

    }
    else if (Est[N].Carrera == "Medicina")
    {

        Hist_Med(Var, Est);

    }
    else if (Est[N].Carrera == "Odontología")
    {

        Hist_Odo(Var, Est);

    }
    else if (Est[N].Carrera == "Veterinaria")
    {

        Hist_Vet(Var, Est);

    }
    else if (Est[N].Carrera == "Derecho")
    {

        Hist_Der(Var, Est);

    }
    else if (Est[N].Carrera == "Social")
    {

        Hist_Com(Var, Est);

    }
    else if (Est[N].Carrera == "Contaduría")
    {

        Hist_Con(Var, Est);

    }
    else if (Est[N].Carrera == "Economía")
    {

        Hist_Eco(Var, Est);

    }

}