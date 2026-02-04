#include "../../../Main/Header.h"
using namespace std;

void Hist_Der (Variables (&Var), Estudiante (&Est)[D])
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

        cout << "Derecho Civil I: " << Est[N].Car.Der.Derecho_Civil_I << endl;
        cout << "Derecho Constitucional: " << Est[N].Car.Der.Derecho_Constitucional << endl;
        cout << "Pensamiento Bolivariano: " << Est[N].Car.Der.Pensamiento_Bolivariano << endl;
        cout << "Introduccion al Derecho: " << Est[N].Car.Der.Introduccion_al_Derecho << endl;
        cout << "Economia Politica: " << Est[N].Car.Der.Economia_Politica << endl;
        cout << "Metodologia de Investigacion Juridica: " << Est[N].Car.Der.Metodos_de_Investigacion_Juridica << endl;
        cout << "Derecho Popular: " << Est[N].Car.Der.Derecho_Popular << endl;
        cout << "Derecho Romano: " << Est[N].Car.Der.Derecho_Romano << endl;
        cout << "Logica Juridica: " << Est[N].Car.Der.Logica_Juridica << endl;
        cout << "Deontologia Juridica: " << Est[N].Car.Der.Deontologia_Juridica << endl;
        cout << "Arte y Cultura: " << Est[N].Car.Der.Arte_y_Cultura << endl;
        cout << "Deporte: " << Est[N].Car.Der.Deporte << endl;

        Suma = Suma + (Est[N].Car.Der.Derecho_Civil_I + Est[N].Car.Der.Derecho_Constitucional + Est[N].Car.Der.Pensamiento_Bolivariano + Est[N].Car.Der.Introduccion_al_Derecho + Est[N].Car.Der.Economia_Politica + Est[N].Car.Der.Metodos_de_Investigacion_Juridica + Est[N].Car.Der.Derecho_Popular + Est[N].Car.Der.Derecho_Romano + Est[N].Car.Der.Logica_Juridica + Est[N].Car.Der.Deontologia_Juridica + Est[N].Car.Der.Arte_y_Cultura + Est[N].Car.Der.Deporte);
        Cont = Cont + 12;

    }

    if (Est[N].Fecha.Year >= 2)
    {

        cout << "Derecho Agrario: " << Est[N].Car.Der.Derecho_Agrario << endl;
        cout << "Derecho Ambiental: " << Est[N].Car.Der.Derecho_Ambiental << endl;
        cout << "Medicina Legal: " << Est[N].Car.Der.Medicina_Legal << endl;
        cout << "Criminologia: " << Est[N].Car.Der.Criminologia << endl;
        cout << "Derecho Penal I: " << Est[N].Car.Der.Derecho_Penal_I << endl;
        cout << "Derecho Registral: " << Est[N].Car.Der.Derecho_Registral << endl;
        cout << "Proyecto Socio Juridico Comunitario I: " << Est[N].Car.Der.Proyecto_Socio_Juridico_Comunitario_I << endl;
        cout << "Practicas Juridicas I: " << Est[N].Car.Der.Practicas_Juridicas_I << endl;
        cout << "Electiva I: " << Est[N].Car.Der.Electiva_I << endl;

        Suma = Suma + (Est[N].Car.Der.Derecho_Agrario + Est[N].Car.Der.Derecho_Ambiental + Est[N].Car.Der.Medicina_Legal + Est[N].Car.Der.Criminologia + Est[N].Car.Der.Derecho_Penal_I + Est[N].Car.Der.Derecho_Registral + Est[N].Car.Der.Proyecto_Socio_Juridico_Comunitario_I + Est[N].Car.Der.Practicas_Juridicas_I + Est[N].Car.Der.Electiva_I);
        Cont = Cont + 9;

        if (Est[N].Car.Der.Derecho_Romano >= 5.5)
        {

            cout << "Filosofia del Derecho: " << Est[N].Car.Der.Filosofia_del_Derecho << endl;
            Suma = Suma + Est[N].Car.Der.Filosofia_del_Derecho;
            Cont = Cont + 1;

        }

        if (Est[N].Car.Der.Derecho_Civil_I >= 5.5)
        {

            cout << "Derecho Civil II: " << Est[N].Car.Der.Derecho_Civil_II << endl;
            Suma = Suma + Est[N].Car.Der.Derecho_Civil_II;
            Cont = Cont + 1;

        }

    }

    if (Est[N].Fecha.Year >= 3)
    {

        cout << "Derecho Administrativo: " << Est[N].Car.Der.Derecho_Administrativo << endl;
        cout << "Derecho Laboral: " << Est[N].Car.Der.Derecho_Laboral << endl;
        cout << "Derecho Familiar: " << Est[N].Car.Der.Derecho_Familiar << endl;
        cout << "Obligaciones I: " << Est[N].Car.Der.Obligaciones_I << endl;
        cout << "Derecho Internacional Publico: " << Est[N].Car.Der.Derecho_Internacional_Publico << endl;
        cout << "Teoria General del Proceso: " << Est[N].Car.Der.Teoria_General_del_Proceso << endl;
        cout << "Derecho Tributario: " << Est[N].Car.Der.Derecho_Tributario << endl;

        Suma = Suma + (Est[N].Car.Der.Derecho_Administrativo + Est[N].Car.Der.Derecho_Laboral + Est[N].Car.Der.Derecho_Familiar + Est[N].Car.Der.Obligaciones_I + Est[N].Car.Der.Derecho_Internacional_Publico + Est[N].Car.Der.Teoria_General_del_Proceso + Est[N].Car.Der.Derecho_Tributario);
        Cont = Cont + 7;

        if (Est[N].Car.Der.Derecho_Penal_I >= 5.5)
        {

            cout << "Derecho Penal II: " << Est[N].Car.Der.Derecho_Penal_II << endl;
            Suma = Suma + Est[N].Car.Der.Derecho_Penal_II;
            Cont = Cont + 1;

        }

        if (Est[N].Car.Der.Proyecto_Socio_Juridico_Comunitario_I >= 5.5)
        {

            cout << "Proyecto Socio Juridico Comunitario II: " << Est[N].Car.Der.Proyecto_Socio_Juridico_II << endl;
            Suma = Suma + Est[N].Car.Der.Proyecto_Socio_Juridico_II;
            Cont = Cont + 1;

        }

        if (Est[N].Car.Der.Practicas_Juridicas_I >= 5.5)
        {

            cout << "Practicas Juridicas II: " << Est[N].Car.Der.Practicas_Juridicas_II << endl;
            Suma = Suma + Est[N].Car.Der.Practicas_Juridicas_II;
            Cont = Cont + 1;

        }

        if (Est[N].Car.Der.Electiva_I >= 5.5)
        {

            cout << "Electiva II: " << Est[N].Car.Der.Electiva_II << endl;
            Suma = Suma + Est[N].Car.Der.Electiva_II;
            Cont = Cont + 1;

        }

    }

    if (Est[N].Fecha.Year >= 4)
    {

        cout << "Derecho Contencioso Administrativo: " << Est[N].Car.Der.Derecho_Contencioso_Administrativo << endl;
        cout << "Derecho Procesal Penal I: " << Est[N].Car.Der.Derecho_Procesal_Penal_I << endl;
        cout << "Derecho Procesal Laboral I: " << Est[N].Car.Der.Derecho_Procesal_Laboral_I << endl;
        cout << "Derecho en Sucesiones: " << Est[N].Car.Der.Derecho_en_Sucesiones << endl;
        cout << "Derecho Internacional Privado: " << Est[N].Car.Der.Derecho_Internacional_Privado << endl;
        cout << "Derecho Procesal Civil I: " << Est[N].Car.Der.Derecho_Procesal_Civil_I << endl;
        cout << "Derecho Probatorio I: " << Est[N].Car.Der.Derecho_Probatorio_I << endl;

        Suma = Suma + (Est[N].Car.Der.Derecho_Contencioso_Administrativo + Est[N].Car.Der.Derecho_Procesal_Penal_I + Est[N].Car.Der.Derecho_Procesal_Laboral_I + Est[N].Car.Der.Derecho_en_Sucesiones + Est[N].Car.Der.Derecho_Internacional_Privado + Est[N].Car.Der.Derecho_Procesal_Civil_I + Est[N].Car.Der.Derecho_Probatorio_I);
        Cont = Cont + 7;

        if (Est[N].Car.Der.Obligaciones_I >= 5.5)
        {

            cout << "Obligaciones II: " << Est[N].Car.Der.Obligaciones_II << endl;
            Suma = Suma + Est[N].Car.Der.Obligaciones_II;
            Cont = Cont + 1;

        }

        if (Est[N].Car.Der.Proyecto_Socio_Juridico_II >= 5.5)
        {

            cout << "Proyecto Socio Juridico Comunitario III: " << Est[N].Car.Der.Proyecto_Socio_Juridico_III << endl;
            Suma = Suma + Est[N].Car.Der.Proyecto_Socio_Juridico_III;
            Cont = Cont + 1;

        }

        if (Est[N].Car.Der.Practicas_Juridicas_II >= 5.5)
        {

            cout << "Practicas Juridicas III: " << Est[N].Car.Der.Practicas_Juridicas_III << endl;
            Suma = Suma + Est[N].Car.Der.Practicas_Juridicas_III;
            Cont = Cont + 1;

        }

        if (Est[N].Car.Der.Electiva_II >= 5.5)
        {

            cout << "Electiva III: " << Est[N].Car.Der.Electiva_III << endl;
            Suma = Suma + Est[N].Car.Der.Electiva_III;
            Cont = Cont + 1;

        }

    }

    if (Est[N].Fecha.Year >= 5)
    {

        cout << "Derecho Mercantil: " << Est[N].Car.Der.Derecho_Mercantil << endl;
        cout << "Contratos y Garantias: " << Est[N].Car.Der.Contratos_y_Garantias << endl;

        Suma = Suma + (Est[N].Car.Der.Derecho_Mercantil + Est[N].Car.Der.Contratos_y_Garantias);
        Cont = Cont + 2;

        if (Est[N].Car.Der.Derecho_Procesal_Penal_I >= 5.5)
        {

            cout << "Derecho Procesal Penal II: " << Est[N].Car.Der.Derecho_Procesal_Penal_II << endl;
            Suma = Suma + Est[N].Car.Der.Derecho_Procesal_Penal_II;
            Cont = Cont + 1;

        }

        if (Est[N].Car.Der.Obligaciones_II >= 5.5)
        {

            cout << "Obligaciones III: " << Est[N].Car.Der.Obligaciones_III << endl;
            Suma = Suma + Est[N].Car.Der.Obligaciones_III;
            Cont = Cont + 1;

        }

        if (Est[N].Car.Der.Derecho_Procesal_Civil_I >= 5.5)
        {

            cout << "Derecho Procesal Civil II: " << Est[N].Car.Der.Derecho_Procesal_Civil_II << endl;
            Suma = Suma + Est[N].Car.Der.Derecho_Procesal_Civil_II;
            Cont = Cont + 1;

        }

        if (Est[N].Car.Der.Derecho_Probatorio_I >= 5.5)
        {

            cout << "Derecho Probatorio II: " << Est[N].Car.Der.Derecho_Probatorio_II << endl;
            Suma = Suma + Est[N].Car.Der.Derecho_Probatorio_II;
            Cont = Cont + 1;

        }

        if (Est[N].Car.Der.Proyecto_Socio_Juridico_III >= 5.5)
        {

            cout << "Proyecto Socio Juridico Comunitario IV: " << Est[N].Car.Der.Proyecto_Socio_Juridico_IV << endl;
            Suma = Suma + Est[N].Car.Der.Proyecto_Socio_Juridico_IV;
            Cont = Cont + 1;

        }

        if (Est[N].Car.Der.Practicas_Juridicas_III >= 5.5)
        {

            cout << "Practicas Juridicas IV: " << Est[N].Car.Der.Practicas_Juridicas_IV << endl;
            Suma = Suma + Est[N].Car.Der.Practicas_Juridicas_IV;
            Cont = Cont + 1;

        }

        if (Est[N].Car.Der.Electiva_III >= 5.5)
        {

            cout << "Electiva IV: " << Est[N].Car.Der.Electiva_IV << endl;
            Suma = Suma + Est[N].Car.Der.Electiva_IV;
            Cont = Cont + 1;

        }

    }

    if (Cont > 0)
    {
        cout << endl << YELLOW << "Promedio Academico: " << RESET << Suma / Cont << endl;
        Continue();
    }

}