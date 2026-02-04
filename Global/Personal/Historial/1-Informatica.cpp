#include "../../../Main/Header.h"
using namespace std;

void Hist_Inf (Variables (&Var), Estudiante (&Est)[D])
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

        cout << "Matematica I: " << Est[N].Car.Inf.Matematica_I << endl;
        cout << "Fundamentos De La Informatica: " << Est[N].Car.Inf.Fundamentos_de_la_Informatica << endl;
        cout << "Logica Matematica: " << Est[N].Car.Inf.Logica_Matematica << endl;
        cout << "Lenguaje Y Comunicacion: " << Est[N].Car.Inf.Lenguaje_y_Comunicacion << endl;
        cout << "Ingles I: " << Est[N].Car.Inf.Ingles_I << endl;
        cout << "Formacion Constitucional: " << Est[N].Car.Inf.Formacion_Constitucional << endl;
        cout << "Economia Digital: " << Est[N].Car.Inf.Economia_Digital << endl;
        cout << "Deporte: " << Est[N].Car.Inf.Deportes << endl;

        Suma = Suma + (Est[N].Car.Inf.Matematica_I + Est[N].Car.Inf.Fundamentos_de_la_Informatica + Est[N].Car.Inf.Logica_Matematica + Est[N].Car.Inf.Lenguaje_y_Comunicacion + Est[N].Car.Inf.Ingles_I + Est[N].Car.Inf.Formacion_Constitucional + Est[N].Car.Inf.Economia_Digital + Est[N].Car.Inf.Deportes);
        Cont = Cont + 8;

    }

    if (Est[N].Car.Inf.Matematica_I >= 5.5)
    {

        cout << "Matematica II: " << Est[N].Car.Inf.Matematica_II << endl;
        Suma = Suma + Est[N].Car.Inf.Matematica_II;
        Cont = Cont + 1;

    }

    if (Est[N].Car.Inf.Fundamentos_de_la_Informatica >= 5.5)
    {

        cout << "Algoritmos I: " << Est[N].Car.Inf.Algoritmos_I << endl;
        Suma = Suma + Est[N].Car.Inf.Algoritmos_I;
        Cont = Cont + 1;

    }

    if (Est[N].Car.Inf.Ingles_I >= 5.5)
    {

        cout << "Ingles II: " << Est[N].Car.Inf.Ingles_II << endl;
        Suma = Suma + Est[N].Car.Inf.Ingles_II;
        Cont = Cont + 1;

    }

    if (Est[N].UC_Aprobadas >= 13)
    {

        cout << "Problematica Cientifica Tecnologica: " << Est[N].Car.Inf.Problematica_Cientifica_Tecnologica << endl;
        Suma = Suma + Est[N].Car.Inf.Problematica_Cientifica_Tecnologica;
        Cont = Cont + 1;

    }

    if (Est[N].Car.Inf.Formacion_Constitucional >= 5.5)
    {

        cout << "Arte y Cultura: " << Est[N].Car.Inf.Arte_y_Cultura << endl;
        Suma = Suma + Est[N].Car.Inf.Arte_y_Cultura;
        Cont = Cont + 1;

    }

    if (Est[N].UC_Aprobadas >= 13)
    {

        cout << "Electiva I: " << Est[N].Car.Inf.Electiva_I << endl;
        Suma = Suma + Est[N].Car.Inf.Electiva_I;
        Cont = Cont + 1;

    }

    if (Est[N].Car.Inf.Matematica_II >= 5.5)
    {

        cout << "Matematica III: " << Est[N].Car.Inf.Matematica_III << endl;
        Suma = Suma + Est[N].Car.Inf.Matematica_III;
        Cont = Cont + 1;

    }

    if (Est[N].Car.Inf.Matematica_I >= 5.5)
    {

        cout << "Fisica I: " << Est[N].Car.Inf.Fisica_I << endl;
        Suma = Suma + Est[N].Car.Inf.Fisica_I;
        Cont = Cont + 1;

    }

    if (Est[N].Car.Inf.Algoritmos_I >= 5.5)
    {

        cout << "Algoritmos II: " << Est[N].Car.Inf.Algoritmos_II << endl;
        cout << "Programacion I: " << Est[N].Car.Inf.Programacion_I << endl;
        Suma = Suma + (Est[N].Car.Inf.Algoritmos_II + Est[N].Car.Inf.Programacion_I);
        Cont = Cont + 2;

    }

    if (Est[N].Car.Inf.Electiva_I >= 5.5)
    {

        cout << "Electiva II: " << Est[N].Car.Inf.Electiva_II << endl;
        Suma = Suma + Est[N].Car.Inf.Electiva_II;
        Cont = Cont + 1;

    }

    if (Est[N].UC_Aprobadas >= 30)
    {

        cout << "Tecnicas de Investigacion: " << Est[N].Car.Inf.Metodologia_y_Tecnicas_de_Investigacion << endl;
        Suma = Suma + Est[N].Car.Inf.Metodologia_y_Tecnicas_de_Investigacion;
        Cont = Cont + 1;

    }

    if (Est[N].Car.Inf.Matematica_III >= 5.5)
    {

        cout << "Matematica IV: " << Est[N].Car.Inf.Matematica_IV << endl;
        cout << "Probabilidad y Estadistica: " << Est[N].Car.Inf.Probabilidad_y_Estadistica << endl;
        Suma = Suma + (Est[N].Car.Inf.Matematica_IV + Est[N].Car.Inf.Probabilidad_y_Estadistica);
        Cont = Cont + 2;

    }

    if (Est[N].Car.Inf.Fisica_I >= 5.5)
    {

        cout << "Fisica II: " << Est[N].Car.Inf.Fisica_II << endl;
        Suma = Suma + Est[N].Car.Inf.Fisica_II;
        Cont = Cont + 1;

    }

    if (Est[N].Car.Inf.Algoritmos_II >= 5.5)
    {

        cout << "Estructuras Discretas I: " << Est[N].Car.Inf.Estructuras_Discretas_I << endl;
        Suma = Suma + Est[N].Car.Inf.Estructuras_Discretas_I;
        Cont = Cont + 1;

    }

    if (Est[N].Car.Inf.Programacion_I >= 5.5)
    {

        cout << "Programacion II: " << Est[N].Car.Inf.Programacion_II << endl;
        cout << "Base de Datos: " << Est[N].Car.Inf.Base_de_Datos << endl;
        Suma = Suma + (Est[N].Car.Inf.Programacion_II + Est[N].Car.Inf.Base_de_Datos);
        Cont = Cont + 2;

    }

    if (Est[N].Car.Inf.Electiva_II >= 5.5)
    {

        cout << "Electiva III: " << Est[N].Car.Inf.Electiva_III << endl;
        Suma = Suma + Est[N].Car.Inf.Electiva_III;
        Cont = Cont + 1;

    }

    if (Est[N].Car.Inf.Fisica_II >= 5.5)
    {

        cout << "Organizacion del Computador: " << Est[N].Car.Inf.Organizacion_del_Computador << endl;
        Suma = Suma + Est[N].Car.Inf.Organizacion_del_Computador;
        Cont = Cont + 1;

    }

    if (Est[N].Car.Inf.Estructuras_Discretas_I >= 5.5)
    {

        cout << "Algebra Booleana: " << Est[N].Car.Inf.Algebra_Booleana << endl;
        cout << "Estructuras Discretas II: " << Est[N].Car.Inf.Estructuras_Discretas_II << endl;
        Suma = Suma + (Est[N].Car.Inf.Algebra_Booleana + Est[N].Car.Inf.Estructuras_Discretas_II);
        Cont = Cont + 2;

    }

    if (Est[N].Car.Inf.Programacion_II >= 5.5)
    {

        cout << "Programacion III: " << Est[N].Car.Inf.Programacion_III << endl;
        Suma = Suma + Est[N].Car.Inf.Programacion_III;
        Cont = Cont + 1;

    }

    if (Est[N].Car.Inf.Electiva_III >= 5.5)
    {

        cout << "Electiva IV: " << Est[N].Car.Inf.Electiva_IV << endl;
        Suma = Suma + Est[N].Car.Inf.Electiva_IV;
        Cont = Cont + 1;

    }

    if (Est[N].UC_Aprobadas >= 50)
    {

        cout << "Teoria de Sistemas: " << Est[N].Car.Inf.Teoria_de_Sistemas << endl;
        Suma = Suma + Est[N].Car.Inf.Teoria_de_Sistemas;
        Cont = Cont + 1;

    }

    if (Est[N].Car.Inf.Organizacion_del_Computador >= 5.5)
    {

        cout << "Arquitectura del Computador: " << Est[N].Car.Inf.Arquitectura_del_Computador << endl;
        Suma = Suma + Est[N].Car.Inf.Arquitectura_del_Computador;
        Cont = Cont + 1;

    }

    if (Est[N].Car.Inf.Matematica_IV >= 5.5)
    {

        cout << "Metodos Numericos: " << Est[N].Car.Inf.Metodos_Numericos << endl;
        Suma = Suma + Est[N].Car.Inf.Metodos_Numericos;
        Cont = Cont + 1;

    }

    if (Est[N].Car.Inf.Probabilidad_y_Estadistica >= 5.5)
    {

        cout << "Investigacion de Operaciones: " << Est[N].Car.Inf.Investigacion_de_Operaciones << endl;
        Suma = Suma + Est[N].Car.Inf.Investigacion_de_Operaciones;
        Cont = Cont + 1;

    }

    if (Est[N].Car.Inf.Teoria_de_Sistemas >= 5.5)
    {

        cout << "Sistemas de Informacion I: " << Est[N].Car.Inf.Sistemas_de_Informacion_I << endl;
        Suma = Suma + Est[N].Car.Inf.Sistemas_de_Informacion_I;
        Cont = Cont + 1;

    }

    if (Est[N].Car.Inf.Electiva_IV >= 5.5)
    {

        cout << "Electiva V: " << Est[N].Car.Inf.Electiva_V << endl;
        Suma = Suma + Est[N].Car.Inf.Electiva_V;
        Cont = Cont + 1;

    }

    if (Est[N].UC_Aprobadas >= 70)
    {

        cout << "Ingenieria Economica: " << Est[N].Car.Inf.Ingenieria_Economica << endl;
        Suma = Suma + Est[N].Car.Inf.Ingenieria_Economica;
        Cont = Cont + 1;

    }

    if (Est[N].Car.Inf.Arquitectura_del_Computador >= 5.5)
    {

        cout << "Sistemas Operativos: " << Est[N].Car.Inf.Sistemas_Operativos << endl;
        Suma = Suma + Est[N].Car.Inf.Sistemas_Operativos;
        Cont = Cont + 1;

    }

    if (Est[N].Car.Inf.Estructuras_Discretas_II >= 5.5)
    {

        cout << "Traductores e Interpretes: " << Est[N].Car.Inf.Traductores_e_Interpretes << endl;
        Suma = Suma + Est[N].Car.Inf.Traductores_e_Interpretes;
        Cont = Cont + 1;

    }

    if (Est[N].Car.Inf.Sistemas_de_Informacion_I >= 5.5)
    {

        cout << "Sistemas de Informacion II: " << Est[N].Car.Inf.Sistemas_de_Informacion_II << endl;
        Suma = Suma + Est[N].Car.Inf.Sistemas_de_Informacion_II;
        Cont = Cont + 1;

    }

    if (Est[N].UC_Aprobadas >= 86)
    {

        cout << "Control de Proyectos: " << Est[N].Car.Inf.Control_de_Proyectos << endl;
        cout << "Gestion Empresarial: " << Est[N].Car.Inf.Gestion_Empresarial << endl;
        Suma = Suma + (Est[N].Car.Inf.Control_de_Proyectos + Est[N].Car.Inf.Gestion_Empresarial);
        Cont = Cont + 2;

    }

    if (Est[N].Car.Inf.Sistemas_Operativos >= 5.5)
    {

        cout << "Redes: " << Est[N].Car.Inf.Redes << endl;
        Suma = Suma + Est[N].Car.Inf.Redes;
        Cont = Cont + 1;

    }

    if (Est[N].Car.Inf.Traductores_e_Interpretes >= 5.5)
    {

        cout << "Lenguajes de Programacion: " << Est[N].Car.Inf.Lenguajes_de_Programacion << endl;
        Suma = Suma + Est[N].Car.Inf.Lenguajes_de_Programacion;
        Cont = Cont + 1;

    }

    if (Est[N].Car.Inf.Sistemas_de_Informacion_II >= 5.5)
    {

        cout << "Sistemas de Informacion III: " << Est[N].Car.Inf.Sistemas_de_Informacion_III << endl;
        cout << "Etica Profesional: " << Est[N].Car.Inf.Etica_Profesional << endl;
        Suma = Suma + (Est[N].Car.Inf.Sistemas_de_Informacion_III + Est[N].Car.Inf.Etica_Profesional);
        Cont = Cont + 2;

    }

    if (Est[N].Car.Inf.Gestion_Empresarial >= 5.5)
    {

        cout << "Pasantias: " << Est[N].Car.Inf.Pasantias << endl;
        Suma = Suma + Est[N].Car.Inf.Pasantias;
        Cont = Cont + 1;

    }

    if (Est[N].UC_Aprobadas >= 100)
    {

        cout << "Electiva de Area I: " << Est[N].Car.Inf.Electiva_de_Area_I << endl;
        Suma = Suma + Est[N].Car.Inf.Electiva_de_Area_I;
        Cont = Cont + 1;

    }

    if (Est[N].Car.Inf.Redes >= 5.5)
    {

        cout << "Sistemas Distribuidos: " << Est[N].Car.Inf.Sistemas_Distribuidos << endl;
        Suma = Suma + Est[N].Car.Inf.Sistemas_Distribuidos;
        Cont = Cont + 1;

    }

    if (Est[N].UC_Aprobadas >= 136)
    {

        cout << "Electiva Libre I: " << Est[N].Car.Inf.Electiva_Libre_I << endl;
        Suma = Suma + Est[N].Car.Inf.Electiva_Libre_I;
        Cont = Cont + 1;

    }

    if (Est[N].UC_Aprobadas >= 157)
    {

        cout << "Proyecto de Grado I: " << Est[N].Car.Inf.Proyecto_de_Grado_I << endl;
        cout << "Informatica Educativa: " << Est[N].Car.Inf.Informatica_Educativa << endl;
        Suma = Suma + (Est[N].Car.Inf.Proyecto_de_Grado_I + Est[N].Car.Inf.Informatica_Educativa);
        Cont = Cont + 2;

    }

    if (Est[N].Car.Inf.Electiva_de_Area_I >= 5.5)
    {

        cout << "Electiva de Area II: " << Est[N].Car.Inf.Electiva_de_Area_II << endl;
        Suma = Suma + Est[N].Car.Inf.Electiva_de_Area_II;
        Cont = Cont + 1;

    }

    if (Est[N].Car.Inf.Electiva_Libre_I >= 5.5)
    {

        cout << "Electiva Libre II: " << Est[N].Car.Inf.Electiva_Libre_II << endl;
        Suma = Suma + Est[N].Car.Inf.Electiva_Libre_II;
        Cont = Cont + 1;

    }

    if (Est[N].Car.Inf.Pasantias >= 5.5)
    {

        cout << "Gerencia de Proyectos: " << Est[N].Car.Inf.Gerencia_de_Proyectos << endl;
        Suma = Suma + Est[N].Car.Inf.Gerencia_de_Proyectos;
        Cont = Cont + 1;

    }

    if (Est[N].Car.Inf.Proyecto_de_Grado_I >= 5.5)
    {

        cout << "Proyecto de Grado II: " << Est[N].Car.Inf.Proyecto_de_Grado_II << endl;
        Suma = Suma + Est[N].Car.Inf.Proyecto_de_Grado_II;
        Cont = Cont + 1;

    }

    if (Est[N].Car.Inf.Electiva_de_Area_II >= 5.5)
    {

        cout << "Electiva de Area III: " << Est[N].Car.Inf.Electiva_de_Area_III << endl;
        Suma = Suma + Est[N].Car.Inf.Electiva_de_Area_III;
        Cont = Cont + 1;

    }

    if (Cont > 0)
    {
        cout << endl << YELLOW << "Promedio Academico: " << RESET << Suma / Cont << endl;
        Continue();
    }

}