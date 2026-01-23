#include "../../../Main/Header.h"
using namespace std;

void Odo_Est (Variables (&Var), Estudiante (&Est)[D], Clase (&Class)[D], Clase_Magistral (&Mag)[D], Profesor (&Prof)[D])
{
    int& N = Var.N;
    int& Opc_F = Var.Opc_F;
    string& Car = Var.Car;
    string Materias[60];
    int n, Total, Select;

    do {
        n = 1;
        Total = 0;
        Limpiar();
        Dibujo = "Book"; Art();

        cout << CYAN << "Seleccione la materia que desea inscribir" << endl;

        if (Est[N].UC_Aprobadas == 0)
        {
            cout << n++ << ": Morfología Dentaria y Oclusión" << endl;
            Materias[Total++] = "Morfología Dentaria y Oclusión";
            cout << n++ << ": Formación Cultural y Artística" << endl;
            Materias[Total++] = "Formación Cultural y Artística";
            cout << n++ << ": Odontología Comunitaria I" << endl;
            Materias[Total++] = "Odontología Comunitaria I";
            cout << n++ << ": Iniciación a la Clínica" << endl;
            Materias[Total++] = "Iniciación a la Clínica";
            cout << n++ << ": Morfología Humana" << endl;
            Materias[Total++] = "Morfología Humana";
            cout << n++ << ": Formación Instrumental" << endl;
            Materias[Total++] = "Formación Instrumental";
            cout << n++ << ": Bioquímica Aplicada" << endl;
            Materias[Total++] = "Bioquímica Aplicada";
            cout << n++ << ": Histología, Embriología y Genética" << endl;
            Materias[Total++] = "Histología, Embriología y Genética";
            cout << n++ << ": Educación Física y Deportes I" << endl;
            Materias[Total++] = "Educación Física y Deportes I";
            cout << n++ << ": Investigación I" << endl;
            Materias[Total++] = "Investigación I";
        }

        if (Est[N].UC_Aprobadas > 0 && 5.5 > Est[N].Car.Odo.Morfologia_Dentaria_y_Oclusion)
        {
            cout << n++ << ": Morfología Dentaria y Oclusión" << endl;
            Materias[Total++] = "Morfología Dentaria y Oclusión";
        }
        if (Est[N].UC_Aprobadas > 0 && 5.5 > Est[N].Car.Odo.Formacion_Cultural_y_Artistica)
        {
            cout << n++ << ": Formación Cultural y Artística" << endl;
            Materias[Total++] = "Formación Cultural y Artística";
        }
        if (Est[N].UC_Aprobadas > 0 && 5.5 > Est[N].Car.Odo.Odontologia_Comunitaria_I)
        {
            cout << n++ << ": Odontología Comunitaria I" << endl;
            Materias[Total++] = "Odontología Comunitaria I";
        }
        if (Est[N].UC_Aprobadas > 0 && 5.5 > Est[N].Car.Odo.Iniciacion_a_la_Clinica)
        {
            cout << n++ << ": Iniciación a la Clínica" << endl;
            Materias[Total++] = "Iniciación a la Clínica";
        }
        if (Est[N].UC_Aprobadas > 0 && 5.5 > Est[N].Car.Odo.Morfologia_Humana)
        {
            cout << n++ << ": Morfología Humana" << endl;
            Materias[Total++] = "Morfología Humana";
        }
        if (Est[N].UC_Aprobadas > 0 && 5.5 > Est[N].Car.Odo.Formacion_Instrumental)
        {
            cout << n++ << ": Formación Instrumental" << endl;
            Materias[Total++] = "Formación Instrumental";
        }
        if (Est[N].UC_Aprobadas > 0 && 5.5 > Est[N].Car.Odo.Bioquimica_Aplicada)
        {
            cout << n++ << ": Bioquímica Aplicada" << endl;
            Materias[Total++] = "Bioquímica Aplicada";
        }
        if (Est[N].UC_Aprobadas > 0 && 5.5 > Est[N].Car.Odo.Histologia_Embriologia_y_Genetica)
        {
            cout << n++ << ": Histología, Embriología y Genética" << endl;
            Materias[Total++] = "Histología, Embriología y Genética";
        }
        if (Est[N].UC_Aprobadas > 0 && 5.5 > Est[N].Car.Odo.Educacion_Fisica_y_Deportes_I)
        {
            cout << n++ << ": Educación Física y Deportes I" << endl;
            Materias[Total++] = "Educación Física y Deportes I";
        }
        if (Est[N].UC_Aprobadas > 0 && 5.5 > Est[N].Car.Odo.Investigacion_I)
        {
            cout << n++ << ": Investigación I" << endl;
            Materias[Total++] = "Investigación I";
        }

        if (Est[N].Car.Odo.Odontologia_Comunitaria_I > 5.5 && 5.5 > Est[N].Car.Odo.Odontologia_Comunitaria_II)
        {
            cout << n++ << ": Odontología Comunitaria II" << endl;
            Materias[Total++] = "Odontología Comunitaria II";
        }
        if (Est[N].Car.Odo.Morfologia_Humana > 5.5 && 5.5 > Est[N].Car.Odo.Histofisiologia)
        {
            cout << n++ << ": Histofisiología" << endl;
            Materias[Total++] = "Histofisiología";
        }
        if (Est[N].Car.Odo.Morfologia_Dentaria_y_Oclusion > 5.5 && 5.5 > Est[N].Car.Odo.Clinica_Integral_del_Adulto_I)
        {
            cout << n++ << ": Clínica Integral del Adulto I" << endl;
            Materias[Total++] = "Clínica Integral del Adulto I";
        }
        if (Est[N].Car.Odo.Iniciacion_a_la_Clinica > 5.5 && 5.5 > Est[N].Car.Odo.Biomateriales_Odontologicos)
        {
            cout << n++ << ": Biomateriales Odontológicos" << endl;
            Materias[Total++] = "Biomateriales Odontológicos";
        }
        if (Est[N].Car.Odo.Educacion_Fisica_y_Deportes_I > 5.5 && 5.5 > Est[N].Car.Odo.Educacion_Fisica_y_Deportes_II)
        {
            cout << n++ << ": Educación Física y Deportes II" << endl;
            Materias[Total++] = "Educación Física y Deportes II";
        }
        if (Est[N].Car.Odo.Investigacion_I > 5.5 && 5.5 > Est[N].Car.Odo.Investigacion_II)
        {
            cout << n++ << ": Investigación II" << endl;
            Materias[Total++] = "Investigación II";
        }
        if (Est[N].Car.Odo.Histologia_Embriologia_y_Genetica > 5.5 && 5.5 > Est[N].Car.Odo.Microbiologia_y_Parasitologia)
        {
            cout << n++ << ": Microbiología y Parasitología" << endl;
            Materias[Total++] = "Microbiología y Parasitología";
        }
        if (Est[N].Car.Odo.Formacion_Instrumental > 5.5 && 5.5 > Est[N].Car.Odo.Formacion_Instrumental_II)
        {
            cout << n++ << ": Formación Instrumental II" << endl;
            Materias[Total++] = "Formación Instrumental II";
        }
        if (Est[N].Car.Odo.Odontologia_Comunitaria_I > 5.5 && 5.5 > Est[N].Car.Odo.Formacion_Cultural_y_Artistica_II)
        {
            cout << n++ << ": Formación Cultural y Artística II" << endl;
            Materias[Total++] = "Formación Cultural y Artística II";
        }

        if (Est[N].Car.Odo.Investigacion_II > 5.5 && 5.5 > Est[N].Car.Odo.Investigacion_III)
        {
            cout << n++ << ": Investigación III" << endl;
            Materias[Total++] = "Investigación III";
        }
        if (Est[N].Car.Odo.Histofisiologia > 5.5 && 5.5 > Est[N].Car.Odo.Clinica_Integral_del_Adulto_II)
        {
            cout << n++ << ": Clínica Integral del Adulto II" << endl;
            Materias[Total++] = "Clínica Integral del Adulto II";
        }
        if (Est[N].Car.Odo.Odontologia_Comunitaria_II > 5.5 && 5.5 > Est[N].Car.Odo.Atencion_Integral_de_Niño_I)
        {
            cout << n++ << ": Atención Integral del Niño I" << endl;
            Materias[Total++] = "Atención Integral del Niño I";
        }
        if (Est[N].Car.Odo.Clinica_Integral_del_Adulto_I > 5.5 && 5.5 > Est[N].Car.Odo.Odontologia_Comunitaria_III)
        {
            cout << n++ << ": Odontología Comunitaria III" << endl;
            Materias[Total++] = "Odontología Comunitaria III";
        }
        if (Est[N].Car.Odo.Odontologia_Comunitaria_I > 5.5 && 5.5 > Est[N].Car.Odo.Medicina_Interna_y_Semiologia)
        {
            cout << n++ << ": Medicina Interna y Semiología" << endl;
            Materias[Total++] = "Medicina Interna y Semiología";
        }
        if (Est[N].Car.Odo.Odontologia_Comunitaria_I > 5.5 && 5.5 > Est[N].Car.Odo.Fisiopatologia)
        {
            cout << n++ << ": Fisiopatología" << endl;
            Materias[Total++] = "Fisiopatología";
        }
        if (Est[N].Car.Odo.Formacion_Cultural_y_Artistica_II > 5.5 && 5.5 > Est[N].Car.Odo.Farmacologia)
        {
            cout << n++ << ": Farmacología" << endl;
            Materias[Total++] = "Farmacología";
        }

        if (Est[N].Car.Odo.Investigacion_III > 5.5 && 5.5 > Est[N].Car.Odo.Investigacion_IV)
        {
            cout << n++ << ": Investigación IV" << endl;
            Materias[Total++] = "Investigación IV";
        }
        if (Est[N].Car.Odo.Odontologia_Comunitaria_III > 5.5 && 5.5 > Est[N].Car.Odo.Clinica_Integral_del_Adulto_III)
        {
            cout << n++ << ": Clínica Integral del Adulto III" << endl;
            Materias[Total++] = "Clínica Integral del Adulto III";
        }
        if (Est[N].Car.Odo.Investigacion_III > 5.5 && 5.5 > Est[N].Car.Odo.Odontologia_Comunitaria_IV)
        {
            cout << n++ << ": Odontología Comunitaria IV" << endl;
            Materias[Total++] = "Odontología Comunitaria IV";
        }
        if (Est[N].Car.Odo.Investigacion_III > 5.5 && 5.5 > Est[N].Car.Odo.Atencion_Integral_de_Niño_II)
        {
            cout << n++ << ": Atención Integral del Niño II" << endl;
            Materias[Total++] = "Atención Integral del Niño II";
        }

        if (Est[N].Car.Odo.Odontologia_Comunitaria_IV > 5.5 && 5.5 > Est[N].Car.Odo.Investigacion_V)
        {
            cout << n++ << ": Investigación V" << endl;
            Materias[Total++] = "Investigación V";
        }
        if (Est[N].Car.Odo.Odontologia_Comunitaria_I > 5.5 && 5.5 > Est[N].Car.Odo.Gerontologia)
        {
            cout << n++ << ": Gerontología" << endl;
            Materias[Total++] = "Gerontología";
        }
        if (Est[N].Car.Odo.Gerontologia > 5.5 && 5.5 > Est[N].Car.Odo.Odontologia_Comunitaria_V)
        {
            cout << n++ << ": Odontología Comunitaria V" << endl;
            Materias[Total++] = "Odontología Comunitaria V";
        }
        if (Est[N].Car.Odo.Histofisiologia > 5.5 && 5.5 > Est[N].Car.Odo.Toxicologia)
        {
            cout << n++ << ": Toxicología" << endl;
            Materias[Total++] = "Toxicología";
        }

        cout << n++ << ": Salir" << endl;

        Opc_F = n;
        cout << "\nIngrese :";
        Select = Opc_Menu(Opc_F);

        if (Select >= 1 && Select <= Total)
        {
            Car = Materias[Select - 1];
            Inscripcion_Est (Var, Est, Class, Mag, Prof);
        }

    } while (Select != n - 1);

    return;
}