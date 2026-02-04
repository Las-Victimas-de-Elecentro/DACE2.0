#include "../../../Main/Header.h"
using namespace std;

void Hist_Med (Variables (&Var), Estudiante (&Est)[D])
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

        cout << "Histologia Embriologia y Genetica: " << Est[N].Car.Med.Histologia_Embriologia_y_Genetica << endl;
        cout << "Bioetica I: " << Est[N].Car.Med.Bioetica_I << endl;
        cout << "Medicina General I: " << Est[N].Car.Med.Medicina_General_I << endl;
        cout << "Deportes, Arte y Cultura: " << Est[N].Car.Med.Deportes_Arte_y_Cultura << endl;
        cout << "Metodologia de la Investigacion Cientifica: " << Est[N].Car.Med.Metodologia_de_la_Investigacion_Cientifica << endl;
        cout << "Ingles Instrumental: " << Est[N].Car.Med.Ingles_Instrumental << endl;
        cout << "Medicina Preventiva, Comunitaria y Familiar I: " << Est[N].Car.Med.Medicina_Preventiva_Comunitaria_y_Familiar_I << endl;
        cout << "Anatomia Humana: " << Est[N].Car.Med.Anatomia_Humana << endl;
        cout << "Historia de la Medicina: " << Est[N].Car.Med.Historia_de_la_Medicina << endl;
        cout << "Antropologia: " << Est[N].Car.Med.Antropologia << endl;

        Suma = Suma + (Est[N].Car.Med.Histologia_Embriologia_y_Genetica + Est[N].Car.Med.Bioetica_I + Est[N].Car.Med.Medicina_General_I + Est[N].Car.Med.Deportes_Arte_y_Cultura + Est[N].Car.Med.Metodologia_de_la_Investigacion_Cientifica + Est[N].Car.Med.Ingles_Instrumental + Est[N].Car.Med.Medicina_Preventiva_Comunitaria_y_Familiar_I + Est[N].Car.Med.Anatomia_Humana + Est[N].Car.Med.Historia_de_la_Medicina + Est[N].Car.Med.Antropologia);
        Cont = Cont + 10;

    }

    if (Est[N].Car.Med.Histologia_Embriologia_y_Genetica >= 5.5)
    {

        cout << "Microbiologia: " << Est[N].Car.Med.Microbiologia << endl;
        cout << "Bioquimica: " << Est[N].Car.Med.Bioquimica << endl;
        cout << "Fisiologia y Biofisica: " << Est[N].Car.Med.Fisiologia_y_Biofisica << endl;
        Suma = Suma + (Est[N].Car.Med.Microbiologia + Est[N].Car.Med.Bioquimica + Est[N].Car.Med.Fisiologia_y_Biofisica);
        Cont = Cont + 3;

    }

    if (Est[N].Car.Med.Deportes_Arte_y_Cultura >= 5.5)
    {

        cout << "Deportes, Arte y Cultura II: " << Est[N].Car.Med.Deportes_Arte_y_Cultura_II << endl;
        Suma = Suma + Est[N].Car.Med.Deportes_Arte_y_Cultura_II;
        Cont = Cont + 1;

    }

    if (Est[N].Car.Med.Medicina_General_I >= 5.5)
    {

        cout << "Medicina General II: " << Est[N].Car.Med.Medicina_General_II << endl;
        Suma = Suma + Est[N].Car.Med.Medicina_General_II;
        Cont = Cont + 1;

    }

    if (Est[N].Car.Med.Antropologia >= 5.5)
    {

        cout << "Psicologia y Sociologia Gral: " << Est[N].Car.Med.Psicologia_y_Sociologia_Gral << endl;
        Suma = Suma + Est[N].Car.Med.Psicologia_y_Sociologia_Gral;
        Cont = Cont + 1;

    }

    if (Est[N].Car.Med.Metodologia_de_la_Investigacion_Cientifica >= 5.5)
    {

        cout << "Estadistica y Demografia: " << Est[N].Car.Med.Estadistica_y_Demografia_Medica_II << endl;
        Suma = Suma + Est[N].Car.Med.Estadistica_y_Demografia_Medica_II;
        Cont = Cont + 1;

    }

    if (Est[N].Fecha.Year >= 2)
    {

        cout << "Informatica: " << Est[N].Car.Med.Informatica << endl;
        Suma = Suma + Est[N].Car.Med.Informatica;
        Cont = Cont + 1;

    }

    if (Est[N].Car.Med.Medicina_Preventiva_Comunitaria_y_Familiar_I >= 5.5)
    {

        cout << "Medicina Preventiva, Comunitaria y Familiar II: " << Est[N].Car.Med.Medicina_Preventiva_Comunitaria_y_Familiar_II << endl;
        Suma = Suma + Est[N].Car.Med.Medicina_Preventiva_Comunitaria_y_Familiar_II;
        Cont = Cont + 1;

    }

    if (Est[N].Fecha.Year >= 3)
    {

        cout << "Derecho Constitucional: " << Est[N].Car.Med.Derecho_Constitucional << endl;
        Suma = Suma + Est[N].Car.Med.Derecho_Constitucional;
        Cont = Cont + 1;

    }

    if (Est[N].Car.Med.Medicina_Preventiva_Comunitaria_y_Familiar_II >= 5.5)
    {

        cout << "Medicina Preventiva, Comunitaria y Familiar III: " << Est[N].Car.Med.Medicina_Preventiva_Comunitaria_y_Familiar_III << endl;
        cout << "Inteligencia Etica / Deontologia: " << Est[N].Car.Med.Inteligencia_Etica_Deontologia_Practica_Medica << endl;
        Suma = Suma + (Est[N].Car.Med.Medicina_Preventiva_Comunitaria_y_Familiar_III + Est[N].Car.Med.Inteligencia_Etica_Deontologia_Practica_Medica);
        Cont = Cont + 2;

    }

    if (Est[N].Car.Med.Microbiologia >= 5.5)
    {

        cout << "Parasitologia: " << Est[N].Car.Med.Parasitologia << endl;
        Suma = Suma + Est[N].Car.Med.Parasitologia;
        Cont = Cont + 1;

    }

    if (Est[N].Car.Med.Fisiologia_y_Biofisica >= 5.5)
    {

        cout << "Semiologia Medico Quirurgica: " << Est[N].Car.Med.Semiologia_Medico_Quirurgica << endl;
        cout << "Fisiopatologia: " << Est[N].Car.Med.Fisiopatologia << endl;
        Suma = Suma + (Est[N].Car.Med.Semiologia_Medico_Quirurgica + Est[N].Car.Med.Fisiopatologia);
        Cont = Cont + 2;

    }

    if (Est[N].Car.Med.Bioquimica >= 5.5)
    {

        cout << "Farmacologia: " << Est[N].Car.Med.Farmacologia << endl;
        cout << "Nutricion: " << Est[N].Car.Med.Nutricion << endl;
        Suma = Suma + (Est[N].Car.Med.Farmacologia + Est[N].Car.Med.Nutricion);
        Cont = Cont + 2;

    }

    if (Est[N].Car.Med.Psicologia_y_Sociologia_Gral >= 5.5)
    {

        cout << "Psicologia Medica General: " << Est[N].Car.Med.Psicologia_Medica_General << endl;
        Suma = Suma + Est[N].Car.Med.Psicologia_Medica_General;
        Cont = Cont + 1;

    }

    if (Est[N].Car.Med.Medicina_General_II >= 5.5)
    {

        cout << "Medicina General III: " << Est[N].Car.Med.Medicina_General_III << endl;
        Suma = Suma + Est[N].Car.Med.Medicina_General_III;
        Cont = Cont + 1;

    }

    if (Est[N].Car.Med.Psicologia_Medica_General >= 5.5)
    {

        cout << "Psicopatologia: " << Est[N].Car.Med.Psicopatologia << endl;
        Suma = Suma + Est[N].Car.Med.Psicopatologia;
        Cont = Cont + 1;

    }

    if (Est[N].Car.Med.Farmacologia >= 5.5)
    {

        cout << "Clinica Obstetrica y Ginecologia I: " << Est[N].Car.Med.Clinica_Obstetrica_y_Ginecologia_I << endl;
        Suma = Suma + Est[N].Car.Med.Clinica_Obstetrica_y_Ginecologia_I;
        Cont = Cont + 1;

    }

    if (Est[N].Car.Med.Fisiopatologia >= 5.5)
    {

        cout << "Clinica Quirurgica I: " << Est[N].Car.Med.Clinica_Quirurgica_I << endl;
        cout << "Clinica Medica I: " << Est[N].Car.Med.Clinica_Medica_I << endl;
        Suma = Suma + (Est[N].Car.Med.Clinica_Quirurgica_I + Est[N].Car.Med.Clinica_Medica_I);
        Cont = Cont + 2;

    }

    if (Est[N].Car.Med.Semiologia_Medico_Quirurgica >= 5.5)
    {

        cout << "Clinica Pediatrica I: " << Est[N].Car.Med.Clinica_Pediatrica_I << endl;
        Suma = Suma + Est[N].Car.Med.Clinica_Pediatrica_I;
        Cont = Cont + 1;

    }

    if (Est[N].Car.Med.Anatomia_Humana >= 5.5)
    {

        cout << "Anatomia Patologica: " << Est[N].Car.Med.Anatomia_Patologica << endl;
        Suma = Suma + Est[N].Car.Med.Anatomia_Patologica;
        Cont = Cont + 1;

    }

    if (Est[N].Car.Med.Medicina_Preventiva_Comunitaria_y_Familiar_III >= 5.5)
    {

        cout << "Medicina Preventiva, Comunitaria y Familiar IV: " << Est[N].Car.Med.Medicina_Preventiva_Comunitaria_y_Familiar_IV << endl;
        cout << "Medicina General IV: " << Est[N].Car.Med.Medicina_General_IV << endl;
        Suma = Suma + (Est[N].Car.Med.Medicina_Preventiva_Comunitaria_y_Familiar_IV + Est[N].Car.Med.Medicina_General_IV);
        Cont = Cont + 2;

    }

    if (Est[N].Car.Med.Clinica_Quirurgica_I >= 5.5)
    {

        cout << "Clinica Quirurgica II: " << Est[N].Car.Med.Clinica_Quirurgica_II << endl;
        Suma = Suma + Est[N].Car.Med.Clinica_Quirurgica_II;
        Cont = Cont + 1;

    }

    if (Est[N].Car.Med.Medicina_General_IV >= 5.5)
    {

        cout << "Medicina General V: " << Est[N].Car.Med.Medicina_General_V << endl;
        Suma = Suma + Est[N].Car.Med.Medicina_General_V;
        Cont = Cont + 1;

    }

    if (Est[N].Car.Med.Clinica_Pediatrica_I >= 5.5)
    {

        cout << "Clinica Pediatrica II: " << Est[N].Car.Med.Clinica_Pediatrica_II << endl;
        Suma = Suma + Est[N].Car.Med.Clinica_Pediatrica_II;
        Cont = Cont + 1;

    }

    if (Est[N].Car.Med.Anatomia_Patologica >= 5.5)
    {

        cout << "Medicina Legal: " << Est[N].Car.Med.Medicina_Legal << endl;
        Suma = Suma + Est[N].Car.Med.Medicina_Legal;
        Cont = Cont + 1;

    }

    if (Est[N].Car.Med.Medicina_Preventiva_Comunitaria_y_Familiar_IV >= 5.5)
    {

        cout << "Medicina Preventiva, Comunitaria y Familiar V: " << Est[N].Car.Med.Medicina_Preventiva_Comunitaria_y_Familiar_V << endl;
        Suma = Suma + Est[N].Car.Med.Medicina_Preventiva_Comunitaria_y_Familiar_V;
        Cont = Cont + 1;

    }

    if (Est[N].Car.Med.Psicopatologia >= 5.5)
    {

        cout << "Clinica Psiquiatrica: " << Est[N].Car.Med.Clinica_Psiquiatrica << endl;
        Suma = Suma + Est[N].Car.Med.Clinica_Psiquiatrica;
        Cont = Cont + 1;

    }

    if (Est[N].Car.Med.Clinica_Obstetrica_y_Ginecologia_I >= 5.5)
    {

        cout << "Clinica Obstetrica y Ginecologia II: " << Est[N].Car.Med.Clinica_Obstetrica_y_Ginecologica_II << endl;
        Suma = Suma + Est[N].Car.Med.Clinica_Obstetrica_y_Ginecologica_II;
        Cont = Cont + 1;

    }

    if (Est[N].Car.Med.Clinica_Medica_I >= 5.5)
    {

        cout << "Clinica Medica II: " << Est[N].Car.Med.Clinica_Medica_II << endl;
        Suma = Suma + Est[N].Car.Med.Clinica_Medica_II;
        Cont = Cont + 1;

    }

    if (Est[N].Car.Med.Medicina_General_V >= 5.5)
    {

        cout << "Internado Rural: " << Est[N].Car.Med.Internado_Rural << endl;
        Suma = Suma + Est[N].Car.Med.Internado_Rural;
        Cont = Cont + 1;

    }

    if (Est[N].Car.Med.Clinica_Medica_II >= 5.5)
    {

        cout << "Clinica Medica III: " << Est[N].Car.Med.Clinica_Medica_III << endl;
        Suma = Suma + Est[N].Car.Med.Clinica_Medica_III;
        Cont = Cont + 1;

    }

    if (Est[N].Car.Med.Clinica_Quirurgica_II >= 5.5)
    {

        cout << "Clinica Quirurgica III: " << Est[N].Car.Med.Clinica_Quirurgica_III << endl;
        Suma = Suma + Est[N].Car.Med.Clinica_Quirurgica_III;
        Cont = Cont + 1;

    }

    if (Est[N].Car.Med.Clinica_Obstetrica_y_Ginecologica_II >= 5.5)
    {

        cout << "Clinica Obstetrica III: " << Est[N].Car.Med.Clinica_Obstetrica_III << endl;
        Suma = Suma + Est[N].Car.Med.Clinica_Obstetrica_III;
        Cont = Cont + 1;

    }

    if (Est[N].Car.Med.Clinica_Pediatrica_II >= 5.5)
    {

        cout << "Clinica Pediatrica III: " << Est[N].Car.Med.Clinica_Pediatrica_III << endl;
        Suma = Suma + Est[N].Car.Med.Clinica_Pediatrica_III;
        Cont = Cont + 1;

    }

    if (Est[N].Car.Med.Medicina_Preventiva_Comunitaria_y_Familiar_V >= 5.5)
    {

        cout << "Trabajo de Grado: " << Est[N].Car.Med.Trabajo_de_Grado << endl;
        Suma = Suma + Est[N].Car.Med.Trabajo_de_Grado;
        Cont = Cont + 1;

    }

    if (Cont > 0)
    {
        cout << endl << YELLOW << "Promedio Academico: " << RESET << Suma / Cont << endl;
        Continue();
    }

}