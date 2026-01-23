#include "../../Main/Header.h"
using namespace std;

void Notas_Materias_Prof (Variables (&Var), Estudiante (&Est)[D], Materias (&Mat)[527])
{
    string& Car = Var.Car;
    int& N = Var.N, T = Var.T, I2 = Var.I2, Note = Var.Note;

    // Informatica
    if (Car == "Informática")
    {

        if (Mat[T].Nombre == "Matemática I") { Est[I2].Car.Inf.Matematica_I = Note; }
        else if (Mat[T].Nombre == "Fundamentos de la Informática") { Est[I2].Car.Inf.Fundamentos_de_la_Informatica = Note; }
        else if (Mat[T].Nombre == "Lógica Matemática") { Est[I2].Car.Inf.Logica_Matematica = Note; }
        else if (Mat[T].Nombre == "Lenguaje y Comunicación") { Est[I2].Car.Inf.Lenguaje_y_Comunicacion = Note; }
        else if (Mat[T].Nombre == "Ingles I") { Est[I2].Car.Inf.Ingles_I = Note; }
        else if (Mat[T].Nombre == "Formacion Constitucional") { Est[I2].Car.Inf.Formacion_Constitucional = Note; }
        else if (Mat[T].Nombre == "Economía Digital") { Est[I2].Car.Inf.Economia_Digital = Note; }
        else if (Mat[T].Nombre == "Matemática II") { Est[I2].Car.Inf.Matematica_II = Note; }
        else if (Mat[T].Nombre == "Física I") { Est[I2].Car.Inf.Fisica_I = Note; }
        else if (Mat[T].Nombre == "Algoritmos I") { Est[I2].Car.Inf.Algoritmos_I = Note; }
        else if (Mat[T].Nombre == "Problemática Científica Tecnológica") { Est[I2].Car.Inf.Problematica_Cientifica_Tecnologica = Note; }
        else if (Mat[T].Nombre == "Ingles II") { Est[I2].Car.Inf.Ingles_II = Note; }
        else if (Mat[T].Nombre == "Electiva I") { Est[I2].Car.Inf.Electiva_I = Note; }
        else if (Mat[T].Nombre == "Arte y Cultura") { Est[I2].Car.Inf.Arte_y_Cultura = Note; }
        else if (Mat[T].Nombre == "Matemática III") { Est[I2].Car.Inf.Matematica_III = Note; }
        else if (Mat[T].Nombre == "Física II") { Est[I2].Car.Inf.Fisica_II = Note; }
        else if (Mat[T].Nombre == "Algoritmos II") { Est[I2].Car.Inf.Algoritmos_II = Note; }
        else if (Mat[T].Nombre == "Programación I") { Est[I2].Car.Inf.Programacion_I = Note; }
        else if (Mat[T].Nombre == "Metodología y Técnicas de Investigación") { Est[I2].Car.Inf.Metodologia_y_Tecnicas_de_Investigacion = Note; }
        else if (Mat[T].Nombre == "Electiva II") { Est[I2].Car.Inf.Electiva_II = Note; }
        else if (Mat[T].Nombre == "Matemática IV") { Est[I2].Car.Inf.Matematica_IV = Note; }
        else if (Mat[T].Nombre == "Probabilidad y Estadística") { Est[I2].Car.Inf.Probabilidad_y_Estadistica = Note; }
        else if (Mat[T].Nombre == "Estructuras Discretas I") { Est[I2].Car.Inf.Estructuras_Discretas_I = Note; }
        else if (Mat[T].Nombre == "Programación II") { Est[I2].Car.Inf.Programacion_II = Note; }
        else if (Mat[T].Nombre == "Base de Datos") { Est[I2].Car.Inf.Base_de_Datos = Note; }
        else if (Mat[T].Nombre == "Electiva III") { Est[I2].Car.Inf.Electiva_III = Note; }
        else if (Mat[T].Nombre == "Organización del Computador") { Est[I2].Car.Inf.Organizacion_del_Computador = Note; }
        else if (Mat[T].Nombre == "Algebra Booleana") { Est[I2].Car.Inf.Algebra_Booleana = Note; }
        else if (Mat[T].Nombre == "Estructuras Discretas II") { Est[I2].Car.Inf.Estructuras_Discretas_II = Note; }
        else if (Mat[T].Nombre == "Programación III") { Est[I2].Car.Inf.Programacion_III = Note; }
        else if (Mat[T].Nombre == "Teoría de Sistemas") { Est[I2].Car.Inf.Teoria_de_Sistemas = Note; }
        else if (Mat[T].Nombre == "Electiva IV") { Est[I2].Car.Inf.Electiva_IV = Note; }
        else if (Mat[T].Nombre == "Arquitectura del Computador") { Est[I2].Car.Inf.Arquitectura_del_Computador = Note; }
        else if (Mat[T].Nombre == "Métodos Numéricos") { Est[I2].Car.Inf.Metodos_Numericos = Note; }
        else if (Mat[T].Nombre == "Investigación de Operaciones") { Est[I2].Car.Inf.Investigacion_de_Operaciones = Note; }
        else if (Mat[T].Nombre == "Ingeniería Económica") { Est[I2].Car.Inf.Ingenieria_Economica = Note; }
        else if (Mat[T].Nombre == "Sistemas de Información I") { Est[I2].Car.Inf.Sistemas_de_Informacion_I = Note; }
        else if (Mat[T].Nombre == "Electiva V") { Est[I2].Car.Inf.Electiva_V = Note; }
        else if (Mat[T].Nombre == "Sistemas Operativos") { Est[I2].Car.Inf.Sistemas_Operativos = Note; }
        else if (Mat[T].Nombre == "Control de Proyectos") { Est[I2].Car.Inf.Control_de_Proyectos = Note; }
        else if (Mat[T].Nombre == "Gestión Empresarial") { Est[I2].Car.Inf.Gestion_Empresarial = Note; }
        else if (Mat[T].Nombre == "Traductores e Interpretes") { Est[I2].Car.Inf.Traductores_e_Interpretes = Note; }
        else if (Mat[T].Nombre == "Sistemas de Información II") { Est[I2].Car.Inf.Sistemas_de_Informacion_II = Note; }
        else if (Mat[T].Nombre == "Redes") { Est[I2].Car.Inf.Redes = Note; }
        else if (Mat[T].Nombre == "Pasantías") { Est[I2].Car.Inf.Pasantias = Note; }
        else if (Mat[T].Nombre == "Electiva de Área I") { Est[I2].Car.Inf.Electiva_de_Area_I = Note; }
        else if (Mat[T].Nombre == "Lenguajes de Programación") { Est[I2].Car.Inf.Lenguajes_de_Programacion = Note; }
        else if (Mat[T].Nombre == "Sistemas de Información III") { Est[I2].Car.Inf.Sistemas_de_Informacion_III = Note; }
        else if (Mat[T].Nombre == "Sistemas Distribuidos") { Est[I2].Car.Inf.Sistemas_Distribuidos = Note; }
        else if (Mat[T].Nombre == "Proyecto de Grado I") { Est[I2].Car.Inf.Proyecto_de_Grado_I = Note; }
        else if (Mat[T].Nombre == "Electiva de Área II") { Est[I2].Car.Inf.Electiva_de_Area_II = Note; }
        else if (Mat[T].Nombre == "Electiva Libre I") { Est[I2].Car.Inf.Electiva_Libre_I = Note; }
        else if (Mat[T].Nombre == "Ética Profesional") { Est[I2].Car.Inf.Etica_Profesional = Note; }
        else if (Mat[T].Nombre == "Deportes") { Est[I2].Car.Inf.Deportes = Note; }
        else if (Mat[T].Nombre == "Gerencia de Proyectos") { Est[I2].Car.Inf.Gerencia_de_Proyectos = Note; }
        else if (Mat[T].Nombre == "Proyecto de Grado II") { Est[I2].Car.Inf.Proyecto_de_Grado_II = Note; }
        else if (Mat[T].Nombre == "Electiva de Área III") { Est[I2].Car.Inf.Electiva_de_Area_III = Note; }
        else if (Mat[T].Nombre == "Electiva Libre II") { Est[I2].Car.Inf.Electiva_Libre_II = Note; }
        else if (Mat[T].Nombre == "Informática Educativa") { Est[I2].Car.Inf.Informatica_Educativa = Note; }

    }



    // Civil
    else if (Car == "Civil")
    {

        if (Mat[T].Nombre == "Inglés Técnico") { Est[I2].Car.Civ.Ingles_Tecnico = Note; }
        else if (Mat[T].Nombre == "Técnicas de Estudio y Documentación") { Est[I2].Car.Civ.Tecnicas_de_Estudio_y_Documentacion = Note; }
        else if (Mat[T].Nombre == "Geometría Descriptiva I") { Est[I2].Car.Civ.Geometria_Descriptiva_I = Note; }
        else if (Mat[T].Nombre == "Calculo I") { Est[I2].Car.Civ.Calculo_I = Note; }
        else if (Mat[T].Nombre == "Métodos del Razonamiento Lógico") { Est[I2].Car.Civ.Metodos_del_Razonamiento_Logico = Note; }
        else if (Mat[T].Nombre == "Arte y Cultura") { Est[I2].Car.Civ.Arte_y_Cultura = Note; }
        else if (Mat[T].Nombre == "Calculo II") { Est[I2].Car.Civ.Calculo_II = Note; }
        else if (Mat[T].Nombre == "Introducción a las Ciencias Humanas") { Est[I2].Car.Civ.Introduccion_a_las_Ciencias_Humanas = Note; }
        else if (Mat[T].Nombre == "Física I") { Est[I2].Car.Civ.Fisica_I = Note; }
        else if (Mat[T].Nombre == "Geometría Descriptiva II") { Est[I2].Car.Civ.Geometria_Descriptiva_II = Note; }
        else if (Mat[T].Nombre == "Sociedad Ciencia y Tecnología") { Est[I2].Car.Civ.Sociedad_Ciencia_y_Tecnologia = Note; }
        else if (Mat[T].Nombre == "Física II") { Est[I2].Car.Civ.Fisica_II = Note; }
        else if (Mat[T].Nombre == "Química Básica") { Est[I2].Car.Civ.Quimica_Basica = Note; }
        else if (Mat[T].Nombre == "Calculo III") { Est[I2].Car.Civ.Calculo_III = Note; }
        else if (Mat[T].Nombre == "Mecánica Racional I") { Est[I2].Car.Civ.Mecanica_Racional_I = Note; }
        else if (Mat[T].Nombre == "Deportes") { Est[I2].Car.Civ.Deportes = Note; }
        else if (Mat[T].Nombre == "Informática para Ingenieros") { Est[I2].Car.Civ.Informatica_para_Ingenieros = Note; }
        else if (Mat[T].Nombre == "Mecánica Racional II") { Est[I2].Car.Civ.Mecanica_Racional_II = Note; }
        else if (Mat[T].Nombre == "Química Aplicada") { Est[I2].Car.Civ.Quimica_Aplicada = Note; }
        else if (Mat[T].Nombre == "Topografía") { Est[I2].Car.Civ.Topografia = Note; }
        else if (Mat[T].Nombre == "Calculo IV") { Est[I2].Car.Civ.Calculo_IV = Note; }
        else if (Mat[T].Nombre == "Estadística para Ingenieros") { Est[I2].Car.Civ.Estadistica_para_Ingenieros = Note; }
        else if (Mat[T].Nombre == "Electiva No Técnica") { Est[I2].Car.Civ.Electiva_No_Tecnica = Note; }
        else if (Mat[T].Nombre == "Geología Aplicada") { Est[I2].Car.Civ.Geologia_Aplicada = Note; }
        else if (Mat[T].Nombre == "Resistencia de Materiales") { Est[I2].Car.Civ.Resistencia_de_Materiales = Note; }
        else if (Mat[T].Nombre == "Electiva No Técnica II") { Est[I2].Car.Civ.Electiva_No_Tecnica_II = Note; }
        else if (Mat[T].Nombre == "Materiales y Ensayos") { Est[I2].Car.Civ.Materiales_y_Ensayos = Note; }
        else if (Mat[T].Nombre == "Mecánica de Fluidos I") { Est[I2].Car.Civ.Mecanica_de_Fluidos_I = Note; }
        else if (Mat[T].Nombre == "Calculo V") { Est[I2].Car.Civ.Calculo_V = Note; }
        else if (Mat[T].Nombre == "Mecánica de Suelos") { Est[I2].Car.Civ.Mecanica_de_Suelos = Note; }
        else if (Mat[T].Nombre == "H & San Ambiental") { Est[I2].Car.Civ.H_y_San_Ambiental = Note; }
        else if (Mat[T].Nombre == "Teorías de Estructuras I") { Est[I2].Car.Civ.Teorias_de_Estructuras_I = Note; }
        else if (Mat[T].Nombre == "Dibujo de Proyectos") { Est[I2].Car.Civ.Dibujo_de_Proyectos = Note; }
        else if (Mat[T].Nombre == "Hidrología") { Est[I2].Car.Civ.Hidrologia = Note; }
        else if (Mat[T].Nombre == "Mecánica de Fluidos II") { Est[I2].Car.Civ.Mecanica_de_Fluidos_II = Note; }
        else if (Mat[T].Nombre == "Teorías de Estructuras II") { Est[I2].Car.Civ.Teorias_de_Estructuras_II = Note; }
        else if (Mat[T].Nombre == "Ingeniería Económica") { Est[I2].Car.Civ.Ingenieria_Economica = Note; }
        else if (Mat[T].Nombre == "Instalaciones para Edificios") { Est[I2].Car.Civ.Instalaciones_para_Edificios = Note; }
        else if (Mat[T].Nombre == "Metodología de la Investigación") { Est[I2].Car.Civ.Metodologia_de_la_Investigacion = Note; }
        else if (Mat[T].Nombre == "Acueductos y Cloacas") { Est[I2].Car.Civ.Acueductos_y_Cloacas = Note; }
        else if (Mat[T].Nombre == "Electiva Técnica") { Est[I2].Car.Civ.Electiva_Tecnica = Note; }
        else if (Mat[T].Nombre == "Electiva Técnica II") { Est[I2].Car.Civ.Electiva_Tecnica_II = Note; }
        else if (Mat[T].Nombre == "Obras Hidráulicas") { Est[I2].Car.Civ.Obras_Hidraulicas = Note; }
        else if (Mat[T].Nombre == "Práctica Profesional") { Est[I2].Car.Civ.Practica_Profesional = Note; }
        else if (Mat[T].Nombre == "Concreto Armado") { Est[I2].Car.Civ.Concreto_Armado = Note; }
        else if (Mat[T].Nombre == "Vías de Comunicación I") { Est[I2].Car.Civ.Vias_de_Comunicacion_I = Note; }
        else if (Mat[T].Nombre == "Proyectos Estructurales de Acero") { Est[I2].Car.Civ.Proyectos_Estructurales_de_Acero = Note; }
        else if (Mat[T].Nombre == "Práctica Comunitaria") { Est[I2].Car.Civ.Practica_Comunitaria = Note; }
        else if (Mat[T].Nombre == "Trabajo Especial de Grado I") { Est[I2].Car.Civ.Trabajo_Especial_de_Grado_I = Note; }
        else if (Mat[T].Nombre == "Concreto Pretenzado") { Est[I2].Car.Civ.Concreto_Pretenzado = Note; }
        else if (Mat[T].Nombre == "Fundaciones y Muros") { Est[I2].Car.Civ.Fundaciones_y_Muros = Note; }
        else if (Mat[T].Nombre == "Vías de Comunicación II") { Est[I2].Car.Civ.Vias_de_Comunicacion_II = Note; }
        else if (Mat[T].Nombre == "Proyectos Estructurales de Concreto") { Est[I2].Car.Civ.Proyectos_Estructurales_de_Concreto = Note; }
        else if (Mat[T].Nombre == "Trabajo Especial de Grado II") { Est[I2].Car.Civ.Trabajo_Especial_de_Grado_II = Note; }
        else if (Mat[T].Nombre == "Administración de Obras") { Est[I2].Car.Civ.Administracion_de_Obras = Note; }
        else if (Mat[T].Nombre == "Pavimentos") { Est[I2].Car.Civ.Pavimentos = Note; }
        else if (Mat[T].Nombre == "Puentes") { Est[I2].Car.Civ.Puentes = Note; }

    }



    // Hidrocarburo
    else if (Car == "Hidrocarburo")
    {
        
        if (Mat[T].Nombre == "Formación Socio Política I") { Est[I2].Car.Hid.Formacion_Socio_Politica_I = Note; }
        else if (Mat[T].Nombre == "Proyecto Comunitario Socio Energético I") { Est[I2].Car.Hid.Proyecto_Comunitario_Socio_Energetico_I = Note; }
        else if (Mat[T].Nombre == "Dibujo Técnico y Descriptiva") { Est[I2].Car.Hid.Dibujo_Tecnico_y_Descriptiva = Note; }
        else if (Mat[T].Nombre == "Matemática I") { Est[I2].Car.Hid.Matematica_I = Note; }
        else if (Mat[T].Nombre == "Ingles Técnico") { Est[I2].Car.Hid.Ingles_Tecnico = Note; }
        else if (Mat[T].Nombre == "Química Inorgánica") { Est[I2].Car.Hid.Quimica_Inorganica = Note; }
        else if (Mat[T].Nombre == "Orientación a la Ingeniería del Petróleo y Gas Natural") { Est[I2].Car.Hid.Orientacion_a_la_Ingenieria_del_Petroleo_y_Gas_Natural = Note; }
        else if (Mat[T].Nombre == "Arte y Cultura") { Est[I2].Car.Hid.Arte_y_Cultura = Note; }
        else if (Mat[T].Nombre == "Informática") { Est[I2].Car.Hid.Informatica = Note; }
        else if (Mat[T].Nombre == "Matemática II") { Est[I2].Car.Hid.Matematica_II = Note; }
        else if (Mat[T].Nombre == "Física I") { Est[I2].Car.Hid.Fisica_I = Note; }
        else if (Mat[T].Nombre == "Química Orgánica") { Est[I2].Car.Hid.Quimica_Organica = Note; }
        else if (Mat[T].Nombre == "Formación Socio Política II") { Est[I2].Car.Hid.Formacion_Socio_Politica_II = Note; }
        else if (Mat[T].Nombre == "Proyecto Comunitario Socio Energético II") { Est[I2].Car.Hid.Proyecto_Comunitario_Socio_Energetico_II = Note; }
        else if (Mat[T].Nombre == "Deporte") { Est[I2].Car.Hid.Deporte = Note; }
        else if (Mat[T].Nombre == "Formación Socio Política III") { Est[I2].Car.Hid.Formacion_Socio_Politica_III = Note; }
        else if (Mat[T].Nombre == "Proyecto Comunitario Socio Energético III") { Est[I2].Car.Hid.Proyecto_Comunitario_Socio_Energetico_III = Note; }
        else if (Mat[T].Nombre == "Física II") { Est[I2].Car.Hid.Fisica_II = Note; }
        else if (Mat[T].Nombre == "Geología General") { Est[I2].Car.Hid.Geologia_General = Note; }
        else if (Mat[T].Nombre == "Matemática III") { Est[I2].Car.Hid.Matematica_III = Note; }
        else if (Mat[T].Nombre == "Laboratorio de Física") { Est[I2].Car.Hid.Laboratorio_de_Fisica = Note; }
        else if (Mat[T].Nombre == "Formación Socio Política IV") { Est[I2].Car.Hid.Formacion_Socio_Politica_IV = Note; }
        else if (Mat[T].Nombre == "Proyecto Comunitario Socio Energético IV") { Est[I2].Car.Hid.Proyecto_Comunitario_Socio_Energetico_IV = Note; }
        else if (Mat[T].Nombre == "Mecánica de las Rocas y de los Fluidos") { Est[I2].Car.Hid.Mecanica_de_las_Rocas_y_de_los_Fluidos = Note; }
        else if (Mat[T].Nombre == "Probabilidades y Estadísticas") { Est[I2].Car.Hid.Probabilidades_y_Estadisticas = Note; }
        else if (Mat[T].Nombre == "Termodinámica General y Aplicada") { Est[I2].Car.Hid.Termodinamica_General_y_Aplicada = Note; }
        else if (Mat[T].Nombre == "Caracterización Física de los Yacimientos") { Est[I2].Car.Hid.Caracterizacion_Fisica_de_los_Yacimientos = Note; }
        else if (Mat[T].Nombre == "Sistema de Compresión de Gas") { Est[I2].Car.Hid.Sistema_de_Compresion_de_Gas = Note; }
        else if (Mat[T].Nombre == "Formación Socio Política (Legislación Petrolera)") { Est[I2].Car.Hid.Formacion_Socio_Politica_Legislacion_Petrolera = Note; }
        else if (Mat[T].Nombre == "Proyecto Socio Comunitario Socio Energético V") { Est[I2].Car.Hid.Proyecto_Socio_Comunitario_Socio_Energetico_V = Note; }
        else if (Mat[T].Nombre == "Perforación de Pozos") { Est[I2].Car.Hid.Perforacion_de_Pozos = Note; }
        else if (Mat[T].Nombre == "Caracterización Energética de los Yacimientos") { Est[I2].Car.Hid.Caracterizacion_Energetica_de_los_Yacimientos = Note; }
        else if (Mat[T].Nombre == "Transporte y Distribución de Hidrocarburos") { Est[I2].Car.Hid.Transporte_y_Distribucion_de_Hidrocarburos = Note; }
        else if (Mat[T].Nombre == "Geología Estructural") { Est[I2].Car.Hid.Geologia_Estructural = Note; }
        else if (Mat[T].Nombre == "Formación Socio Política (Integración con el Comercio Internacional)") { Est[I2].Car.Hid.Formacion_Socio_Politica_Integracion_Comercio_Internacional = Note; }
        else if (Mat[T].Nombre == "Proyecto Comunitario Socio Energético VI") { Est[I2].Car.Hid.Proyecto_Comunitario_Socio_Energetico_VI = Note; }
        else if (Mat[T].Nombre == "Seguridad Industrial") { Est[I2].Car.Hid.Seguridad_Industrial = Note; }
        else if (Mat[T].Nombre == "Caracterización Dinámica de los Yacimientos") { Est[I2].Car.Hid.Caracterizacion_Dinamica_de_los_Yacimientos = Note; }
        else if (Mat[T].Nombre == "Perfilaje de Pozos") { Est[I2].Car.Hid.Perfilaje_de_Pozos = Note; }
        else if (Mat[T].Nombre == "Competación de Pozos") { Est[I2].Car.Hid.Competacion_de_Pozos = Note; }
        else if (Mat[T].Nombre == "Recuperación Secundaria de Yacimientos") { Est[I2].Car.Hid.Recuperacion_Secundaria_de_Yacimientos = Note; }
        else if (Mat[T].Nombre == "Proyecto Comunitario Socio Energético VII") { Est[I2].Car.Hid.Proyecto_Comunitario_Socio_Energetico_VII = Note; }
        else if (Mat[T].Nombre == "Geología de Producción") { Est[I2].Car.Hid.Geologia_de_Produccion = Note; }
        else if (Mat[T].Nombre == "Ingeniería de Producción I") { Est[I2].Car.Hid.Ingenieria_de_Produccion_I = Note; }
        else if (Mat[T].Nombre == "Protección Integral de Riesgos") { Est[I2].Car.Hid.Proteccion_Integral_de_Riesgos = Note; }
        else if (Mat[T].Nombre == "Electiva Profesional (Corrosión e Integridad Mecánica)") { Est[I2].Car.Hid.Electiva_Profesional_Corrosion_e_Integridad_Mecanica = Note; }
        else if (Mat[T].Nombre == "Evaluación y Auditoría Ambiental") { Est[I2].Car.Hid.Evaluacion_y_Auditoria_Ambiental = Note; }
        else if (Mat[T].Nombre == "Transferencia de Calor") { Est[I2].Car.Hid.Transferencia_de_Calor = Note; }
        else if (Mat[T].Nombre == "Procesos Petroquímicos") { Est[I2].Car.Hid.Procesos_Petroquimicos = Note; }
        else if (Mat[T].Nombre == "Proyecto Comunitario Socio Energético VIII") { Est[I2].Car.Hid.Proyecto_Comunitario_Socio_Energetico_VIII = Note; }
        else if (Mat[T].Nombre == "Electiva Profesional (Gestión y Control de Calidad)") { Est[I2].Car.Hid.Electiva_Profesional_Gestion_y_Control_de_Calidad = Note; }
        else if (Mat[T].Nombre == "Ingeniería de Producción II") { Est[I2].Car.Hid.Ingenieria_de_Produccion_II = Note; }
        else if (Mat[T].Nombre == "Simulación Numérica de Yacimientos") { Est[I2].Car.Hid.Simulacion_Numerica_de_Yacimientos = Note; }
        else if (Mat[T].Nombre == "Procesos de Refinación") { Est[I2].Car.Hid.Procesos_de_Refinacion = Note; }
        else if (Mat[T].Nombre == "Trabajo Especial de Grado") { Est[I2].Car.Hid.Trabajo_Especial_de_Grado = Note; }
        else if (Mat[T].Nombre == "Recuperación Mejorada") { Est[I2].Car.Hid.Recuperacion_Mejorada = Note; }

    }



    // Medicina
    else if (Car == "Medicina")
    {

        if (Mat[T].Nombre == "Histología Embriología y Genética") { Est[I2].Car.Med.Histologia_Embriologia_y_Genetica = Note; }
        else if (Mat[T].Nombre == "Bioética I") { Est[I2].Car.Med.Bioetica_I = Note; }
        else if (Mat[T].Nombre == "Medicina General I") { Est[I2].Car.Med.Medicina_General_I = Note; }
        else if (Mat[T].Nombre == "Deportes, Arte y Cultura") { Est[I2].Car.Med.Deportes_Arte_y_Cultura = Note; }
        else if (Mat[T].Nombre == "Metodología de la Investigación Científica") { Est[I2].Car.Med.Metodologia_de_la_Investigacion_Cientifica = Note; }
        else if (Mat[T].Nombre == "Ingles Instrumental") { Est[I2].Car.Med.Ingles_Instrumental = Note; }
        else if (Mat[T].Nombre == "Medicina Preventiva, Comunitaria y Familiar I") { Est[I2].Car.Med.Medicina_Preventiva_Comunitaria_y_Familiar_I = Note; }
        else if (Mat[T].Nombre == "Anatomía Humana") { Est[I2].Car.Med.Anatomia_Humana = Note; }
        else if (Mat[T].Nombre == "Historia de la Medicina") { Est[I2].Car.Med.Historia_de_la_Medicina = Note; }
        else if (Mat[T].Nombre == "Antropología") { Est[I2].Car.Med.Antropologia = Note; }
        else if (Mat[T].Nombre == "Microbiología") { Est[I2].Car.Med.Microbiologia = Note; }
        else if (Mat[T].Nombre == "Deportes, Arte y Cultura II") { Est[I2].Car.Med.Deportes_Arte_y_Cultura_II = Note; }
        else if (Mat[T].Nombre == "Bioquímica") { Est[I2].Car.Med.Bioquimica = Note; }
        else if (Mat[T].Nombre == "Medicina General II") { Est[I2].Car.Med.Medicina_General_II = Note; }
        else if (Mat[T].Nombre == "Psicología y Sociología Gral") { Est[I2].Car.Med.Psicologia_y_Sociologia_Gral = Note; }
        else if (Mat[T].Nombre == "Estadística y Demografía Médica II") { Est[I2].Car.Med.Estadistica_y_Demografia_Medica_II = Note; }
        else if (Mat[T].Nombre == "Fisiología y Biofísica") { Est[I2].Car.Med.Fisiologia_y_Biofisica = Note; }
        else if (Mat[T].Nombre == "Informática") { Est[I2].Car.Med.Informatica = Note; }
        else if (Mat[T].Nombre == "Medicina Preventiva, Comunitaria y Familiar II") { Est[I2].Car.Med.Medicina_Preventiva_Comunitaria_y_Familiar_II = Note; }
        else if (Mat[T].Nombre == "Derecho Constitucional") { Est[I2].Car.Med.Derecho_Constitucional = Note; }
        else if (Mat[T].Nombre == "Medicina Preventiva, Comunitaria y Familiar III") { Est[I2].Car.Med.Medicina_Preventiva_Comunitaria_y_Familiar_III = Note; }
        else if (Mat[T].Nombre == "Parasitología") { Est[I2].Car.Med.Parasitologia = Note; }
        else if (Mat[T].Nombre == "Semiología Médico Quirúrgica") { Est[I2].Car.Med.Semiologia_Medico_Quirurgica = Note; }
        else if (Mat[T].Nombre == "Farmacología") { Est[I2].Car.Med.Farmacologia = Note; }
        else if (Mat[T].Nombre == "Inteligencia Ética/Deontología Práctica Médica") { Est[I2].Car.Med.Inteligencia_Etica_Deontologia_Practica_Medica = Note; }
        else if (Mat[T].Nombre == "Fisiopatología") { Est[I2].Car.Med.Fisiopatologia = Note; }
        else if (Mat[T].Nombre == "Nutrición") { Est[I2].Car.Med.Nutricion = Note; }
        else if (Mat[T].Nombre == "Psicología Médica General") { Est[I2].Car.Med.Psicologia_Medica_General = Note; }
        else if (Mat[T].Nombre == "Medicina General III") { Est[I2].Car.Med.Medicina_General_III = Note; }
        else if (Mat[T].Nombre == "Psicopatología") { Est[I2].Car.Med.Psicopatologia = Note; }
        else if (Mat[T].Nombre == "Clínica Obstetrica y Ginecología I") { Est[I2].Car.Med.Clinica_Obstetrica_y_Ginecologia_I = Note; }
        else if (Mat[T].Nombre == "Clínica Quirúrgica I") { Est[I2].Car.Med.Clinica_Quirurgica_I = Note; }
        else if (Mat[T].Nombre == "Clínica Pediátrica I") { Est[I2].Car.Med.Clinica_Pediatrica_I = Note; }
        else if (Mat[T].Nombre == "Anatomía Patológica") { Est[I2].Car.Med.Anatomia_Patologica = Note; }
        else if (Mat[T].Nombre == "Medicina Preventiva Comunitaria y Familiar IV") { Est[I2].Car.Med.Medicina_Preventiva_Comunitaria_y_Familiar_IV = Note; }
        else if (Mat[T].Nombre == "Medicina General IV") { Est[I2].Car.Med.Medicina_General_IV = Note; }
        else if (Mat[T].Nombre == "Clínica Médica I") { Est[I2].Car.Med.Clinica_Medica_I = Note; }
        else if (Mat[T].Nombre == "Clínica Quirúrgica II") { Est[I2].Car.Med.Clinica_Quirurgica_II = Note; }
        else if (Mat[T].Nombre == "Medicina General V") { Est[I2].Car.Med.Medicina_General_V = Note; }
        else if (Mat[T].Nombre == "Clínica Pediátrica II") { Est[I2].Car.Med.Clinica_Pediatrica_II = Note; }
        else if (Mat[T].Nombre == "Medicina Legal") { Est[I2].Car.Med.Medicina_Legal = Note; }
        else if (Mat[T].Nombre == "Medicina Preventiva, Comunitaria y Familiar V") { Est[I2].Car.Med.Medicina_Preventiva_Comunitaria_y_Familiar_V = Note; }
        else if (Mat[T].Nombre == "Clínica Psiquiátrica") { Est[I2].Car.Med.Clinica_Psiquiatrica = Note; }
        else if (Mat[T].Nombre == "Clínica Obstetrica y Ginecológica II") { Est[I2].Car.Med.Clinica_Obstetrica_y_Ginecologica_II = Note; }
        else if (Mat[T].Nombre == "Clínica Médica II") { Est[I2].Car.Med.Clinica_Medica_II = Note; }
        else if (Mat[T].Nombre == "Internado Rural") { Est[I2].Car.Med.Internado_Rural = Note; }
        else if (Mat[T].Nombre == "Clínica Médica III") { Est[I2].Car.Med.Clinica_Medica_III = Note; }
        else if (Mat[T].Nombre == "Clínica Quirúrgica III") { Est[I2].Car.Med.Clinica_Quirurgica_III = Note; }
        else if (Mat[T].Nombre == "Clínica Obstetrica III") { Est[I2].Car.Med.Clinica_Obstetrica_III = Note; }
        else if (Mat[T].Nombre == "Clínica Pediátrica III") { Est[I2].Car.Med.Clinica_Pediatrica_III = Note; }
        else if (Mat[T].Nombre == "Trabajo de Grado") { Est[I2].Car.Med.Trabajo_de_Grado = Note; }

    }



    // Odontología
    else if (Car == "Odontología")
    {

        if (Mat[T].Nombre == "Morfología Dentaria y Oclusión") { Est[I2].Car.Odo.Morfologia_Dentaria_y_Oclusion = Note; }
        else if (Mat[T].Nombre == "Formación Cultural y Artística") { Est[I2].Car.Odo.Formacion_Cultural_y_Artistica = Note; }
        else if (Mat[T].Nombre == "Odontología Comunitaria I") { Est[I2].Car.Odo.Odontologia_Comunitaria_I = Note; }
        else if (Mat[T].Nombre == "Iniciación a la Clínica") { Est[I2].Car.Odo.Iniciacion_a_la_Clinica = Note; }
        else if (Mat[T].Nombre == "Morfología Humana") { Est[I2].Car.Odo.Morfologia_Humana = Note; }
        else if (Mat[T].Nombre == "Formación Instrumental") { Est[I2].Car.Odo.Formacion_Instrumental = Note; }
        else if (Mat[T].Nombre == "Bioquímica Aplicada") { Est[I2].Car.Odo.Bioquimica_Aplicada = Note; }
        else if (Mat[T].Nombre == "Histología, Embriología y Genética") { Est[I2].Car.Odo.Histologia_Embriologia_y_Genetica = Note; }
        else if (Mat[T].Nombre == "Educación Física y Deportes I") { Est[I2].Car.Odo.Educacion_Fisica_y_Deportes_I = Note; }
        else if (Mat[T].Nombre == "Investigación I") { Est[I2].Car.Odo.Investigacion_I = Note; }
        else if (Mat[T].Nombre == "Odontología Comunitaria II") { Est[I2].Car.Odo.Odontologia_Comunitaria_II = Note; }
        else if (Mat[T].Nombre == "Histofisiología") { Est[I2].Car.Odo.Histofisiologia = Note; }
        else if (Mat[T].Nombre == "Clínica Integral del Adulto I") { Est[I2].Car.Odo.Clinica_Integral_del_Adulto_I = Note; }
        else if (Mat[T].Nombre == "Biomateriales Odontológicos") { Est[I2].Car.Odo.Biomateriales_Odontologicos = Note; }
        else if (Mat[T].Nombre == "Educación Física y Deportes II") { Est[I2].Car.Odo.Educacion_Fisica_y_Deportes_II = Note; }
        else if (Mat[T].Nombre == "Investigación II") { Est[I2].Car.Odo.Investigacion_II = Note; }
        else if (Mat[T].Nombre == "Microbiología y Parasitología") { Est[I2].Car.Odo.Microbiologia_y_Parasitologia = Note; }
        else if (Mat[T].Nombre == "Formación Instrumental II") { Est[I2].Car.Odo.Formacion_Instrumental_II = Note; }
        else if (Mat[T].Nombre == "Formación Cultural y Artística II") { Est[I2].Car.Odo.Formacion_Cultural_y_Artistica_II = Note; }
        else if (Mat[T].Nombre == "Investigación III") { Est[I2].Car.Odo.Investigacion_III = Note; }
        else if (Mat[T].Nombre == "Clínica Integral del Adulto II") { Est[I2].Car.Odo.Clinica_Integral_del_Adulto_II = Note; }
        else if (Mat[T].Nombre == "Atención Integral de Niño I") { Est[I2].Car.Odo.Atencion_Integral_de_Niño_I = Note; }
        else if (Mat[T].Nombre == "Odontología Comunitaria III") { Est[I2].Car.Odo.Odontologia_Comunitaria_III = Note; }
        else if (Mat[T].Nombre == "Medicina Interna y Semiología") { Est[I2].Car.Odo.Medicina_Interna_y_Semiologia = Note; }
        else if (Mat[T].Nombre == "Fisiopatología") { Est[I2].Car.Odo.Fisiopatologia = Note; }
        else if (Mat[T].Nombre == "Farmacología") { Est[I2].Car.Odo.Farmacologia = Note; }
        else if (Mat[T].Nombre == "Investigación IV") { Est[I2].Car.Odo.Investigacion_IV = Note; }
        else if (Mat[T].Nombre == "Clínica Integral del Adulto III") { Est[I2].Car.Odo.Clinica_Integral_del_Adulto_III = Note; }
        else if (Mat[T].Nombre == "Odontología Comunitaria IV") { Est[I2].Car.Odo.Odontologia_Comunitaria_IV = Note; }
        else if (Mat[T].Nombre == "Atención Integral de Niño II") { Est[I2].Car.Odo.Atencion_Integral_de_Niño_II = Note; }
        else if (Mat[T].Nombre == "Investigación V") { Est[I2].Car.Odo.Investigacion_V = Note; }
        else if (Mat[T].Nombre == "Odontología Comunitaria V") { Est[I2].Car.Odo.Odontologia_Comunitaria_V = Note; }
        else if (Mat[T].Nombre == "Toxicología") { Est[I2].Car.Odo.Toxicologia = Note; }
        else if (Mat[T].Nombre == "Gerontología") { Est[I2].Car.Odo.Gerontologia = Note; }
        
    }



    // Veterinaria
    else if (Car == "Veterinaria")
    {

        if (Mat[T].Nombre == "Faenas Pecuarias") { Est[I2].Car.Vet.Faenas_Pecuarias = Note; }
        else if (Mat[T].Nombre == "Ingles Instrumental") { Est[I2].Car.Vet.Ingles_Instrumental = Note; }
        else if (Mat[T].Nombre == "Ecología Agrícola") { Est[I2].Car.Vet.Ecologia_Agricola = Note; }
        else if (Mat[T].Nombre == "Análisis del Perfil Profesional") { Est[I2].Car.Vet.Analisis_del_Perfil_Profesional = Note; }
        else if (Mat[T].Nombre == "Educación Física y Deportes") { Est[I2].Car.Vet.Educacion_Fisica_y_Deportes = Note; }
        else if (Mat[T].Nombre == "Bioquímica") { Est[I2].Car.Vet.Bioquimica = Note; }
        else if (Mat[T].Nombre == "Computación") { Est[I2].Car.Vet.Computacion = Note; }
        else if (Mat[T].Nombre == "Zoología") { Est[I2].Car.Vet.Zoologia = Note; }
        else if (Mat[T].Nombre == "Anatomía de los Animales Domesticos") { Est[I2].Car.Vet.Anatomia_de_los_Animales_Domesticos = Note; }
        else if (Mat[T].Nombre == "Histología Veterinaria") { Est[I2].Car.Vet.Histologia_Veterinaria = Note; }
        else if (Mat[T].Nombre == "Arte y Cultura") { Est[I2].Car.Vet.Arte_y_Cultura = Note; }
        else if (Mat[T].Nombre == "Bioestadística") { Est[I2].Car.Vet.Bioestadistica = Note; }
        else if (Mat[T].Nombre == "Genética") { Est[I2].Car.Vet.Genetica = Note; }
        else if (Mat[T].Nombre == "Fisiología Animal") { Est[I2].Car.Vet.Fisiologia_Animal = Note; }
        else if (Mat[T].Nombre == "Zootecnia") { Est[I2].Car.Vet.Zootecnia = Note; }
        else if (Mat[T].Nombre == "Microbiología") { Est[I2].Car.Vet.Microbiologia = Note; }
        else if (Mat[T].Nombre == "Patología Clínica Veterinaria") { Est[I2].Car.Vet.Patologia_Clinica_Veterinaria = Note; }
        else if (Mat[T].Nombre == "Farmacología Veterinaria") { Est[I2].Car.Vet.Farmacologia_Veterinaria = Note; }
        else if (Mat[T].Nombre == "Semiología Veterinaria") { Est[I2].Car.Vet.Semiologia_Veterinaria = Note; }
        else if (Mat[T].Nombre == "Nutrición y Alimentación Animal") { Est[I2].Car.Vet.Nutricion_y_Alimentacion_Animal = Note; }
        else if (Mat[T].Nombre == "Reproducción Animal") { Est[I2].Car.Vet.Reproduccion_Animal = Note; }
        else if (Mat[T].Nombre == "Parasitología Veterinaria") { Est[I2].Car.Vet.Parasitologia_Veterinaria = Note; }
        else if (Mat[T].Nombre == "Anatomía Patológica Veterinaria") { Est[I2].Car.Vet.Anatomia_Patologica_Veterinaria = Note; }
        else if (Mat[T].Nombre == "Gerencia de Servicio Veterinaria") { Est[I2].Car.Vet.Gerencia_de_Servicio_Veterinaria = Note; }
        else if (Mat[T].Nombre == "Saneamiento Ambiental") { Est[I2].Car.Vet.Saneamiento_Ambiental = Note; }
        else if (Mat[T].Nombre == "Medicina de Rumiantes y Equino") { Est[I2].Car.Vet.Medicina_de_Rumiantes_y_Equino = Note; }
        else if (Mat[T].Nombre == "Mejoramiento Animal") { Est[I2].Car.Vet.Mejoramiento_Animal = Note; }
        else if (Mat[T].Nombre == "Medicina de Caninos y Felinos") { Est[I2].Car.Vet.Medicina_de_Caninos_y_Felinos = Note; }
        else if (Mat[T].Nombre == "Investigación Veterinaria I") { Est[I2].Car.Vet.Investigacion_Veterinaria_I = Note; }
        else if (Mat[T].Nombre == "Extensión Profesional I") { Est[I2].Car.Vet.Extension_Profesional_I = Note; }
        else if (Mat[T].Nombre == "Cirugía Veterinaria") { Est[I2].Car.Vet.Cirugia_Veterinaria = Note; }
        else if (Mat[T].Nombre == "Servicio Comunitario") { Est[I2].Car.Vet.Servicio_Comunitario = Note; }
        else if (Mat[T].Nombre == "Medicina Preventiva y Clínica Hospitalaria") { Est[I2].Car.Vet.Medicina_Preventiva_y_Clinica_Hospitalaria = Note; }
        else if (Mat[T].Nombre == "Extensión Profesional II") { Est[I2].Car.Vet.Extension_Profesional_II = Note; }
        else if (Mat[T].Nombre == "Investigación Veterinaria II") { Est[I2].Car.Vet.Investigacion_Veterinaria_II = Note; }
        else if (Mat[T].Nombre == "Medicina, Conejo, Peces, Especies Silvestres Laboratorio") { Est[I2].Car.Vet.Medicina_Conejo_Peces_Especies_Silvestres_Laboratorio = Note; }
        else if (Mat[T].Nombre == "Legislación y Deontología Veterinaria") { Est[I2].Car.Vet.Legislacion_y_Deontologia_Veterinaria = Note; }
        else if (Mat[T].Nombre == "Proceso de Producción Ind e Inp San") { Est[I2].Car.Vet.Proceso_de_Produccion_Ind_e_Inp_San = Note; }
        else if (Mat[T].Nombre == "Derecho Constitucional") { Est[I2].Car.Vet.Derecho_Constitucional = Note; }
        else if (Mat[T].Nombre == "Epidemiología General") { Est[I2].Car.Vet.Epidemiologia_General = Note; }
        else if (Mat[T].Nombre == "Medicina de Suinos y Aves") { Est[I2].Car.Vet.Medicina_de_Suinos_y_Aves = Note; }
        else if (Mat[T].Nombre == "Pasantías Profesionales") { Est[I2].Car.Vet.Pasantias_Profesionales = Note; }
        else if (Mat[T].Nombre == "Invitación del Patrimonio Cultural") { Est[I2].Car.Vet.Invitacion_del_Patrimonio_Cultural = Note; }
        else if (Mat[T].Nombre == "Ortografía y Redacción") { Est[I2].Car.Vet.Ortografia_y_Redacción = Note; }
        else if (Mat[T].Nombre == "Música Coral") { Est[I2].Car.Vet.Musica_Coral = Note; }
        else if (Mat[T].Nombre == "Probabilidad y Organización Especial del Agro Venezolano") { Est[I2].Car.Vet.Probabilidad_y_Organizacion_Especial_del_Agro_Venezolano = Note; }
        
    }



    // Derecho
    else if (Car == "Derecho")
    {

        if (Mat[T].Nombre == "Derecho Civil I") { Est[I2].Car.Der.Derecho_Civil_I = Note; }
        else if (Mat[T].Nombre == "Derecho Constitucional") { Est[I2].Car.Der.Derecho_Constitucional = Note; }
        else if (Mat[T].Nombre == "Pensamiento Bolivariano") { Est[I2].Car.Der.Pensamiento_Bolivariano = Note; }
        else if (Mat[T].Nombre == "Introducción al Derecho") { Est[I2].Car.Der.Introduccion_al_Derecho = Note; }
        else if (Mat[T].Nombre == "Economía Política") { Est[I2].Car.Der.Economia_Politica = Note; }
        else if (Mat[T].Nombre == "Métodos de Investigación Jurídica") { Est[I2].Car.Der.Metodos_de_Investigacion_Juridica = Note; }
        else if (Mat[T].Nombre == "Derecho Popular") { Est[I2].Car.Der.Derecho_Popular = Note; }
        else if (Mat[T].Nombre == "Derecho Romano") { Est[I2].Car.Der.Derecho_Romano = Note; }
        else if (Mat[T].Nombre == "Lógica Jurídica") { Est[I2].Car.Der.Logica_Juridica = Note; }
        else if (Mat[T].Nombre == "Deontología Jurídica") { Est[I2].Car.Der.Deontologia_Juridica = Note; }
        else if (Mat[T].Nombre == "Arte y Cultura") { Est[I2].Car.Der.Arte_y_Cultura = Note; }
        else if (Mat[T].Nombre == "Deporte") { Est[I2].Car.Der.Deporte = Note; }
        else if (Mat[T].Nombre == "Derecho Agrario") { Est[I2].Car.Der.Derecho_Agrario = Note; }
        else if (Mat[T].Nombre == "Derecho Ambiental") { Est[I2].Car.Der.Derecho_Ambiental = Note; }
        else if (Mat[T].Nombre == "Medicina Legal") { Est[I2].Car.Der.Medicina_Legal = Note; }
        else if (Mat[T].Nombre == "Criminología") { Est[I2].Car.Der.Criminologia = Note; }
        else if (Mat[T].Nombre == "Derecho Penal I") { Est[I2].Car.Der.Derecho_Penal_I = Note; }
        else if (Mat[T].Nombre == "Filosofía del Derecho") { Est[I2].Car.Der.Filosofia_del_Derecho = Note; }
        else if (Mat[T].Nombre == "Derecho Registral") { Est[I2].Car.Der.Derecho_Registral = Note; }
        else if (Mat[T].Nombre == "Proyecto Socio Jurídico Comunitario I") { Est[I2].Car.Der.Proyecto_Socio_Juridico_Comunitario_I = Note; }
        else if (Mat[T].Nombre == "Derecho Civil II") { Est[I2].Car.Der.Derecho_Civil_II = Note; }
        else if (Mat[T].Nombre == "Prácticas Jurídicas I") { Est[I2].Car.Der.Practicas_Juridicas_I = Note; }
        else if (Mat[T].Nombre == "Electiva I") { Est[I2].Car.Der.Electiva_I = Note; }
        else if (Mat[T].Nombre == "Derecho Administrativo") { Est[I2].Car.Der.Derecho_Administrativo = Note; }
        else if (Mat[T].Nombre == "Derecho Penal II") { Est[I2].Car.Der.Derecho_Penal_II = Note; }
        else if (Mat[T].Nombre == "Derecho Laboral") { Est[I2].Car.Der.Derecho_Laboral = Note; }
        else if (Mat[T].Nombre == "Derecho Familiar") { Est[I2].Car.Der.Derecho_Familiar = Note; }
        else if (Mat[T].Nombre == "Obligaciones I") { Est[I2].Car.Der.Obligaciones_I = Note; }
        else if (Mat[T].Nombre == "Derecho Internacional Público") { Est[I2].Car.Der.Derecho_Internacional_Publico = Note; }
        else if (Mat[T].Nombre == "Teoría General del Proceso") { Est[I2].Car.Der.Teoria_General_del_Proceso = Note; }
        else if (Mat[T].Nombre == "Derecho Tributario") { Est[I2].Car.Der.Derecho_Tributario = Note; }
        else if (Mat[T].Nombre == "Proyecto Socio Jurídico II") { Est[I2].Car.Der.Proyecto_Socio_Juridico_II = Note; }
        else if (Mat[T].Nombre == "Prácticas Jurídicas II") { Est[I2].Car.Der.Practicas_Juridicas_II = Note; }
        else if (Mat[T].Nombre == "Electiva II") { Est[I2].Car.Der.Electiva_II = Note; }
        else if (Mat[T].Nombre == "Derecho Contencioso Administrativo") { Est[I2].Car.Der.Derecho_Contencioso_Administrativo = Note; }
        else if (Mat[T].Nombre == "Derecho Procesal Penal I") { Est[I2].Car.Der.Derecho_Procesal_Penal_I = Note; }
        else if (Mat[T].Nombre == "Derecho Procesal Laboral I") { Est[I2].Car.Der.Derecho_Procesal_Laboral_I = Note; }
        else if (Mat[T].Nombre == "Derecho en Sucesiones") { Est[I2].Car.Der.Derecho_en_Sucesiones = Note; }
        else if (Mat[T].Nombre == "Obligaciones II") { Est[I2].Car.Der.Obligaciones_II = Note; }
        else if (Mat[T].Nombre == "Derecho Internacional Privado") { Est[I2].Car.Der.Derecho_Internacional_Privado = Note; }
        else if (Mat[T].Nombre == "Derecho Procesal Civil I") { Est[I2].Car.Der.Derecho_Procesal_Civil_I = Note; }
        else if (Mat[T].Nombre == "Derecho Probatorio I") { Est[I2].Car.Der.Derecho_Probatorio_I = Note; }
        else if (Mat[T].Nombre == "Proyecto Socio Jurídico III") { Est[I2].Car.Der.Proyecto_Socio_Juridico_III = Note; }
        else if (Mat[T].Nombre == "Prácticas Jurídicas III") { Est[I2].Car.Der.Practicas_Juridicas_III = Note; }
        else if (Mat[T].Nombre == "Electiva III") { Est[I2].Car.Der.Electiva_III = Note; }
        else if (Mat[T].Nombre == "Derecho Procesal Penal II") { Est[I2].Car.Der.Derecho_Procesal_Penal_II = Note; }
        else if (Mat[T].Nombre == "Obligaciones III") { Est[I2].Car.Der.Obligaciones_III = Note; }
        else if (Mat[T].Nombre == "Derecho Procesal Civil II") { Est[I2].Car.Der.Derecho_Procesal_Civil_II = Note; }
        else if (Mat[T].Nombre == "Derecho Mercantil") { Est[I2].Car.Der.Derecho_Mercantil = Note; }
        else if (Mat[T].Nombre == "Derecho Probatorio II") { Est[I2].Car.Der.Derecho_Probatorio_II = Note; }
        else if (Mat[T].Nombre == "Contratos y Garantías") { Est[I2].Car.Der.Contratos_y_Garantias = Note; }
        else if (Mat[T].Nombre == "Proyecto Socio Jurídico IV") { Est[I2].Car.Der.Proyecto_Socio_Juridico_IV = Note; }
        else if (Mat[T].Nombre == "Prácticas Jurídicas IV") { Est[I2].Car.Der.Practicas_Juridicas_IV = Note; }
        else if (Mat[T].Nombre == "Electiva IV") { Est[I2].Car.Der.Electiva_IV = Note; }
        else if (Mat[T].Nombre == "Pasantías") { Est[I2].Car.Der.Pasantias = Note; }
        else if (Mat[T].Nombre == "Seminario Tesina de Grado") { Est[I2].Car.Der.Seminario_Tesina_de_Grado = Note; }

    }



    // Comunicación
    else if (Car == "Comunicación")
    {

        if (Mat[T].Nombre == "Morfosintaxis del Castellano") { Est[I2].Car.Com.Morfosintaxis_del_Castellano = Note; }
        else if (Mat[T].Nombre == "Comunicación Social en el Periodismo") { Est[I2].Car.Com.Comunicacion_Social_en_el_Periodismo = Note; }
        else if (Mat[T].Nombre == "Psicología de la Comunicación") { Est[I2].Car.Com.Psicologia_de_la_Comunicacion = Note; }
        else if (Mat[T].Nombre == "Estadística") { Est[I2].Car.Com.Estadistica = Note; }
        else if (Mat[T].Nombre == "Deporte, Arte y Cultura") { Est[I2].Car.Com.Deporte_Arte_y_Cultura = Note; }
        else if (Mat[T].Nombre == "Pensamiento Bolivariano") { Est[I2].Car.Com.Pensamiento_Bolivariano = Note; }
        else if (Mat[T].Nombre == "Periodismo Informativo") { Est[I2].Car.Com.Periodismo_Informativo = Note; }
        else if (Mat[T].Nombre == "Comunicación Social en la Radio") { Est[I2].Car.Com.Comunicacion_Social_en_la_Radio = Note; }
        else if (Mat[T].Nombre == "Comunicación Social en Cine") { Est[I2].Car.Com.Comunicacion_Social_en_Cine = Note; }
        else if (Mat[T].Nombre == "Comunicación Social en la Televisión") { Est[I2].Car.Com.Comunicacion_Social_en_la_Television = Note; }
        else if (Mat[T].Nombre == "Comunicación Social en la Fotografía") { Est[I2].Car.Com.Comunicacion_Social_en_la_Fotografia = Note; }
        else if (Mat[T].Nombre == "Taller de Redacción y Estilo I") { Est[I2].Car.Com.Taller_de_Redaccion_y_Estilo_I = Note; }
        else if (Mat[T].Nombre == "Proyecto Comunitario Socio Comunicacional I") { Est[I2].Car.Com.Proyecto_Comunitario_Socio_Comunicacional_I = Note; }
        else if (Mat[T].Nombre == "Taller de Redacción y Estilo II") { Est[I2].Car.Com.Taller_de_Redaccion_y_Estilo_II = Note; }
        else if (Mat[T].Nombre == "Comunicación Gráfica") { Est[I2].Car.Com.Comunicacion_Grafica = Note; }
        else if (Mat[T].Nombre == "Periodismo Radiofónico") { Est[I2].Car.Com.Periodismo_Radiofonico = Note; }
        else if (Mat[T].Nombre == "Lenguaje y Planificación Cinematográfica") { Est[I2].Car.Com.Lenguaje_y_Planificacion_Cinematografica = Note; }
        else if (Mat[T].Nombre == "Periodismo Televisivo") { Est[I2].Car.Com.Periodismo_Televisivo = Note; }
        else if (Mat[T].Nombre == "Estética de la Imagen y el Sonido") { Est[I2].Car.Com.Estetica_de_la_Imagen_y_el_Sonido = Note; }
        else if (Mat[T].Nombre == "Teoría de la Comunicación") { Est[I2].Car.Com.Teoria_de_la_Comunicacion = Note; }
        else if (Mat[T].Nombre == "Opinión Pública") { Est[I2].Car.Com.Opinion_Publica = Note; }
        else if (Mat[T].Nombre == "Formación Sociopolítica") { Est[I2].Car.Com.Formacion_Sociopolitica = Note; }
        else if (Mat[T].Nombre == "Proyecto Comunitario Socio Comunicacional II") { Est[I2].Car.Com.Proyecto_Comunitario_Socio_Comunicacional_II = Note; }
        else if (Mat[T].Nombre == "Ética y Legislación de Medios y del Periodismo") { Est[I2].Car.Com.Etica_y_Legislacion_de_Medios_y_del_Periodismo = Note; }
        else if (Mat[T].Nombre == "Proyecto Comunitario Sociocomunicacional III") { Est[I2].Car.Com.Proyecto_Comunitario_Sociocomunicacional_III = Note; }
        else if (Mat[T].Nombre == "Sociología de la Comunicación") { Est[I2].Car.Com.Sociologia_de_la_Comunicacion = Note; }
        else if (Mat[T].Nombre == "Investigación de la Comunicación") { Est[I2].Car.Com.Investigacion_de_la_Comunicacion = Note; }
        else if (Mat[T].Nombre == "Periodismo Interpretativo") { Est[I2].Car.Com.Periodismo_Interpretativo = Note; }
        else if (Mat[T].Nombre == "Periodismo de Opinión") { Est[I2].Car.Com.Periodismo_de_Opinion = Note; }
        else if (Mat[T].Nombre == "Economía Política") { Est[I2].Car.Com.Economia_Politica = Note; }
        else if (Mat[T].Nombre == "Producción de Televisión") { Est[I2].Car.Com.Produccion_de_Television = Note; }
        else if (Mat[T].Nombre == "Producción de Radio") { Est[I2].Car.Com.Produccion_de_Radio = Note; }
        else if (Mat[T].Nombre == "Producción de Cine") { Est[I2].Car.Com.Produccion_de_Cine = Note; }
        else if (Mat[T].Nombre == "Seminario de Formación Socio Crítica I") { Est[I2].Car.Com.Seminario_de_Formacion_Socio_Critica_I = Note; }
        else if (Mat[T].Nombre == "Proyecto Comunitario Sociocomunicacional IV") { Est[I2].Car.Com.Proyecto_Comunitario_Sociocomunicacional_IV = Note; }
        else if (Mat[T].Nombre == "Semiología") { Est[I2].Car.Com.Semiologia = Note; }
        else if (Mat[T].Nombre == "Fotoperiodismo") { Est[I2].Car.Com.Fotoperiodismo = Note; }
        else if (Mat[T].Nombre == "Seminario de Formación Socio Crítica II") { Est[I2].Car.Com.Seminario_de_Formacion_Socio_Critica_II = Note; }
        else if (Mat[T].Nombre == "Periodismo Científico") { Est[I2].Car.Com.Periodismo_Cientifico = Note; }
        else if (Mat[T].Nombre == "Montajes Audiovisuales") { Est[I2].Car.Com.Montajes_Audiovisuales = Note; }
        else if (Mat[T].Nombre == "Relaciones Públicas") { Est[I2].Car.Com.Relaciones_Publicas = Note; }
        else if (Mat[T].Nombre == "Proyecto Comunitario Sociocomunicacional V") { Est[I2].Car.Com.Proyecto_Comunitario_Sociocomunicacional_V = Note; }
        else if (Mat[T].Nombre == "Tecnología de la Información") { Est[I2].Car.Com.Tecnologia_de_la_Informacion = Note; }
        else if (Mat[T].Nombre == "Locución Básica") { Est[I2].Car.Com.Locucion_Basica = Note; }
        else if (Mat[T].Nombre == "Publicidad") { Est[I2].Car.Com.Publicidad = Note; }
        else if (Mat[T].Nombre == "Idioma Moderno") { Est[I2].Car.Com.Idioma_Moderno = Note; }
        else if (Mat[T].Nombre == "Seminario de Formación Socio Crítica III") { Est[I2].Car.Com.Seminario_de_Formacion_Socio_Critica_III = Note; }
        else if (Mat[T].Nombre == "Periodismo Económico") { Est[I2].Car.Com.Periodismo_Economico = Note; }
        else if (Mat[T].Nombre == "Proyecto Comunitario Sociocomunicacional VI") { Est[I2].Car.Com.Proyecto_Comunitario_Sociocomunicacional_VI = Note; }
        else if (Mat[T].Nombre == "Orientación Profesional I") { Est[I2].Car.Com.Orientacion_Profesional_I = Note; }
        else if (Mat[T].Nombre == "Gerencia Corporativa") { Est[I2].Car.Com.Gerencia_Corporativa = Note; }
        else if (Mat[T].Nombre == "Mercadeo") { Est[I2].Car.Com.Mercadeo = Note; }
        else if (Mat[T].Nombre == "Locución Profesional") { Est[I2].Car.Com.Locucion_Profesional = Note; }
        else if (Mat[T].Nombre == "Proyecto Comunitario Sociocomunicacional VII") { Est[I2].Car.Com.Proyecto_Comunitario_Sociocomunicacional_VII = Note; }
        else if (Mat[T].Nombre == "Periodismo Político") { Est[I2].Car.Com.Periodismo_Politico = Note; }
        else if (Mat[T].Nombre == "Orientación Profesional") { Est[I2].Car.Com.Orientacion_Profesional = Note; }
        else if (Mat[T].Nombre == "Vinculación Profesional en el Campo Sociocomunicacional") { Est[I2].Car.Com.Vinculación_Profesional_en_el_Campo_Sociocomunicacional = Note; }
        else if (Mat[T].Nombre == "Trabajo Especial de Grado") { Est[I2].Car.Com.Trabajo_Especial_de_Grado = Note; }

    }



    // Contaduría
    else if (Car == "Contaduría")
    {

        if (Mat[T].Nombre == "Matemática I") { Est[I2].Car.Con.Matematica_I = Note; }
        else if (Mat[T].Nombre == "Lenguaje y Comunicación") { Est[I2].Car.Con.Lenguaje_y_Comunicacion = Note; }
        else if (Mat[T].Nombre == "Legislación Mercantil") { Est[I2].Car.Con.Legislacion_Mercantil = Note; }
        else if (Mat[T].Nombre == "Contabilidad I") { Est[I2].Car.Con.Contabilidad_I = Note; }
        else if (Mat[T].Nombre == "Sociopolítica Productiva") { Est[I2].Car.Con.Sociopolitica_Productiva = Note; }
        else if (Mat[T].Nombre == "Metodología de la Investigación") { Est[I2].Car.Con.Metodologia_de_la_Investigacion = Note; }
        else if (Mat[T].Nombre == "Deporte y Recreación") { Est[I2].Car.Con.Deporte_y_Recreacion = Note; }
        else if (Mat[T].Nombre == "Matemática II") { Est[I2].Car.Con.Matematica_II = Note; }
        else if (Mat[T].Nombre == "Contabilidad II") { Est[I2].Car.Con.Contabilidad_II = Note; }
        else if (Mat[T].Nombre == "Inglés") { Est[I2].Car.Con.Ingles = Note; }
        else if (Mat[T].Nombre == "Legislación Laboral") { Est[I2].Car.Con.Legislacion_Laboral = Note; }
        else if (Mat[T].Nombre == "Estadística I") { Est[I2].Car.Con.Estadistica_I = Note; }
        else if (Mat[T].Nombre == "Introducción a la Adminstración") { Est[I2].Car.Con.Introduccion_a_la_Adminstracion = Note; }
        else if (Mat[T].Nombre == "Arte y Cultura") { Est[I2].Car.Con.Arte_y_Cultura = Note; }
        else if (Mat[T].Nombre == "Informática") { Est[I2].Car.Con.Informatica = Note; }
        else if (Mat[T].Nombre == "Calculo Financiero") { Est[I2].Car.Con.Calculo_Financiero = Note; }
        else if (Mat[T].Nombre == "Introducción a la Teoría Económica") { Est[I2].Car.Con.Introduccion_a_la_Teoria_Economica = Note; }
        else if (Mat[T].Nombre == "Estadística II") { Est[I2].Car.Con.Estadistica_II = Note; }
        else if (Mat[T].Nombre == "Contabilidad III") { Est[I2].Car.Con.Contabilidad_III = Note; }
        else if (Mat[T].Nombre == "Procesos Administrativos") { Est[I2].Car.Con.Procesos_Administrativos = Note; }
        else if (Mat[T].Nombre == "Contabilidad de Costos I") { Est[I2].Car.Con.Contabilidad_of_Costos_I = Note; }
        else if (Mat[T].Nombre == "Práctica Profesional I") { Est[I2].Car.Con.Practica_Profesional_I = Note; }
        else if (Mat[T].Nombre == "Auditoría I") { Est[I2].Car.Con.Auditoria_I = Note; }
        else if (Mat[T].Nombre == "Contabilidad Especializada I") { Est[I2].Car.Con.Contabilidad_Especializada_I = Note; }
        else if (Mat[T].Nombre == "Finanzas y Gestión Presupuestaria") { Est[I2].Car.Con.Finanzas_y_Gestion_Presupuestaria = Note; }
        else if (Mat[T].Nombre == "Administración Pública") { Est[I2].Car.Con.Administracion_Publica = Note; }
        else if (Mat[T].Nombre == "Sistemas de Información Gerencial") { Est[I2].Car.Con.Sistemas_de_Informacion_Gerencial = Note; }
        else if (Mat[T].Nombre == "Investigación de Operaciones") { Est[I2].Car.Con.Investigacion_de_Operaciones = Note; }
        else if (Mat[T].Nombre == "Auditoría II") { Est[I2].Car.Con.Auditoria_II = Note; }
        else if (Mat[T].Nombre == "Contabilidad Especializada II") { Est[I2].Car.Con.Contabilidad_Especializada_II = Note; }
        else if (Mat[T].Nombre == "Contabilidad de Costos II") { Est[I2].Car.Con.Contabilidad_de_Costos_II = Note; }
        else if (Mat[T].Nombre == "Gerencia de Proyectos") { Est[I2].Car.Con.Gerencia_de_Proyectos = Note; }
        else if (Mat[T].Nombre == "Habilidades Gerenciales") { Est[I2].Car.Con.Habilidades_Gerenciales = Note; }
        else if (Mat[T].Nombre == "Contabilidad Ambiental") { Est[I2].Car.Con.Contabilidad_Ambiental = Note; }
        else if (Mat[T].Nombre == "Sistemas Tributarios I") { Est[I2].Car.Con.Sistemas_Tributarios_I = Note; }
        else if (Mat[T].Nombre == "Mercadeo") { Est[I2].Car.Con.Mercadeo = Note; }
        else if (Mat[T].Nombre == "Presupuesto") { Est[I2].Car.Con.Presupuesto = Note; }
        else if (Mat[T].Nombre == "Contabilidad de Costos III") { Est[I2].Car.Con.Contabilidad_de_Costos_III = Note; }
        else if (Mat[T].Nombre == "Seminario I") { Est[I2].Car.Con.Seminario_I = Note; }
        else if (Mat[T].Nombre == "Práctica Profesional II") { Est[I2].Car.Con.Practica_Profesional_II = Note; }
        else if (Mat[T].Nombre == "Sistemas Tributarios II") { Est[I2].Car.Con.Sistemas_Tributarios_II = Note; }
        else if (Mat[T].Nombre == "Gestión de Talento Humano") { Est[I2].Car.Con.Gestion_de_Talento_Humano = Note; }
        else if (Mat[T].Nombre == "Auditoría III") { Est[I2].Car.Con.Auditoria_III = Note; }
        else if (Mat[T].Nombre == "Análisis de Estados Financieros") { Est[I2].Car.Con.Analisis_de_Estados_Financieros = Note; }
        else if (Mat[T].Nombre == "Ética y Desarrollo Profesional") { Est[I2].Car.Con.Etica_y_Desarrollo_Profesional = Note; }
        else if (Mat[T].Nombre == "Seminario II") { Est[I2].Car.Con.Seminario_II = Note; }
        else if (Mat[T].Nombre == "Tributación Aduanera") { Est[I2].Car.Con.Tributacion_Aduanera = Note; }
        else if (Mat[T].Nombre == "Técnicas de Negociación y Conciliación") { Est[I2].Car.Con.Tecnicas_de_Negociacion_y_Conciliacion = Note; }
        else if (Mat[T].Nombre == "Avalúos") { Est[I2].Car.Con.Avaluos = Note; }
        else if (Mat[T].Nombre == "Instituciones Financieras") { Est[I2].Car.Con.Instituciones_Financieras = Note; }
        else if (Mat[T].Nombre == "Tesina de Grado") { Est[I2].Car.Con.Tesina_de_Grado = Note; }
        else if (Mat[T].Nombre == "Pasantías") { Est[I2].Car.Con.Pasantias = Note; }

    }



    // Economía
    else if (Car == "Economía")
    {

        if (Mat[T].Nombre == "Introducción a la Economía") { Est[I2].Car.Eco.Introduccion_a_la_Economia = Note; }
        else if (Mat[T].Nombre == "Análisis Matemático I") { Est[I2].Car.Eco.Analisis_Matematico_I = Note; }
        else if (Mat[T].Nombre == "Lenguaje y Comunicación") { Est[I2].Car.Eco.Lenguaje_y_Comunicacion = Note; }
        else if (Mat[T].Nombre == "Fundamentos del Derecho") { Est[I2].Car.Eco.Fundamentos_del_Derecho = Note; }
        else if (Mat[T].Nombre == "Metodología de la Investigación") { Est[I2].Car.Eco.Metodologia_de_la_Investigacion = Note; }
        else if (Mat[T].Nombre == "Deporte y Recreación") { Est[I2].Car.Eco.Deporte_y_Recreacion = Note; }
        else if (Mat[T].Nombre == "Ingles Instrumental") { Est[I2].Car.Eco.Ingles_Instrumental = Note; }
        else if (Mat[T].Nombre == "Economía I") { Est[I2].Car.Eco.Economia_I = Note; }
        else if (Mat[T].Nombre == "Sociología") { Est[I2].Car.Eco.Sociologia = Note; }
        else if (Mat[T].Nombre == "Análisis Matemático II") { Est[I2].Car.Eco.Analisis_Matematico_II = Note; }
        else if (Mat[T].Nombre == "Contabilidad General I") { Est[I2].Car.Eco.Contabilidad_General_I = Note; }
        else if (Mat[T].Nombre == "Informática") { Est[I2].Car.Eco.Informatica = Note; }
        else if (Mat[T].Nombre == "Arte y Cultura") { Est[I2].Car.Eco.Arte_y_Cultura = Note; }
        else if (Mat[T].Nombre == "Estadística I") { Est[I2].Car.Eco.Estadistica_I = Note; }
        else if (Mat[T].Nombre == "Economía II") { Est[I2].Car.Eco.Economia_II = Note; }
        else if (Mat[T].Nombre == "Sociopolítica Productiva") { Est[I2].Car.Eco.Sociopolitica_Productiva = Note; }
        else if (Mat[T].Nombre == "Estadística II") { Est[I2].Car.Eco.Estadistica_II = Note; }
        else if (Mat[T].Nombre == "Contabilidad General II") { Est[I2].Car.Eco.Contabilidad_General_II = Note; }
        else if (Mat[T].Nombre == "Introducción a la Administración") { Est[I2].Car.Eco.Introduccion_a_la_Administracion = Note; }
        else if (Mat[T].Nombre == "Historia y Doctrina Económica") { Est[I2].Car.Eco.Historia_y_Doctrina_Economica = Note; }
        else if (Mat[T].Nombre == "Informática Aplicada") { Est[I2].Car.Eco.Informatica_Aplicada = Note; }
        else if (Mat[T].Nombre == "Macroeconomía I") { Est[I2].Car.Eco.Macroeconomia_I = Note; }
        else if (Mat[T].Nombre == "Análisis Financiero") { Est[I2].Car.Eco.Analisis_Financiero = Note; }
        else if (Mat[T].Nombre == "Matemática III") { Est[I2].Car.Eco.Matematica_III = Note; }
        else if (Mat[T].Nombre == "Microeconomía I") { Est[I2].Car.Eco.Microeconomia_I = Note; }
        else if (Mat[T].Nombre == "Teoría e Investigación de Mercado") { Est[I2].Car.Eco.Teoria_e_Investigacion_de_Mercado = Note; }
        else if (Mat[T].Nombre == "Seminario I") { Est[I2].Car.Eco.Seminario_I = Note; }
        else if (Mat[T].Nombre == "Estadística Aplicada") { Est[I2].Car.Eco.Estadistica_Aplicada = Note; }
        else if (Mat[T].Nombre == "Macroeconomía II") { Est[I2].Car.Eco.Macroeconomia_II = Note; }
        else if (Mat[T].Nombre == "Microeconomía II") { Est[I2].Car.Eco.Microeconomia_II = Note; }
        else if (Mat[T].Nombre == "Matemática Financiera") { Est[I2].Car.Eco.Matematica_Financiera = Note; }
        else if (Mat[T].Nombre == "Contabilidad Social") { Est[I2].Car.Eco.Contabilidad_Social = Note; }
        else if (Mat[T].Nombre == "Desarrollo Económico") { Est[I2].Car.Eco.Desarrollo_Economico = Note; }
        else if (Mat[T].Nombre == "Análisis Económico Regional") { Est[I2].Car.Eco.Analisis_Economico_Regional = Note; }
        else if (Mat[T].Nombre == "Economía Política") { Est[I2].Car.Eco.Economia_Politica = Note; }
        else if (Mat[T].Nombre == "Formulación y Evaluación de Proyectos") { Est[I2].Car.Eco.Formulacion_y_Evaluacion_de_Proyectos = Note; }
        else if (Mat[T].Nombre == "Investigación de Operaciones") { Est[I2].Car.Eco.Investigacion_de_Operaciones = Note; }
        else if (Mat[T].Nombre == "Teoría y Política Fiscal") { Est[I2].Car.Eco.Teoria_y_Politica_Fiscal = Note; }
        else if (Mat[T].Nombre == "Seminario II") { Est[I2].Car.Eco.Seminario_II = Note; }
        else if (Mat[T].Nombre == "Economía y Política Agrícola") { Est[I2].Car.Eco.Economia_y_Politica_Agricola = Note; }
        else if (Mat[T].Nombre == "Economía Industrial") { Est[I2].Car.Eco.Economia_Industrial = Note; }
        else if (Mat[T].Nombre == "Economía Minera y Petrolera") { Est[I2].Car.Eco.Economia_Minera_y_Petrolera = Note; }
        else if (Mat[T].Nombre == "Economía Ambiente y Sociedad") { Est[I2].Car.Eco.Economia_Ambiente_y_Sociedad = Note; }
        else if (Mat[T].Nombre == "Seminario III") { Est[I2].Car.Eco.Seminario_III = Note; }
        else if (Mat[T].Nombre == "Econometría") { Est[I2].Car.Eco.Econometria = Note; }
        else if (Mat[T].Nombre == "Teoría y Política Monetaria") { Est[I2].Car.Eco.Teoria_y_Politica_Monetaria = Note; }
        else if (Mat[T].Nombre == "Planificación") { Est[I2].Car.Eco.Planificacion = Note; }
        else if (Mat[T].Nombre == "Economía Internacional") { Est[I2].Car.Eco.Economia_Internacional = Note; }
        else if (Mat[T].Nombre == "Formulación y Evaluación de Proyectos Agrícolas") { Est[I2].Car.Eco.Formulacion_y_Evaluacion_de_Proyectos_Agricolas = Note; }
        else if (Mat[T].Nombre == "Gestión Comunitaria") { Est[I2].Car.Eco.Gestion_Comunitaria = Note; }
        else if (Mat[T].Nombre == "Contabilidad de Costos") { Est[I2].Car.Eco.Contabilidad_de_Costos = Note; }
        else if (Mat[T].Nombre == "Presupuesto") { Est[I2].Car.Eco.Presupuesto = Note; }
        else if (Mat[T].Nombre == "Trabajo Final de Grado") { Est[I2].Car.Eco.Trabajo_Final_de_Grado = Note; }
        else if (Mat[T].Nombre == "Finanzas Internacionales") { Est[I2].Car.Eco.Finanzas_Internacionales = Note; }
        else if (Mat[T].Nombre == "Estructura Económica Mundial") { Est[I2].Car.Eco.Estructura_Economica_Mundial = Note; }
        else if (Mat[T].Nombre == "Gestión de Riesgo") { Est[I2].Car.Eco.Gestion_de_Riesgo = Note; }
        else if (Mat[T].Nombre == "Economía y Crisis") { Est[I2].Car.Eco.Economia_y_Crisis = Note; }

    }

}