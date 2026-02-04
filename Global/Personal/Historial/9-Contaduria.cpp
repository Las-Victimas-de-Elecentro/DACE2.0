#include "../../../Main/Header.h"
using namespace std;

void Hist_Con (Variables (&Var), Estudiante (&Est)[D])
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

        cout << "Matematica I: " << Est[N].Car.Con.Matematica_I << endl;
        cout << "Lenguaje y Comunicacion: " << Est[N].Car.Con.Lenguaje_y_Comunicacion << endl;
        cout << "Legislacion Mercantil: " << Est[N].Car.Con.Legislacion_Mercantil << endl;
        cout << "Contabilidad I: " << Est[N].Car.Con.Contabilidad_I << endl;
        cout << "Sociopolitica Productiva: " << Est[N].Car.Con.Sociopolitica_Productiva << endl;
        cout << "Metodologia de la Investigacion: " << Est[N].Car.Con.Metodologia_de_la_Investigacion << endl;
        cout << "Deporte y Recreacion: " << Est[N].Car.Con.Deporte_y_Recreacion << endl;

        Suma = Suma + (Est[N].Car.Con.Matematica_I + Est[N].Car.Con.Lenguaje_y_Comunicacion + Est[N].Car.Con.Legislacion_Mercantil + Est[N].Car.Con.Contabilidad_I + Est[N].Car.Con.Sociopolitica_Productiva + Est[N].Car.Con.Metodologia_de_la_Investigacion + Est[N].Car.Con.Deporte_y_Recreacion);
        Cont = Cont + 7;

    }

    // Semestre 2
    if (Est[N].Semestre >= 2)
    {

        cout << "Ingles: " << Est[N].Car.Con.Ingles << endl;
        cout << "Legislacion Laboral: " << Est[N].Car.Con.Legislacion_Laboral << endl;
        cout << "Estadistica I: " << Est[N].Car.Con.Estadistica_I << endl;
        cout << "Introduccion a la Administracion: " << Est[N].Car.Con.Introduccion_a_la_Adminstracion << endl;
        cout << "Arte y Cultura: " << Est[N].Car.Con.Arte_y_Cultura << endl;

        Suma = Suma + (Est[N].Car.Con.Ingles + Est[N].Car.Con.Legislacion_Laboral + Est[N].Car.Con.Estadistica_I + Est[N].Car.Con.Introduccion_a_la_Adminstracion + Est[N].Car.Con.Arte_y_Cultura);
        Cont = Cont + 5;

        if (Est[N].Car.Con.Matematica_I >= 5.5)
        {

            cout << "Matematica II: " << Est[N].Car.Con.Matematica_II << endl;
            Suma = Suma + Est[N].Car.Con.Matematica_II;
            Cont = Cont + 1;

        }

        if (Est[N].Car.Con.Contabilidad_I >= 5.5)
        {

            cout << "Contabilidad II: " << Est[N].Car.Con.Contabilidad_II << endl;
            Suma = Suma + Est[N].Car.Con.Contabilidad_II;
            Cont = Cont + 1;

        }

    }

    // Semestre 3
    if (Est[N].Semestre >= 3)
    {

        cout << "Informatica: " << Est[N].Car.Con.Informatica << endl;
        cout << "Calculo Financiero: " << Est[N].Car.Con.Calculo_Financiero << endl;
        cout << "Introduccion a la Teoria Economica: " << Est[N].Car.Con.Introduccion_a_la_Teoria_Economica << endl;
        cout << "Procesos Administrativos: " << Est[N].Car.Con.Procesos_Administrativos << endl;

        Suma = Suma + (Est[N].Car.Con.Informatica + Est[N].Car.Con.Calculo_Financiero + Est[N].Car.Con.Introduccion_a_la_Teoria_Economica + Est[N].Car.Con.Procesos_Administrativos);
        Cont = Cont + 4;

        if (Est[N].Car.Con.Estadistica_I >= 5.5)
        {

            cout << "Estadistica II: " << Est[N].Car.Con.Estadistica_II << endl;
            Suma = Suma + Est[N].Car.Con.Estadistica_II;
            Cont = Cont + 1;

        }

        if (Est[N].Car.Con.Contabilidad_II >= 5.5)
        {

            cout << "Contabilidad III: " << Est[N].Car.Con.Contabilidad_III << endl;
            Suma = Suma + Est[N].Car.Con.Contabilidad_III;
            Cont = Cont + 1;

        }

    }

    // Semestre 4
    if (Est[N].Semestre >= 4)
    {

        cout << "Practica Profesional I: " << Est[N].Car.Con.Practica_Profesional_I << endl;
        cout << "Auditoria I: " << Est[N].Car.Con.Auditoria_I << endl;
        cout << "Contabilidad Especializada I: " << Est[N].Car.Con.Contabilidad_Especializada_I << endl;
        cout << "Finanzas y Gestion Presupuestaria: " << Est[N].Car.Con.Finanzas_y_Gestion_Presupuestaria << endl;
        cout << "Administracion Publica: " << Est[N].Car.Con.Administracion_Publica << endl;

        Suma = Suma + (Est[N].Car.Con.Practica_Profesional_I + Est[N].Car.Con.Auditoria_I + Est[N].Car.Con.Contabilidad_Especializada_I + Est[N].Car.Con.Finanzas_y_Gestion_Presupuestaria + Est[N].Car.Con.Administracion_Publica);
        Cont = Cont + 5;

        if (Est[N].Car.Con.Contabilidad_III >= 5.5)
        {

            cout << "Contabilidad de Costos I: " << Est[N].Car.Con.Contabilidad_of_Costos_I << endl;
            Suma = Suma + Est[N].Car.Con.Contabilidad_of_Costos_I;
            Cont = Cont + 1;

        }

    }

    // Semestre 5
    if (Est[N].Semestre >= 5)
    {

        cout << "Sistemas de Informacion Gerencial: " << Est[N].Car.Con.Sistemas_de_Informacion_Gerencial << endl;
        cout << "Investigacion de Operaciones: " << Est[N].Car.Con.Investigacion_de_Operaciones << endl;
        cout << "Gerencia de Proyectos: " << Est[N].Car.Con.Gerencia_de_Proyectos << endl;
        cout << "Habilidades Gerenciales: " << Est[N].Car.Con.Habilidades_Gerenciales << endl;
        cout << "Contabilidad Ambiental: " << Est[N].Car.Con.Contabilidad_Ambiental << endl;

        Suma = Suma + (Est[N].Car.Con.Sistemas_de_Informacion_Gerencial + Est[N].Car.Con.Investigacion_de_Operaciones + Est[N].Car.Con.Gerencia_de_Proyectos + Est[N].Car.Con.Habilidades_Gerenciales + Est[N].Car.Con.Contabilidad_Ambiental);
        Cont = Cont + 5;

        if (Est[N].Car.Con.Auditoria_I >= 5.5)
        {

            cout << "Auditoria II: " << Est[N].Car.Con.Auditoria_II << endl;
            Suma = Suma + Est[N].Car.Con.Auditoria_II;
            Cont = Cont + 1;

        }

        if (Est[N].Car.Con.Contabilidad_Especializada_I >= 5.5)
        {

            cout << "Contabilidad Especializada II: " << Est[N].Car.Con.Contabilidad_Especializada_II << endl;
            Suma = Suma + Est[N].Car.Con.Contabilidad_Especializada_II;
            Cont = Cont + 1;

        }

        if (Est[N].Car.Con.Contabilidad_of_Costos_I >= 5.5)
        {

            cout << "Contabilidad de Costos II: " << Est[N].Car.Con.Contabilidad_de_Costos_II << endl;
            Suma = Suma + Est[N].Car.Con.Contabilidad_de_Costos_II;
            Cont = Cont + 1;

        }

    }

    // Semestre 6
    if (Est[N].Semestre >= 6)
    {

        cout << "Sistemas Tributarios I: " << Est[N].Car.Con.Sistemas_Tributarios_I << endl;
        cout << "Mercadeo: " << Est[N].Car.Con.Mercadeo << endl;
        cout << "Presupuesto: " << Est[N].Car.Con.Presupuesto << endl;
        cout << "Seminario I: " << Est[N].Car.Con.Seminario_I << endl;

        Suma = Suma + (Est[N].Car.Con.Sistemas_Tributarios_I + Est[N].Car.Con.Mercadeo + Est[N].Car.Con.Presupuesto + Est[N].Car.Con.Seminario_I);
        Cont = Cont + 4;

        if (Est[N].Car.Con.Contabilidad_de_Costos_II >= 5.5)
        {

            cout << "Contabilidad de Costos III: " << Est[N].Car.Con.Contabilidad_de_Costos_III << endl;
            Suma = Suma + Est[N].Car.Con.Contabilidad_de_Costos_III;
            Cont = Cont + 1;

        }

        if (Est[N].Car.Con.Practica_Profesional_I >= 5.5)
        {

            cout << "Practica Profesional II: " << Est[N].Car.Con.Practica_Profesional_II << endl;
            Suma = Suma + Est[N].Car.Con.Practica_Profesional_II;
            Cont = Cont + 1;

        }

    }

    // Semestre 7
    if (Est[N].Semestre >= 7)
    {

        cout << "Gestion de Talento Humano: " << Est[N].Car.Con.Gestion_de_Talento_Humano << endl;
        cout << "Etica y Desarrollo Profesional: " << Est[N].Car.Con.Etica_y_Desarrollo_Profesional << endl;
        cout << "Tributacion Aduanera: " << Est[N].Car.Con.Tributacion_Aduanera << endl;
        cout << "Tecnicas de Negociacion: " << Est[N].Car.Con.Tecnicas_de_Negociacion_y_Conciliacion << endl;
        cout << "Avaluos: " << Est[N].Car.Con.Avaluos << endl;

        Suma = Suma + (Est[N].Car.Con.Gestion_de_Talento_Humano + Est[N].Car.Con.Etica_y_Desarrollo_Profesional + Est[N].Car.Con.Tributacion_Aduanera + Est[N].Car.Con.Tecnicas_de_Negociacion_y_Conciliacion + Est[N].Car.Con.Avaluos);
        Cont = Cont + 5;

        if (Est[N].Car.Con.Sistemas_Tributarios_I >= 5.5)
        {

            cout << "Sistemas Tributarios II: " << Est[N].Car.Con.Sistemas_Tributarios_II << endl;
            Suma = Suma + Est[N].Car.Con.Sistemas_Tributarios_II;
            Cont = Cont + 1;

        }

        if (Est[N].Car.Con.Auditoria_II >= 5.5)
        {

            cout << "Auditoria III: " << Est[N].Car.Con.Auditoria_III << endl;
            Suma = Suma + Est[N].Car.Con.Auditoria_III;
            Cont = Cont + 1;

        }

        if (Est[N].Car.Con.Contabilidad_III >= 5.5)
        {

            cout << "Analisis de Estados Financieros: " << Est[N].Car.Con.Analisis_de_Estados_Financieros << endl;
            Suma = Suma + Est[N].Car.Con.Analisis_de_Estados_Financieros;
            Cont = Cont + 1;

        }

        if (Est[N].Car.Con.Seminario_I >= 5.5)
        {

            cout << "Seminario II: " << Est[N].Car.Con.Seminario_II << endl;
            Suma = Suma + Est[N].Car.Con.Seminario_II;
            Cont = Cont + 1;

        }

    }

    // Semestre 8
    if (Est[N].Semestre >= 8)
    {

        cout << "Instituciones Financieras: " << Est[N].Car.Con.Instituciones_Financieras << endl;
        Suma = Suma + Est[N].Car.Con.Instituciones_Financieras;
        Cont = Cont + 1;

        if (Est[N].Car.Con.Seminario_II >= 5.5)
        {

            cout << "Tesina de Grado: " << Est[N].Car.Con.Tesina_de_Grado << endl;
            Suma = Suma + Est[N].Car.Con.Tesina_de_Grado;
            Cont = Cont + 1;

        }

        if (Est[N].UC_Aprobadas >= 180)
        {

            cout << "Pasantias: " << Est[N].Car.Con.Pasantias << endl;
            Suma = Suma + Est[N].Car.Con.Pasantias;
            Cont = Cont + 1;

        }

    }

    if (Cont > 0)
    {
        cout << endl << YELLOW << "Promedio Academico: " << RESET << Suma / Cont << endl;
        Continue();
    }

}