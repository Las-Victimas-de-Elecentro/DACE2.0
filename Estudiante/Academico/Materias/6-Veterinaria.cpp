#include "../../../Main/Header.h"
using namespace std;

void Vet_Est (Variables (&Var), Estudiante (&Est)[D], Clase (&Class)[D], Clase_Magistral (&Mag)[D], Profesor (&Prof)[D])
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
            cout << n++ << ": Computación" << endl;
            Materias[Total++] = "Computación";
            cout << n++ << ": Educación Física y Deportes" << endl;
            Materias[Total++] = "Educación Física y Deportes";
            cout << n++ << ": Análisis del Perfil Profesional" << endl;
            Materias[Total++] = "Análisis del Perfil Profesional";
            cout << n++ << ": Ecología Agrícola" << endl;
            Materias[Total++] = "Ecología Agrícola";
            cout << n++ << ": Inglés Instrumental" << endl;
            Materias[Total++] = "Inglés Instrumental";
            cout << n++ << ": Anatomía de los Animales Domésticos" << endl;
            Materias[Total++] = "Anatomía de los Animales Domésticos";
            cout << n++ << ": Faenas Pecuarias" << endl;
            Materias[Total++] = "Faenas Pecuarias";
            cout << n++ << ": Bioquímica" << endl;
            Materias[Total++] = "Bioquímica";
            cout << n++ << ": Zoología" << endl;
            Materias[Total++] = "Zoología";
        }

        if (Est[N].UC_Aprobadas > 0 && 5.5 > Est[N].Car.Vet.Computacion)
        {
            cout << n++ << ": Computación" << endl;
            Materias[Total++] = "Computación";
        }

        if (Est[N].UC_Aprobadas > 0 && 5.5 > Est[N].Car.Vet.Educacion_Fisica_y_Deportes)
        {
            cout << n++ << ": Educación Física y Deportes" << endl;
            Materias[Total++] = "Educación Física y Deportes";
        }

        if (Est[N].UC_Aprobadas > 0 && 5.5 > Est[N].Car.Vet.Analisis_del_Perfil_Profesional)
        {
            cout << n++ << ": Análisis del Perfil Profesional" << endl;
            Materias[Total++] = "Análisis del Perfil Profesional";
        }

        if (Est[N].UC_Aprobadas > 0 && 5.5 > Est[N].Car.Vet.Ecologia_Agricola)
        {
            cout << n++ << ": Ecología Agrícola" << endl;
            Materias[Total++] = "Ecología Agrícola";
        }

        if (Est[N].UC_Aprobadas > 0 && 5.5 > Est[N].Car.Vet.Ingles_Instrumental)
        {
            cout << n++ << ": Inglés Instrumental" << endl;
            Materias[Total++] = "Inglés Instrumental";
        }

        if (Est[N].UC_Aprobadas > 0 && 5.5 > Est[N].Car.Vet.Anatomia_de_los_Animales_Domesticos)
        {
            cout << n++ << ": Anatomía de los Animales Domésticos" << endl;
            Materias[Total++] = "Anatomía de los Animales Domésticos";
        }

        if (Est[N].UC_Aprobadas > 0 && 5.5 > Est[N].Car.Vet.Faenas_Pecuarias)
        {
            cout << n++ << ": Faenas Pecuarias" << endl;
            Materias[Total++] = "Faenas Pecuarias";
        }

        if (Est[N].UC_Aprobadas > 0 && 5.5 > Est[N].Car.Vet.Bioquimica)
        {
            cout << n++ << ": Bioquímica" << endl;
            Materias[Total++] = "Bioquímica";
        }

        if (Est[N].UC_Aprobadas > 0 && 5.5 > Est[N].Car.Vet.Zoologia)
        {
            cout << n++ << ": Zoología" << endl;
            Materias[Total++] = "Zoología";
        }

        if (Est[N].Fecha.Year >= 2)
        {
            if (5.5 > Est[N].Car.Vet.Histologia_Veterinaria)
            {
                cout << n++ << ": Histología Veterinaria" << endl;
                Materias[Total++] = "Histología Veterinaria";
            }
            if (5.5 > Est[N].Car.Vet.Microbiologia)
            {
                cout << n++ << ": Microbiología" << endl;
                Materias[Total++] = "Microbiología";
            }
            if (5.5 > Est[N].Car.Vet.Genetica)
            {
                cout << n++ << ": Genética" << endl;
                Materias[Total++] = "Genética";
            }
            if (5.5 > Est[N].Car.Vet.Zootecnia)
            {
                cout << n++ << ": Zootecnia" << endl;
                Materias[Total++] = "Zootecnia";
            }
            if (5.5 > Est[N].Car.Vet.Bioestadistica)
            {
                cout << n++ << ": Bioestadística" << endl;
                Materias[Total++] = "Bioestadística";
            }
            if (5.5 > Est[N].Car.Vet.Arte_y_Cultura)
            {
                cout << n++ << ": Arte y Cultura" << endl;
                Materias[Total++] = "Arte y Cultura";
            }
            if (5.5 > Est[N].Car.Vet.Fisiologia_Animal)
            {
                cout << n++ << ": Fisiología Animal" << endl;
                Materias[Total++] = "Fisiología Animal";
            }
        }

        if (Est[N].Fecha.Year >= 3)
        {
            if (5.5 > Est[N].Car.Vet.Patologia_Clinica_Veterinaria)
            {
                cout << n++ << ": Patología Clínica Veterinaria" << endl;
                Materias[Total++] = "Patología Clínica Veterinaria";
            }
            if (5.5 > Est[N].Car.Vet.Reproduccion_Animal)
            {
                cout << n++ << ": Reproducción Animal" << endl;
                Materias[Total++] = "Reproducción Animal";
            }
            if (5.5 > Est[N].Car.Vet.Farmacologia_Veterinaria)
            {
                cout << n++ << ": Farmacología Veterinaria" << endl;
                Materias[Total++] = "Farmacología Veterinaria";
            }
            if (5.5 > Est[N].Car.Vet.Semiologia_Veterinaria)
            {
                cout << n++ << ": Semiología Veterinaria" << endl;
                Materias[Total++] = "Semiología Veterinaria";
            }
            if (5.5 > Est[N].Car.Vet.Nutricion_y_Alimentacion_Animal)
            {
                cout << n++ << ": Nutrición y Alimentación Animal" << endl;
                Materias[Total++] = "Nutrición y Alimentación Animal";
            }
            if (5.5 > Est[N].Car.Vet.Parasitologia_Veterinaria)
            {
                cout << n++ << ": Parasitología Veterinaria" << endl;
                Materias[Total++] = "Parasitología Veterinaria";
            }
            if (5.5 > Est[N].Car.Vet.Anatomia_Patologica_Veterinaria)
            {
                cout << n++ << ": Anatomía Patológica Veterinaria" << endl;
                Materias[Total++] = "Anatomía Patológica Veterinaria";
            }
        }

        if (Est[N].Fecha.Year >= 4)
        {
            if (5.5 > Est[N].Car.Vet.Investigacion_Veterinaria_I)
            {
                cout << n++ << ": Investigación Veterinaria I" << endl;
                Materias[Total++] = "Investigación Veterinaria I";
            }
            if (5.5 > Est[N].Car.Vet.Medicina_de_Caninos_y_Felinos)
            {
                cout << n++ << ": Medicina de Caninos y Felinos" << endl;
                Materias[Total++] = "Medicina de Caninos y Felinos";
            }
            if (5.5 > Est[N].Car.Vet.Gerencia_de_Servicio_Veterinaria)
            {
                cout << n++ << ": Gerencia de Servicio Veterinaria" << endl;
                Materias[Total++] = "Gerencia de Servicio Veterinaria";
            }
            if (5.5 > Est[N].Car.Vet.Mejoramiento_Animal)
            {
                cout << n++ << ": Mejoramiento Animal" << endl;
                Materias[Total++] = "Mejoramiento Animal";
            }
            if (5.5 > Est[N].Car.Vet.Medicina_de_Rumiantes_y_Equino)
            {
                cout << n++ << ": Medicina de Rumiantes y Equino" << endl;
                Materias[Total++] = "Medicina de Rumiantes y Equino";
            }
            if (5.5 > Est[N].Car.Vet.Cirugia_Veterinaria)
            {
                cout << n++ << ": Cirugía Veterinaria" << endl;
                Materias[Total++] = "Cirugía Veterinaria";
            }
            if (5.5 > Est[N].Car.Vet.Saneamiento_Ambiental)
            {
                cout << n++ << ": Saneamiento Ambiental" << endl;
                Materias[Total++] = "Saneamiento Ambiental";
            }
            if (5.5 > Est[N].Car.Vet.Extension_Profesional_I)
            {
                cout << n++ << ": Extensión Profesional I" << endl;
                Materias[Total++] = "Extensión Profesional I";
            }
        }

        if (Est[N].Fecha.Year >= 5)
        {
            if (5.5 > Est[N].Car.Vet.Medicina_Preventiva_y_Clinica_Hospitalaria)
            {
                cout << n++ << ": Medicina Preventiva y Clínica Hospitalaria" << endl;
                Materias[Total++] = "Medicina Preventiva y Clínica Hospitalaria";
            }
            if (5.5 > Est[N].Car.Vet.Proceso_de_Produccion_Ind_e_Inp_San)
            {
                cout << n++ << ": Proceso de Producción Industrial e Inp San" << endl;
                Materias[Total++] = "Proceso de Producción Industrial e Inp San";
            }
            if (5.5 > Est[N].Car.Vet.Derecho_Constitucional)
            {
                cout << n++ << ": Derecho Constitucional" << endl;
                Materias[Total++] = "Derecho Constitucional";
            }
            if (5.5 > Est[N].Car.Vet.Medicina_de_Suinos_y_Aves)
            {
                cout << n++ << ": Medicina de Suinos y Aves" << endl;
                Materias[Total++] = "Medicina de Suinos y Aves";
            }
            if (5.5 > Est[N].Car.Vet.Medicina_Conejo_Peces_Especies_Silvestres_Laboratorio)
            {
                cout << n++ << ": Medicina Conejo, Peces, Especies Silvestres Laboratorio" << endl;
                Materias[Total++] = "Medicina Conejo, Peces, Especies Silvestres Laboratorio";
            }
            if (5.5 > Est[N].Car.Vet.Legislacion_y_Deontologia_Veterinaria)
            {
                cout << n++ << ": Legislación y Deontología Veterinaria" << endl;
                Materias[Total++] = "Legislación y Deontología Veterinaria";
            }
            if (5.5 > Est[N].Car.Vet.Servicio_Comunitario)
            {
                cout << n++ << ": Servicio Comunitario" << endl;
                Materias[Total++] = "Servicio Comunitario";
            }
            if (5.5 > Est[N].Car.Vet.Pasantias_Profesionales)
            {
                cout << n++ << ": Pasantías Profesionales" << endl;
                Materias[Total++] = "Pasantías Profesionales";
            }
            if (5.5 > Est[N].Car.Vet.Epidemiologia_General)
            {
                cout << n++ << ": Epidemiología General" << endl;
                Materias[Total++] = "Epidemiología General";
            }
            if (Est[N].Car.Vet.Investigacion_Veterinaria_I > 5.5 && 5.5 > Est[N].Car.Vet.Investigacion_Veterinaria_II)
            {
                cout << n++ << ": Investigación Veterinaria II" << endl;
                Materias[Total++] = "Investigación Veterinaria II";
            }
            if (Est[N].Car.Vet.Extension_Profesional_I > 5.5 && 5.5 > Est[N].Car.Vet.Extension_Profesional_II)
            {
                cout << n++ << ": Extensión Profesional II" << endl;
                Materias[Total++] = "Extensión Profesional II";
            }
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