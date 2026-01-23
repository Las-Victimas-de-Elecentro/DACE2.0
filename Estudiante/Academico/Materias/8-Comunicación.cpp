#include "../../../Main/Header.h"
using namespace std;

void Com_Est (Variables (&Var), Estudiante (&Est)[D], Clase (&Class)[D], Clase_Magistral (&Mag)[D], Profesor (&Prof)[D])
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

        cout << CYAN << "Seleccione la materia que desea inscribir" << endl;

        if (Est[N].UC_Aprobadas == 0)
        {
            cout << n++ << ": Morfosintaxis del castellano" << endl;
            Materias[Total++] = "Morfosintaxis del castellano";
            cout << n++ << ": Comunicación Social en el periodismo" << endl;
            Materias[Total++] = "Comunicación Social en el periodismo";
            cout << n++ << ": Psicología de la Comunicación" << endl;
            Materias[Total++] = "Psicología de la Comunicación";
            cout << n++ << ": Estadística" << endl;
            Materias[Total++] = "Estadística";
            cout << n++ << ": Deporte, Arte y cultura" << endl;
            Materias[Total++] = "Deporte, Arte y cultura";
            cout << n++ << ": Pensamiento Bolivariano" << endl;
            Materias[Total++] = "Pensamiento Bolivariano";
        }

        if (Est[N].UC_Aprobadas > 0 && 5.5 > Est[N].Car.Com.Morfosintaxis_del_Castellano)
        {
            cout << n++ << ": Morfosintaxis del Castellano" << endl;
            Materias[Total++] = "Morfosintaxis del Castellano";
        }

        if (Est[N].UC_Aprobadas > 0 && 5.5 > Est[N].Car.Com.Comunicacion_Social_en_el_Periodismo)
        {
            cout << n++ << ": Comunicación Social en el Periodismo" << endl;
            Materias[Total++] = "Comunicación Social en el Periodismo";
        }

        if (Est[N].UC_Aprobadas > 0 && 5.5 > Est[N].Car.Com.Psicologia_de_la_Comunicacion)
        {
            cout << n++ << ": Psicología de la Comunicación" << endl;
            Materias[Total++] = "Psicología de la Comunicación";
        }

        if (Est[N].UC_Aprobadas > 0 && 5.5 > Est[N].Car.Com.Estadistica)
        {
            cout << n++ << ": Estadística" << endl;
            Materias[Total++] = "Estadística";
        }

        if (Est[N].UC_Aprobadas > 0 && 5.5 > Est[N].Car.Com.Deporte_Arte_y_Cultura)
        {
            cout << n++ << ": Deporte, Arte y Cultura" << endl;
            Materias[Total++] = "Deporte, Arte y Cultura";
        }

        if (Est[N].UC_Aprobadas > 0 && 5.5 > Est[N].Car.Com.Pensamiento_Bolivariano)
        {
            cout << n++ << ": Pensamiento Bolivariano" << endl;
            Materias[Total++] = "Pensamiento Bolivariano";
        }

        if (Est[N].Semestre >= 2)
        {
            if (5.5 > Est[N].Car.Com.Periodismo_Informativo)
            {
                cout << n++ << ": Periodismo Informativo" << endl;
                Materias[Total++] = "Periodismo Informativo";
            }
            if (5.5 > Est[N].Car.Com.Comunicacion_Social_en_la_Radio)
            {
                cout << n++ << ": Comunicación Social en la Radio" << endl;
                Materias[Total++] = "Comunicación Social en la Radio";
            }
            if (5.5 > Est[N].Car.Com.Comunicacion_Social_en_Cine)
            {
                cout << n++ << ": Comunicación Social en el Cine" << endl;
                Materias[Total++] = "Comunicación Social en el Cine";
            }
            if (5.5 > Est[N].Car.Com.Comunicacion_Social_en_la_Television)
            {
                cout << n++ << ": Comunicación Social en la Televisión" << endl;
                Materias[Total++] = "Comunicación Social en la Televisión";
            }
            if (5.5 > Est[N].Car.Com.Comunicacion_Social_en_la_Fotografia)
            {
                cout << n++ << ": Comunicación Social en la Fotografía" << endl;
                Materias[Total++] = "Comunicación Social en la Fotografía";
            }
            if (Est[N].Car.Com.Morfosintaxis_del_Castellano > 5.5 && 5.5 > Est[N].Car.Com.Taller_de_Redaccion_y_Estilo_I)
            {
                cout << n++ << ": Taller de Redacción y Estilo I" << endl;
                Materias[Total++] = "Taller de Redacción y Estilo I";
            }
        }

        if (Est[N].Semestre >= 3)
        {
            if (5.5 > Est[N].Car.Com.Proyecto_Comunitario_Socio_Comunicacional_I)
            {
                cout << n++ << ": Proyecto Comunitario Socio Comunicacional I" << endl;
                Materias[Total++] = "Proyecto Comunitario Socio Comunicacional I";
            }
            if (Est[N].Car.Com.Taller_de_Redaccion_y_Estilo_I > 5.5 && 5.5 > Est[N].Car.Com.Taller_de_Redaccion_y_Estilo_II)
            {
                cout << n++ << ": Taller de Redacción y Estilo II" << endl;
                Materias[Total++] = "Taller de Redacción y Estilo II";
            }
            if (Est[N].Car.Com.Comunicacion_Social_en_la_Fotografia > 5.5 && 5.5 > Est[N].Car.Com.Comunicacion_Grafica)
            {
                cout << n++ << ": Comunicación Gráfica" << endl;
                Materias[Total++] = "Comunicación Gráfica";
            }
            if (Est[N].Car.Com.Comunicacion_Social_en_la_Radio > 5.5 && 5.5 > Est[N].Car.Com.Periodismo_Radiofonico)
            {
                cout << n++ << ": Periodismo Radiofónico" << endl;
                Materias[Total++] = "Periodismo Radiofónico";
            }
            if (Est[N].Car.Com.Comunicacion_Social_en_Cine > 5.5 && 5.5 > Est[N].Car.Com.Lenguaje_y_Planificacion_Cinematografica)
            {
                cout << n++ << ": Lenguaje y Planificación Cinematográfica" << endl;
                Materias[Total++] = "Lenguaje y Planificación Cinematográfica";
            }
            if (Est[N].Car.Com.Comunicacion_Social_en_la_Television > 5.5 && 5.5 > Est[N].Car.Com.Periodismo_Televisivo)
            {
                cout << n++ << ": Periodismo Televisivo" << endl;
                Materias[Total++] = "Periodismo Televisivo";
            }
        }

        if (Est[N].Semestre >= 4)
        {
            if (Est[N].Car.Com.Comunicacion_Grafica > 5.5 && 5.5 > Est[N].Car.Com.Estetica_de_la_Imagen_y_el_Sonido)
            {
                cout << n++ << ": Estética de la Imagen y el Sonido" << endl;
                Materias[Total++] = "Estética de la Imagen y el Sonido";
            }
            if (5.5 > Est[N].Car.Com.Teoria_de_la_Comunicacion)
            {
                cout << n++ << ": Teoría de la Comunicación" << endl;
                Materias[Total++] = "Teoría de la Comunicación";
            }
            if (5.5 > Est[N].Car.Com.Opinion_Publica)
            {
                cout << n++ << ": Opinión Pública" << endl;
                Materias[Total++] = "Opinión Pública";
            }
            if (5.5 > Est[N].Car.Com.Formacion_Sociopolitica)
            {
                cout << n++ << ": Formación Sociopolítica" << endl;
                Materias[Total++] = "Formación Sociopolítica";
            }
            if (Est[N].Car.Com.Proyecto_Comunitario_Socio_Comunicacional_I > 5.5 && 5.5 > Est[N].Car.Com.Proyecto_Comunitario_Socio_Comunicacional_II)
            {
                cout << n++ << ": Proyecto Comunitario Socio Comunicacional II" << endl;
                Materias[Total++] = "Proyecto Comunitario Socio Comunicacional II";
            }
            if (5.5 > Est[N].Car.Com.Etica_y_Legislacion_de_Medios_y_del_Periodismo)
            {
                cout << n++ << ": Ética y Legislación de Medios y del Periodismo" << endl;
                Materias[Total++] = "Ética y Legislación de Medios y del Periodismo";
            }
        }

        if (Est[N].Semestre >= 5)
        {
            if (Est[N].Car.Com.Proyecto_Comunitario_Socio_Comunicacional_II > 5.5 && 5.5 > Est[N].Car.Com.Proyecto_Comunitario_Sociocomunicacional_III)
            {
                cout << n++ << ": Proyecto Comunitario Socio Comunicacional III" << endl;
                Materias[Total++] = "Proyecto Comunitario Socio Comunicacional III";
            }
            if (Est[N].Car.Com.Teoria_de_la_Comunicacion > 5.5 && 5.5 > Est[N].Car.Com.Sociologia_de_la_Comunicacion)
            {
                cout << n++ << ": Sociología de la Comunicación" << endl;
                Materias[Total++] = "Sociología de la Comunicación";
            }
            if (5.5 > Est[N].Car.Com.Investigacion_de_la_Comunicacion)
            {
                cout << n++ << ": Investigación de la Comunicación" << endl;
                Materias[Total++] = "Investigación de la Comunicación";
            }
            if (5.5 > Est[N].Car.Com.Periodismo_Interpretativo)
            {
                cout << n++ << ": Periodismo Interpretativo" << endl;
                Materias[Total++] = "Periodismo Interpretativo";
            }
            if (Est[N].Car.Com.Opinion_Publica > 5.5 && 5.5 > Est[N].Car.Com.Periodismo_de_Opinion)
            {
                cout << n++ << ": Periodismo de Opinión" << endl;
                Materias[Total++] = "Periodismo de Opinión";
            }
            if (5.5 > Est[N].Car.Com.Economia_Politica)
            {
                cout << n++ << ": Economía Política" << endl;
                Materias[Total++] = "Economía Política";
            }
        }

        if (Est[N].Semestre >= 6)
        {
            if (Est[N].Car.Com.Estetica_de_la_Imagen_y_el_Sonido > 5.5 && 5.5 > Est[N].Car.Com.Produccion_de_Television)
            {
                cout << n++ << ": Producción de Televisión" << endl;
                Materias[Total++] = "Producción de Televisión";
            }
            if (5.5 > Est[N].Car.Com.Produccion_de_Radio)
            {
                cout << n++ << ": Producción de Radio" << endl;
                Materias[Total++] = "Producción de Radio";
            }
            if (5.5 > Est[N].Car.Com.Produccion_de_Cine)
            {
                cout << n++ << ": Producción de Cine" << endl;
                Materias[Total++] = "Producción de Cine";
            }
            if (5.5 > Est[N].Car.Com.Seminario_de_Formacion_Socio_Critica_I)
            {
                cout << n++ << ": Seminario de Formación Socio Crítica I" << endl;
                Materias[Total++] = "Seminario de Formación Socio Crítica I";
            }
            if (Est[N].Car.Com.Proyecto_Comunitario_Sociocomunicacional_III > 5.5 && 5.5 > Est[N].Car.Com.Proyecto_Comunitario_Sociocomunicacional_IV)
            {
                cout << n++ << ": Proyecto Comunitario Socio Comunicacional IV" << endl;
                Materias[Total++] = "Proyecto Comunitario Socio Comunicacional IV";
            }
            if (Est[N].Car.Com.Sociologia_de_la_Comunicacion > 5.5 && 5.5 > Est[N].Car.Com.Semiologia)
            {
                cout << n++ << ": Semiología" << endl;
                Materias[Total++] = "Semiología";
            }
        }

        if (Est[N].UC_Aprobadas >= 82)
        {
            if (5.5 > Est[N].Car.Com.Fotoperiodismo)
            {
                cout << n++ << ": Fotoperiodismo" << endl;
                Materias[Total++] = "Fotoperiodismo";
            }
            if (Est[N].Car.Com.Seminario_de_Formacion_Socio_Critica_I > 5.5 && 5.5 > Est[N].Car.Com.Seminario_de_Formacion_Socio_Critica_II)
            {
                cout << n++ << ": Seminario de Formación Socio Crítica II" << endl;
                Materias[Total++] = "Seminario de Formación Socio Crítica II";
            }
            if (5.5 > Est[N].Car.Com.Periodismo_Cientifico)
            {
                cout << n++ << ": Periodismo Científico" << endl;
                Materias[Total++] = "Periodismo Científico";
            }
            if (Est[N].Car.Com.Produccion_de_Cine > 5.5 && Est[N].Car.Com.Produccion_de_Television > 5.5 && 5.5 > Est[N].Car.Com.Montajes_Audiovisuales)
            {
                cout << n++ << ": Montajes Audiovisuales" << endl;
                Materias[Total++] = "Montajes Audiovisuales";
            }
            if (5.5 > Est[N].Car.Com.Relaciones_Publicas)
            {
                cout << n++ << ": Relaciones Públicas" << endl;
                Materias[Total++] = "Relaciones Públicas";
            }
            if (Est[N].Car.Com.Proyecto_Comunitario_Sociocomunicacional_IV > 5.5 && 5.5 > Est[N].Car.Com.Proyecto_Comunitario_Sociocomunicacional_V)
            {
                cout << n++ << ": Proyecto Comunitario Socio Comunicacional V" << endl;
                Materias[Total++] = "Proyecto Comunitario Socio Comunicacional V";
            }
            if (5.5 > Est[N].Car.Com.Tecnologia_de_la_Informacion)
            {
                cout << n++ << ": Tecnología de la Información" << endl;
                Materias[Total++] = "Tecnología de la Información";
            }
        }

        if (Est[N].UC_Aprobadas >= 98)
        {
            if (5.5 > Est[N].Car.Com.Locucion_Basica)
            {
                cout << n++ << ": Locución Básica" << endl;
                Materias[Total++] = "Locución Básica";
            }
            if (Est[N].Car.Com.Relaciones_Publicas > 5.5 && 5.5 > Est[N].Car.Com.Publicidad)
            {
                cout << n++ << ": Publicidad" << endl;
                Materias[Total++] = "Publicidad";
            }
            if (5.5 > Est[N].Car.Com.Idioma_Moderno)
            {
                cout << n++ << ": Idioma Moderno" << endl;
                Materias[Total++] = "Idioma Moderno";
            }
            if (Est[N].Car.Com.Seminario_de_Formacion_Socio_Critica_II > 5.5 && 5.5 > Est[N].Car.Com.Seminario_de_Formacion_Socio_Critica_III)
            {
                cout << n++ << ": Seminario de Formacion Socio Crítica III" << endl;
                Materias[Total++] = "Seminario de Formacion Socio Crítica III";
            }
            if (5.5 > Est[N].Car.Com.Periodismo_Economico)
            {
                cout << n++ << ": Periodismo Económico" << endl;
                Materias[Total++] = "Periodismo Económico";
            }
            if (Est[N].Car.Com.Proyecto_Comunitario_Sociocomunicacional_V > 5.5 && 5.5 > Est[N].Car.Com.Proyecto_Comunitario_Sociocomunicacional_VI)
            {
                cout << n++ << ": Proyecto Comunitario Socio Comunicacional VI" << endl;
                Materias[Total++] = "Proyecto Comunitario Socio Comunicacional VI";
            }
            if (5.5 > Est[N].Car.Com.Orientacion_Profesional_I)
            {
                cout << n++ << ": Orientación Profesional I" << endl;
                Materias[Total++] = "Orientación Profesional I";
            }
        }

        if (Est[N].UC_Aprobadas >= 115)
        {
            if (5.5 > Est[N].Car.Com.Gerencia_Corporativa)
            {
                cout << n++ << ": Gerencia Corporativa" << endl;
                Materias[Total++] = "Gerencia Corporativa";
            }
            if (Est[N].Car.Com.Publicidad > 5.5 && 5.5 > Est[N].Car.Com.Mercadeo)
            {
                cout << n++ << ": Mercadeo" << endl;
                Materias[Total++] = "Mercadeo";
            }
            if (Est[N].Car.Com.Locucion_Basica > 5.5 && 5.5 > Est[N].Car.Com.Locucion_Profesional)
            {
                cout << n++ << ": Locución Profesional" << endl;
                Materias[Total++] = "Locución Profesional";
            }
            if (Est[N].Car.Com.Proyecto_Comunitario_Sociocomunicacional_VI > 5.5 && 5.5 > Est[N].Car.Com.Proyecto_Comunitario_Sociocomunicacional_VII)
            {
                cout << n++ << ": Proyecto Comunitario Socio Comunicacional VII" << endl;
                Materias[Total++] = "Proyecto Comunitario Socio Comunicacional VII";
            }
            if (5.5 > Est[N].Car.Com.Periodismo_Politico)
            {
                cout << n++ << ": Periodismo Político" << endl;
                Materias[Total++] = "Periodismo Político";
            }
            if (Est[N].Car.Com.Orientacion_Profesional_I > 5.5 && 5.5 > Est[N].Car.Com.Orientacion_Profesional)
            {
                cout << n++ << ": Orientación Profesional II" << endl;
                Materias[Total++] = "Orientación Profesional II";
            }
            if (5.5 > Est[N].Car.Com.Vinculación_Profesional_en_el_Campo_Sociocomunicacional)
            {
                cout << n++ << ": Vinculación Profesional en el Campo Socio Comunicacional" << endl;
                Materias[Total++] = "Vinculación Profesional en el Campo Socio Comunicacional";
            }
        }

        if (Est[N].UC_Aprobadas >= 132)
        {
            if (5.5 > Est[N].Car.Com.Trabajo_Especial_de_Grado)
            {
                cout << n++ << ": Trabajo Especial de Grado" << endl;
                Materias[Total++] = "Trabajo Especial de Grado";
            }
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