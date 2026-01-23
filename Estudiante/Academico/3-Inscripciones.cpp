#include "../../Main/Header.h"
using namespace std;

void Inscripciones (Variables (&Var), Estudiante (&Est)[D], Clase (&Class)[D], Clase_Magistral (&Mag)[D], Profesor (&Prof)[D])
{
    int& N = Var.N;

    if (Est[N].Carrera == "Informática")
    {
        Inf_Est(Var, Est, Class, Mag, Prof);
    }
    else if (Est[N].Carrera == "Civil")
    {
        Civ_Est(Var, Est, Class, Mag, Prof);
    }
    else if (Est[N].Carrera == "Hidrocarburo")
    {
        Hid_Est(Var, Est, Class, Mag, Prof);
    }
    else if (Est[N].Carrera == "Medicina")
    {
        Med_Est(Var, Est, Class, Mag, Prof);
    }
    else if (Est[N].Carrera == "Odontología")
    {
        Odo_Est(Var, Est, Class, Mag, Prof);
    }
    else if (Est[N].Carrera == "Veterinaria")
    {
        Vet_Est(Var, Est, Class, Mag, Prof);
    }
    else if (Est[N].Carrera == "Derecho")
    {
        Der_Est(Var, Est, Class, Mag, Prof);
    }
    else if (Est[N].Carrera == "Social")
    {
        Com_Est(Var, Est, Class, Mag, Prof);
    }
    else if (Est[N].Carrera == "Contaduría")
    {
        Con_Est(Var, Est, Class, Mag, Prof);
    }
    else if (Est[N].Carrera == "Economía")
    {
        Eco_Est(Var, Est, Class, Mag, Prof);
    }

}