#include "../../../Main/Header.h"
using namespace std;

void Hist_Civ (Variables (&Var), Estudiante (&Est)[D])
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

        cout << "Ingles Tecnico: " << Est[N].Car.Civ.Ingles_Tecnico << endl;
        cout << "Tecnicas de Estudio y Documentacion: " << Est[N].Car.Civ.Tecnicas_de_Estudio_y_Documentacion << endl;
        cout << "Geometria Descriptiva I: " << Est[N].Car.Civ.Geometria_Descriptiva_I << endl;
        cout << "Calculo I: " << Est[N].Car.Civ.Calculo_I << endl;
        cout << "Metodologia del Razonamiento Logico: " << Est[N].Car.Civ.Metodos_del_Razonamiento_Logico << endl;
        cout << "Arte y Cultura: " << Est[N].Car.Civ.Arte_y_Cultura << endl;

        Suma = Suma + (Est[N].Car.Civ.Ingles_Tecnico + Est[N].Car.Civ.Tecnicas_de_Estudio_y_Documentacion + Est[N].Car.Civ.Geometria_Descriptiva_I + Est[N].Car.Civ.Calculo_I + Est[N].Car.Civ.Metodos_del_Razonamiento_Logico + Est[N].Car.Civ.Arte_y_Cultura);
        Cont = Cont + 6;

    }

    if (Est[N].Car.Civ.Calculo_I >= 5.5)
    {

        cout << "Calculo II: " << Est[N].Car.Civ.Calculo_II << endl;
        cout << "Fisica I: " << Est[N].Car.Civ.Fisica_I << endl;
        Suma = Suma + (Est[N].Car.Civ.Calculo_II + Est[N].Car.Civ.Fisica_I);
        Cont = Cont + 2;

    }

    if (Est[N].Car.Civ.Geometria_Descriptiva_I >= 5.5)
    {

        cout << "Geometria Descriptiva II: " << Est[N].Car.Civ.Geometria_Descriptiva_II << endl;
        Suma = Suma + Est[N].Car.Civ.Geometria_Descriptiva_II;
        Cont = Cont + 1;

    }

    if (Est[N].UC_Aprobadas >= 4)
    {

        cout << "Introduccion a las Ciencias Humanas: " << Est[N].Car.Civ.Introduccion_a_las_Ciencias_Humanas << endl;
        cout << "Sociedad Ciencia y Tecnologia: " << Est[N].Car.Civ.Sociedad_Ciencia_y_Tecnologia << endl;
        Suma = Suma + (Est[N].Car.Civ.Introduccion_a_las_Ciencias_Humanas + Est[N].Car.Civ.Sociedad_Ciencia_y_Tecnologia);
        Cont = Cont + 2;

    }

    if (Est[N].Car.Civ.Fisica_I >= 5.5)
    {

        cout << "Fisica II: " << Est[N].Car.Civ.Fisica_II << endl;
        cout << "Mecanica Racional I: " << Est[N].Car.Civ.Mecanica_Racional_I << endl;
        Suma = Suma + (Est[N].Car.Civ.Fisica_II + Est[N].Car.Civ.Mecanica_Racional_I);
        Cont = Cont + 2;

    }

    if (Est[N].Car.Civ.Calculo_II >= 5.5)
    {

        cout << "Calculo III: " << Est[N].Car.Civ.Calculo_III << endl;
        Suma = Suma + Est[N].Car.Civ.Calculo_III;
        Cont = Cont + 1;

    }

    if (Est[N].Car.Civ.Metodos_del_Razonamiento_Logico >= 5.5)
    {

        cout << "Informatica para Ingenieros: " << Est[N].Car.Civ.Informatica_para_Ingenieros << endl;
        Suma = Suma + Est[N].Car.Civ.Informatica_para_Ingenieros;
        Cont = Cont + 1;

    }

    if (Est[N].UC_Aprobadas >= 21)
    {

        cout << "Quimica Basica: " << Est[N].Car.Civ.Quimica_Basica << endl;
        cout << "Deportes: " << Est[N].Car.Civ.Deportes << endl;
        Suma = Suma + (Est[N].Car.Civ.Quimica_Basica + Est[N].Car.Civ.Deportes);
        Cont = Cont + 2;

    }

    if (Est[N].Car.Civ.Mecanica_Racional_I >= 5.5)
    {

        cout << "Mecanica Racional II: " << Est[N].Car.Civ.Mecanica_Racional_II << endl;
        Suma = Suma + Est[N].Car.Civ.Mecanica_Racional_II;
        Cont = Cont + 1;

    }

    if (Est[N].Car.Civ.Quimica_Basica >= 5.5)
    {

        cout << "Quimica Aplicada: " << Est[N].Car.Civ.Quimica_Aplicada << endl;
        Suma = Suma + Est[N].Car.Civ.Quimica_Aplicada;
        Cont = Cont + 1;

    }

    if (Est[N].Car.Civ.Calculo_III >= 5.5)
    {

        cout << "Topografia: " << Est[N].Car.Civ.Topografia << endl;
        cout << "Calculo IV: " << Est[N].Car.Civ.Calculo_IV << endl;
        cout << "Estadistica para Ingenieros: " << Est[N].Car.Civ.Estadistica_para_Ingenieros << endl;
        Suma = Suma + (Est[N].Car.Civ.Topografia + Est[N].Car.Civ.Calculo_IV + Est[N].Car.Civ.Estadistica_para_Ingenieros);
        Cont = Cont + 3;

    }

    if (Est[N].UC_Aprobadas >= 40)
    {

        cout << "Electiva no Tecnica: " << Est[N].Car.Civ.Electiva_No_Tecnica << endl;
        Suma = Suma + Est[N].Car.Civ.Electiva_No_Tecnica;
        Cont = Cont + 1;

    }

    if (Est[N].Car.Civ.Geometria_Descriptiva_II >= 5.5 && Est[N].Car.Civ.Quimica_Aplicada >= 5.5 && Est[N].Car.Civ.Topografia >= 5.5)
    {

        cout << "Geologia Aplicada: " << Est[N].Car.Civ.Geologia_Aplicada << endl;
        Suma = Suma + Est[N].Car.Civ.Geologia_Aplicada;
        Cont = Cont + 1;

    }

    if (Est[N].Car.Civ.Mecanica_Racional_II >= 5.5 && Est[N].Car.Civ.Calculo_IV >= 5.5)
    {

        cout << "Resistencia de Materiales: " << Est[N].Car.Civ.Resistencia_de_Materiales << endl;
        Suma = Suma + Est[N].Car.Civ.Resistencia_de_Materiales;
        Cont = Cont + 1;

    }

    if (Est[N].UC_Aprobadas >= 60 && Est[N].Car.Civ.Electiva_No_Tecnica >= 5.5)
    {

        cout << "Electiva No Tecnica II: " << Est[N].Car.Civ.Electiva_No_Tecnica_II << endl;
        Suma = Suma + Est[N].Car.Civ.Electiva_No_Tecnica_II;
        Cont = Cont + 1;

    }

    if (Est[N].Car.Civ.Estadistica_para_Ingenieros >= 5.5 && Est[N].Car.Civ.Quimica_Aplicada >= 5.5)
    {

        cout << "Materiales y Ensayos: " << Est[N].Car.Civ.Materiales_y_Ensayos << endl;
        Suma = Suma + Est[N].Car.Civ.Materiales_y_Ensayos;
        Cont = Cont + 1;

    }

    if (Est[N].Car.Civ.Mecanica_Racional_II >= 5.5 && Est[N].Car.Civ.Quimica_Aplicada >= 5.5)
    {

        cout << "Mecanica de Fluidos I: " << Est[N].Car.Civ.Mecanica_de_Fluidos_I << endl;
        Suma = Suma + Est[N].Car.Civ.Mecanica_de_Fluidos_I;
        Cont = Cont + 1;

    }

    if (Est[N].Car.Civ.Calculo_IV >= 5.5)
    {

        cout << "Calculo V: " << Est[N].Car.Civ.Calculo_V << endl;
        Suma = Suma + Est[N].Car.Civ.Calculo_V;
        Cont = Cont + 1;

    }

    if (Est[N].Car.Civ.Geologia_Aplicada >= 5.5 && Est[N].Car.Civ.Materiales_y_Ensayos >= 5.5)
    {

        cout << "Mecanica de Suelos: " << Est[N].Car.Civ.Mecanica_de_Suelos << endl;
        Suma = Suma + Est[N].Car.Civ.Mecanica_de_Suelos;
        Cont = Cont + 1;

    }

    if (Est[N].Car.Civ.Quimica_Aplicada >= 5.5 && Est[N].Car.Civ.Mecanica_de_Fluidos_I >= 5.5)
    {

        cout << "H y San Ambiental: " << Est[N].Car.Civ.H_y_San_Ambiental << endl;
        Suma = Suma + Est[N].Car.Civ.H_y_San_Ambiental;
        Cont = Cont + 1;

    }

    if (Est[N].Car.Civ.Resistencia_de_Materiales >= 5.5)
    {

        cout << "Teorias de Estructuras I: " << Est[N].Car.Civ.Teorias_de_Estructuras_I << endl;
        Suma = Suma + Est[N].Car.Civ.Teorias_de_Estructuras_I;
        Cont = Cont + 1;

    }

    if (Est[N].Car.Civ.Geometria_Descriptiva_II >= 5.5 && Est[N].Car.Civ.Topografia >= 5.5)
    {

        cout << "Dibujo de Proyectos: " << Est[N].Car.Civ.Dibujo_de_Proyectos << endl;
        Suma = Suma + Est[N].Car.Civ.Dibujo_de_Proyectos;
        Cont = Cont + 1;

    }

    if (Est[N].Car.Civ.Mecanica_de_Fluidos_I >= 5.5 && Est[N].Car.Civ.Geologia_Aplicada >= 5.5)
    {

        cout << "Hidrologia: " << Est[N].Car.Civ.Hidrologia << endl;
        Suma = Suma + Est[N].Car.Civ.Hidrologia;
        Cont = Cont + 1;

    }

    if (Est[N].Car.Civ.Mecanica_de_Fluidos_I >= 5.5)
    {

        cout << "Mecanica de Fluidos II: " << Est[N].Car.Civ.Mecanica_de_Fluidos_II << endl;
        Suma = Suma + Est[N].Car.Civ.Mecanica_de_Fluidos_II;
        Cont = Cont + 1;

    }

    if (Est[N].Car.Civ.Teorias_de_Estructuras_I >= 5.5)
    {

        cout << "Teorias de Estructuras II: " << Est[N].Car.Civ.Teorias_de_Estructuras_II << endl;
        Suma = Suma + Est[N].Car.Civ.Teorias_de_Estructuras_II;
        Cont = Cont + 1;

    }

    if (Est[N].UC_Aprobadas >= 100 && Est[N].Car.Civ.Estadistica_para_Ingenieros >= 5.5)
    {

        cout << "Ingenieria Economica: " << Est[N].Car.Civ.Ingenieria_Economica << endl;
        Suma = Suma + Est[N].Car.Civ.Ingenieria_Economica;
        Cont = Cont + 1;

    }

    if (Est[N].Car.Civ.H_y_San_Ambiental >= 5.5 && Est[N].Car.Civ.Mecanica_de_Fluidos_II >= 5.5 && Est[N].Car.Civ.Dibujo_de_Proyectos >= 5.5)
    {

        cout << "Instalaciones para Edificios: " << Est[N].Car.Civ.Instalaciones_para_Edificios << endl;
        Suma = Suma + Est[N].Car.Civ.Instalaciones_para_Edificios;
        Cont = Cont + 1;

    }

    if (Est[N].Car.Civ.Estadistica_para_Ingenieros >= 5.5)
    {

        cout << "Metodologia de la Investigacion: " << Est[N].Car.Civ.Metodologia_de_la_Investigacion << endl;
        Suma = Suma + Est[N].Car.Civ.Metodologia_de_la_Investigacion;
        Cont = Cont + 1;

    }

    if (Est[N].Car.Civ.Topografia >= 5.5 && Est[N].Car.Civ.Mecanica_de_Fluidos_II >= 5.5)
    {

        cout << "Acueductos y Cloacas: " << Est[N].Car.Civ.Acueductos_y_Cloacas << endl;
        Suma = Suma + Est[N].Car.Civ.Acueductos_y_Cloacas;
        Cont = Cont + 1;

    }

    if (Est[N].UC_Aprobadas >= 126 && Est[N].Car.Civ.Electiva_No_Tecnica_II >= 5.5)
    {

        cout << "Electiva Tecnica: " << Est[N].Car.Civ.Electiva_Tecnica << endl;
        Suma = Suma + Est[N].Car.Civ.Electiva_Tecnica;
        Cont = Cont + 1;

    }

    if (Est[N].Car.Civ.Electiva_Tecnica >= 5.5)
    {

        cout << "Electiva Tecnica II: " << Est[N].Car.Civ.Electiva_Tecnica_II << endl;
        Suma = Suma + Est[N].Car.Civ.Electiva_Tecnica_II;
        Cont = Cont + 1;

    }

    if (Est[N].Car.Civ.Acueductos_y_Cloacas >= 5.5 && Est[N].Car.Civ.Hidrologia >= 5.5)
    {

        cout << "Obras Hidraulicas: " << Est[N].Car.Civ.Obras_Hidraulicas << endl;
        Suma = Suma + Est[N].Car.Civ.Obras_Hidraulicas;
        Cont = Cont + 1;

    }

    if (Est[N].UC_Aprobadas >= 130)
    {

        cout << "Practica Profesional: " << Est[N].Car.Civ.Practica_Profesional << endl;
        Suma = Suma + Est[N].Car.Civ.Practica_Profesional;
        Cont = Cont + 1;

    }

    if (Est[N].Car.Civ.Materiales_y_Ensayos >= 5.5 && Est[N].Car.Civ.Teorias_de_Estructuras_II >= 5.5)
    {

        cout << "Concreto Armado: " << Est[N].Car.Civ.Concreto_Armado << endl;
        Suma = Suma + Est[N].Car.Civ.Concreto_Armado;
        Cont = Cont + 1;

    }

    if (Est[N].Car.Civ.Topografia >= 5.5 && Est[N].Car.Civ.Electiva_Tecnica >= 5.5)
    {

        cout << "Vias de Comunicacion I: " << Est[N].Car.Civ.Vias_de_Comunicacion_I << endl;
        Suma = Suma + Est[N].Car.Civ.Vias_de_Comunicacion_I;
        Cont = Cont + 1;

    }

    if (Est[N].Car.Civ.Mecanica_de_Suelos >= 5.5)
    {

        cout << "Proyectos Estructurales de Acero: " << Est[N].Car.Civ.Proyectos_Estructurales_de_Acero << endl;
        Suma = Suma + Est[N].Car.Civ.Proyectos_Estructurales_de_Acero;
        Cont = Cont + 1;

    }

    if (Est[N].UC_Aprobadas >= 150)
    {

        cout << "Practica Comunitaria: " << Est[N].Car.Civ.Practica_Comunitaria << endl;
        Suma = Suma + Est[N].Car.Civ.Practica_Comunitaria;
        Cont = Cont + 1;

    }

    if (Est[N].UC_Aprobadas >= 161 && Est[N].Car.Civ.Practica_Profesional >= 5.5)
    {

        cout << "Trabajo Especial de Grado I: " << Est[N].Car.Civ.Trabajo_Especial_de_Grado_I << endl;
        Suma = Suma + Est[N].Car.Civ.Trabajo_Especial_de_Grado_I;
        Cont = Cont + 1;

    }

    if (Est[N].Car.Civ.Concreto_Armado >= 5.5)
    {

        cout << "Concreto Pretenzado: " << Est[N].Car.Civ.Concreto_Pretenzado << endl;
        Suma = Suma + Est[N].Car.Civ.Concreto_Pretenzado;
        Cont = Cont + 1;

    }

    if (Est[N].Car.Civ.Concreto_Armado >= 5.5 && Est[N].Car.Civ.Mecanica_de_Suelos >= 5.5)
    {

        cout << "Fundaciones y Muros: " << Est[N].Car.Civ.Fundaciones_y_Muros << endl;
        Suma = Suma + Est[N].Car.Civ.Fundaciones_y_Muros;
        Cont = Cont + 1;

    }

    if (Est[N].Car.Civ.Vias_de_Comunicacion_I >= 5.5)
    {

        cout << "Vias de Comunicacion II: " << Est[N].Car.Civ.Vias_de_Comunicacion_II << endl;
        cout << "Pavimentos: " << Est[N].Car.Civ.Pavimentos << endl;
        Suma = Suma + (Est[N].Car.Civ.Vias_de_Comunicacion_II + Est[N].Car.Civ.Pavimentos);
        Cont = Cont + 2;

    }

    if (Est[N].Car.Civ.Concreto_Armado >= 5.5 && Est[N].Car.Civ.Fundaciones_y_Muros >= 5.5)
    {

        cout << "Proyectos Estructurales de Concreto: " << Est[N].Car.Civ.Proyectos_Estructurales_de_Concreto << endl;
        Suma = Suma + Est[N].Car.Civ.Proyectos_Estructurales_de_Concreto;
        Cont = Cont + 1;

    }

    if (Est[N].Car.Civ.Trabajo_Especial_de_Grado_I >= 5.5)
    {

        cout << "Trabajo Especial de Grado II: " << Est[N].Car.Civ.Trabajo_Especial_de_Grado_II << endl;
        Suma = Suma + Est[N].Car.Civ.Trabajo_Especial_de_Grado_II;
        Cont = Cont + 1;

    }

    if (Est[N].UC_Aprobadas >= 171)
    {

        cout << "Administracion de Obras: " << Est[N].Car.Civ.Administracion_de_Obras << endl;
        Suma = Suma + Est[N].Car.Civ.Administracion_de_Obras;
        Cont = Cont + 1;

    }

    if (Est[N].Car.Civ.Concreto_Pretenzado >= 5.5)
    {

        cout << "Puentes: " << Est[N].Car.Civ.Puentes << endl;
        Suma = Suma + Est[N].Car.Civ.Puentes;
        Cont = Cont + 1;

    }

    if (Cont > 0)
    {
        cout << endl << YELLOW << "Promedio Academico: " << RESET << Suma / Cont << endl;
        Continue();
    }

}