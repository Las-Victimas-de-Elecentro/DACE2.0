#include "../../Main/Header.h"
#include <ctime>

using namespace std;

void Chat_bot(Variables (&Var))
{

    int& Opc_F = Var.Opc_F;
    int I, ID, Num;
    int R;

    static const char* Datos_Bot[11][5] = 
    {
        {
            "¿Cuáles son los requisitos para ingresar a la UNERG?",
            "En circunstancias normales se solicita el título de Bachiller con timbre fiscal,\nnotas certificadas, copia de cédula y cumplir con el proceso de registro OPSU.\nSi no se encuentra asignado por OPSU, entonces presente su motivo para cambiarse\nde universidad y obtener su cupo en las oficinas de la Universidad",
            "La persona debe estar asignada por la OPSU para poder inscribirse en la universidad.\nSe necesitan las notas certificadas, el título de bachiller con timbre fiscal y\nla copia de la cédula. En caso de no estar asignada, debe presentar una exposición\nde motivo en las oficinas centrales.",
            "Si desea inscribirse en la UNERG debe cumplir con: 1. Título de bachiller con\ntimbre fiscal, 2. Copia de la cédula, 3. Estar asignado por la OPSU.\nSi no cumple esta última condición deberá ir a las oficinas de la universidad\ncon una exposición de motivo escrita.",
            "Para efectuar su inscripción, deberá traer a la sede más cercana: Título de Bachiller,\ncopia de la cédula y la planilla que certifique que está asignado por la OPSU.\nSi no cuenta con la asignación, deberá realizar el trámite mediante una\nexposición de motivo ante las autoridades."
        },
        {
            "¿Qué carreras se pueden estudiar en la UNERG?",
            "En Salud: Medicina, Veterinaria, Odontología, Enfermería, Histocitotecnología.\nEn Económicas: Comunicación Social, Economía, Administración.\nEn Ingeniería: Informática, Civil, Hidrocarburos e Industrial.\nTambién contamos con la facultad de Derecho y el Área de Educación.",
            "Se divide por áreas: Ingeniería (Agronómica, Gas, Petróleo e Informática).\nSalud (Medicina, Odontología, Veterinaria). Económicas y Sociales\n(Contaduría, Fisioterapia, Economía). Además de Derecho y Educación.",
            "Facultad de Derecho para abogados. Ciencias Económicas y Sociales:\nAdministración, Nutrición y Diética, Economía. Área de Ingeniería:\nIndustrial, Electrónica e Informática. Ciencias de la Salud:\nEnfermería, Medicina y Veterinaria. Finalmente, Educación.",
            "Área de Educación, Ciencias Económicas (Contaduría, Comunicación Social,\nEconomía). Ciencias de la Salud (Histocitotecnología, Enfermería,\nMedicina). Facultad de Derecho e Ingeniería (Informática,\nIndustrial, Civil)."
        },
        {
            "¿Dónde está ubicada la sede principal?",
            "Se encuentra ubicada en la capital del Estado Guárico,\nen San Juan de los Morros, específicamente en la Vía El Castrero.",
            "Esta misma se encuentra en San Juan de los Morros,\nVía el Castrero, en el Estado Guárico.",
            "La que se tiene como sede principal se localiza en San Juan de los Morros,\nEstado Guárico, en la Vía el Castrero.",
            "Ubicación exacta: Estado Guárico, San Juan de los Morros,\nVía el Castrero."
        },
        {
            "¿Cuál es el régimen académico?",
            "Se tienen programas anuales como Medicina y Derecho.\nAsí como los programas semestrales como las Ingenierías\n(Informática, Civil, entre otros).",
            "Existen programas semestrales como Administración y Comunicación Social.\nPor otro lado, los programas anuales incluyen Veterinaria,\nEducación y Odontología.",
            "Existen los programas anuales como Enfermería y Odontología.\nAsí como también se tienen los semestrales como Ingeniería\nAgronómica e Ingeniería Industrial.",
            "Programas semestrales: Economía, Ingeniería en Hidrocarburos e Industrial.\nProgramas anuales: Histocitotecnología, Medicina y Derecho."
        },
        {
            "¿Qué servicios ofrece la universidad?",
            "La universidad ofrece servicios como programas comunitarios,\nproyectos de servicio social, actividades culturales\ny formación deportiva.",
            "Ofrece servicios de medios propios, como la prensa universitaria\ny una emisora radial llamada 'Radio Unerg 92.7 FM'.",
            "Contamos con correo institucional y oficinas sectoriales para cada\nárea académica destinadas a la resolución de problemas estudiantiles.",
            "Se tiene transporte público gratuito para estudiantes desde el centro,\nasí como también un comedor universitario para el almuerzo."
        },
        {
            "¿Se ofrecen posgrados?",
            "Sí, en áreas de Ciencias de la Salud,\nasí como en Educación y Administración.",
            "Sí, en áreas como Educación,\nde Ciencias de la Salud y Ciencias Económicas.",
            "Sí, en áreas como Administración,\nCiencias de la Salud y Educación.",
            "Sí, en áreas de Ciencias de la Salud,\nAdministración y Educación, entre otros."
        },
        {
            "¿Qué es el servicio comunitario?",
            "Es un requisito obligatorio de proyectos sociales\nvinculados a la carrera que cursas.",
            "Todos los estudiantes deben cumplir servicio comunitario\nen proyectos sociales aprobados por la institución.",
            "Es una actividad académica obligatoria que conecta\nal estudiante con las necesidades de la comunidad.",
            "El servicio comunitario consiste en proyectos sociales\nque forman parte del plan de estudios obligatorio."
        },
        {
            "¿Dónde se tramitan constancias y récord académico?",
            "En la Oficina de Control de Estudios de cada área académica correspondiente.",
            "Se gestionan directamente en la Dirección de Control de Estudios\nde su facultad.",
            "El trámite se realiza en la unidad de Control de Estudios\ndonde usted cursa su carrera.",
            "Las constancias y récords se solicitan en la unidad administrativa\nde Control de Estudios de su área."
        },
        {
            "¿Qué hacer en caso de pérdida de documentos universitarios?",
            "Notificar a la oficina correspondiente y solicitar la\nreposición previo pago del arancel establecido.",
            "Informar la pérdida en Control de Estudios y pedir\nel duplicado cumpliendo con los requisitos internos.",
            "Acudir a la unidad administrativa de su área y gestionar\nla reposición del documento extraviado.",
            "Reportar la pérdida en su facultad y tramitar la emisión\nde un nuevo documento oficial."
        },
        {
            "¿La UNERG tiene convenios internacionales?",
            "Sí, mantiene convenios activos con universidades\nlatinoamericanas y europeas.",
            "La UNERG mantiene convenios internacionales para el\nintercambio académico y científico.",
            "Existen acuerdos vigentes con instituciones extranjeras\ntanto en Latinoamérica como en Europa.",
            "La universidad participa activamente en convenios internacionales\nde cooperación académica."
        },
        {
            "¿Cuál es el horario de atención?",
            "De lunes a viernes, en horario corrido de 8:00 AM a 4:00 PM.",
            "El horario administrativo general es de 8:00 AM hasta las 4:00 PM.",
            "Atención al público en días laborables (Lunes a Viernes)\nde 8:00 AM a 4:00 PM.",
            "Horario de oficina: Lunes a Viernes de 8:00 AM a 4:00 PM."
        }
    };

    srand(time(NULL));

    do
    {

        Limpiar();
        Dibujo = "Bot"; 
        Art();
        
        cout << CYAN << "Bienvenido al apartado de preguntas frecuentes con DABOT" << RESET << endl;
        cout << "Seleccione una pregunta" << endl;

        for (I = 0; I <= 10; I++)
        {

            cout << (I + 1) << ": " << Datos_Bot[I][0] << endl;

        }

        cout << "12: Salir del Chatbot" << endl;

        Opc_F = 12;
        cout << endl << "Ingrese una opción: ";
        ID = Opc_Menu(Opc_F);

        if (ID != 12)
        {

            Num = 1 + rand() % 4;

            Limpiar();
            Dibujo = "Bot"; 
            Art();

            cout << GREEN << "DABOT responde: " << RESET << endl;

            if (Num == 1)
            {

                cout << Datos_Bot[ID - 1][1] << endl;

            }
            else if (Num == 2)
            {

                cout << Datos_Bot[ID - 1][2] << endl;

            }
            else if (Num == 3)
            {

                cout << Datos_Bot[ID - 1][3] << endl;

            }
            else
            {

                cout << Datos_Bot[ID - 1][4] << endl;

            }

            cout << endl << CYAN << "¿Desea hacer otra pregunta? Ingrese: 1:Si / 0:No : " << RESET;
            R = Opc_Bool();

            if (R == 0)
            {

                ID = 12;

            }

        }

    } while (ID != 12);

}