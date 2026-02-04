#include "../../../Main/Header.h"
using namespace std;

void Hist_Vet (Variables (&Var), Estudiante (&Est)[D])
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

        cout << "Computacion: " << Est[N].Car.Vet.Computacion << endl;
        cout << "Educacion Fisica y Deportes: " << Est[N].Car.Vet.Educacion_Fisica_y_Deportes << endl;
        cout << "Analisis del Perfil Profesional: " << Est[N].Car.Vet.Analisis_del_Perfil_Profesional << endl;
        cout << "Ecologia Agricola: " << Est[N].Car.Vet.Ecologia_Agricola << endl;
        cout << "Ingles Instrumental: " << Est[N].Car.Vet.Ingles_Instrumental << endl;
        cout << "Anatomia de los Animales Domesticos: " << Est[N].Car.Vet.Anatomia_de_los_Animales_Domesticos << endl;
        cout << "Faenas Pecuarias: " << Est[N].Car.Vet.Faenas_Pecuarias << endl;
        cout << "Bioquimica: " << Est[N].Car.Vet.Bioquimica << endl;
        cout << "Zoologia: " << Est[N].Car.Vet.Zoologia << endl;

        Suma = Suma + (Est[N].Car.Vet.Computacion + Est[N].Car.Vet.Educacion_Fisica_y_Deportes + Est[N].Car.Vet.Analisis_del_Perfil_Profesional + Est[N].Car.Vet.Ecologia_Agricola + Est[N].Car.Vet.Ingles_Instrumental + Est[N].Car.Vet.Anatomia_de_los_Animales_Domesticos + Est[N].Car.Vet.Faenas_Pecuarias + Est[N].Car.Vet.Bioquimica + Est[N].Car.Vet.Zoologia);
        Cont = Cont + 9;

    }

    if (Est[N].Fecha.Year >= 2)
    {

        cout << "Histologia Veterinaria: " << Est[N].Car.Vet.Histologia_Veterinaria << endl;
        cout << "Microbiologia: " << Est[N].Car.Vet.Microbiologia << endl;
        cout << "Genetica: " << Est[N].Car.Vet.Genetica << endl;
        cout << "Zootecnia: " << Est[N].Car.Vet.Zootecnia << endl;
        cout << "Bioestadistica: " << Est[N].Car.Vet.Bioestadistica << endl;
        cout << "Arte y Cultura: " << Est[N].Car.Vet.Arte_y_Cultura << endl;
        cout << "Fisiologia Animal: " << Est[N].Car.Vet.Fisiologia_Animal << endl;

        Suma = Suma + (Est[N].Car.Vet.Histologia_Veterinaria + Est[N].Car.Vet.Microbiologia + Est[N].Car.Vet.Genetica + Est[N].Car.Vet.Zootecnia + Est[N].Car.Vet.Bioestadistica + Est[N].Car.Vet.Arte_y_Cultura + Est[N].Car.Vet.Fisiologia_Animal);
        Cont = Cont + 7;

    }

    if (Est[N].Fecha.Year >= 3)
    {

        cout << "Patologia Clinica Veterinaria: " << Est[N].Car.Vet.Patologia_Clinica_Veterinaria << endl;
        cout << "Reproduccion Animal: " << Est[N].Car.Vet.Reproduccion_Animal << endl;
        cout << "Farmacologia Veterinaria: " << Est[N].Car.Vet.Farmacologia_Veterinaria << endl;
        cout << "Semiologia Veterinaria: " << Est[N].Car.Vet.Semiologia_Veterinaria << endl;
        cout << "Nutricion y Alimentacion Animal: " << Est[N].Car.Vet.Nutricion_y_Alimentacion_Animal << endl;
        cout << "Parasitologia Veterinaria: " << Est[N].Car.Vet.Parasitologia_Veterinaria << endl;
        cout << "Anatomia Patologica Veterinaria: " << Est[N].Car.Vet.Anatomia_Patologica_Veterinaria << endl;

        Suma = Suma + (Est[N].Car.Vet.Patologia_Clinica_Veterinaria + Est[N].Car.Vet.Reproduccion_Animal + Est[N].Car.Vet.Farmacologia_Veterinaria + Est[N].Car.Vet.Semiologia_Veterinaria + Est[N].Car.Vet.Nutricion_y_Alimentacion_Animal + Est[N].Car.Vet.Parasitologia_Veterinaria + Est[N].Car.Vet.Anatomia_Patologica_Veterinaria);
        Cont = Cont + 7;

    }

    if (Est[N].Fecha.Year >= 4)
    {

        cout << "Investigacion Veterinaria I: " << Est[N].Car.Vet.Investigacion_Veterinaria_I << endl;
        cout << "Medicina de Caninos y Felinos: " << Est[N].Car.Vet.Medicina_de_Caninos_y_Felinos << endl;
        cout << "Gerencia de Servicio Veterinaria: " << Est[N].Car.Vet.Gerencia_de_Servicio_Veterinaria << endl;
        cout << "Mejoramiento Animal: " << Est[N].Car.Vet.Mejoramiento_Animal << endl;
        cout << "Medicina de Rumiantes y Equino: " << Est[N].Car.Vet.Medicina_de_Rumiantes_y_Equino << endl;
        cout << "Cirugia Veterinaria: " << Est[N].Car.Vet.Cirugia_Veterinaria << endl;
        cout << "Saneamiento Ambiental: " << Est[N].Car.Vet.Saneamiento_Ambiental << endl;
        cout << "Extension Profesional I: " << Est[N].Car.Vet.Extension_Profesional_I << endl;

        Suma = Suma + (Est[N].Car.Vet.Investigacion_Veterinaria_I + Est[N].Car.Vet.Medicina_de_Caninos_y_Felinos + Est[N].Car.Vet.Gerencia_de_Servicio_Veterinaria + Est[N].Car.Vet.Mejoramiento_Animal + Est[N].Car.Vet.Medicina_de_Rumiantes_y_Equino + Est[N].Car.Vet.Cirugia_Veterinaria + Est[N].Car.Vet.Saneamiento_Ambiental + Est[N].Car.Vet.Extension_Profesional_I);
        Cont = Cont + 8;

    }

    if (Est[N].Fecha.Year >= 5)
    {

        cout << "Medicina Preventiva y Clinica Hospitalaria: " << Est[N].Car.Vet.Medicina_Preventiva_y_Clinica_Hospitalaria << endl;
        cout << "Proceso de Produccion Industrial e Inp San: " << Est[N].Car.Vet.Proceso_de_Produccion_Ind_e_Inp_San << endl;
        cout << "Derecho Constitucional: " << Est[N].Car.Vet.Derecho_Constitucional << endl;
        cout << "Medicina de Suinos y Aves: " << Est[N].Car.Vet.Medicina_de_Suinos_y_Aves << endl;
        cout << "Medicina Conejo, Peces, Especies Silvestres Laboratorio: " << Est[N].Car.Vet.Medicina_Conejo_Peces_Especies_Silvestres_Laboratorio << endl;
        cout << "Legislacion y Deontologia Veterinaria: " << Est[N].Car.Vet.Legislacion_y_Deontologia_Veterinaria << endl;
        cout << "Servicio Comunitario: " << Est[N].Car.Vet.Servicio_Comunitario << endl;
        cout << "Pasantias Profesionales: " << Est[N].Car.Vet.Pasantias_Profesionales << endl;
        cout << "Epidemiologia General: " << Est[N].Car.Vet.Epidemiologia_General << endl;

        Suma = Suma + (Est[N].Car.Vet.Medicina_Preventiva_y_Clinica_Hospitalaria + Est[N].Car.Vet.Proceso_de_Produccion_Ind_e_Inp_San + Est[N].Car.Vet.Derecho_Constitucional + Est[N].Car.Vet.Medicina_de_Suinos_y_Aves + Est[N].Car.Vet.Medicina_Conejo_Peces_Especies_Silvestres_Laboratorio + Est[N].Car.Vet.Legislacion_y_Deontologia_Veterinaria + Est[N].Car.Vet.Servicio_Comunitario + Est[N].Car.Vet.Pasantias_Profesionales + Est[N].Car.Vet.Epidemiologia_General);
        Cont = Cont + 9;

        if (Est[N].Car.Vet.Investigacion_Veterinaria_I >= 5.5)
        {

            cout << "Investigacion Veterinaria II: " << Est[N].Car.Vet.Investigacion_Veterinaria_II << endl;
            Suma = Suma + Est[N].Car.Vet.Investigacion_Veterinaria_II;
            Cont = Cont + 1;

        }

        if (Est[N].Car.Vet.Extension_Profesional_I >= 5.5)
        {

            cout << "Extension Profesional II: " << Est[N].Car.Vet.Extension_Profesional_II << endl;
            Suma = Suma + Est[N].Car.Vet.Extension_Profesional_II;
            Cont = Cont + 1;

        }

    }

    if (Cont > 0)
    {
        cout << endl << YELLOW << "Promedio Academico: " << RESET << Suma / Cont << endl;
        Continue();
    }

}