#include "../../../Main/Header.h"
using namespace std;

void Hist_Com (Variables (&Var), Estudiante (&Est)[D])
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

        cout << "Morfosintaxis del Castellano: " << Est[N].Car.Com.Morfosintaxis_del_Castellano << endl;
        cout << "Comunicacion Social en el Periodismo: " << Est[N].Car.Com.Comunicacion_Social_en_el_Periodismo << endl;
        cout << "Psicologia de la Comunicacion: " << Est[N].Car.Com.Psicologia_de_la_Comunicacion << endl;
        cout << "Estadistica: " << Est[N].Car.Com.Estadistica << endl;
        cout << "Deporte, Arte y Cultura: " << Est[N].Car.Com.Deporte_Arte_y_Cultura << endl;
        cout << "Pensamiento Bolivariano: " << Est[N].Car.Com.Pensamiento_Bolivariano << endl;

        Suma = Suma + (Est[N].Car.Com.Morfosintaxis_del_Castellano + Est[N].Car.Com.Comunicacion_Social_en_el_Periodismo + Est[N].Car.Com.Psicologia_de_la_Comunicacion + Est[N].Car.Com.Estadistica + Est[N].Car.Com.Deporte_Arte_y_Cultura + Est[N].Car.Com.Pensamiento_Bolivariano);
        Cont = Cont + 6;

    }

    if (Est[N].Semestre >= 2)
    {

        cout << "Periodismo Informativo: " << Est[N].Car.Com.Periodismo_Informativo << endl;
        cout << "Comunicacion Social en la Radio: " << Est[N].Car.Com.Comunicacion_Social_en_la_Radio << endl;
        cout << "Comunicacion Social en el Cine: " << Est[N].Car.Com.Comunicacion_Social_en_Cine << endl;
        cout << "Comunicacion Social en la Television: " << Est[N].Car.Com.Comunicacion_Social_en_la_Television << endl;
        cout << "Comunicacion Social en la Fotografia: " << Est[N].Car.Com.Comunicacion_Social_en_la_Fotografia << endl;

        Suma = Suma + (Est[N].Car.Com.Periodismo_Informativo + Est[N].Car.Com.Comunicacion_Social_en_la_Radio + Est[N].Car.Com.Comunicacion_Social_en_Cine + Est[N].Car.Com.Comunicacion_Social_en_la_Television + Est[N].Car.Com.Comunicacion_Social_en_la_Fotografia);
        Cont = Cont + 5;

        if (Est[N].Car.Com.Morfosintaxis_del_Castellano >= 5.5)
        {

            cout << "Taller de Redaccion y Estilo I: " << Est[N].Car.Com.Taller_de_Redaccion_y_Estilo_I << endl;
            Suma = Suma + Est[N].Car.Com.Taller_de_Redaccion_y_Estilo_I;
            Cont = Cont + 1;

        }

    }

    if (Est[N].Semestre >= 3)
    {

        cout << "Proyecto Comunitario Socio Comunicacional I: " << Est[N].Car.Com.Proyecto_Comunitario_Socio_Comunicacional_I << endl;

        Suma = Suma + Est[N].Car.Com.Proyecto_Comunitario_Socio_Comunicacional_I;
        Cont = Cont + 1;

        if (Est[N].Car.Com.Taller_de_Redaccion_y_Estilo_I >= 5.5)
        {

            cout << "Taller de Redaccion y Estilo II: " << Est[N].Car.Com.Taller_de_Redaccion_y_Estilo_II << endl;
            Suma = Suma + Est[N].Car.Com.Taller_de_Redaccion_y_Estilo_II;
            Cont = Cont + 1;

        }

        if (Est[N].Car.Com.Comunicacion_Social_en_la_Fotografia >= 5.5)
        {

            cout << "Comunicacion Grafica: " << Est[N].Car.Com.Comunicacion_Grafica << endl;
            Suma = Suma + Est[N].Car.Com.Comunicacion_Grafica;
            Cont = Cont + 1;

        }

        if (Est[N].Car.Com.Comunicacion_Social_en_la_Radio >= 5.5)
        {

            cout << "Periodismo Radiofonico: " << Est[N].Car.Com.Periodismo_Radiofonico << endl;
            Suma = Suma + Est[N].Car.Com.Periodismo_Radiofonico;
            Cont = Cont + 1;

        }

        if (Est[N].Car.Com.Comunicacion_Social_en_Cine >= 5.5)
        {

            cout << "Lenguaje y Planificacion Cinematografica: " << Est[N].Car.Com.Lenguaje_y_Planificacion_Cinematografica << endl;
            Suma = Suma + Est[N].Car.Com.Lenguaje_y_Planificacion_Cinematografica;
            Cont = Cont + 1;

        }

        if (Est[N].Car.Com.Comunicacion_Social_en_la_Television >= 5.5)
        {

            cout << "Periodismo Televisivo: " << Est[N].Car.Com.Periodismo_Televisivo << endl;
            Suma = Suma + Est[N].Car.Com.Periodismo_Televisivo;
            Cont = Cont + 1;

        }

    }

    if (Est[N].Semestre >= 4)
    {

        cout << "Teoria de la Comunicacion: " << Est[N].Car.Com.Teoria_de_la_Comunicacion << endl;
        cout << "Opinion Publica: " << Est[N].Car.Com.Opinion_Publica << endl;
        cout << "Formacion Sociopolitica: " << Est[N].Car.Com.Formacion_Sociopolitica << endl;
        cout << "Etica y Legislacion de Medios: " << Est[N].Car.Com.Etica_y_Legislacion_de_Medios_y_del_Periodismo << endl;

        Suma = Suma + (Est[N].Car.Com.Teoria_de_la_Comunicacion + Est[N].Car.Com.Opinion_Publica + Est[N].Car.Com.Formacion_Sociopolitica + Est[N].Car.Com.Etica_y_Legislacion_de_Medios_y_del_Periodismo);
        Cont = Cont + 4;

        if (Est[N].Car.Com.Comunicacion_Grafica >= 5.5)
        {

            cout << "Estetica de la Imagen y el Sonido: " << Est[N].Car.Com.Estetica_de_la_Imagen_y_el_Sonido << endl;
            Suma = Suma + Est[N].Car.Com.Estetica_de_la_Imagen_y_el_Sonido;
            Cont = Cont + 1;

        }

        if (Est[N].Car.Com.Proyecto_Comunitario_Socio_Comunicacional_I >= 5.5)
        {

            cout << "Proyecto Comunitario Socio Comunicacional II: " << Est[N].Car.Com.Proyecto_Comunitario_Socio_Comunicacional_II << endl;
            Suma = Suma + Est[N].Car.Com.Proyecto_Comunitario_Socio_Comunicacional_II;
            Cont = Cont + 1;

        }

    }

    if (Est[N].Semestre >= 5)
    {

        cout << "Investigacion de la Comunicacion: " << Est[N].Car.Com.Investigacion_de_la_Comunicacion << endl;
        cout << "Periodismo Interpretativo: " << Est[N].Car.Com.Periodismo_Interpretativo << endl;
        cout << "Economia Politica: " << Est[N].Car.Com.Economia_Politica << endl;

        Suma = Suma + (Est[N].Car.Com.Investigacion_de_la_Comunicacion + Est[N].Car.Com.Periodismo_Interpretativo + Est[N].Car.Com.Economia_Politica);
        Cont = Cont + 3;

        if (Est[N].Car.Com.Proyecto_Comunitario_Socio_Comunicacional_II >= 5.5)
        {

            cout << "Proyecto Comunitario Socio Comunicacional III: " << Est[N].Car.Com.Proyecto_Comunitario_Sociocomunicacional_III << endl;
            Suma = Suma + Est[N].Car.Com.Proyecto_Comunitario_Sociocomunicacional_III;
            Cont = Cont + 1;

        }

        if (Est[N].Car.Com.Teoria_de_la_Comunicacion >= 5.5)
        {

            cout << "Sociologia de la Comunicacion: " << Est[N].Car.Com.Sociologia_de_la_Comunicacion << endl;
            Suma = Suma + Est[N].Car.Com.Sociologia_de_la_Comunicacion;
            Cont = Cont + 1;

        }

        if (Est[N].Car.Com.Opinion_Publica >= 5.5)
        {

            cout << "Periodismo de Opinion: " << Est[N].Car.Com.Periodismo_de_Opinion << endl;
            Suma = Suma + Est[N].Car.Com.Periodismo_de_Opinion;
            Cont = Cont + 1;

        }

    }

    if (Est[N].Semestre >= 6)
    {

        cout << "Produccion de Radio: " << Est[N].Car.Com.Produccion_de_Radio << endl;
        cout << "Produccion de Cine: " << Est[N].Car.Com.Produccion_de_Cine << endl;
        cout << "Seminario de Formacion Socio Critica I: " << Est[N].Car.Com.Seminario_de_Formacion_Socio_Critica_I << endl;

        Suma = Suma + (Est[N].Car.Com.Produccion_de_Radio + Est[N].Car.Com.Produccion_de_Cine + Est[N].Car.Com.Seminario_de_Formacion_Socio_Critica_I);
        Cont = Cont + 3;

        if (Est[N].Car.Com.Estetica_de_la_Imagen_y_el_Sonido >= 5.5)
        {

            cout << "Produccion de Television: " << Est[N].Car.Com.Produccion_de_Television << endl;
            Suma = Suma + Est[N].Car.Com.Produccion_de_Television;
            Cont = Cont + 1;

        }

        if (Est[N].Car.Com.Proyecto_Comunitario_Sociocomunicacional_III >= 5.5)
        {

            cout << "Proyecto Comunitario Socio Comunicacional IV: " << Est[N].Car.Com.Proyecto_Comunitario_Sociocomunicacional_IV << endl;
            Suma = Suma + Est[N].Car.Com.Proyecto_Comunitario_Sociocomunicacional_IV;
            Cont = Cont + 1;

        }

        if (Est[N].Car.Com.Sociologia_de_la_Comunicacion >= 5.5)
        {

            cout << "Semiologia: " << Est[N].Car.Com.Semiologia << endl;
            Suma = Suma + Est[N].Car.Com.Semiologia;
            Cont = Cont + 1;

        }

    }

    // A partir de aqui se evalua por Unidades de Credito (UC)
    if (Est[N].UC_Aprobadas >= 82)
    {

        cout << "Fotoperiodismo: " << Est[N].Car.Com.Fotoperiodismo << endl;
        cout << "Periodismo Cientifico: " << Est[N].Car.Com.Periodismo_Cientifico << endl;
        cout << "Relaciones Publicas: " << Est[N].Car.Com.Relaciones_Publicas << endl;
        cout << "Tecnologia de la Informacion: " << Est[N].Car.Com.Tecnologia_de_la_Informacion << endl;

        Suma = Suma + (Est[N].Car.Com.Fotoperiodismo + Est[N].Car.Com.Periodismo_Cientifico + Est[N].Car.Com.Relaciones_Publicas + Est[N].Car.Com.Tecnologia_de_la_Informacion);
        Cont = Cont + 4;

        if (Est[N].Car.Com.Seminario_de_Formacion_Socio_Critica_I >= 5.5)
        {

            cout << "Seminario de Formacion Socio Critica II: " << Est[N].Car.Com.Seminario_de_Formacion_Socio_Critica_II << endl;
            Suma = Suma + Est[N].Car.Com.Seminario_de_Formacion_Socio_Critica_II;
            Cont = Cont + 1;

        }

        if (Est[N].Car.Com.Produccion_de_Cine >= 5.5 && Est[N].Car.Com.Produccion_de_Television >= 5.5)
        {

            cout << "Montajes Audiovisuales: " << Est[N].Car.Com.Montajes_Audiovisuales << endl;
            Suma = Suma + Est[N].Car.Com.Montajes_Audiovisuales;
            Cont = Cont + 1;

        }

        if (Est[N].Car.Com.Proyecto_Comunitario_Sociocomunicacional_IV >= 5.5)
        {

            cout << "Proyecto Comunitario Socio Comunicacional V: " << Est[N].Car.Com.Proyecto_Comunitario_Sociocomunicacional_V << endl;
            Suma = Suma + Est[N].Car.Com.Proyecto_Comunitario_Sociocomunicacional_V;
            Cont = Cont + 1;

        }

    }

    if (Est[N].UC_Aprobadas >= 98)
    {

        cout << "Locucion Basica: " << Est[N].Car.Com.Locucion_Basica << endl;
        cout << "Idioma Moderno: " << Est[N].Car.Com.Idioma_Moderno << endl;
        cout << "Periodismo Economico: " << Est[N].Car.Com.Periodismo_Economico << endl;
        cout << "Orientacion Profesional I: " << Est[N].Car.Com.Orientacion_Profesional_I << endl;

        Suma = Suma + (Est[N].Car.Com.Locucion_Basica + Est[N].Car.Com.Idioma_Moderno + Est[N].Car.Com.Periodismo_Economico + Est[N].Car.Com.Orientacion_Profesional_I);
        Cont = Cont + 4;

        if (Est[N].Car.Com.Relaciones_Publicas >= 5.5)
        {

            cout << "Publicidad: " << Est[N].Car.Com.Publicidad << endl;
            Suma = Suma + Est[N].Car.Com.Publicidad;
            Cont = Cont + 1;

        }

        if (Est[N].Car.Com.Seminario_de_Formacion_Socio_Critica_II >= 5.5)
        {

            cout << "Seminario de Formacion Socio Critica III: " << Est[N].Car.Com.Seminario_de_Formacion_Socio_Critica_III << endl;
            Suma = Suma + Est[N].Car.Com.Seminario_de_Formacion_Socio_Critica_III;
            Cont = Cont + 1;

        }

        if (Est[N].Car.Com.Proyecto_Comunitario_Sociocomunicacional_V >= 5.5)
        {

            cout << "Proyecto Comunitario Socio Comunicacional VI: " << Est[N].Car.Com.Proyecto_Comunitario_Sociocomunicacional_VI << endl;
            Suma = Suma + Est[N].Car.Com.Proyecto_Comunitario_Sociocomunicacional_VI;
            Cont = Cont + 1;

        }

    }

    if (Est[N].UC_Aprobadas >= 115)
    {

        cout << "Gerencia Corporativa: " << Est[N].Car.Com.Gerencia_Corporativa << endl;
        cout << "Periodismo Politico: " << Est[N].Car.Com.Periodismo_Politico << endl;
        cout << "Vinculacion Profesional: " << Est[N].Car.Com.Vinculación_Profesional_en_el_Campo_Sociocomunicacional << endl;

        Suma = Suma + (Est[N].Car.Com.Gerencia_Corporativa + Est[N].Car.Com.Periodismo_Politico + Est[N].Car.Com.Vinculación_Profesional_en_el_Campo_Sociocomunicacional);
        Cont = Cont + 3;

        if (Est[N].Car.Com.Publicidad >= 5.5)
        {

            cout << "Mercadeo: " << Est[N].Car.Com.Mercadeo << endl;
            Suma = Suma + Est[N].Car.Com.Mercadeo;
            Cont = Cont + 1;

        }

        if (Est[N].Car.Com.Locucion_Basica >= 5.5)
        {

            cout << "Locucion Profesional: " << Est[N].Car.Com.Locucion_Profesional << endl;
            Suma = Suma + Est[N].Car.Com.Locucion_Profesional;
            Cont = Cont + 1;

        }

        if (Est[N].Car.Com.Proyecto_Comunitario_Sociocomunicacional_VI >= 5.5)
        {

            cout << "Proyecto Comunitario Socio Comunicacional VII: " << Est[N].Car.Com.Proyecto_Comunitario_Sociocomunicacional_VII << endl;
            Suma = Suma + Est[N].Car.Com.Proyecto_Comunitario_Sociocomunicacional_VII;
            Cont = Cont + 1;

        }

        if (Est[N].Car.Com.Orientacion_Profesional_I >= 5.5)
        {

            cout << "Orientacion Profesional II: " << Est[N].Car.Com.Orientacion_Profesional << endl;
            Suma = Suma + Est[N].Car.Com.Orientacion_Profesional;
            Cont = Cont + 1;

        }

    }

    if (Est[N].UC_Aprobadas >= 132)
    {

        cout << "Trabajo Especial de Grado: " << Est[N].Car.Com.Trabajo_Especial_de_Grado << endl;
        Suma = Suma + Est[N].Car.Com.Trabajo_Especial_de_Grado;
        Cont = Cont + 1;

    }

    if (Cont > 0)
    {
        cout << endl << YELLOW << "Promedio Academico: " << RESET << Suma / Cont << endl;
        Continue();
    }

}