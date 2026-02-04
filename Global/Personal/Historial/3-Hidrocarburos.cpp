#include "../../../Main/Header.h"
using namespace std;

void Hist_Hid (Variables (&Var), Estudiante (&Est)[D])
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

        cout << "Formacion Socio Politica I: " << Est[N].Car.Hid.Formacion_Socio_Politica_I << endl;
        cout << "Proyecto Comunitario Socio Energetico I: " << Est[N].Car.Hid.Proyecto_Comunitario_Socio_Energetico_I << endl;
        cout << "Dibujo Tecnico y Descriptiva: " << Est[N].Car.Hid.Dibujo_Tecnico_y_Descriptiva << endl;
        cout << "Matematica I: " << Est[N].Car.Hid.Matematica_I << endl;
        cout << "Ingles Tecnico: " << Est[N].Car.Hid.Ingles_Tecnico << endl;
        cout << "Quimica Inorganica: " << Est[N].Car.Hid.Quimica_Inorganica << endl;
        cout << "Orientacion a la Ing del Petroleo y Gas Natural: " << Est[N].Car.Hid.Orientacion_a_la_Ingenieria_del_Petroleo_y_Gas_Natural << endl;
        cout << "Arte y Cultura: " << Est[N].Car.Hid.Arte_y_Cultura << endl;

        Suma = Suma + (Est[N].Car.Hid.Formacion_Socio_Politica_I + Est[N].Car.Hid.Proyecto_Comunitario_Socio_Energetico_I + Est[N].Car.Hid.Dibujo_Tecnico_y_Descriptiva + Est[N].Car.Hid.Matematica_I + Est[N].Car.Hid.Ingles_Tecnico + Est[N].Car.Hid.Quimica_Inorganica + Est[N].Car.Hid.Orientacion_a_la_Ingenieria_del_Petroleo_y_Gas_Natural + Est[N].Car.Hid.Arte_y_Cultura);
        Cont = Cont + 8;

    }

    if (Est[N].UC_Aprobadas >= 10)
    {

        cout << "Informatica: " << Est[N].Car.Hid.Informatica << endl;
        Suma = Suma + Est[N].Car.Hid.Informatica;
        Cont = Cont + 1;

    }

    if (Est[N].Car.Hid.Matematica_I >= 5.5)
    {

        cout << "Matematica II: " << Est[N].Car.Hid.Matematica_II << endl;
        cout << "Fisica I: " << Est[N].Car.Hid.Fisica_I << endl;
        Suma = Suma + (Est[N].Car.Hid.Matematica_II + Est[N].Car.Hid.Fisica_I);
        Cont = Cont + 2;

    }

    if (Est[N].Car.Hid.Quimica_Inorganica >= 5.5)
    {

        cout << "Quimica Organica: " << Est[N].Car.Hid.Quimica_Organica << endl;
        cout << "Geologia General: " << Est[N].Car.Hid.Geologia_General << endl;
        Suma = Suma + (Est[N].Car.Hid.Quimica_Organica + Est[N].Car.Hid.Geologia_General);
        Cont = Cont + 2;

    }

    if (Est[N].Car.Hid.Formacion_Socio_Politica_I >= 5.5)
    {

        cout << "Formacion Socio Politica II: " << Est[N].Car.Hid.Formacion_Socio_Politica_II << endl;
        Suma = Suma + Est[N].Car.Hid.Formacion_Socio_Politica_II;
        Cont = Cont + 1;

    }

    if (Est[N].Car.Hid.Proyecto_Comunitario_Socio_Energetico_I >= 5.5)
    {

        cout << "Proyecto Comunitario Socio Energetico II: " << Est[N].Car.Hid.Proyecto_Comunitario_Socio_Energetico_II << endl;
        Suma = Suma + Est[N].Car.Hid.Proyecto_Comunitario_Socio_Energetico_II;
        Cont = Cont + 1;

    }

    if (Est[N].UC_Aprobadas >= 20)
    {

        cout << "Deporte: " << Est[N].Car.Hid.Deporte << endl;
        Suma = Suma + Est[N].Car.Hid.Deporte;
        Cont = Cont + 1;

    }

    if (Est[N].Car.Hid.Formacion_Socio_Politica_II >= 5.5)
    {

        cout << "Formacion Socio Politica III: " << Est[N].Car.Hid.Formacion_Socio_Politica_III << endl;
        Suma = Suma + Est[N].Car.Hid.Formacion_Socio_Politica_III;
        Cont = Cont + 1;

    }

    if (Est[N].Car.Hid.Proyecto_Comunitario_Socio_Energetico_II >= 5.5)
    {

        cout << "Proyecto Comunitario Socio Energetico III: " << Est[N].Car.Hid.Proyecto_Comunitario_Socio_Energetico_III << endl;
        Suma = Suma + Est[N].Car.Hid.Proyecto_Comunitario_Socio_Energetico_III;
        Cont = Cont + 1;

    }

    if (Est[N].Car.Hid.Fisica_I >= 5.5)
    {

        cout << "Fisica II: " << Est[N].Car.Hid.Fisica_II << endl;
        cout << "Laboratorio de Fisica: " << Est[N].Car.Hid.Laboratorio_de_Fisica << endl;
        Suma = Suma + (Est[N].Car.Hid.Fisica_II + Est[N].Car.Hid.Laboratorio_de_Fisica);
        Cont = Cont + 2;

    }

    if (Est[N].Car.Hid.Matematica_II >= 5.5)
    {

        cout << "Matematica III: " << Est[N].Car.Hid.Matematica_III << endl;
        Suma = Suma + Est[N].Car.Hid.Matematica_III;
        Cont = Cont + 1;

    }

    if (Est[N].Car.Hid.Formacion_Socio_Politica_III >= 5.5)
    {

        cout << "Formacion Socio Politica IV: " << Est[N].Car.Hid.Formacion_Socio_Politica_IV << endl;
        Suma = Suma + Est[N].Car.Hid.Formacion_Socio_Politica_IV;
        Cont = Cont + 1;

    }

    if (Est[N].Car.Hid.Proyecto_Comunitario_Socio_Energetico_III >= 5.5)
    {

        cout << "Proyecto Comunitario Socio Energetico IV: " << Est[N].Car.Hid.Proyecto_Comunitario_Socio_Energetico_IV << endl;
        Suma = Suma + Est[N].Car.Hid.Proyecto_Comunitario_Socio_Energetico_IV;
        Cont = Cont + 1;

    }

    if (Est[N].Car.Hid.Fisica_II >= 5.5)
    {

        cout << "Mecanica de las Rocas y de los Fluidos: " << Est[N].Car.Hid.Mecanica_de_las_Rocas_y_de_los_Fluidos << endl;
        Suma = Suma + Est[N].Car.Hid.Mecanica_de_las_Rocas_y_de_los_Fluidos;
        Cont = Cont + 1;

    }

    if (Est[N].Car.Hid.Matematica_III >= 5.5)
    {

        cout << "Probabilidades y Estadisticas: " << Est[N].Car.Hid.Probabilidades_y_Estadisticas << endl;
        cout << "Simulacion Numerica de Yacimientos: " << Est[N].Car.Hid.Simulacion_Numerica_de_Yacimientos << endl;
        Suma = Suma + (Est[N].Car.Hid.Probabilidades_y_Estadisticas + Est[N].Car.Hid.Simulacion_Numerica_de_Yacimientos);
        Cont = Cont + 2;

    }

    if (Est[N].Car.Hid.Matematica_III >= 5.5 && Est[N].Car.Hid.Fisica_II >= 5.5)
    {

        cout << "Termodinamica General y Aplicada: " << Est[N].Car.Hid.Termodinamica_General_y_Aplicada << endl;
        Suma = Suma + Est[N].Car.Hid.Termodinamica_General_y_Aplicada;
        Cont = Cont + 1;

    }

    if (Est[N].Car.Hid.Geologia_General >= 5.5)
    {

        cout << "Caracterizacion Fisica de los Yacimientos: " << Est[N].Car.Hid.Caracterizacion_Fisica_de_los_Yacimientos << endl;
        Suma = Suma + Est[N].Car.Hid.Caracterizacion_Fisica_de_los_Yacimientos;
        Cont = Cont + 1;

    }

    if (Est[N].Car.Hid.Termodinamica_General_y_Aplicada >= 5.5 && Est[N].Car.Hid.Mecanica_de_las_Rocas_y_de_los_Fluidos >= 5.5)
    {

        cout << "Sistema de Compresion de Gas: " << Est[N].Car.Hid.Sistema_de_Compresion_de_Gas << endl;
        Suma = Suma + Est[N].Car.Hid.Sistema_de_Compresion_de_Gas;
        Cont = Cont + 1;

    }

    if (Est[N].Car.Hid.Formacion_Socio_Politica_IV >= 5.5)
    {

        cout << "Legislacion Petrolera: " << Est[N].Car.Hid.Formacion_Socio_Politica_Legislacion_Petrolera << endl;
        Suma = Suma + Est[N].Car.Hid.Formacion_Socio_Politica_Legislacion_Petrolera;
        Cont = Cont + 1;

    }

    if (Est[N].Car.Hid.Proyecto_Comunitario_Socio_Energetico_IV >= 5.5)
    {

        cout << "Proyecto Socio Energetico V: " << Est[N].Car.Hid.Proyecto_Socio_Comunitario_Socio_Energetico_V << endl;
        Suma = Suma + Est[N].Car.Hid.Proyecto_Socio_Comunitario_Socio_Energetico_V;
        Cont = Cont + 1;

    }

    if (Est[N].Car.Hid.Caracterizacion_Fisica_de_los_Yacimientos >= 5.5)
    {

        cout << "Perforacion de Pozos: " << Est[N].Car.Hid.Perforacion_de_Pozos << endl;
        cout << "Caracterizacion Energetica de los Yacimientos: " << Est[N].Car.Hid.Caracterizacion_Energetica_de_los_Yacimientos << endl;
        Suma = Suma + (Est[N].Car.Hid.Perforacion_de_Pozos + Est[N].Car.Hid.Caracterizacion_Energetica_de_los_Yacimientos);
        Cont = Cont + 2;

    }

    if (Est[N].Car.Hid.Mecanica_de_las_Rocas_y_de_los_Fluidos >= 5.5)
    {

        cout << "Transporte y Distribucion de Hidrocarburos: " << Est[N].Car.Hid.Transporte_y_Distribucion_de_Hidrocarburos << endl;
        cout << "Geologia Estructural: " << Est[N].Car.Hid.Geologia_Estructural << endl;
        Suma = Suma + (Est[N].Car.Hid.Transporte_y_Distribucion_de_Hidrocarburos + Est[N].Car.Hid.Geologia_Estructural);
        Cont = Cont + 2;

    }

    if (Est[N].Car.Hid.Formacion_Socio_Politica_Legislacion_Petrolera >= 5.5)
    {

        cout << "Integracion con el Comercio Internacional: " << Est[N].Car.Hid.Formacion_Socio_Politica_Integracion_Comercio_Internacional << endl;
        Suma = Suma + Est[N].Car.Hid.Formacion_Socio_Politica_Integracion_Comercio_Internacional;
        Cont = Cont + 1;

    }

    if (Est[N].Car.Hid.Proyecto_Socio_Comunitario_Socio_Energetico_V >= 5.5)
    {

        cout << "Proyecto Socio Energetico VI: " << Est[N].Car.Hid.Proyecto_Comunitario_Socio_Energetico_VI << endl;
        Suma = Suma + Est[N].Car.Hid.Proyecto_Comunitario_Socio_Energetico_VI;
        Cont = Cont + 1;

    }

    if (Est[N].UC_Aprobadas >= 100)
    {

        cout << "Seguridad Industrial: " << Est[N].Car.Hid.Seguridad_Industrial << endl;
        Suma = Suma + Est[N].Car.Hid.Seguridad_Industrial;
        Cont = Cont + 1;

    }

    if (Est[N].Car.Hid.Caracterizacion_Energetica_de_los_Yacimientos >= 5.5)
    {

        cout << "Caracterizacion Dinamica de los Yacimientos: " << Est[N].Car.Hid.Caracterizacion_Dinamica_de_los_Yacimientos << endl;
        cout << "Recuperacion Secundaria de los Yacimientos: " << Est[N].Car.Hid.Recuperacion_Secundaria_de_Yacimientos << endl;
        Suma = Suma + (Est[N].Car.Hid.Caracterizacion_Dinamica_de_los_Yacimientos + Est[N].Car.Hid.Recuperacion_Secundaria_de_Yacimientos);
        Cont = Cont + 2;

    }

    if (Est[N].Car.Hid.Perforacion_de_Pozos >= 5.5)
    {

        cout << "Perfilaje de Pozos: " << Est[N].Car.Hid.Perfilaje_de_Pozos << endl;
        cout << "Completacion de Pozos: " << Est[N].Car.Hid.Competacion_de_Pozos << endl;
        Suma = Suma + (Est[N].Car.Hid.Perfilaje_de_Pozos + Est[N].Car.Hid.Competacion_de_Pozos);
        Cont = Cont + 2;

    }

    if (Est[N].Car.Hid.Proyecto_Comunitario_Socio_Energetico_VI >= 5.5)
    {

        cout << "Proyecto Socio Energetico VII: " << Est[N].Car.Hid.Proyecto_Comunitario_Socio_Energetico_VII << endl;
        Suma = Suma + Est[N].Car.Hid.Proyecto_Comunitario_Socio_Energetico_VII;
        Cont = Cont + 1;

    }

    if (Est[N].Car.Hid.Geologia_Estructural >= 5.5 && Est[N].Car.Hid.Caracterizacion_Dinamica_de_los_Yacimientos >= 5.5)
    {

        cout << "Geologia de Produccion: " << Est[N].Car.Hid.Geologia_de_Produccion << endl;
        Suma = Suma + Est[N].Car.Hid.Geologia_de_Produccion;
        Cont = Cont + 1;

    }

    if (Est[N].Car.Hid.Caracterizacion_Dinamica_de_los_Yacimientos >= 5.5)
    {

        cout << "Ingenieria de Produccion I: " << Est[N].Car.Hid.Ingenieria_de_Produccion_I << endl;
        Suma = Suma + Est[N].Car.Hid.Ingenieria_de_Produccion_I;
        Cont = Cont + 1;

    }

    if (Est[N].Car.Hid.Seguridad_Industrial >= 5.5)
    {

        cout << "Proteccion Integral de Riesgos: " << Est[N].Car.Hid.Proteccion_Integral_de_Riesgos << endl;
        Suma = Suma + Est[N].Car.Hid.Proteccion_Integral_de_Riesgos;
        Cont = Cont + 1;

    }

    if (Est[N].UC_Aprobadas >= 120)
    {

        cout << "Electiva Profesional (Corrosion): " << Est[N].Car.Hid.Electiva_Profesional_Corrosion_e_Integridad_Mecanica << endl;
        cout << "Evaluacion y Auditoria Ambiental: " << Est[N].Car.Hid.Evaluacion_y_Auditoria_Ambiental << endl;
        Suma = Suma + (Est[N].Car.Hid.Electiva_Profesional_Corrosion_e_Integridad_Mecanica + Est[N].Car.Hid.Evaluacion_y_Auditoria_Ambiental);
        Cont = Cont + 2;

    }

    if (Est[N].Car.Hid.Termodinamica_General_y_Aplicada >= 5.5)
    {

        cout << "Transferencia de Calor: " << Est[N].Car.Hid.Transferencia_de_Calor << endl;
        Suma = Suma + Est[N].Car.Hid.Transferencia_de_Calor;
        Cont = Cont + 1;

    }

    if (Est[N].Car.Hid.Transporte_y_Distribucion_de_Hidrocarburos >= 5.5)
    {

        cout << "Procesos Petroquimicos: " << Est[N].Car.Hid.Procesos_Petroquimicos << endl;
        cout << "Procesos de Refinacion: " << Est[N].Car.Hid.Procesos_de_Refinacion << endl;
        Suma = Suma + (Est[N].Car.Hid.Procesos_Petroquimicos + Est[N].Car.Hid.Procesos_de_Refinacion);
        Cont = Cont + 2;

    }

    if (Est[N].Car.Hid.Proyecto_Comunitario_Socio_Energetico_VII >= 5.5)
    {

        cout << "Proyecto Socio Energetico VIII: " << Est[N].Car.Hid.Proyecto_Comunitario_Socio_Energetico_VIII << endl;
        Suma = Suma + Est[N].Car.Hid.Proyecto_Comunitario_Socio_Energetico_VIII;
        Cont = Cont + 1;

    }

    if (Est[N].UC_Aprobadas >= 140)
    {

        cout << "Electiva Profesional (Calidad): " << Est[N].Car.Hid.Electiva_Profesional_Gestion_y_Control_de_Calidad << endl;
        Suma = Suma + Est[N].Car.Hid.Electiva_Profesional_Gestion_y_Control_de_Calidad;
        Cont = Cont + 1;

    }

    if (Est[N].Car.Hid.Ingenieria_de_Produccion_I >= 5.5)
    {

        cout << "Ingenieria de Produccion II: " << Est[N].Car.Hid.Ingenieria_de_Produccion_II << endl;
        Suma = Suma + Est[N].Car.Hid.Ingenieria_de_Produccion_II;
        Cont = Cont + 1;

    }

    if (Est[N].Car.Hid.Proyecto_Comunitario_Socio_Energetico_VIII >= 5.5)
    {

        cout << "Trabajo Especial de Grado: " << Est[N].Car.Hid.Trabajo_Especial_de_Grado << endl;
        Suma = Suma + Est[N].Car.Hid.Trabajo_Especial_de_Grado;
        Cont = Cont + 1;

    }

    if (Est[N].Car.Hid.Recuperacion_Secundaria_de_Yacimientos >= 5.5)
    {

        cout << "Recuperacion Mejorada: " << Est[N].Car.Hid.Recuperacion_Mejorada << endl;
        Suma = Suma + Est[N].Car.Hid.Recuperacion_Mejorada;
        Cont = Cont + 1;

    }

    if (Cont > 0)
    {
        cout << endl << YELLOW << "Promedio Academico: " << RESET << Suma / Cont << endl;
        Continue();
    }

}