#include "../../../Main/Header.h"
using namespace std;

void Med_Est (Variables (&Var), Estudiante (&Est)[D], Clase (&Class)[D], Clase_Magistral (&Mag)[D], Profesor (&Prof)[D])
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
            cout << n++ << ": Histología Embriología y Genética" << endl;
            Materias[Total++] = "Histología Embriología y Genética";
            cout << n++ << ": Bioética I" << endl;
            Materias[Total++] = "Bioética I";
            cout << n++ << ": Medicina General I" << endl;
            Materias[Total++] = "Medicina General I";
            cout << n++ << ": Deportes, Arte y Cultura" << endl;
            Materias[Total++] = "Deportes, Arte y Cultura";
            cout << n++ << ": Metodología de la Investigación Científica" << endl;
            Materias[Total++] = "Metodología de la Investigación Científica";
            cout << n++ << ": Inglés Instrumental" << endl;
            Materias[Total++] = "Inglés Instrumental";
            cout << n++ << ": Medicina Preventiva, Comunitaria y Familiar I" << endl;
            Materias[Total++] = "Medicina Preventiva, Comunitaria y Familiar I";
            cout << n++ << ": Anatomía Humana" << endl;
            Materias[Total++] = "Anatomía Humana";
            cout << n++ << ": Historia de la Medicina" << endl;
            Materias[Total++] = "Historia de la Medicina";
            cout << n++ << ": Antropología" << endl;
            Materias[Total++] = "Antropología";
        }

        if (Est[N].UC_Aprobadas > 0 && 5.5 > Est[N].Car.Med.Histologia_Embriologia_y_Genetica)
        {
            cout << n++ << ": Histología Embriología y Genética" << endl;
            Materias[Total++] = "Histología Embriología y Genética";
        }

        if (Est[N].UC_Aprobadas > 0 && 5.5 > Est[N].Car.Med.Bioetica_I)
        {
            cout << n++ << ": Bioética I" << endl;
            Materias[Total++] = "Bioética I";
        }

        if (Est[N].UC_Aprobadas > 0 && 5.5 > Est[N].Car.Med.Medicina_General_I)
        {
            cout << n++ << ": Medicina General I" << endl;
            Materias[Total++] = "Medicina General I";
        }

        if (Est[N].UC_Aprobadas > 0 && 5.5 > Est[N].Car.Med.Deportes_Arte_y_Cultura)
        {
            cout << n++ << ": Deportes, Arte y Cultura" << endl;
            Materias[Total++] = "Deportes, Arte y Cultura";
        }

        if (Est[N].UC_Aprobadas > 0 && 5.5 > Est[N].Car.Med.Metodologia_de_la_Investigacion_Cientifica)
        {
            cout << n++ << ": Metodología de la Investigación Científica" << endl;
            Materias[Total++] = "Metodología de la Investigación Científica";
        }

        if (Est[N].UC_Aprobadas > 0 && 5.5 > Est[N].Car.Med.Medicina_Preventiva_Comunitaria_y_Familiar_I)
        {
            cout << n++ << ": Medicina Preventiva, Comunitaria y Familiar I" << endl;
            Materias[Total++] = "Medicina Preventiva, Comunitaria y Familiar I";
        }

        if (Est[N].UC_Aprobadas > 0 && 5.5 > Est[N].Car.Med.Anatomia_Humana)
        {
            cout << n++ << ": Anatomía Humana" << endl;
            Materias[Total++] = "Anatomía Humana";
        }

        if (Est[N].UC_Aprobadas > 0 && 5.5 > Est[N].Car.Med.Historia_de_la_Medicina)
        {
            cout << n++ << ": Historia de la Medicina" << endl;
            Materias[Total++] = "Historia de la Medicina";
        }

        if (Est[N].UC_Aprobadas > 0 && 5.5 > Est[N].Car.Med.Antropologia)
        {
            cout << n++ << ": Antropología" << endl;
            Materias[Total++] = "Antropología";
        }

        if (Est[N].Car.Med.Histologia_Embriologia_y_Genetica > 5.5 && 5.5 > Est[N].Car.Med.Microbiologia)
        {
            cout << n++ << ": Microbiología" << endl;
            Materias[Total++] = "Microbiología";
        }

        if (Est[N].Car.Med.Deportes_Arte_y_Cultura > 5.5 && 5.5 > Est[N].Car.Med.Deportes_Arte_y_Cultura_II)
        {
            cout << n++ << ": Deportes, Arte y Cultura II" << endl;
            Materias[Total++] = "Deportes, Arte y Cultura II";
        }

        if (Est[N].Car.Med.Histologia_Embriologia_y_Genetica > 5.5 && 5.5 > Est[N].Car.Med.Bioquimica)
        {
            cout << n++ << ": Bioquímica" << endl;
            Materias[Total++] = "Bioquímica";
        }

        if (Est[N].Car.Med.Medicina_General_I > 5.5 && 5.5 > Est[N].Car.Med.Medicina_General_II)
        {
            cout << n++ << ": Medicina General II" << endl;
            Materias[Total++] = "Medicina General II";
        }

        if (Est[N].Car.Med.Antropologia > 5.5 && 5.5 > Est[N].Car.Med.Psicologia_y_Sociologia_Gral)
        {
            cout << n++ << ": Psicología y Sociología Gral" << endl;
            Materias[Total++] = "Psicología y Sociología Gral";
        }

        if (Est[N].Car.Med.Metodologia_de_la_Investigacion_Cientifica > 5.5 && 5.5 > Est[N].Car.Med.Estadistica_y_Demografia_Medica_II)
        {
            cout << n++ << ": Estadística y Demografía" << endl;
            Materias[Total++] = "Estadística y Demografía";
        }

        if (Est[N].Car.Med.Histologia_Embriologia_y_Genetica > 5.5 && 5.5 > Est[N].Car.Med.Fisiologia_y_Biofisica)
        {
            cout << n++ << ": Fisiología y Biofísica" << endl;
            Materias[Total++] = "Fisiología y Biofísica";
        }

        if (Est[N].Fecha.Year >= 2 && 5.5 > Est[N].Car.Med.Informatica)
        {
            cout << n++ << ": Informática" << endl;
            Materias[Total++] = "Informática";
        }

        if (Est[N].Car.Med.Medicina_Preventiva_Comunitaria_y_Familiar_I > 5.5 && 5.5 > Est[N].Car.Med.Medicina_Preventiva_Comunitaria_y_Familiar_II)
        {
            cout << n++ << ": Medicina Preventiva, Comunitaria y Familiar II" << endl;
            Materias[Total++] = "Medicina Preventiva, Comunitaria y Familiar II";
        }

        if (Est[N].Fecha.Year >= 3 && 5.5 > Est[N].Car.Med.Derecho_Constitucional)
        {
            cout << n++ << ": Derecho Constitucional" << endl;
            Materias[Total++] = "Derecho Constitucional";
        }

        if (Est[N].Car.Med.Medicina_Preventiva_Comunitaria_y_Familiar_II > 5.5 && 5.5 > Est[N].Car.Med.Medicina_Preventiva_Comunitaria_y_Familiar_III)
        {
            cout << n++ << ": Medicina Preventiva, Comunitaria y Familiar III" << endl;
            Materias[Total++] = "Medicina Preventiva, Comunitaria y Familiar III";
        }

        if (Est[N].Car.Med.Microbiologia > 5.5 && 5.5 > Est[N].Car.Med.Parasitologia)
        {
            cout << n++ << ": Parasitología" << endl;
            Materias[Total++] = "Parasitología";
        }

        if (Est[N].Car.Med.Fisiologia_y_Biofisica > 5.5 && 5.5 > Est[N].Car.Med.Semiologia_Medico_Quirurgica)
        {
            cout << n++ << ": Semiología Médico Quirúrgica" << endl;
            Materias[Total++] = "Semiología Médico Quirúrgica";
        }

        if (Est[N].Car.Med.Bioquimica > 5.5 && 5.5 > Est[N].Car.Med.Farmacologia)
        {
            cout << n++ << ": Farmacología" << endl;
            Materias[Total++] = "Farmacología";
        }

        if (Est[N].Car.Med.Medicina_Preventiva_Comunitaria_y_Familiar_II > 5.5 && 5.5 > Est[N].Car.Med.Inteligencia_Etica_Deontologia_Practica_Medica)
        {
            cout << n++ << ": Inteligencia Ética / Deontología" << endl;
            Materias[Total++] = "Inteligencia Ética / Deontología";
        }

        if (Est[N].Car.Med.Fisiologia_y_Biofisica > 5.5 && 5.5 > Est[N].Car.Med.Fisiopatologia)
        {
            cout << n++ << ": Fisiopatología" << endl;
            Materias[Total++] = "Fisiopatología";
        }

        if (Est[N].Car.Med.Bioquimica > 5.5 && 5.5 > Est[N].Car.Med.Nutricion)
        {
            cout << n++ << ": Nutrición" << endl;
            Materias[Total++] = "Nutrición";
        }

        if (Est[N].Car.Med.Psicologia_y_Sociologia_Gral > 5.5 && 5.5 > Est[N].Car.Med.Psicologia_Medica_General)
        {
            cout << n++ << ": Psicología Médica General" << endl;
            Materias[Total++] = "Psicología Médica General";
        }

        if (Est[N].Car.Med.Medicina_General_II > 5.5 && 5.5 > Est[N].Car.Med.Medicina_General_III)
        {
            cout << n++ << ": Medicina General III" << endl;
            Materias[Total++] = "Medicina General III";
        }

        if (Est[N].Car.Med.Psicologia_Medica_General > 5.5 && 5.5 > Est[N].Car.Med.Psicopatologia)
        {
            cout << n++ << ": Psicopatología" << endl;
            Materias[Total++] = "Psicopatología";
        }

        if (Est[N].Car.Med.Farmacologia > 5.5 && 5.5 > Est[N].Car.Med.Clinica_Obstetrica_y_Ginecologia_I)
        {
            cout << n++ << ": Clínica Obstétrica y Ginecología I" << endl;
            Materias[Total++] = "Clínica Obstétrica y Ginecología I";
        }

        if (Est[N].Car.Med.Fisiopatologia > 5.5 && 5.5 > Est[N].Car.Med.Clinica_Quirurgica_I)
        {
            cout << n++ << ": Clínica Quirúrgica I" << endl;
            Materias[Total++] = "Clínica Quirúrgica I";
        }

        if (Est[N].Car.Med.Semiologia_Medico_Quirurgica > 5.5 && 5.5 > Est[N].Car.Med.Clinica_Pediatrica_I)
        {
            cout << n++ << ": Clínica Pediátrica I" << endl;
            Materias[Total++] = "Clínica Pediátrica I";
        }

        if (Est[N].Car.Med.Anatomia_Humana > 5.5 && 5.5 > Est[N].Car.Med.Anatomia_Patologica)
        {
            cout << n++ << ": Anatomía Patológica" << endl;
            Materias[Total++] = "Anatomía Patológica";
        }

        if (Est[N].Car.Med.Medicina_Preventiva_Comunitaria_y_Familiar_III > 5.5 && 5.5 > Est[N].Car.Med.Medicina_Preventiva_Comunitaria_y_Familiar_IV)
        {
            cout << n++ << ": Medicina Preventiva, Comunitaria y Familiar IV" << endl;
            Materias[Total++] = "Medicina Preventiva, Comunitaria y Familiar IV";
        }

        if (Est[N].Car.Med.Medicina_Preventiva_Comunitaria_y_Familiar_III > 5.5 && 5.5 > Est[N].Car.Med.Medicina_General_IV)
        {
            cout << n++ << ": Medicina General IV" << endl;
            Materias[Total++] = "Medicina General IV";
        }

        if (Est[N].Car.Med.Fisiopatologia > 5.5 && 5.5 > Est[N].Car.Med.Clinica_Medica_I)
        {
            cout << n++ << ": Clínica Médica I" << endl;
            Materias[Total++] = "Clínica Médica I";
        }

        if (Est[N].Car.Med.Clinica_Quirurgica_I > 5.5 && 5.5 > Est[N].Car.Med.Clinica_Quirurgica_II)
        {
            cout << n++ << ": Clínica Quirúrgica II" << endl;
            Materias[Total++] = "Clínica Quirúrgica II";
        }

        if (Est[N].Car.Med.Medicina_General_IV > 5.5 && 5.5 > Est[N].Car.Med.Medicina_General_V)
        {
            cout << n++ << ": Medicina General V" << endl;
            Materias[Total++] = "Medicina General V";
        }

        if (Est[N].Car.Med.Clinica_Pediatrica_I > 5.5 && 5.5 > Est[N].Car.Med.Clinica_Pediatrica_II)
        {
            cout << n++ << ": Clínica Pediátrica II" << endl;
            Materias[Total++] = "Clínica Pediátrica II";
        }

        if (Est[N].Car.Med.Anatomia_Patologica > 5.5 && 5.5 > Est[N].Car.Med.Medicina_Legal)
        {
            cout << n++ << ": Medicina Legal" << endl;
            Materias[Total++] = "Medicina Legal";
        }

        if (Est[N].Car.Med.Medicina_Preventiva_Comunitaria_y_Familiar_IV > 5.5 && 5.5 > Est[N].Car.Med.Medicina_Preventiva_Comunitaria_y_Familiar_V)
        {
            cout << n++ << ": Medicina Preventiva, Comunitaria y Familiar V" << endl;
            Materias[Total++] = "Medicina Preventiva, Comunitaria y Familiar V";
        }

        if (Est[N].Car.Med.Psicopatologia > 5.5 && 5.5 > Est[N].Car.Med.Clinica_Psiquiatrica)
        {
            cout << n++ << ": Clínica Psiquiátrica" << endl;
            Materias[Total++] = "Clínica Psiquiátrica";
        }

        if (Est[N].Car.Med.Clinica_Obstetrica_y_Ginecologia_I > 5.5 && 5.5 > Est[N].Car.Med.Clinica_Obstetrica_y_Ginecologica_II)
        {
            cout << n++ << ": Clínica Obstétrica y Ginecología II" << endl;
            Materias[Total++] = "Clínica Obstétrica y Ginecología II";
        }

        if (Est[N].Car.Med.Clinica_Medica_I > 5.5 && 5.5 > Est[N].Car.Med.Clinica_Medica_II)
        {
            cout << n++ << ": Clínica Médica II" << endl;
            Materias[Total++] = "Clínica Médica II";
        }

        if (Est[N].Car.Med.Medicina_General_V > 5.5 && 5.5 > Est[N].Car.Med.Internado_Rural)
        {
            cout << n++ << ": Internado Rural" << endl;
            Materias[Total++] = "Internado Rural";
        }

        if (Est[N].Car.Med.Clinica_Medica_II > 5.5 && 5.5 > Est[N].Car.Med.Clinica_Medica_III)
        {
            cout << n++ << ": Clínica Médica III" << endl;
            Materias[Total++] = "Clínica Médica III";
        }

        if (Est[N].Car.Med.Clinica_Quirurgica_II > 5.5 && 5.5 > Est[N].Car.Med.Clinica_Quirurgica_III)
        {
            cout << n++ << ": Clínica Quirúrgica III" << endl;
            Materias[Total++] = "Clínica Quirúrgica III";
        }

        if (Est[N].Car.Med.Clinica_Obstetrica_y_Ginecologica_II > 5.5 && 5.5 > Est[N].Car.Med.Clinica_Obstetrica_III)
        {
            cout << n++ << ": Clínica Obstétrica III" << endl;
            Materias[Total++] = "Clínica Obstétrica III";
        }

        if (Est[N].Car.Med.Clinica_Pediatrica_II > 5.5 && 5.5 > Est[N].Car.Med.Clinica_Pediatrica_III)
        {
            cout << n++ << ": Clínica Pediátrica III" << endl;
            Materias[Total++] = "Clínica Pediátrica III";
        }

        if (Est[N].Car.Med.Medicina_Preventiva_Comunitaria_y_Familiar_V > 5.5 && 5.5 > Est[N].Car.Med.Trabajo_de_Grado)
        {
            cout << n++ << ": Trabajo de Grado" << endl;
            Materias[Total++] = "Trabajo de Grado";
        }

        cout << n++ << ": Salir" << endl;

        Opc_F = n;
        cout << "Ingrese :";
        Select = Opc_Menu(Opc_F);

        if (Select >= 1 && Select <= Total)
        {
            Car = Materias[Select - 1];
            Inscripcion_Est (Var, Est, Class, Mag, Prof);
        }

    } while (Select != n - 1);

    return;
}