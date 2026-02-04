#include "../../../Main/Header.h"
using namespace std;

void Inf_Est (Variables (&Var), Estudiante (&Est)[D], Clase (&Class)[D], Clase_Magistral (&Mag)[D], Profesor (&Prof)[D])
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

        cout << CYAN << "Seleccione la materia que desea inscribir" << RESET << endl;

        if (Est[N].UC_Aprobadas == 0)
        {
            cout << n++ << ": Matemática I" << endl;
            Materias[Total++] = "Matemática I";
            cout << n++ << ": Fundamentos de la Informática" << endl;
            Materias[Total++] = "Fundamentos de la Informática";
            cout << n++ << ": Lógica Matemática" << endl;
            Materias[Total++] = "Lógica Matemática";
            cout << n++ << ": Lenguaje y Comunicación" << endl;
            Materias[Total++] = "Lenguaje y Comunicación";
            cout << n++ << ": Ingles I" << endl;
            Materias[Total++] = "Ingles I";
            cout << n++ << ": Formacion Constitucional" << endl;
            Materias[Total++] = "Formacion Constitucional";
            cout << n++ << ": Economía Digital" << endl;
            Materias[Total++] = "Economía Digital";
            cout << n++ << ": Deportes" << endl;
            Materias[Total++] = "Deportes";
        }

        if (Est[N].UC_Aprobadas > 0 && 5.5 > Est[N].Car.Inf.Lenguaje_y_Comunicacion)
        {
            cout << n++ << ": Lenguaje y Comunicación" << endl;
            Materias[Total++] = "Lenguaje y Comunicación";
        }

        if (Est[N].UC_Aprobadas > 0 && 5.5 > Est[N].Car.Inf.Economia_Digital)
        {
            cout << n++ << ": Economía Digital" << endl;
            Materias[Total++] = "Economía Digital";
        }

        if (Est[N].UC_Aprobadas > 0 && 5.5 > Est[N].Car.Inf.Deportes)
        {
            cout << n++ << ": Deportes" << endl;
            Materias[Total++] = "Deportes";
        }

        if (Est[N].Car.Inf.Matematica_I > 5.5 && 5.5 > Est[N].Car.Inf.Matematica_II)
        {
            cout << n++ << ": Matemática III" << endl;
            Materias[Total++] = "Matemática III";
        }
        else if (Est[N].UC_Aprobadas > 0 && 5.5 > Est[N].Car.Inf.Matematica_I)
        {
            cout << n++ << ": Matemática I" << endl;
            Materias[Total++] = "Matemática I";
        }

        if (Est[N].Car.Inf.Matematica_I > 5.5 && 5.5 > Est[N].Car.Inf.Fisica_I)
        {
            cout << n++ << ": Física I" << endl;
            Materias[Total++] = "Física I";
        }

        if (Est[N].Car.Inf.Fundamentos_de_la_Informatica > 5.5 && Est[N].Car.Inf.Logica_Matematica > 5.5 && 5.5 > Est[N].Car.Inf.Algoritmos_I)
        {
            cout << n++ << ": Algoritmos I" << endl;
            Materias[Total++] = "Algoritmos I";
        }
        else if (Est[N].UC_Aprobadas > 0 && 5.5 > Est[N].Car.Inf.Fundamentos_de_la_Informatica)
        {
            cout << n++ << ": Fundamentos de la Informática" << endl;
            Materias[Total++] = "Fundamentos de la Informática";
        }
        else if (Est[N].UC_Aprobadas > 0 && 5.5 > Est[N].Car.Inf.Logica_Matematica)
        {
            cout << n++ << ": Lógica Matemática" << endl;
            Materias[Total++] = "Lógica Matemática";
        }

        if (Est[N].Car.Inf.Ingles_I > 5.5 && 5.5 > Est[N].Car.Inf.Ingles_II)
        {
            cout << n++ << ": Ingles II" << endl;
            Materias[Total++] = "Ingles II";
        }
        else if (Est[N].UC_Aprobadas > 0 && 5.5 > Est[N].Car.Inf.Ingles_I)
        {
            cout << n++ << ": Ingles I" << endl;
            Materias[Total++] = "Ingles I";
        }

        if (Est[N].UC_Aprobadas >= 13 && 5.5 > Est[N].Car.Inf.Problematica_Cientifica_Tecnologica)
        {
            cout << n++ << ": Problemática Científica Tecnológica" << endl;
            Materias[Total++] = "Problemática Científica Tecnológica";
        }

        if (Est[N].Car.Inf.Formacion_Constitucional > 5.5 && 5.5 > Est[N].Car.Inf.Arte_y_Cultura)
        {
            cout << n++ << ": Arte y Cultura" << endl;
            Materias[Total++] = "Arte y Cultura";
        }
        else if (Est[N].UC_Aprobadas > 0 && 5.5 > Est[N].Car.Inf.Formacion_Constitucional)
        {
            cout << n++ << ": Formacion Constitucional" << endl;
            Materias[Total++] = "Formacion Constitucional";
        }

        if (Est[N].UC_Aprobadas >= 13 && 5.5 > Est[N].Car.Inf.Electiva_I)
        {
            cout << n++ << ": Electiva I" << endl;
            Materias[Total++] = "Electiva I";
        }

        if (Est[N].Car.Inf.Matematica_II > 5.5 && 5.5 > Est[N].Car.Inf.Matematica_III)
        {
            cout << n++ << ": Matemática III" << endl;
            Materias[Total++] = "Matemática III";
        }

        if (Est[N].Car.Inf.Fisica_I > 5.5 && 5.5 > Est[N].Car.Inf.Fisica_II)
        {
            cout << n++ << ": Física II" << endl;
            Materias[Total++] = "Física II";
        }

        if (Est[N].Car.Inf.Algoritmos_I > 5.5 && 5.5 > Est[N].Car.Inf.Algoritmos_II)
        {
            cout << n++ << ": Algoritmos II" << endl;
            Materias[Total++] = "Algoritmos II";
        }

        if (Est[N].Car.Inf.Algoritmos_I > 5.5 && 5.5 > Est[N].Car.Inf.Programacion_I)
        {
            cout << n++ << ": Programación I" << endl;
            Materias[Total++] = "Programación I";
        }

        if (Est[N].Car.Inf.Electiva_I > 5.5 && 5.5 > Est[N].Car.Inf.Electiva_II)
        {
            cout << n++ << ": Electiva II" << endl;
            Materias[Total++] = "Electiva II";
        }

        if (Est[N].UC_Aprobadas >= 30 && 5.5 > Est[N].Car.Inf.Metodologia_y_Tecnicas_de_Investigacion)
        {
            cout << n++ << ": Metodología y Técnicas de Investigación" << endl;
            Materias[Total++] = "Metodología y Técnicas de Investigación";
        }

        if (Est[N].Car.Inf.Matematica_III > 5.5 && 5.5 > Est[N].Car.Inf.Matematica_IV)
        {
            cout << n++ << ": Matemática IV" << endl;
            Materias[Total++] = "Matemática IV";
        }

        if (Est[N].Car.Inf.Matematica_III > 5.5 && 5.5 > Est[N].Car.Inf.Probabilidad_y_Estadistica)
        {
            cout << n++ << ": Probabilidad y Estadística" << endl;
            Materias[Total++] = "Probabilidad y Estadística";
        }

        if (Est[N].Car.Inf.Algoritmos_II > 5.5 && 5.5 > Est[N].Car.Inf.Estructuras_Discretas_I)
        {
            cout << n++ << ": Estructuras Discretas I" << endl;
            Materias[Total++] = "Estructuras Discretas I";
        }

        if (Est[N].Car.Inf.Programacion_I > 5.5 && Est[N].Car.Inf.Algoritmos_II > 5.5 && 5.5 > Est[N].Car.Inf.Programacion_II)
        {
            cout << n++ << ": Programación II" << endl;
            Materias[Total++] = "Programación II";
        }

        if (Est[N].Car.Inf.Programacion_I > 5.5 && 5.5 > Est[N].Car.Inf.Base_de_Datos)
        {
            cout << n++ << ": Base de Datos" << endl;
            Materias[Total++] = "Base de Datos";
        }

        if (Est[N].Car.Inf.Electiva_II > 5.5 && 5.5 > Est[N].Car.Inf.Electiva_III)
        {
            cout << n++ << ": Electiva III" << endl;
            Materias[Total++] = "Electiva III";
        }

        if (Est[N].Car.Inf.Fisica_II > 5.5 && 5.5 > Est[N].Car.Inf.Organizacion_del_Computador)
        {
            cout << n++ << ": Organización del Computador" << endl;
            Materias[Total++] = "Organización del Computador";
        }

        if (Est[N].Car.Inf.Estructuras_Discretas_I > 5.5 && 5.5 > Est[N].Car.Inf.Algebra_Booleana)
        {
            cout << n++ << ": Algebra Booleana" << endl;
            Materias[Total++] = "Algebra Booleana";
        }

        if (Est[N].Car.Inf.Estructuras_Discretas_I > 5.5 && 5.5 > Est[N].Car.Inf.Estructuras_Discretas_II)
        {
            cout << n++ << ": Estructuras Discretas II" << endl;
            Materias[Total++] = "Estructuras Discretas II";
        }

        if (Est[N].Car.Inf.Programacion_II > 5.5 && 5.5 > Est[N].Car.Inf.Programacion_III)
        {
            cout << n++ << ": Programación III" << endl;
            Materias[Total++] = "Programación III";
        }

        if (Est[N].Car.Inf.Electiva_III > 5.5 && 5.5 > Est[N].Car.Inf.Electiva_IV)
        {
            cout << n++ << ": Electiva IV" << endl;
            Materias[Total++] = "Electiva IV";
        }

        if (Est[N].UC_Aprobadas >= 50 && 5.5 > Est[N].Car.Inf.Teoria_de_Sistemas)
        {
            cout << n++ << ": Teoría de Sistemas" << endl;
            Materias[Total++] = "Teoría de Sistemas";
        }

        if (Est[N].Car.Inf.Organizacion_del_Computador > 5.5 && 5.5 > Est[N].Car.Inf.Arquitectura_del_Computador)
        {
            cout << n++ << ": Arquitectura del Computador" << endl;
            Materias[Total++] = "Arquitectura del Computador";
        }

        if (Est[N].Car.Inf.Matematica_IV > 5.5 && Est[N].Car.Inf.Estructuras_Discretas_II > 5.5 && 5.5 > Est[N].Car.Inf.Metodos_Numericos)
        {
            cout << n++ << ": Métodos Numéricos" << endl;
            Materias[Total++] = "Métodos Numéricos";
        }

        if (Est[N].Car.Inf.Probabilidad_y_Estadistica > 5.5 && 5.5 > Est[N].Car.Inf.Investigacion_de_Operaciones)
        {
            cout << n++ << ": Investigación de Operaciones" << endl;
            Materias[Total++] = "Investigación de Operaciones";
        }

        if (Est[N].Car.Inf.Base_de_Datos > 5.5 && Est[N].Car.Inf.Teoria_de_Sistemas > 5.5 && 5.5 > Est[N].Car.Inf.Sistemas_de_Informacion_I)
        {
            cout << n++ << ": Sistemas de Información I" << endl;
            Materias[Total++] = "Sistemas de Información I";
        }

        if (Est[N].Car.Inf.Electiva_IV > 5.5 && 5.5 > Est[N].Car.Inf.Electiva_V)
        {
            cout << n++ << ": Electiva V" << endl;
            Materias[Total++] = "Electiva V";
        }

        if (Est[N].UC_Aprobadas >= 70 && 5.5 > Est[N].Car.Inf.Ingenieria_Economica)
        {
            cout << n++ << ": Ingeniería Económica" << endl;
            Materias[Total++] = "Ingeniería Económica";
        }

        if (Est[N].Car.Inf.Arquitectura_del_Computador > 5.5 && 5.5 > Est[N].Car.Inf.Sistemas_Operativos)
        {
            cout << n++ << ": Sistemas Operativos" << endl;
            Materias[Total++] = "Sistemas Operativos";
        }

        if (Est[N].Car.Inf.Estructuras_Discretas_II > 5.5 && 5.5 > Est[N].Car.Inf.Traductores_e_Interpretes)
        {
            cout << n++ << ": Traductores e Interpretes" << endl;
            Materias[Total++] = "Traductores e Interpretes";
        }

        if (Est[N].Car.Inf.Sistemas_de_Informacion_I > 5.5 && 5.5 > Est[N].Car.Inf.Sistemas_de_Informacion_II)
        {
            cout << n++ << ": Sistemas de Información II" << endl;
            Materias[Total++] = "Sistemas de Información II";
        }

        if (Est[N].UC_Aprobadas >= 86 && 5.5 > Est[N].Car.Inf.Control_de_Proyectos)
        {
            cout << n++ << ": Control de Proyectos" << endl;
            Materias[Total++] = "Control de Proyectos";
        }

        if (Est[N].UC_Aprobadas >= 86 && 5.5 > Est[N].Car.Inf.Gestion_Empresarial)
        {
            cout << n++ << ": Gestión Empresarial" << endl;
            Materias[Total++] = "Gestión Empresarial";
        }

        if (Est[N].Car.Inf.Sistemas_Operativos > 5.5 && 5.5 > Est[N].Car.Inf.Redes)
        {
            cout << n++ << ": Redes" << endl;
            Materias[Total++] = "Redes";
        }

        if (Est[N].Car.Inf.Traductores_e_Interpretes > 5.5 && 5.5 > Est[N].Car.Inf.Lenguajes_de_Programacion)
        {
            cout << n++ << ": Lenguajes de Programación" << endl;
            Materias[Total++] = "Lenguajes de Programación";
        }

        if (Est[N].Car.Inf.Sistemas_de_Informacion_II > 5.5 && 5.5 > Est[N].Car.Inf.Sistemas_de_Informacion_III)
        {
            cout << n++ << ": Sistemas de Información III" << endl;
            Materias[Total++] = "Sistemas de Información III";
        }

        if (Est[N].Car.Inf.Sistemas_de_Informacion_II > 5.5 && 5.5 > Est[N].Car.Inf.Etica_Profesional)
        {
            cout << n++ << ": Ética Profesional" << endl;
            Materias[Total++] = "Ética Profesional";
        }

        if (Est[N].Car.Inf.Control_de_Proyectos > 5.5 && Est[N].Car.Inf.Gestion_Empresarial > 5.5 && 5.5 > Est[N].Car.Inf.Pasantias)
        {
            cout << n++ << ": Pasantías" << endl;
            Materias[Total++] = "Pasantías";
        }

        if (Est[N].UC_Aprobadas >= 100 && 5.5 > Est[N].Car.Inf.Electiva_de_Area_I)
        {
            cout << n++ << ": Electiva de Área I" << endl;
            Materias[Total++] = "Electiva de Área I";
        }

        if (Est[N].Car.Inf.Redes > 5.5 && 5.5 > Est[N].Car.Inf.Sistemas_Distribuidos)
        {
            cout << n++ << ": Sistemas Distribuidos" << endl;
            Materias[Total++] = "Sistemas Distribuidos";
        }

        if (Est[N].UC_Aprobadas >= 136 && 5.5 > Est[N].Car.Inf.Electiva_Libre_I)
        {
            cout << n++ << ": Electiva Libre I" << endl;
            Materias[Total++] = "Electiva Libre I";
        }

        if (Est[N].UC_Aprobadas >= 157 && 5.5 > Est[N].Car.Inf.Proyecto_de_Grado_I)
        {
            cout << n++ << ": Proyecto de Grado I" << endl;
            Materias[Total++] = "Proyecto de Grado I";
        }

        if (Est[N].UC_Aprobadas >= 157 && 5.5 > Est[N].Car.Inf.Informatica_Educativa)
        {
            cout << n++ << ": Informática Educativa" << endl;
            Materias[Total++] = "Informática Educativa";
        }

        if (Est[N].Car.Inf.Electiva_de_Area_I > 5.5 && 5.5 > Est[N].Car.Inf.Electiva_de_Area_II)
        {
            cout << n++ << ": Electiva de Área II" << endl;
            Materias[Total++] = "Electiva de Área II";
        }

        if (Est[N].UC_Aprobadas >= 157 && Est[N].Car.Inf.Electiva_Libre_I > 5.5 && 5.5 > Est[N].Car.Inf.Electiva_Libre_II)
        {
            cout << n++ << ": Electiva Libre II" << endl;
            Materias[Total++] = "Electiva Libre II";
        }

        if (Est[N].Car.Inf.Pasantias > 5.5 && 5.5 > Est[N].Car.Inf.Gerencia_de_Proyectos)
        {
            cout << n++ << ": Gerencia de Proyectos" << endl;
            Materias[Total++] = "Gerencia de Proyectos";
        }

        if (Est[N].Car.Inf.Proyecto_de_Grado_I > 5.5 && 5.5 > Est[N].Car.Inf.Proyecto_de_Grado_II)
        {
            cout << n++ << ": Proyecto de Grado II" << endl;
            Materias[Total++] = "Proyecto de Grado II";
        }

        if (Est[N].Car.Inf.Electiva_de_Area_II > 5.5 && 5.5 > Est[N].Car.Inf.Electiva_de_Area_III)
        {
            cout << n++ << ": Electiva de Área III" << endl;
            Materias[Total++] = "Electiva de Área III";
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