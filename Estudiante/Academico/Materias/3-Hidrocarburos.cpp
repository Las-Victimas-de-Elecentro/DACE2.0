#include "../../../Main/Header.h"
using namespace std;

void Hid_Est (Variables (&Var), Estudiante (&Est)[D], Clase (&Class)[D], Clase_Magistral (&Mag)[D], Profesor (&Prof)[D])
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
            cout << n++ << ": Formación Socio Política I" << endl;
            Materias[Total++] = "Formación Socio Política I";
            cout << n++ << ": Proyecto Comunitario Socio Energético I" << endl;
            Materias[Total++] = "Proyecto Comunitario Socio Energético I";
            cout << n++ << ": Dibujo Técnico y Descriptiva" << endl;
            Materias[Total++] = "Dibujo Técnico y Descriptiva";
            cout << n++ << ": Matemática I" << endl;
            Materias[Total++] = "Matemática I";
            cout << n++ << ": Inglés Técnico" << endl;
            Materias[Total++] = "Inglés Técnico";
            cout << n++ << ": Química Inorgánica" << endl;
            Materias[Total++] = "Química Inorgánica";
            cout << n++ << ": Orientación a la Ingeniería del Petróleo y Gas Natural" << endl;
            Materias[Total++] = "Orientación a la Ingeniería del Petróleo y Gas Natural";
            cout << n++ << ": Arte y Cultura" << endl;
            Materias[Total++] = "Arte y Cultura";
        }

        if (Est[N].UC_Aprobadas > 0 && 5.5 > Est[N].Car.Hid.Formacion_Socio_Politica_I)
        {
            cout << n++ << ": Formación Socio Política I" << endl;
            Materias[Total++] = "Formación Socio Política I";
        }

        if (Est[N].UC_Aprobadas > 0 && 5.5 > Est[N].Car.Hid.Proyecto_Comunitario_Socio_Energetico_I)
        {
            cout << n++ << ": Proyecto Comunitario Socio Energético I" << endl;
            Materias[Total++] = "Proyecto Comunitario Socio Energético I";
        }

        if (Est[N].UC_Aprobadas > 0 && 5.5 > Est[N].Car.Hid.Dibujo_Tecnico_y_Descriptiva)
        {
            cout << n++ << ": Dibujo Técnico y Descriptiva" << endl;
            Materias[Total++] = "Dibujo Técnico y Descriptiva";
        }

        if (Est[N].UC_Aprobadas > 0 && 5.5 > Est[N].Car.Hid.Matematica_I)
        {
            cout << n++ << ": Matemática I" << endl;
            Materias[Total++] = "Matemática I";
        }

        if (Est[N].UC_Aprobadas > 0 && 5.5 > Est[N].Car.Hid.Ingles_Tecnico)
        {
            cout << n++ << ": Inglés Técnico" << endl;
            Materias[Total++] = "Inglés Técnico";
        }

        if (Est[N].UC_Aprobadas > 0 && 5.5 > Est[N].Car.Hid.Quimica_Inorganica)
        {
            cout << n++ << ": Química Inorgánica" << endl;
            Materias[Total++] = "Química Inorgánica";
        }

        if (Est[N].UC_Aprobadas > 0 && 5.5 > Est[N].Car.Hid.Orientacion_a_la_Ingenieria_del_Petroleo_y_Gas_Natural)
        {
            cout << n++ << ": Orientación a la Ingeniería del Petróleo y Gas Natural" << endl;
            Materias[Total++] = "Orientación a la Ingeniería del Petróleo y Gas Natural";
        }

        if (Est[N].UC_Aprobadas > 0 && 5.5 > Est[N].Car.Hid.Arte_y_Cultura)
        {
            cout << n++ << ": Arte y Cultura" << endl;
            Materias[Total++] = "Arte y Cultura";
        }

        if (Est[N].UC_Aprobadas >= 10 && 5.5 > Est[N].Car.Hid.Informatica)
        {
            cout << n++ << ": Informática" << endl;
            Materias[Total++] = "Informática";
        }

        if (Est[N].Car.Hid.Matematica_I > 5.5 && 5.5 > Est[N].Car.Hid.Matematica_II)
        {
            cout << n++ << ": Matemática II" << endl;
            Materias[Total++] = "Matemática II";
        }

        if (Est[N].Car.Hid.Matematica_I > 5.5 && 5.5 > Est[N].Car.Hid.Fisica_I)
        {
            cout << n++ << ": Física I" << endl;
            Materias[Total++] = "Física I";
        }

        if (Est[N].Car.Hid.Quimica_Inorganica > 5.5 && 5.5 > Est[N].Car.Hid.Quimica_Organica)
        {
            cout << n++ << ": Química Orgánica" << endl;
            Materias[Total++] = "Química Orgánica";
        }

        if (Est[N].Car.Hid.Formacion_Socio_Politica_I > 5.5 && 5.5 > Est[N].Car.Hid.Formacion_Socio_Politica_II)
        {
            cout << n++ << ": Formación Socio Política II" << endl;
            Materias[Total++] = "Formación Socio Política II";
        }

        if (Est[N].Car.Hid.Proyecto_Comunitario_Socio_Energetico_I > 5.5 && 5.5 > Est[N].Car.Hid.Proyecto_Comunitario_Socio_Energetico_II)
        {
            cout << n++ << ": Proyecto Comunitario Socio Energético II" << endl;
            Materias[Total++] = "Proyecto Comunitario Socio Energético II";
        }

        if (Est[N].UC_Aprobadas >= 20 && 5.5 > Est[N].Car.Hid.Deporte)
        {
            cout << n++ << ": Deporte" << endl;
            Materias[Total++] = "Deporte";
        }

        if (Est[N].Car.Hid.Formacion_Socio_Politica_II > 5.5 && 5.5 > Est[N].Car.Hid.Formacion_Socio_Politica_III)
        {
            cout << n++ << ": Formación Socio Política III" << endl;
            Materias[Total++] = "Formación Socio Política III";
        }

        if (Est[N].Car.Hid.Proyecto_Comunitario_Socio_Energetico_II > 5.5 && 5.5 > Est[N].Car.Hid.Proyecto_Comunitario_Socio_Energetico_III)
        {
            cout << n++ << ": Proyecto Comunitario Socio Energético III" << endl;
            Materias[Total++] = "Proyecto Comunitario Socio Energético III";
        }

        if (Est[N].Car.Hid.Fisica_I > 5.5 && 5.5 > Est[N].Car.Hid.Fisica_II)
        {
            cout << n++ << ": Física II" << endl;
            Materias[Total++] = "Física II";
        }

        if (Est[N].Car.Hid.Quimica_Inorganica > 5.5 && 5.5 > Est[N].Car.Hid.Geologia_General)
        {
            cout << n++ << ": Geología General" << endl;
            Materias[Total++] = "Geología General";
        }

        if (Est[N].Car.Hid.Matematica_II > 5.5 && 5.5 > Est[N].Car.Hid.Matematica_III)
        {
            cout << n++ << ": Matemática III" << endl;
            Materias[Total++] = "Matemática III";
        }

        if (Est[N].Car.Hid.Fisica_I > 5.5 && 5.5 > Est[N].Car.Hid.Laboratorio_de_Fisica)
        {
            cout << n++ << ": Laboratorio de Física" << endl;
            Materias[Total++] = "Laboratorio de Física";
        }

        if (Est[N].Car.Hid.Formacion_Socio_Politica_III > 5.5 && 5.5 > Est[N].Car.Hid.Formacion_Socio_Politica_IV)
        {
            cout << n++ << ": Formación Socio Política IV" << endl;
            Materias[Total++] = "Formación Socio Política IV";
        }

        if (Est[N].Car.Hid.Proyecto_Comunitario_Socio_Energetico_III > 5.5 && 5.5 > Est[N].Car.Hid.Proyecto_Comunitario_Socio_Energetico_IV)
        {
            cout << n++ << ": Proyecto Comunitario Socio Energético IV" << endl;
            Materias[Total++] = "Proyecto Comunitario Socio Energético IV";
        }

        if (Est[N].Car.Hid.Fisica_II > 5.5 && 5.5 > Est[N].Car.Hid.Mecanica_de_las_Rocas_y_de_los_Fluidos)
        {
            cout << n++ << ": Mecánica de las Rocas y de los Fluidos" << endl;
            Materias[Total++] = "Mecánica de las Rocas y de los Fluidos";
        }

        if (Est[N].Car.Hid.Matematica_III > 5.5 && 5.5 > Est[N].Car.Hid.Probabilidades_y_Estadisticas)
        {
            cout << n++ << ": Probabilidades y Estadísticas" << endl;
            Materias[Total++] = "Probabilidades y Estadísticas";
        }

        if (Est[N].Car.Hid.Matematica_III > 5.5 && Est[N].Car.Hid.Fisica_II > 5.5 && 5.5 > Est[N].Car.Hid.Termodinamica_General_y_Aplicada)
        {
            cout << n++ << ": Termodinámica General y Aplicada" << endl;
            Materias[Total++] = "Termodinámica General y Aplicada";
        }

        if (Est[N].Car.Hid.Geologia_General > 5.5 && 5.5 > Est[N].Car.Hid.Caracterizacion_Fisica_de_los_Yacimientos)
        {
            cout << n++ << ": Caracterización Física de los Yacimientos" << endl;
            Materias[Total++] = "Caracterización Física de los Yacimientos";
        }

        if (Est[N].Car.Hid.Termodinamica_General_y_Aplicada > 5.5 && Est[N].Car.Hid.Mecanica_de_las_Rocas_y_de_los_Fluidos > 5.5 && 5.5 > Est[N].Car.Hid.Sistema_de_Compresion_de_Gas)
        {
            cout << n++ << ": Sistema de Compresión de Gas" << endl;
            Materias[Total++] = "Sistema de Compresión de Gas";
        }

        if (Est[N].Car.Hid.Formacion_Socio_Politica_IV > 5.5 && 5.5 > Est[N].Car.Hid.Formacion_Socio_Politica_Legislacion_Petrolera)
        {
            cout << n++ << ": Formación Socio Política Legislación Petrolera" << endl;
            Materias[Total++] = "Formación Socio Política Legislación Petrolera";
        }

        if (Est[N].Car.Hid.Proyecto_Comunitario_Socio_Energetico_IV > 5.5 && 5.5 > Est[N].Car.Hid.Proyecto_Socio_Comunitario_Socio_Energetico_V)
        {
            cout << n++ << ": Proyecto Comunitario Socio Energético V" << endl;
            Materias[Total++] = "Proyecto Comunitario Socio Energético V";
        }

        if (Est[N].Car.Hid.Caracterizacion_Fisica_de_los_Yacimientos > 5.5 && 5.5 > Est[N].Car.Hid.Perforacion_de_Pozos)
        {
            cout << n++ << ": Perforación de Pozos" << endl;
            Materias[Total++] = "Perforación de Pozos";
        }

        if (Est[N].Car.Hid.Caracterizacion_Fisica_de_los_Yacimientos > 5.5 && 5.5 > Est[N].Car.Hid.Caracterizacion_Energetica_de_los_Yacimientos)
        {
            cout << n++ << ": Caracterización Energética de los Yacimientos" << endl;
            Materias[Total++] = "Caracterización Energética de los Yacimientos";
        }

        if (Est[N].Car.Hid.Mecanica_de_las_Rocas_y_de_los_Fluidos > 5.5 && 5.5 > Est[N].Car.Hid.Transporte_y_Distribucion_de_Hidrocarburos)
        {
            cout << n++ << ": Transporte y Distribución de Hidrocarburos" << endl;
            Materias[Total++] = "Transporte y Distribución de Hidrocarburos";
        }

        if (Est[N].Car.Hid.Mecanica_de_las_Rocas_y_de_los_Fluidos > 5.5 && 5.5 > Est[N].Car.Hid.Geologia_Estructural)
        {
            cout << n++ << ": Geología Estructural" << endl;
            Materias[Total++] = "Geología Estructural";
        }

        if (Est[N].Car.Hid.Formacion_Socio_Politica_Legislacion_Petrolera > 5.5 && 5.5 > Est[N].Car.Hid.Formacion_Socio_Politica_Integracion_Comercio_Internacional)
        {
            cout << n++ << ": Integración con el Comercio Internacional" << endl;
            Materias[Total++] = "Integración con el Comercio Internacional";
        }

        if (Est[N].Car.Hid.Proyecto_Socio_Comunitario_Socio_Energetico_V > 5.5 && 5.5 > Est[N].Car.Hid.Proyecto_Comunitario_Socio_Energetico_VI)
        {
            cout << n++ << ": Proyecto Comunitario Socio Energético VI" << endl;
            Materias[Total++] = "Proyecto Comunitario Socio Energético VI";
        }

        if (Est[N].UC_Aprobadas >= 100 && 5.5 > Est[N].Car.Hid.Seguridad_Industrial)
        {
            cout << n++ << ": Seguridad Industrial" << endl;
            Materias[Total++] = "Seguridad Industrial";
        }

        if (Est[N].Car.Hid.Caracterizacion_Energetica_de_los_Yacimientos > 5.5 && 5.5 > Est[N].Car.Hid.Caracterizacion_Dinamica_de_los_Yacimientos)
        {
            cout << n++ << ": Caracterización Dinámica de los Yacimientos" << endl;
            Materias[Total++] = "Caracterización Dinámica de los Yacimientos";
        }

        if (Est[N].Car.Hid.Perforacion_de_Pozos > 5.5 && 5.5 > Est[N].Car.Hid.Perfilaje_de_Pozos)
        {
            cout << n++ << ": Perfilaje de Pozos" << endl;
            Materias[Total++] = "Perfilaje de Pozos";
        }

        if (Est[N].Car.Hid.Perforacion_de_Pozos > 5.5 && 5.5 > Est[N].Car.Hid.Competacion_de_Pozos)
        {
            cout << n++ << ": Completación de Pozos" << endl;
            Materias[Total++] = "Completación de Pozos";
        }

        if (Est[N].Car.Hid.Caracterizacion_Energetica_de_los_Yacimientos > 5.5 && 5.5 > Est[N].Car.Hid.Recuperacion_Secundaria_de_Yacimientos)
        {
            cout << n++ << ": Recuperación Secundaria de los Yacimientos" << endl;
            Materias[Total++] = "Recuperación Secundaria de los Yacimientos";
        }

        if (Est[N].Car.Hid.Proyecto_Comunitario_Socio_Energetico_VI > 5.5 && 5.5 > Est[N].Car.Hid.Proyecto_Comunitario_Socio_Energetico_VII)
        {
            cout << n++ << ": Proyecto Comunitario Socio Energético VII" << endl;
            Materias[Total++] = "Proyecto Comunitario Socio Energético VII";
        }

        if (Est[N].Car.Hid.Geologia_Estructural > 5.5 && Est[N].Car.Hid.Caracterizacion_Dinamica_de_los_Yacimientos > 5.5 && 5.5 > Est[N].Car.Hid.Geologia_de_Produccion)
        {
            cout << n++ << ": Geología de Producción" << endl;
            Materias[Total++] = "Geología de Producción";
        }

        if (Est[N].Car.Hid.Caracterizacion_Dinamica_de_los_Yacimientos > 5.5 && 5.5 > Est[N].Car.Hid.Ingenieria_de_Produccion_I)
        {
            cout << n++ << ": Ingeniería de Producción I" << endl;
            Materias[Total++] = "Ingeniería de Producción I";
        }

        if (Est[N].Car.Hid.Seguridad_Industrial > 5.5 && 5.5 > Est[N].Car.Hid.Proteccion_Integral_de_Riesgos)
        {
            cout << n++ << ": Protección Integral de Riesgos" << endl;
            Materias[Total++] = "Protección Integral de Riesgos";
        }

        if (Est[N].UC_Aprobadas >= 120 && 5.5 > Est[N].Car.Hid.Electiva_Profesional_Corrosion_e_Integridad_Mecanica)
        {
            cout << n++ << ": Electiva Profesional (Corrosión)" << endl;
            Materias[Total++] = "Electiva Profesional (Corrosión)";
        }

        if (Est[N].UC_Aprobadas >= 120 && 5.5 > Est[N].Car.Hid.Evaluacion_y_Auditoria_Ambiental)
        {
            cout << n++ << ": Evaluación y Auditoría Ambiental" << endl;
            Materias[Total++] = "Evaluación y Auditoría Ambiental";
        }

        if (Est[N].Car.Hid.Termodinamica_General_y_Aplicada > 5.5 && 5.5 > Est[N].Car.Hid.Transferencia_de_Calor)
        {
            cout << n++ << ": Transferencia de Calor" << endl;
            Materias[Total++] = "Transferencia de Calor";
        }

        if (Est[N].Car.Hid.Transporte_y_Distribucion_de_Hidrocarburos > 5.5 && 5.5 > Est[N].Car.Hid.Procesos_Petroquimicos)
        {
            cout << n++ << ": Procesos Petroquímicos" << endl;
            Materias[Total++] = "Procesos Petroquímicos";
        }

        if (Est[N].Car.Hid.Proyecto_Comunitario_Socio_Energetico_VII > 5.5 && 5.5 > Est[N].Car.Hid.Proyecto_Comunitario_Socio_Energetico_VIII)
        {
            cout << n++ << ": Proyecto Comunitario Socio Energético VIII" << endl;
            Materias[Total++] = "Proyecto Comunitario Socio Energético VIII";
        }

        if (Est[N].UC_Aprobadas >= 140 && 5.5 > Est[N].Car.Hid.Electiva_Profesional_Gestion_y_Control_de_Calidad)
        {
            cout << n++ << ": Electiva Profesional (Calidad)" << endl;
            Materias[Total++] = "Electiva Profesional (Calidad)";
        }

        if (Est[N].Car.Hid.Ingenieria_de_Produccion_I > 5.5 && 5.5 > Est[N].Car.Hid.Ingenieria_de_Produccion_II)
        {
            cout << n++ << ": Ingeniería de Producción II" << endl;
            Materias[Total++] = "Ingeniería de Producción II";
        }

        if (Est[N].Car.Hid.Matematica_III > 5.5 && 5.5 > Est[N].Car.Hid.Simulacion_Numerica_de_Yacimientos)
        {
            cout << n++ << ": Simulación Numérica de Yacimientos" << endl;
            Materias[Total++] = "Simulación Numérica de Yacimientos";
        }

        if (Est[N].Car.Hid.Transporte_y_Distribucion_de_Hidrocarburos > 5.5 && 5.5 > Est[N].Car.Hid.Procesos_de_Refinacion)
        {
            cout << n++ << ": Procesos de Refinación" << endl;
            Materias[Total++] = "Procesos de Refinación";
        }

        if (Est[N].Car.Hid.Proyecto_Comunitario_Socio_Energetico_VIII > 5.5 && 5.5 > Est[N].Car.Hid.Trabajo_Especial_de_Grado)
        {
            cout << n++ << ": Trabajo Especial de Grado" << endl;
            Materias[Total++] = "Trabajo Especial de Grado";
        }

        if (Est[N].Car.Hid.Recuperacion_Secundaria_de_Yacimientos > 5.5 && 5.5 > Est[N].Car.Hid.Recuperacion_Mejorada)
        {
            cout << n++ << ": Recuperación Mejorada" << endl;
            Materias[Total++] = "Recuperación Mejorada";
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