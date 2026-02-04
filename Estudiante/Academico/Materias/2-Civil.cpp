#include "../../../Main/Header.h"
using namespace std;

void Civ_Est (Variables (&Var), Estudiante (&Est)[D], Clase (&Class)[D], Clase_Magistral (&Mag)[D], Profesor (&Prof)[D])
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
            cout << n++ << ": Inglés Técnico" << endl;
            Materias[Total++] = "Inglés Técnico";
            cout << n++ << ": Técnicas de Estudio y Documentación" << endl;
            Materias[Total++] = "Técnicas de Estudio y Documentación";
            cout << n++ << ": Geometría Descriptiva I" << endl;
            Materias[Total++] = "Geometría Descriptiva I";
            cout << n++ << ": Cálculo I" << endl;
            Materias[Total++] = "Cálculo I";
            cout << n++ << ": Metodología del Razonamiento Lógico" << endl;
            Materias[Total++] = "Metodología del Razonamiento Lógico";
            cout << n++ << ": Arte y Cultura" << endl;
            Materias[Total++] = "Arte y Cultura";
        }

        if (Est[N].UC_Aprobadas > 0 && 5.5 > Est[N].Car.Civ.Ingles_Tecnico) 
        {
            cout << n++ << ": Inglés Técnico" << endl;
            Materias[Total++] = "Inglés Técnico";
        }

        if (Est[N].UC_Aprobadas > 0 && 5.5 > Est[N].Car.Civ.Tecnicas_de_Estudio_y_Documentacion) 
        {
            cout << n++ << ": Técnicas de Estudio y Documentación" << endl;
            Materias[Total++] = "Técnicas de Estudio y Documentación";
        }

        if (Est[N].UC_Aprobadas > 0 && 5.5 > Est[N].Car.Civ.Metodos_del_Razonamiento_Logico) 
        {
            cout << n++ << ": Metodología del Razonamiento Lógico" << endl;
            Materias[Total++] = "Metodología del Razonamiento Lógico";
        }

        if (Est[N].UC_Aprobadas > 0 && 5.5 > Est[N].Car.Civ.Arte_y_Cultura) 
        {
            cout << n++ << ": Arte y Cultura" << endl;
            Materias[Total++] = "Arte y Cultura";
        }

        if (Est[N].UC_Aprobadas > 0 && 5.5 > Est[N].Car.Civ.Geometria_Descriptiva_I) 
        {
            cout << n++ << ": Geometría Descriptiva I" << endl;
            Materias[Total++] = "Geometría Descriptiva I";
        }

        if (Est[N].Car.Civ.Calculo_I > 5.5 && 5.5 > Est[N].Car.Civ.Calculo_II) 
        {
            cout << n++ << ": Cálculo II" << endl;
            Materias[Total++] = "Cálculo II";
        } 
        else if (Est[N].UC_Aprobadas > 0 && 5.5 > Est[N].Car.Civ.Calculo_I) 
        {
            cout << n++ << ": Cálculo I" << endl;
            Materias[Total++] = "Cálculo I";
        }

        if (Est[N].Car.Civ.Calculo_I > 5.5 && 5.5 > Est[N].Car.Civ.Fisica_I) 
        {
            cout << n++ << ": Física I" << endl;
            Materias[Total++] = "Física I";
        }

        if (Est[N].Car.Civ.Geometria_Descriptiva_I > 5.5 && 5.5 > Est[N].Car.Civ.Geometria_Descriptiva_II) 
        {
            cout << n++ << ": Geometría Descriptiva II" << endl;
            Materias[Total++] = "Geometría Descriptiva II";
        }

        if (Est[N].UC_Aprobadas >= 4 && 5.5 > Est[N].Car.Civ.Introduccion_a_las_Ciencias_Humanas) 
        {
            cout << n++ << ": Introducción a las Ciencias Humanas" << endl;
            Materias[Total++] = "Introducción a las Ciencias Humanas";
        }

        if (Est[N].UC_Aprobadas >= 4 && 5.5 > Est[N].Car.Civ.Sociedad_Ciencia_y_Tecnologia) 
        {
            cout << n++ << ": Sociedad Ciencia y Tecnología" << endl;
            Materias[Total++] = " Sociedad Ciencia y Tecnología";
        }

        if (Est[N].Car.Civ.Fisica_I > 5.5 && 5.5 > Est[N].Car.Civ.Fisica_II) 
        {
            cout << n++ << ": Física II" << endl;
            Materias[Total++] = "Física II";
        }

        if (Est[N].Car.Civ.Calculo_II > 5.5 && 5.5 > Est[N].Car.Civ.Calculo_III) 
        {
            cout << n++ << ": Cálculo III" << endl;
            Materias[Total++] = "Cálculo III";
        }

        if (Est[N].Car.Civ.Fisica_I > 5.5 && 5.5 > Est[N].Car.Civ.Mecanica_Racional_I) 
        {
            cout << n++ << ": Mecánica Racional I" << endl;
            Materias[Total++] = "Mecánica Racional I";
        }

        if (Est[N].Car.Civ.Metodos_del_Razonamiento_Logico > 5.5 && 5.5 > Est[N].Car.Civ.Informatica_para_Ingenieros) 
        {
            cout << n++ << ": Informática para Ingenieros" << endl;
            Materias[Total++] = "Informática para Ingenieros";
        }

        if (Est[N].UC_Aprobadas >= 21 && 5.5 > Est[N].Car.Civ.Quimica_Basica) 
        {
            cout << n++ << ": Química Básica" << endl;
            Materias[Total++] = "Química Básica";
        }

        if (Est[N].UC_Aprobadas >= 21 && 5.5 > Est[N].Car.Civ.Deportes) 
        {
            cout << n++ << ": Deportes" << endl;
            Materias[Total++] = "Deportes";
        }

        if (Est[N].Car.Civ.Mecanica_Racional_I > 5.5 && 5.5 > Est[N].Car.Civ.Mecanica_Racional_II) 
        {
            cout << n++ << ": Mecánica Racional II" << endl;
            Materias[Total++] = "Mecánica Racional II";
        }

        if (Est[N].Car.Civ.Quimica_Basica > 5.5 && 5.5 > Est[N].Car.Civ.Quimica_Aplicada) 
        {
            cout << n++ << ": Química Aplicada" << endl;
            Materias[Total++] = "Química Aplicada";
        }

        if (Est[N].Car.Civ.Calculo_III > 5.5 && 5.5 > Est[N].Car.Civ.Topografia) 
        {
            cout << n++ << ": Topografía" << endl;
            Materias[Total++] = "Topografía";
        }

        if (Est[N].Car.Civ.Calculo_III > 5.5 && 5.5 > Est[N].Car.Civ.Calculo_IV) 
        {
            cout << n++ << ": Cálculo IV" << endl;
            Materias[Total++] = "Cálculo IV";
        }

        if (Est[N].Car.Civ.Calculo_III > 5.5 && 5.5 > Est[N].Car.Civ.Estadistica_para_Ingenieros) 
        {
            cout << n++ << ": Estadística para Ingenieros" << endl;
            Materias[Total++] = "Estadística para Ingenieros";
        }

        if (Est[N].UC_Aprobadas >= 40 && 5.5 > Est[N].Car.Civ.Electiva_No_Tecnica) 
        {
            cout << n++ << ": Electiva no Técnica" << endl;
            Materias[Total++] = "Electiva no Técnica";
        }

        if (Est[N].Car.Civ.Geometria_Descriptiva_II > 5.5 && Est[N].Car.Civ.Quimica_Aplicada > 5.5 && Est[N].Car.Civ.Topografia > 5.5 && 5.5 > Est[N].Car.Civ.Geologia_Aplicada) 
        {
            cout << n++ << ": Geología Aplicada" << endl;
            Materias[Total++] = "Geología Aplicada";
        }

        if (Est[N].Car.Civ.Mecanica_Racional_II > 5.5 && Est[N].Car.Civ.Calculo_IV > 5.5 && 5.5 > Est[N].Car.Civ.Resistencia_de_Materiales) 
        {
            cout << n++ << ": Resistencia de Materiales" << endl;
            Materias[Total++] = "Resistencia de Materiales";
        }

        if (Est[N].UC_Aprobadas >= 60 && Est[N].Car.Civ.Electiva_No_Tecnica > 5.5 && 5.5 > Est[N].Car.Civ.Electiva_No_Tecnica_II) 
        {
            cout << n++ << ": Electiva No Técnica II" << endl;
            Materias[Total++] = "Electiva No Técnica II";
        }

        if (Est[N].Car.Civ.Estadistica_para_Ingenieros > 5.5 && Est[N].Car.Civ.Quimica_Aplicada > 5.5 && 5.5 > Est[N].Car.Civ.Materiales_y_Ensayos) 
        {
            cout << n++ << ": Materiales y Ensayos" << endl;
            Materias[Total++] = "Materiales y Ensayos";
        }

        if (Est[N].Car.Civ.Mecanica_Racional_II > 5.5 && Est[N].Car.Civ.Quimica_Aplicada > 5.5 && 5.5 > Est[N].Car.Civ.Mecanica_de_Fluidos_I) 
        {
            cout << n++ << ": Mecánica de Fluidos I" << endl;
            Materias[Total++] = "Mecánica de Fluidos I";
        }

        if (Est[N].Car.Civ.Calculo_IV > 5.5 && 5.5 > Est[N].Car.Civ.Calculo_V) 
        {
            cout << n++ << ": Cálculo V" << endl;
            Materias[Total++] = "Cálculo V";
        }

        if (Est[N].Car.Civ.Geologia_Aplicada > 5.5 && Est[N].Car.Civ.Materiales_y_Ensayos > 5.5 && 5.5 > Est[N].Car.Civ.Mecanica_de_Suelos) 
        {
            cout << n++ << ": Mecánica de Suelos" << endl;
            Materias[Total++] = "Mecánica de Suelos";
        }

        if (Est[N].Car.Civ.Quimica_Aplicada > 5.5 && Est[N].Car.Civ.Mecanica_de_Fluidos_I > 5.5 && 5.5 > Est[N].Car.Civ.H_y_San_Ambiental) 
        {
            cout << n++ << ": H & San Ambiental" << endl;
            Materias[Total++] = "H & San Ambiental";
        }

        if (Est[N].Car.Civ.Resistencia_de_Materiales > 5.5 && 5.5 > Est[N].Car.Civ.Teorias_de_Estructuras_I) 
        {
            cout << n++ << ": Teorías de Estructuras I" << endl;
            Materias[Total++] = "Teorías de Estructuras I";
        }

        if (Est[N].Car.Civ.Geometria_Descriptiva_II > 5.5 && Est[N].Car.Civ.Topografia > 5.5 && 5.5 > Est[N].Car.Civ.Dibujo_de_Proyectos) 
        {
            cout << n++ << ": Dibujo de Proyectos" << endl;
            Materias[Total++] = "Dibujo de Proyectos";
        }

        if (Est[N].Car.Civ.Mecanica_de_Fluidos_I > 5.5 && Est[N].Car.Civ.Geologia_Aplicada > 5.5 && 5.5 > Est[N].Car.Civ.Hidrologia) 
        {
            cout << n++ << ": Hidrología" << endl;
            Materias[Total++] = "Hidrología";
        }

        if (Est[N].Car.Civ.Mecanica_de_Fluidos_I > 5.5 && 5.5 > Est[N].Car.Civ.Mecanica_de_Fluidos_II) 
        {
            cout << n++ << ": Mecánica de Fluidos II" << endl;
            Materias[Total++] = "Mecánica de Fluidos II";
        }

        if (Est[N].Car.Civ.Teorias_de_Estructuras_I > 5.5 && 5.5 > Est[N].Car.Civ.Teorias_de_Estructuras_II) 
        {
            cout << n++ << ": Teoría de Estructuras II" << endl;
            Materias[Total++] = "Teoría de Estructuras II";
        }

        if (Est[N].UC_Aprobadas >= 100 && Est[N].Car.Civ.Estadistica_para_Ingenieros > 5.5 && 5.5 > Est[N].Car.Civ.Ingenieria_Economica) 
        {
            cout << n++ << ": Ingeniería Económica" << endl;
            Materias[Total++] = "Ingeniería Económica";
        }

        if (Est[N].Car.Civ.H_y_San_Ambiental > 5.5 && Est[N].Car.Civ.Mecanica_de_Fluidos_II > 5.5 && Est[N].Car.Civ.Dibujo_de_Proyectos > 5.5 && 5.5 > Est[N].Car.Civ.Instalaciones_para_Edificios) 
        {
            cout << n++ << ": Instalaciones para Edificios" << endl;
            Materias[Total++] = "Instalaciones para Edificios";
        }

        if (Est[N].Car.Civ.Estadistica_para_Ingenieros > 5.5 && 5.5 > Est[N].Car.Civ.Metodologia_de_la_Investigacion) 
        {
            cout << n++ << ": Metodología de la Investigación" << endl;
            Materias[Total++] = "Metodología de la Investigación";
        }

        if (Est[N].Car.Civ.Topografia > 5.5 && Est[N].Car.Civ.Mecanica_de_Fluidos_II > 5.5 && 5.5 > Est[N].Car.Civ.Acueductos_y_Cloacas) 
        {
            cout << n++ << ": Acueductos y Cloacas" << endl;
            Materias[Total++] = "Acueductos y Cloacas";
        }

        if (Est[N].UC_Aprobadas >= 126 && Est[N].Car.Civ.Electiva_No_Tecnica_II > 5.5 && 5.5 > Est[N].Car.Civ.Electiva_Tecnica) 
        {
            cout << n++ << ": Electiva Técnica" << endl;
            Materias[Total++] = "Electiva Técnica";
        }

        if (Est[N].Car.Civ.Electiva_Tecnica > 5.5 && 5.5 > Est[N].Car.Civ.Electiva_Tecnica_II) 
        {
            cout << n++ << ": Electiva Técnica II" << endl;
            Materias[Total++] = "Electiva Técnica II";
        }

        if (Est[N].Car.Civ.Acueductos_y_Cloacas > 5.5 && Est[N].Car.Civ.Hidrologia > 5.5 && 5.5 > Est[N].Car.Civ.Obras_Hidraulicas) 
        {
            cout << n++ << ": Obras Hidráulicas" << endl;
            Materias[Total++] = "Obras Hidráulicas";
        }

        if (Est[N].UC_Aprobadas >= 130 && 5.5 > Est[N].Car.Civ.Practica_Profesional) 
        {
            cout << n++ << ": Práctica Profesional" << endl;
            Materias[Total++] = "Práctica Profesional";
        }

        if (Est[N].Car.Civ.Materiales_y_Ensayos > 5.5 && Est[N].Car.Civ.Teorias_de_Estructuras_II > 5.5 && 5.5 > Est[N].Car.Civ.Concreto_Armado) 
        {
            cout << n++ << ": Concreto Armado" << endl;
            Materias[Total++] = "Concreto Armado";
        }

        if (Est[N].Car.Civ.Topografia > 5.5 && Est[N].Car.Civ.Electiva_Tecnica > 5.5 && 5.5 > Est[N].Car.Civ.Vias_de_Comunicacion_I) 
        {
            cout << n++ << ": Vías de Comunicación I" << endl;
            Materias[Total++] = "Vías de Comunicación I";
        }

        if (Est[N].Car.Civ.Mecanica_de_Suelos > 5.5 && 5.5 > Est[N].Car.Civ.Proyectos_Estructurales_de_Acero) 
        {
            cout << n++ << ": Proyectos Estructurales de Acero" << endl;
            Materias[Total++] = "Proyectos Estructurales de Acero";
        }

        if (Est[N].UC_Aprobadas >= 150 && 5.5 > Est[N].Car.Civ.Practica_Comunitaria) 
        {
            cout << n++ << ": Práctica Comunitaria" << endl;
            Materias[Total++] = "Práctica Comunitaria";
        }

        if (Est[N].UC_Aprobadas >= 161 && Est[N].Car.Civ.Practica_Profesional > 5.5 && 5.5 > Est[N].Car.Civ.Trabajo_Especial_de_Grado_I) 
        {
            cout << n++ << ": Trabajo Especial de Grado I" << endl;
            Materias[Total++] = "Trabajo Especial de Grado I";
        }

        if (Est[N].Car.Civ.Concreto_Armado > 5.5 && 5.5 > Est[N].Car.Civ.Concreto_Pretenzado) 
        {
            cout << n++ << ": Concreto Pretenzado" << endl;
            Materias[Total++] = "Concreto Pretenzado";
        }

        if (Est[N].Car.Civ.Concreto_Armado > 5.5 && Est[N].Car.Civ.Mecanica_de_Suelos > 5.5 && 5.5 > Est[N].Car.Civ.Fundaciones_y_Muros) 
        {
            cout << n++ << ": Fundaciones y Muros" << endl;
            Materias[Total++] = "Fundaciones y Muros";
        }

        if (Est[N].Car.Civ.Vias_de_Comunicacion_I > 5.5 && 5.5 > Est[N].Car.Civ.Vias_de_Comunicacion_II) 
        {
            cout << n++ << ": Vías de Comunicación II" << endl;
            Materias[Total++] = "Vías de Comunicación II";
        }

        if (Est[N].Car.Civ.Concreto_Armado > 5.5 && Est[N].Car.Civ.Fundaciones_y_Muros > 5.5 && 5.5 > Est[N].Car.Civ.Proyectos_Estructurales_de_Concreto) 
        {
            cout << n++ << ": Proyectos Estructurales de Concreto" << endl;
            Materias[Total++] = "Proyectos Estructurales de Concreto";
        }

        if (Est[N].Car.Civ.Trabajo_Especial_de_Grado_I > 5.5 && 5.5 > Est[N].Car.Civ.Trabajo_Especial_de_Grado_II) 
        {
            cout << n++ << ": Trabajo Especial de Grado II" << endl;
            Materias[Total++] = "Trabajo Especial de Grado II";
        }

        if (Est[N].UC_Aprobadas >= 171 && 5.5 > Est[N].Car.Civ.Administracion_de_Obras) 
        {
            cout << n++ << ": Administración de Obras" << endl;
            Materias[Total++] = "Administración de Obras";
        }

        if (Est[N].Car.Civ.Vias_de_Comunicacion_I > 5.5 && 5.5 > Est[N].Car.Civ.Pavimentos) 
        {
            cout << n++ << ": Pavimentos" << endl;
            Materias[Total++] = "Pavimentos";
        }

        if (Est[N].Car.Civ.Concreto_Pretenzado > 5.5 && 5.5 > Est[N].Car.Civ.Puentes) 
        {
            cout << n++ << ": Puentes" << endl;
            Materias[Total++] = "Puentes";
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