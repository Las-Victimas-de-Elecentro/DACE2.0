#include "../../../Main/Header.h"
using namespace std;

void Eco_Est (Variables (&Var), Estudiante (&Est)[D], Clase (&Class)[D], Clase_Magistral (&Mag)[D], Profesor (&Prof)[D])
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

        cout << CYAN << "Seleccione la materia que desea inscribir:" << endl;

        if (Est[N].UC_Aprobadas == 0)
        {
            cout << n++ << ": Introducción a la Economía" << endl;
            Materias[Total++] = "Introducción a la Economía";
            cout << n++ << ": Análisis Matemático I" << endl;
            Materias[Total++] = "Análisis Matemático I";
            cout << n++ << ": Lenguaje y Comunicación" << endl;
            Materias[Total++] = "Lenguaje y Comunicación";
            cout << n++ << ": Fundamentos del Derecho" << endl;
            Materias[Total++] = "Fundamentos del Derecho";
            cout << n++ << ": Metodología de la Investigación" << endl;
            Materias[Total++] = "Metodología de la Investigación";
            cout << n++ << ": Deporte y Recreación" << endl;
            Materias[Total++] = "Deporte y Recreación";
            cout << n++ << ": Inglés Instrumental" << endl;
            Materias[Total++] = "Inglés Instrumental";
        }
        else
        {
            if (5.5 > Est[N].Car.Eco.Introduccion_a_la_Economia) { cout << n++ << ": Introducción a la Economía" << endl; Materias[Total++] = "Introducción a la Economía"; }
            if (5.5 > Est[N].Car.Eco.Analisis_Matematico_I) { cout << n++ << ": Análisis Matemático I" << endl; Materias[Total++] = "Análisis Matemático I"; }
            if (5.5 > Est[N].Car.Eco.Lenguaje_y_Comunicacion) { cout << n++ << ": Lenguaje y Comunicación" << endl; Materias[Total++] = "Lenguaje y Comunicación"; }
            if (5.5 > Est[N].Car.Eco.Fundamentos_del_Derecho) { cout << n++ << ": Fundamentos del Derecho" << endl; Materias[Total++] = "Fundamentos del Derecho"; }
            if (5.5 > Est[N].Car.Eco.Metodologia_de_la_Investigacion) { cout << n++ << ": Metodología de la Investigación" << endl; Materias[Total++] = "Metodología de la Investigación"; }
            if (5.5 > Est[N].Car.Eco.Deporte_y_Recreacion) { cout << n++ << ": Deporte y Recreación" << endl; Materias[Total++] = "Deporte y Recreación"; }
            if (5.5 > Est[N].Car.Eco.Ingles_Instrumental) { cout << n++ << ": Inglés Instrumental" << endl; Materias[Total++] = "Inglés Instrumental"; }
        }

        if (Est[N].Semestre >= 2)
        {
            if (Est[N].Car.Eco.Introduccion_a_la_Economia > 5.5 && 5.5 > Est[N].Car.Eco.Economia_I)
            { cout << n++ << ": Economía I" << endl; Materias[Total++] = "Economía I"; }
            
            if (Est[N].Car.Eco.Analisis_Matematico_I > 5.5 && 5.5 > Est[N].Car.Eco.Analisis_Matematico_II)
            { cout << n++ << ": Análisis Matemático II" << endl; Materias[Total++] = "Análisis Matemático II"; }

            if (5.5 > Est[N].Car.Eco.Sociologia) { cout << n++ << ": Sociología" << endl; Materias[Total++] = "Sociología"; }
            if (5.5 > Est[N].Car.Eco.Contabilidad_General_I) { cout << n++ << ": Contabilidad General I" << endl; Materias[Total++] = "Contabilidad General I"; }
            if (5.5 > Est[N].Car.Eco.Informatica) { cout << n++ << ": Informática" << endl; Materias[Total++] = "Informática"; }
            if (5.5 > Est[N].Car.Eco.Arte_y_Cultura) { cout << n++ << ": Arte y Cultura" << endl; Materias[Total++] = "Arte y Cultura"; }
            if (5.5 > Est[N].Car.Eco.Estadistica_I) { cout << n++ << ": Estadística I" << endl; Materias[Total++] = "Estadística I"; }
        }

        if (Est[N].Semestre >= 3)
        {
            if (Est[N].Car.Eco.Economia_I > 5.5 && 5.5 > Est[N].Car.Eco.Economia_II)
            { cout << n++ << ": Economía II" << endl; Materias[Total++] = "Economía II"; }

            if (Est[N].Car.Eco.Estadistica_I > 5.5 && 5.5 > Est[N].Car.Eco.Estadistica_II)
            { cout << n++ << ": Estadística II" << endl; Materias[Total++] = "Estadística II"; }

            if (Est[N].Car.Eco.Contabilidad_General_I > 5.5 && 5.5 > Est[N].Car.Eco.Contabilidad_General_II)
            { cout << n++ << ": Contabilidad General II" << endl; Materias[Total++] = "Contabilidad General II"; }

            if (Est[N].Car.Eco.Informatica > 5.5 && 5.5 > Est[N].Car.Eco.Informatica_Aplicada)
            { cout << n++ << ": Informática Aplicada" << endl; Materias[Total++] = "Informática Aplicada"; }

            if (5.5 > Est[N].Car.Eco.Sociopolitica_Productiva) { cout << n++ << ": Sociopolitica Productiva" << endl; Materias[Total++] = "Sociopolitica Productiva"; }
            if (5.5 > Est[N].Car.Eco.Introduccion_a_la_Administracion) { cout << n++ << ": Introducción a la Administración" << endl; Materias[Total++] = "Introducción a la Administración"; }
            if (5.5 > Est[N].Car.Eco.Historia_y_Doctrina_Economica) { cout << n++ << ": Historia y Doctrina Económica" << endl; Materias[Total++] = "Historia y Doctrina Económica"; }
        }

        if (Est[N].Semestre >= 4)
        {
            if (Est[N].Car.Eco.Economia_II > 5.5 && 5.5 > Est[N].Car.Eco.Macroeconomia_I)
            { cout << n++ << ": Macroeconomía I" << endl; Materias[Total++] = "Macroeconomía I"; }

            if (Est[N].Car.Eco.Economia_II > 5.5 && 5.5 > Est[N].Car.Eco.Microeconomia_I)
            { cout << n++ << ": Microeconomía I" << endl; Materias[Total++] = "Microeconomía I"; }

            if (Est[N].Car.Eco.Estadistica_I > 5.5 && 5.5 > Est[N].Car.Eco.Analisis_Financiero)
            { cout << n++ << ": Análisis Financiero" << endl; Materias[Total++] = "Análisis Financiero"; }

            if (Est[N].Car.Eco.Analisis_Matematico_II > 5.5 && 5.5 > Est[N].Car.Eco.Matematica_III)
            { cout << n++ << ": Matemática III" << endl; Materias[Total++] = "Matemática III"; }

            if (Est[N].Car.Eco.Estadistica_II > 5.5 && 5.5 > Est[N].Car.Eco.Estadistica_Aplicada)
            { cout << n++ << ": Estadística Aplicada" << endl; Materias[Total++] = "Estadística Aplicada"; }

            if (5.5 > Est[N].Car.Eco.Teoria_e_Investigacion_de_Mercado) { cout << n++ << ": Teoría e Investigación de Mercado" << endl; Materias[Total++] = "Teoría e Investigación de Mercado"; }
            if (5.5 > Est[N].Car.Eco.Seminario_I) { cout << n++ << ": Seminario I" << endl; Materias[Total++] = "Seminario I"; }
        }

        if (Est[N].Semestre >= 5)
        {
            if (Est[N].Car.Eco.Macroeconomia_I > 5.5 && 5.5 > Est[N].Car.Eco.Macroeconomia_II)
            { cout << n++ << ": Macroeconomía II" << endl; Materias[Total++] = "Macroeconomía II"; }

            if (Est[N].Car.Eco.Microeconomia_I > 5.5 && 5.5 > Est[N].Car.Eco.Microeconomia_II)
            { cout << n++ << ": Microeconomía II" << endl; Materias[Total++] = "Microeconomía II"; }

            if (Est[N].Car.Eco.Analisis_Matematico_II > 5.5 && 5.5 > Est[N].Car.Eco.Matematica_Financiera)
            { cout << n++ << ": Matemática Financiera" << endl; Materias[Total++] = "Matemática Financiera"; }

            if (5.5 > Est[N].Car.Eco.Contabilidad_Social) { cout << n++ << ": Contabilidad Social" << endl; Materias[Total++] = "Contabilidad Social"; }
            if (5.5 > Est[N].Car.Eco.Desarrollo_Economico) { cout << n++ << ": Desarrollo Económico" << endl; Materias[Total++] = "Desarrollo Económico"; }
            if (5.5 > Est[N].Car.Eco.Analisis_Economico_Regional) { cout << n++ << ": Análisis Económico Regional" << endl; Materias[Total++] = "Análisis Económico Regional"; }
        }

        if (Est[N].Semestre >= 6)
        {
            if (Est[N].Car.Eco.Seminario_I > 5.5 && 5.5 > Est[N].Car.Eco.Seminario_II)
            { cout << n++ << ": Seminario II" << endl; Materias[Total++] = "Seminario II"; }

            if (5.5 > Est[N].Car.Eco.Economia_Politica) { cout << n++ << ": Economía Política" << endl; Materias[Total++] = "Economía Política"; }
            if (5.5 > Est[N].Car.Eco.Formulacion_y_Evaluacion_de_Proyectos) { cout << n++ << ": Formulación y Evaluación de Proyectos" << endl; Materias[Total++] = "Formulación y Evaluación de Proyectos"; }
            if (5.5 > Est[N].Car.Eco.Investigacion_de_Operaciones) { cout << n++ << ": Investigación de Operaciones" << endl; Materias[Total++] = "Investigación de Operaciones"; }
            if (5.5 > Est[N].Car.Eco.Teoria_y_Politica_Fiscal) { cout << n++ << ": Teoría y Política Fiscal" << endl; Materias[Total++] = "Teoría y Política Fiscal"; }
            
            cout << n++ << ": Economía y Política Agrícola" << endl; Materias[Total++] = "Economía y Política Agrícola";
            cout << n++ << ": Economía Industrial" << endl; Materias[Total++] = "Economía Industrial";
            cout << n++ << ": Economía Minera y Petrolera" << endl; Materias[Total++] = "Economía Minera y Petrolera";
            cout << n++ << ": Economía Ambiente y Sociedad" << endl; Materias[Total++] = "Economía Ambiente y Sociedad";
        }

        if (Est[N].Semestre >= 7)
        {
            if (Est[N].Car.Eco.Seminario_II > 5.5 && 5.5 > Est[N].Car.Eco.Seminario_III)
            { cout << n++ << ": Seminario III" << endl; Materias[Total++] = "Seminario III"; }

            if (5.5 > Est[N].Car.Eco.Econometria) { cout << n++ << ": Econometría" << endl; Materias[Total++] = "Econometría"; }
            if (5.5 > Est[N].Car.Eco.Teoria_y_Politica_Monetaria) { cout << n++ << ": Teoría y Política Monetaria" << endl; Materias[Total++] = "Teoría y Política Monetaria"; }
            if (5.5 > Est[N].Car.Eco.Planificacion) { cout << n++ << ": Planificación" << endl; Materias[Total++] = "Planificación"; }
            if (5.5 > Est[N].Car.Eco.Economia_Internacional) { cout << n++ << ": Economía Internacional" << endl; Materias[Total++] = "Economía Internacional"; }
            
            cout << n++ << ": Formulación y Evaluación de Proyectos Agrícolas" << endl; Materias[Total++] = "Formulación y Evaluación de Proyectos Agrícolas";
            cout << n++ << ": Gestión Comunitaria" << endl; Materias[Total++] = "Gestión Comunitaria";
            cout << n++ << ": Contabilidad de Costos" << endl; Materias[Total++] = "Contabilidad de Costos";
            cout << n++ << ": Presupuesto" << endl; Materias[Total++] = "Presupuesto";
        }

        if (Est[N].Semestre >= 8)
        {
            if (Est[N].UC_Aprobadas >= 206 && Est[N].Car.Eco.Seminario_II > 5.5 && 5.5 > Est[N].Car.Eco.Trabajo_Final_de_Grado)
            { cout << n++ << ": Trabajo Final de Grado" << endl; Materias[Total++] = "Trabajo Final de Grado"; }

            cout << n++ << ": Finanzas Internacionales" << endl; Materias[Total++] = "Finanzas Internacionales";
            cout << n++ << ": Estructura Económica Mundial" << endl; Materias[Total++] = "Estructura Económica Mundial";
            cout << n++ << ": Gestión de Riesgo" << endl; Materias[Total++] = "Gestión de Riesgo";
            cout << n++ << ": Economía y Crisis" << endl; Materias[Total++] = "Economía y Crisis";
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