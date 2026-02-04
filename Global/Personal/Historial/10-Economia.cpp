#include "../../../Main/Header.h"
using namespace std;

void Hist_Eco (Variables (&Var), Estudiante (&Est)[D])
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

    // Semestre 1
    if (Est[N].UC_Aprobadas >= 0)
    {

        cout << "Introduccion a la Economia: " << Est[N].Car.Eco.Introduccion_a_la_Economia << endl;
        cout << "Analisis Matematico I: " << Est[N].Car.Eco.Analisis_Matematico_I << endl;
        cout << "Lenguaje y Comunicacion: " << Est[N].Car.Eco.Lenguaje_y_Comunicacion << endl;
        cout << "Fundamentos del Derecho: " << Est[N].Car.Eco.Fundamentos_del_Derecho << endl;
        cout << "Metodologia de la Investigacion: " << Est[N].Car.Eco.Metodologia_de_la_Investigacion << endl;
        cout << "Deporte y Recreacion: " << Est[N].Car.Eco.Deporte_y_Recreacion << endl;
        cout << "Ingles Instrumental: " << Est[N].Car.Eco.Ingles_Instrumental << endl;

        Suma = Suma + (Est[N].Car.Eco.Introduccion_a_la_Economia + Est[N].Car.Eco.Analisis_Matematico_I + Est[N].Car.Eco.Lenguaje_y_Comunicacion + Est[N].Car.Eco.Fundamentos_del_Derecho + Est[N].Car.Eco.Metodologia_de_la_Investigacion + Est[N].Car.Eco.Deporte_y_Recreacion + Est[N].Car.Eco.Ingles_Instrumental);
        Cont = Cont + 7;

    }

    // Semestre 2
    if (Est[N].Semestre >= 2)
    {

        cout << "Sociologia: " << Est[N].Car.Eco.Sociologia << endl;
        cout << "Contabilidad General I: " << Est[N].Car.Eco.Contabilidad_General_I << endl;
        cout << "Informatica: " << Est[N].Car.Eco.Informatica << endl;
        cout << "Arte y Cultura: " << Est[N].Car.Eco.Arte_y_Cultura << endl;
        cout << "Estadistica I: " << Est[N].Car.Eco.Estadistica_I << endl;

        Suma = Suma + (Est[N].Car.Eco.Sociologia + Est[N].Car.Eco.Contabilidad_General_I + Est[N].Car.Eco.Informatica + Est[N].Car.Eco.Arte_y_Cultura + Est[N].Car.Eco.Estadistica_I);
        Cont = Cont + 5;

        if (Est[N].Car.Eco.Introduccion_a_la_Economia > 5.5)
        {

            cout << "Economia I: " << Est[N].Car.Eco.Economia_I << endl;
            Suma = Suma + Est[N].Car.Eco.Economia_I;
            Cont = Cont + 1;

        }

        if (Est[N].Car.Eco.Analisis_Matematico_I > 5.5)
        {

            cout << "Analisis Matematico II: " << Est[N].Car.Eco.Analisis_Matematico_II << endl;
            Suma = Suma + Est[N].Car.Eco.Analisis_Matematico_II;
            Cont = Cont + 1;

        }

    }

    // Semestre 3
    if (Est[N].Semestre >= 3)
    {

        cout << "Sociopolitica Productiva: " << Est[N].Car.Eco.Sociopolitica_Productiva << endl;
        cout << "Introduccion a la Administracion: " << Est[N].Car.Eco.Introduccion_a_la_Administracion << endl;
        cout << "Historia y Doctrina Economica: " << Est[N].Car.Eco.Historia_y_Doctrina_Economica << endl;

        Suma = Suma + (Est[N].Car.Eco.Sociopolitica_Productiva + Est[N].Car.Eco.Introduccion_a_la_Administracion + Est[N].Car.Eco.Historia_y_Doctrina_Economica);
        Cont = Cont + 3;

        if (Est[N].Car.Eco.Economia_I > 5.5)
        {

            cout << "Economia II: " << Est[N].Car.Eco.Economia_II << endl;
            Suma = Suma + Est[N].Car.Eco.Economia_II;
            Cont = Cont + 1;

        }

        if (Est[N].Car.Eco.Estadistica_I > 5.5)
        {

            cout << "Estadistica II: " << Est[N].Car.Eco.Estadistica_II << endl;
            Suma = Suma + Est[N].Car.Eco.Estadistica_II;
            Cont = Cont + 1;

        }

        if (Est[N].Car.Eco.Contabilidad_General_I > 5.5)
        {

            cout << "Contabilidad General II: " << Est[N].Car.Eco.Contabilidad_General_II << endl;
            Suma = Suma + Est[N].Car.Eco.Contabilidad_General_II;
            Cont = Cont + 1;

        }

        if (Est[N].Car.Eco.Informatica > 5.5)
        {

            cout << "Informatica Aplicada: " << Est[N].Car.Eco.Informatica_Aplicada << endl;
            Suma = Suma + Est[N].Car.Eco.Informatica_Aplicada;
            Cont = Cont + 1;

        }

    }

    // Semestre 4
    if (Est[N].Semestre >= 4)
    {

        cout << "Teoria e Investigacion de Mercado: " << Est[N].Car.Eco.Teoria_e_Investigacion_de_Mercado << endl;
        cout << "Seminario I: " << Est[N].Car.Eco.Seminario_I << endl;

        Suma = Suma + (Est[N].Car.Eco.Teoria_e_Investigacion_de_Mercado + Est[N].Car.Eco.Seminario_I);
        Cont = Cont + 2;

        if (Est[N].Car.Eco.Economia_II > 5.5)
        {

            cout << "Macroeconomia I: " << Est[N].Car.Eco.Macroeconomia_I << endl;
            cout << "Microeconomia I: " << Est[N].Car.Eco.Microeconomia_I << endl;
            Suma = Suma + Est[N].Car.Eco.Macroeconomia_I + Est[N].Car.Eco.Microeconomia_I;
            Cont = Cont + 2;

        }

        if (Est[N].Car.Eco.Estadistica_I > 5.5)
        {

            cout << "Analisis Financiero: " << Est[N].Car.Eco.Analisis_Financiero << endl;
            Suma = Suma + Est[N].Car.Eco.Analisis_Financiero;
            Cont = Cont + 1;

        }

        if (Est[N].Car.Eco.Analisis_Matematico_II > 5.5)
        {

            cout << "Matematica III: " << Est[N].Car.Eco.Matematica_III << endl;
            Suma = Suma + Est[N].Car.Eco.Matematica_III;
            Cont = Cont + 1;

        }

        if (Est[N].Car.Eco.Estadistica_II > 5.5)
        {

            cout << "Estadistica Aplicada: " << Est[N].Car.Eco.Estadistica_Aplicada << endl;
            Suma = Suma + Est[N].Car.Eco.Estadistica_Aplicada;
            Cont = Cont + 1;

        }

    }

    // Semestre 5
    if (Est[N].Semestre >= 5)
    {

        cout << "Contabilidad Social: " << Est[N].Car.Eco.Contabilidad_Social << endl;
        cout << "Desarrollo Economico: " << Est[N].Car.Eco.Desarrollo_Economico << endl;
        cout << "Analisis Economico Regional: " << Est[N].Car.Eco.Analisis_Economico_Regional << endl;

        Suma = Suma + (Est[N].Car.Eco.Contabilidad_Social + Est[N].Car.Eco.Desarrollo_Economico + Est[N].Car.Eco.Analisis_Economico_Regional);
        Cont = Cont + 3;

        if (Est[N].Car.Eco.Macroeconomia_I > 5.5)
        {

            cout << "Macroeconomia II: " << Est[N].Car.Eco.Macroeconomia_II << endl;
            Suma = Suma + Est[N].Car.Eco.Macroeconomia_II;
            Cont = Cont + 1;

        }

        if (Est[N].Car.Eco.Microeconomia_I > 5.5)
        {

            cout << "Microeconomia II: " << Est[N].Car.Eco.Microeconomia_II << endl;
            Suma = Suma + Est[N].Car.Eco.Microeconomia_II;
            Cont = Cont + 1;

        }

        if (Est[N].Car.Eco.Analisis_Matematico_II > 5.5)
        {

            cout << "Matematica Financiera: " << Est[N].Car.Eco.Matematica_Financiera << endl;
            Suma = Suma + Est[N].Car.Eco.Matematica_Financiera;
            Cont = Cont + 1;

        }

    }

    // Semestre 6
    if (Est[N].Semestre >= 6)
    {

        cout << "Economia Politica: " << Est[N].Car.Eco.Economia_Politica << endl;
        cout << "Formulacion y Evaluacion de Proyectos: " << Est[N].Car.Eco.Formulacion_y_Evaluacion_de_Proyectos << endl;
        cout << "Investigacion de Operaciones: " << Est[N].Car.Eco.Investigacion_de_Operaciones << endl;
        cout << "Teoria y Politica Fiscal: " << Est[N].Car.Eco.Teoria_y_Politica_Fiscal << endl;
        cout << "Economia y Politica Agricola: " << Est[N].Car.Eco.Economia_y_Politica_Agricola << endl;
        cout << "Economia Industrial: " << Est[N].Car.Eco.Economia_Industrial << endl;
        cout << "Economia Minera y Petrolera: " << Est[N].Car.Eco.Economia_Minera_y_Petrolera << endl;
        cout << "Economia Ambiente y Sociedad: " << Est[N].Car.Eco.Economia_Ambiente_y_Sociedad << endl;

        Suma = Suma + (Est[N].Car.Eco.Economia_Politica + Est[N].Car.Eco.Formulacion_y_Evaluacion_de_Proyectos + Est[N].Car.Eco.Investigacion_de_Operaciones + Est[N].Car.Eco.Teoria_y_Politica_Fiscal + Est[N].Car.Eco.Economia_y_Politica_Agricola + Est[N].Car.Eco.Economia_Industrial + Est[N].Car.Eco.Economia_Minera_y_Petrolera + Est[N].Car.Eco.Economia_Ambiente_y_Sociedad);
        Cont = Cont + 8;

        if (Est[N].Car.Eco.Seminario_I > 5.5)
        {

            cout << "Seminario II: " << Est[N].Car.Eco.Seminario_II << endl;
            Suma = Suma + Est[N].Car.Eco.Seminario_II;
            Cont = Cont + 1;

        }

    }

    // Semestre 7
    if (Est[N].Semestre >= 7)
    {

        cout << "Econometria: " << Est[N].Car.Eco.Econometria << endl;
        cout << "Teoria y Politica Monetaria: " << Est[N].Car.Eco.Teoria_y_Politica_Monetaria << endl;
        cout << "Planificacion: " << Est[N].Car.Eco.Planificacion << endl;
        cout << "Economia Internacional: " << Est[N].Car.Eco.Economia_Internacional << endl;
        cout << "Formulacion y Evaluacion de Proyectos Agricolas: " << Est[N].Car.Eco.Formulacion_y_Evaluacion_de_Proyectos_Agricolas << endl;
        cout << "Gestion Comunitaria: " << Est[N].Car.Eco.Gestion_Comunitaria << endl;
        cout << "Contabilidad de Costos: " << Est[N].Car.Eco.Contabilidad_de_Costos << endl;
        cout << "Presupuesto: " << Est[N].Car.Eco.Presupuesto << endl;

        Suma = Suma + (Est[N].Car.Eco.Econometria + Est[N].Car.Eco.Teoria_y_Politica_Monetaria + Est[N].Car.Eco.Planificacion + Est[N].Car.Eco.Economia_Internacional + Est[N].Car.Eco.Formulacion_y_Evaluacion_de_Proyectos_Agricolas + Est[N].Car.Eco.Gestion_Comunitaria + Est[N].Car.Eco.Contabilidad_de_Costos + Est[N].Car.Eco.Presupuesto);
        Cont = Cont + 8;

        if (Est[N].Car.Eco.Seminario_II > 5.5)
        {

            cout << "Seminario III: " << Est[N].Car.Eco.Seminario_III << endl;
            Suma = Suma + Est[N].Car.Eco.Seminario_III;
            Cont = Cont + 1;

        }

    }

    // Semestre 8
    if (Est[N].Semestre >= 8)
    {

        cout << "Finanzas Internacionales: " << Est[N].Car.Eco.Finanzas_Internacionales << endl;
        cout << "Estructura Economica Mundial: " << Est[N].Car.Eco.Estructura_Economica_Mundial << endl;
        cout << "Gestion de Riesgo: " << Est[N].Car.Eco.Gestion_de_Riesgo << endl;
        cout << "Economia y Crisis: " << Est[N].Car.Eco.Economia_y_Crisis << endl;

        Suma = Suma + (Est[N].Car.Eco.Finanzas_Internacionales + Est[N].Car.Eco.Estructura_Economica_Mundial + Est[N].Car.Eco.Gestion_de_Riesgo + Est[N].Car.Eco.Economia_y_Crisis);
        Cont = Cont + 4;

        if (Est[N].UC_Aprobadas >= 206 && Est[N].Car.Eco.Seminario_II > 5.5)
        {

            cout << "Trabajo Final de Grado: " << Est[N].Car.Eco.Trabajo_Final_de_Grado << endl;
            Suma = Suma + Est[N].Car.Eco.Trabajo_Final_de_Grado;
            Cont = Cont + 1;

        }

    }

    if (Cont > 0)
    {
        cout << endl << YELLOW << "Promedio Academico: " << RESET << Suma / Cont << endl;
        Continue();
    }

}