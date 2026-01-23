#include "../../../Main/Header.h"
using namespace std;

void Con_Est (Variables (&Var), Estudiante (&Est)[D], Clase (&Class)[D], Clase_Magistral (&Mag)[D], Profesor (&Prof)[D])
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
            cout << n++ << ": Matemática I" << endl;
            Materias[Total++] = "Matemática I";
            cout << n++ << ": Lenguaje y Comunicación" << endl;
            Materias[Total++] = "Lenguaje y Comunicación";
            cout << n++ << ": Legislación Mercantil" << endl;
            Materias[Total++] = "Legislación Mercantil";
            cout << n++ << ": Contabilidad I" << endl;
            Materias[Total++] = "Contabilidad I";
            cout << n++ << ": Sociopolítica Productiva" << endl;
            Materias[Total++] = "Sociopolítica Productiva";
            cout << n++ << ": Metodología de la Investigación" << endl;
            Materias[Total++] = "Metodología de la Investigación";
            cout << n++ << ": Deporte y Recreación" << endl;
            Materias[Total++] = "Deporte y Recreación";
        }
        else
        {
            if (5.5 > Est[N].Car.Con.Matematica_I) { cout << n++ << ": Matemática I" << endl; Materias[Total++] = "Matemática I"; }
            if (5.5 > Est[N].Car.Con.Lenguaje_y_Comunicacion) { cout << n++ << ": Lenguaje y Comunicación" << endl; Materias[Total++] = "Lenguaje y Comunicación"; }
            if (5.5 > Est[N].Car.Con.Legislacion_Mercantil) { cout << n++ << ": Legislación Mercantil" << endl; Materias[Total++] = "Legislación Mercantil"; }
            if (5.5 > Est[N].Car.Con.Contabilidad_I) { cout << n++ << ": Contabilidad I" << endl; Materias[Total++] = "Contabilidad I"; }
            if (5.5 > Est[N].Car.Con.Sociopolitica_Productiva) { cout << n++ << ": Sociopolítica Productiva" << endl; Materias[Total++] = "Sociopolítica Productiva"; }
            if (5.5 > Est[N].Car.Con.Metodologia_de_la_Investigacion) { cout << n++ << ": Metodología de la Investigación" << endl; Materias[Total++] = "Metodología de la Investigación"; }
            if (5.5 > Est[N].Car.Con.Deporte_y_Recreacion) { cout << n++ << ": Deporte y Recreación" << endl; Materias[Total++] = "Deporte y Recreación"; }
        }

        if (Est[N].Semestre >= 2)
        {
            if (Est[N].Car.Con.Matematica_I > 5.5 && 5.5 > Est[N].Car.Con.Matematica_II)
            { cout << n++ << ": Matemática II" << endl; Materias[Total++] = "Matemática II"; }
            
            if (Est[N].Car.Con.Contabilidad_I > 5.5 && 5.5 > Est[N].Car.Con.Contabilidad_II)
            { cout << n++ << ": Contabilidad II" << endl; Materias[Total++] = "Contabilidad II"; }

            if (5.5 > Est[N].Car.Con.Ingles) { cout << n++ << ": Inglés" << endl; Materias[Total++] = "Inglés"; }
            if (5.5 > Est[N].Car.Con.Legislacion_Laboral) { cout << n++ << ": Legislación Laboral" << endl; Materias[Total++] = "Legislación Laboral"; }
            if (5.5 > Est[N].Car.Con.Estadistica_I) { cout << n++ << ": Estadística I" << endl; Materias[Total++] = "Estadística I"; }
            if (5.5 > Est[N].Car.Con.Introduccion_a_la_Adminstracion) { cout << n++ << ": Introducción a la Administración" << endl; Materias[Total++] = "Introducción a la Administración"; }
            if (5.5 > Est[N].Car.Con.Arte_y_Cultura) { cout << n++ << ": Arte y Cultura" << endl; Materias[Total++] = "Arte y Cultura"; }
        }

        if (Est[N].Semestre >= 3)
        {
            if (5.5 > Est[N].Car.Con.Informatica) { cout << n++ << ": Informática" << endl; Materias[Total++] = "Informática"; }
            if (5.5 > Est[N].Car.Con.Calculo_Financiero) { cout << n++ << ": Cálculo Financiero" << endl; Materias[Total++] = "Cálculo Financiero"; }
            if (5.5 > Est[N].Car.Con.Introduccion_a_la_Teoria_Economica) { cout << n++ << ": Introducción a la Teoría Económica" << endl; Materias[Total++] = "Introducción a la Teoría Económica"; }
            
            if (Est[N].Car.Con.Estadistica_I > 5.5 && 5.5 > Est[N].Car.Con.Estadistica_II)
            { cout << n++ << ": Estadística II" << endl; Materias[Total++] = "Estadística II"; }

            if (Est[N].Car.Con.Contabilidad_II > 5.5 && 5.5 > Est[N].Car.Con.Contabilidad_III)
            { cout << n++ << ": Contabilidad III" << endl; Materias[Total++] = "Contabilidad III"; }

            if (5.5 > Est[N].Car.Con.Procesos_Administrativos) { cout << n++ << ": Procesos Administrativos" << endl; Materias[Total++] = "Procesos Administrativos"; }
        }

        if (Est[N].Semestre >= 4)
        {
            if (Est[N].Car.Con.Contabilidad_III > 5.5 && 5.5 > Est[N].Car.Con.Contabilidad_of_Costos_I)
            { cout << n++ << ": Contabilidad de Costos I" << endl; Materias[Total++] = "Contabilidad de Costos I"; }

            if (5.5 > Est[N].Car.Con.Practica_Profesional_I) { cout << n++ << ": Práctica Profesional I" << endl; Materias[Total++] = "Práctica Profesional I"; }
            if (5.5 > Est[N].Car.Con.Auditoria_I) { cout << n++ << ": Auditoría I" << endl; Materias[Total++] = "Auditoría I"; }
            if (5.5 > Est[N].Car.Con.Contabilidad_Especializada_I) { cout << n++ << ": Contabilidad Especializada I" << endl; Materias[Total++] = "Contabilidad Especializada I"; }
            if (5.5 > Est[N].Car.Con.Finanzas_y_Gestion_Presupuestaria) { cout << n++ << ": Finanzas y Gestión Presupuestaria" << endl; Materias[Total++] = "Finanzas y Gestión Presupuestaria"; }
            if (5.5 > Est[N].Car.Con.Administracion_Publica) { cout << n++ << ": Administración Pública" << endl; Materias[Total++] = "Administración Pública"; }
        }

        if (Est[N].Semestre >= 5)
        {
            if (5.5 > Est[N].Car.Con.Sistemas_de_Informacion_Gerencial) { cout << n++ << ": Sistemas de Información Gerencial" << endl; Materias[Total++] = "Sistemas de Información Gerencial"; }
            if (5.5 > Est[N].Car.Con.Investigacion_de_Operaciones) { cout << n++ << ": Investigación de Operaciones" << endl; Materias[Total++] = "Investigación de Operaciones"; }
            
            if (Est[N].Car.Con.Auditoria_I > 5.5 && 5.5 > Est[N].Car.Con.Auditoria_II)
            { cout << n++ << ": Auditoría II" << endl; Materias[Total++] = "Auditoría II"; }

            if (Est[N].Car.Con.Contabilidad_Especializada_I > 5.5 && 5.5 > Est[N].Car.Con.Contabilidad_Especializada_II)
            { cout << n++ << ": Contabilidad Especializada II" << endl; Materias[Total++] = "Contabilidad Especializada II"; }

            if (Est[N].Car.Con.Contabilidad_of_Costos_I > 5.5 && 5.5 > Est[N].Car.Con.Contabilidad_de_Costos_II)
            { cout << n++ << ": Contabilidad de Costos II" << endl; Materias[Total++] = "Contabilidad de Costos II"; }

            if (5.5 > Est[N].Car.Con.Gerencia_de_Proyectos) { cout << n++ << ": Gerencia de Proyectos" << endl; Materias[Total++] = "Gerencia de Proyectos"; }
            if (5.5 > Est[N].Car.Con.Habilidades_Gerenciales) { cout << n++ << ": Habilidades Gerenciales" << endl; Materias[Total++] = "Habilidades Gerenciales"; }
            if (5.5 > Est[N].Car.Con.Contabilidad_Ambiental) { cout << n++ << ": Contabilidad Ambiental" << endl; Materias[Total++] = "Contabilidad Ambiental"; }
        }

        if (Est[N].Semestre >= 6)
        {
            if (5.5 > Est[N].Car.Con.Sistemas_Tributarios_I) { cout << n++ << ": Sistemas Tributarios I" << endl; Materias[Total++] = "Sistemas Tributarios I"; }
            if (5.5 > Est[N].Car.Con.Mercadeo) { cout << n++ << ": Mercadeo" << endl; Materias[Total++] = "Mercadeo"; }
            if (5.5 > Est[N].Car.Con.Presupuesto) { cout << n++ << ": Presupuesto" << endl; Materias[Total++] = "Presupuesto"; }

            if (Est[N].Car.Con.Contabilidad_de_Costos_II > 5.5 && 5.5 > Est[N].Car.Con.Contabilidad_de_Costos_III)
            { cout << n++ << ": Contabilidad de Costos III" << endl; Materias[Total++] = "Contabilidad de Costos III"; }

            if (5.5 > Est[N].Car.Con.Seminario_I) { cout << n++ << ": Seminario I" << endl; Materias[Total++] = "Seminario I"; }

            if (Est[N].Car.Con.Practica_Profesional_I > 5.5 && 5.5 > Est[N].Car.Con.Practica_Profesional_II)
            { cout << n++ << ": Práctica Profesional II" << endl; Materias[Total++] = "Práctica Profesional II"; }
        }

        if (Est[N].Semestre >= 7)
        {
            if (Est[N].Car.Con.Sistemas_Tributarios_I > 5.5 && 5.5 > Est[N].Car.Con.Sistemas_Tributarios_II)
            { cout << n++ << ": Sistemas Tributarios II" << endl; Materias[Total++] = "Sistemas Tributarios II"; }

            if (5.5 > Est[N].Car.Con.Gestion_de_Talento_Humano) { cout << n++ << ": Gestión de Talento Humano" << endl; Materias[Total++] = "Gestión de Talento Humano"; }

            if (Est[N].Car.Con.Auditoria_II > 5.5 && 5.5 > Est[N].Car.Con.Auditoria_III)
            { cout << n++ << ": Auditoría III" << endl; Materias[Total++] = "Auditoría III"; }

            if (Est[N].Car.Con.Contabilidad_III > 5.5 && 5.5 > Est[N].Car.Con.Analisis_de_Estados_Financieros)
            { cout << n++ << ": Análisis de Estados Financieros" << endl; Materias[Total++] = "Análisis de Estados Financieros"; }

            if (5.5 > Est[N].Car.Con.Etica_y_Desarrollo_Profesional) { cout << n++ << ": Ética y Desarrollo Profesional" << endl; Materias[Total++] = "Ética y Desarrollo Profesional"; }

            if (Est[N].Car.Con.Seminario_I > 5.5 && 5.5 > Est[N].Car.Con.Seminario_II)
            { cout << n++ << ": Seminario II" << endl; Materias[Total++] = "Seminario II"; }

            if (5.5 > Est[N].Car.Con.Tributacion_Aduanera) { cout << n++ << ": Tributación Aduanera" << endl; Materias[Total++] = "Tributación Aduanera"; }
            if (5.5 > Est[N].Car.Con.Tecnicas_de_Negociacion_y_Conciliacion) { cout << n++ << ": Técnicas de Negociación" << endl; Materias[Total++] = "Técnicas de Negociación"; }
            if (5.5 > Est[N].Car.Con.Avaluos) { cout << n++ << ": Avalúos" << endl; Materias[Total++] = "Avalúos"; }
        }

        if (Est[N].Semestre >= 8)
        {
            if (5.5 > Est[N].Car.Con.Instituciones_Financieras) { cout << n++ << ": Instituciones Financieras" << endl; Materias[Total++] = "Instituciones Financieras"; }

            if (Est[N].Car.Con.Seminario_II > 5.5 && 5.5 > Est[N].Car.Con.Tesina_de_Grado)
            { cout << n++ << ": Tesina de Grado" << endl; Materias[Total++] = "Tesina de Grado"; }

            if (Est[N].UC_Aprobadas >= 180 && 5.5 > Est[N].Car.Con.Pasantias)
            { cout << n++ << ": Pasantías" << endl; Materias[Total++] = "Pasantías"; }
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