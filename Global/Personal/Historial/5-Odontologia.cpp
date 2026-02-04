#include "../../../Main/Header.h"
using namespace std;

void Hist_Odo (Variables (&Var), Estudiante (&Est)[D])
{

    int& N = Var.N;
    float Suma = 0, Cont = 0;
    Limpiar();
    Dibujo = "Book"; Art();
    cout << CYAN << "Historial Academico" << RESET << endl;
    cout << YELLOW << "Estudiante: " << RESET << Est[N].Nombre << " " << Est[N].Apellido << endl;
    cout << YELLOW << "Cedula:     " << RESET << Est[N].Cedula << endl;
    cout << YELLOW << "Carrera:    " << RESET << Est[N].Carrera << endl;
    cout << YELLOW << "Semestre:   " << RESET << Est[N].Semestre << endl;
    cout << YELLOW << "Año:        " << RESET << Est[N].Year << endl;
    cout << endl;

    if (Est[N].UC_Aprobadas >= 0)
    {

        cout << "Morfologia Dentaria y Oclusion: " << Est[N].Car.Odo.Morfologia_Dentaria_y_Oclusion << endl;
        cout << "Formacion Cultural y Artistica: " << Est[N].Car.Odo.Formacion_Cultural_y_Artistica << endl;
        cout << "Odontologia Comunitaria I: " << Est[N].Car.Odo.Odontologia_Comunitaria_I << endl;
        cout << "Iniciacion a la Clinica: " << Est[N].Car.Odo.Iniciacion_a_la_Clinica << endl;
        cout << "Morfologia Humana: " << Est[N].Car.Odo.Morfologia_Humana << endl;
        cout << "Formacion Instrumental: " << Est[N].Car.Odo.Formacion_Instrumental << endl;
        cout << "Bioquimica Aplicada: " << Est[N].Car.Odo.Bioquimica_Aplicada << endl;
        cout << "Histologia, Embriologia y Genetica: " << Est[N].Car.Odo.Histologia_Embriologia_y_Genetica << endl;
        cout << "Educacion Fisica y Deportes I: " << Est[N].Car.Odo.Educacion_Fisica_y_Deportes_I << endl;
        cout << "Investigacion I: " << Est[N].Car.Odo.Investigacion_I << endl;

        Suma = Suma + (Est[N].Car.Odo.Morfologia_Dentaria_y_Oclusion + Est[N].Car.Odo.Formacion_Cultural_y_Artistica + Est[N].Car.Odo.Odontologia_Comunitaria_I + Est[N].Car.Odo.Iniciacion_a_la_Clinica + Est[N].Car.Odo.Morfologia_Humana + Est[N].Car.Odo.Formacion_Instrumental + Est[N].Car.Odo.Bioquimica_Aplicada + Est[N].Car.Odo.Histologia_Embriologia_y_Genetica + Est[N].Car.Odo.Educacion_Fisica_y_Deportes_I + Est[N].Car.Odo.Investigacion_I);
        Cont = Cont + 10;

    }

    if (Est[N].Car.Odo.Odontologia_Comunitaria_I >= 5.5)
    {

        cout << "Odontologia Comunitaria II: " << Est[N].Car.Odo.Odontologia_Comunitaria_II << endl;
        cout << "Formacion Cultural y Artistica II: " << Est[N].Car.Odo.Formacion_Cultural_y_Artistica_II << endl;
        cout << "Medicina Interna y Semiologia: " << Est[N].Car.Odo.Medicina_Interna_y_Semiologia << endl;
        cout << "Fisiopatologia: " << Est[N].Car.Odo.Fisiopatologia << endl;
        cout << "Gerontologia: " << Est[N].Car.Odo.Gerontologia << endl;
        
        Suma = Suma + (Est[N].Car.Odo.Odontologia_Comunitaria_II + Est[N].Car.Odo.Formacion_Cultural_y_Artistica_II + Est[N].Car.Odo.Medicina_Interna_y_Semiologia + Est[N].Car.Odo.Fisiopatologia + Est[N].Car.Odo.Gerontologia);
        Cont = Cont + 5;

    }

    if (Est[N].Car.Odo.Morfologia_Humana >= 5.5)
    {

        cout << "Histofisiologia: " << Est[N].Car.Odo.Histofisiologia << endl;
        Suma = Suma + Est[N].Car.Odo.Histofisiologia;
        Cont = Cont + 1;

    }

    if (Est[N].Car.Odo.Morfologia_Dentaria_y_Oclusion >= 5.5)
    {

        cout << "Clinica Integral del Adulto I: " << Est[N].Car.Odo.Clinica_Integral_del_Adulto_I << endl;
        Suma = Suma + Est[N].Car.Odo.Clinica_Integral_del_Adulto_I;
        Cont = Cont + 1;

    }

    if (Est[N].Car.Odo.Iniciacion_a_la_Clinica >= 5.5)
    {

        cout << "Biomateriales Odontologicos: " << Est[N].Car.Odo.Biomateriales_Odontologicos << endl;
        Suma = Suma + Est[N].Car.Odo.Biomateriales_Odontologicos;
        Cont = Cont + 1;

    }

    if (Est[N].Car.Odo.Educacion_Fisica_y_Deportes_I >= 5.5)
    {

        cout << "Educacion Fisica y Deportes II: " << Est[N].Car.Odo.Educacion_Fisica_y_Deportes_II << endl;
        Suma = Suma + Est[N].Car.Odo.Educacion_Fisica_y_Deportes_II;
        Cont = Cont + 1;

    }

    if (Est[N].Car.Odo.Investigacion_I >= 5.5)
    {

        cout << "Investigacion II: " << Est[N].Car.Odo.Investigacion_II << endl;
        Suma = Suma + Est[N].Car.Odo.Investigacion_II;
        Cont = Cont + 1;

    }

    if (Est[N].Car.Odo.Histologia_Embriologia_y_Genetica >= 5.5)
    {

        cout << "Microbiologia y Parasitologia: " << Est[N].Car.Odo.Microbiologia_y_Parasitologia << endl;
        Suma = Suma + Est[N].Car.Odo.Microbiologia_y_Parasitologia;
        Cont = Cont + 1;

    }

    if (Est[N].Car.Odo.Formacion_Instrumental >= 5.5)
    {

        cout << "Formacion Instrumental II: " << Est[N].Car.Odo.Formacion_Instrumental_II << endl;
        Suma = Suma + Est[N].Car.Odo.Formacion_Instrumental_II;
        Cont = Cont + 1;

    }

    if (Est[N].Car.Odo.Investigacion_II >= 5.5)
    {

        cout << "Investigacion III: " << Est[N].Car.Odo.Investigacion_III << endl;
        Suma = Suma + Est[N].Car.Odo.Investigacion_III;
        Cont = Cont + 1;

    }

    if (Est[N].Car.Odo.Histofisiologia >= 5.5)
    {

        cout << "Clinica Integral del Adulto II: " << Est[N].Car.Odo.Clinica_Integral_del_Adulto_II << endl;
        cout << "Toxicologia: " << Est[N].Car.Odo.Toxicologia << endl;
        Suma = Suma + (Est[N].Car.Odo.Clinica_Integral_del_Adulto_II + Est[N].Car.Odo.Toxicologia);
        Cont = Cont + 2;

    }

    if (Est[N].Car.Odo.Odontologia_Comunitaria_II >= 5.5)
    {

        cout << "Atencion Integral del Niño I: " << Est[N].Car.Odo.Atencion_Integral_de_Niño_I << endl;
        Suma = Suma + Est[N].Car.Odo.Atencion_Integral_de_Niño_I;
        Cont = Cont + 1;

    }

    if (Est[N].Car.Odo.Clinica_Integral_del_Adulto_I >= 5.5)
    {

        cout << "Odontologia Comunitaria III: " << Est[N].Car.Odo.Odontologia_Comunitaria_III << endl;
        Suma = Suma + Est[N].Car.Odo.Odontologia_Comunitaria_III;
        Cont = Cont + 1;

    }

    if (Est[N].Car.Odo.Formacion_Cultural_y_Artistica_II >= 5.5)
    {

        cout << "Farmacologia: " << Est[N].Car.Odo.Farmacologia << endl;
        Suma = Suma + Est[N].Car.Odo.Farmacologia;
        Cont = Cont + 1;

    }

    if (Est[N].Car.Odo.Investigacion_III >= 5.5)
    {

        cout << "Investigacion IV: " << Est[N].Car.Odo.Investigacion_IV << endl;
        cout << "Odontologia Comunitaria IV: " << Est[N].Car.Odo.Odontologia_Comunitaria_IV << endl;
        cout << "Atencion Integral del Niño II: " << Est[N].Car.Odo.Atencion_Integral_de_Niño_II << endl;
        Suma = Suma + (Est[N].Car.Odo.Investigacion_IV + Est[N].Car.Odo.Odontologia_Comunitaria_IV + Est[N].Car.Odo.Atencion_Integral_de_Niño_II);
        Cont = Cont + 3;

    }

    if (Est[N].Car.Odo.Odontologia_Comunitaria_III >= 5.5)
    {

        cout << "Clinica Integral del Adulto III: " << Est[N].Car.Odo.Clinica_Integral_del_Adulto_III << endl;
        Suma = Suma + Est[N].Car.Odo.Clinica_Integral_del_Adulto_III;
        Cont = Cont + 1;

    }

    if (Est[N].Car.Odo.Odontologia_Comunitaria_IV >= 5.5)
    {

        cout << "Investigacion V: " << Est[N].Car.Odo.Investigacion_V << endl;
        Suma = Suma + Est[N].Car.Odo.Investigacion_V;
        Cont = Cont + 1;

    }

    if (Est[N].Car.Odo.Gerontologia >= 5.5)
    {

        cout << "Odontologia Comunitaria V: " << Est[N].Car.Odo.Odontologia_Comunitaria_V << endl;
        Suma = Suma + Est[N].Car.Odo.Odontologia_Comunitaria_V;
        Cont = Cont + 1;

    }

    if (Cont > 0)
    {
        cout << endl << YELLOW << "Promedio Academico: " << RESET << Suma / Cont << endl;
        Continue();
    }

}