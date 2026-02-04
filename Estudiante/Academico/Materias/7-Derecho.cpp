#include "../../../Main/Header.h"
using namespace std;

void Der_Est (Variables (&Var), Estudiante (&Est)[D], Clase (&Class)[D], Clase_Magistral (&Mag)[D], Profesor (&Prof)[D])
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
            cout << n++ << ": Derecho Civil I" << endl;
            Materias[Total++] = "Derecho Civil I";
            cout << n++ << ": Derecho Constitucional" << endl;
            Materias[Total++] = "Derecho Constitucional";
            cout << n++ << ": Pensamiento Bolivariano" << endl;
            Materias[Total++] = "Pensamiento Bolivariano";
            cout << n++ << ": Introducción al Derecho" << endl;
            Materias[Total++] = "Introducción al Derecho";
            cout << n++ << ": Economía Política" << endl;
            Materias[Total++] = "Economía Política";
            cout << n++ << ": Metodología de Investigación Jurídica" << endl;
            Materias[Total++] = "Metodología de Investigación Jurídica";
            cout << n++ << ": Derecho Popular" << endl;
            Materias[Total++] = "Derecho Popular";
            cout << n++ << ": Derecho Romano" << endl;
            Materias[Total++] = "Derecho Romano";
            cout << n++ << ": Lógica Jurídica" << endl;
            Materias[Total++] = "Lógica Jurídica";
            cout << n++ << ": Deontología Jurídica" << endl;
            Materias[Total++] = "Deontología Jurídica";
            cout << n++ << ": Arte y Cultura" << endl;
            Materias[Total++] = "Arte y Cultura";
            cout << n++ << ": Deporte" << endl;
            Materias[Total++] = "Deporte";
        }

        if (Est[N].UC_Aprobadas > 0 && 5.5 > Est[N].Car.Der.Derecho_Civil_I)
        {
            cout << n++ << ": Derecho Civil I" << endl;
            Materias[Total++] = "Derecho Civil I";
        }

        if (Est[N].UC_Aprobadas > 0 && 5.5 > Est[N].Car.Der.Derecho_Constitucional)
        {
            cout << n++ << ": Derecho Constitucional" << endl;
            Materias[Total++] = "Derecho Constitucional";
        }

        if (Est[N].UC_Aprobadas > 0 && 5.5 > Est[N].Car.Der.Pensamiento_Bolivariano)
        {
            cout << n++ << ": Pensamiento Bolivariano" << endl;
            Materias[Total++] = "Pensamiento Bolivariano";
        }

        if (Est[N].UC_Aprobadas > 0 && 5.5 > Est[N].Car.Der.Introduccion_al_Derecho)
        {
            cout << n++ << ": Introducción al Derecho" << endl;
            Materias[Total++] = "Introducción al Derecho";
        }

        if (Est[N].UC_Aprobadas > 0 && 5.5 > Est[N].Car.Der.Economia_Politica)
        {
            cout << n++ << ": Economía Política" << endl;
            Materias[Total++] = "Economía Política";
        }

        if (Est[N].UC_Aprobadas > 0 && 5.5 > Est[N].Car.Der.Metodos_de_Investigacion_Juridica)
        {
            cout << n++ << ": Metodología de Investigación Jurídica" << endl;
            Materias[Total++] = "Metodología de Investigación Jurídica";
        }

        if (Est[N].UC_Aprobadas > 0 && 5.5 > Est[N].Car.Der.Derecho_Popular)
        {
            cout << n++ << ": Derecho Popular" << endl;
            Materias[Total++] = "Derecho Popular";
        }

        if (Est[N].UC_Aprobadas > 0 && 5.5 > Est[N].Car.Der.Derecho_Romano)
        {
            cout << n++ << ": Derecho Romano" << endl;
            Materias[Total++] = "Derecho Romano";
        }

        if (Est[N].UC_Aprobadas > 0 && 5.5 > Est[N].Car.Der.Logica_Juridica)
        {
            cout << n++ << ": Lógica Jurídica" << endl;
            Materias[Total++] = "Lógica Jurídica";
        }

        if (Est[N].UC_Aprobadas > 0 && 5.5 > Est[N].Car.Der.Deontologia_Juridica)
        {
            cout << n++ << ": Deontología Jurídica" << endl;
            Materias[Total++] = "Deontología Jurídica";
        }

        if (Est[N].UC_Aprobadas > 0 && 5.5 > Est[N].Car.Der.Arte_y_Cultura)
        {
            cout << n++ << ": Arte y Cultura" << endl;
            Materias[Total++] = "Arte y Cultura";
        }

        if (Est[N].UC_Aprobadas > 0 && 5.5 > Est[N].Car.Der.Deporte)
        {
            cout << n++ << ": Deporte" << endl;
            Materias[Total++] = "Deporte";
        }

        if (Est[N].Fecha.Year >= 2)
        {
            if (5.5 > Est[N].Car.Der.Derecho_Agrario)
            {
                cout << n++ << ": Derecho Agrario" << endl;
                Materias[Total++] = "Derecho Agrario";
            }
            if (5.5 > Est[N].Car.Der.Derecho_Ambiental)
            {
                cout << n++ << ": Derecho Ambiental" << endl;
                Materias[Total++] = "Derecho Ambiental";
            }
            if (5.5 > Est[N].Car.Der.Medicina_Legal)
            {
                cout << n++ << ": Medicina Legal" << endl;
                Materias[Total++] = "Medicina Legal";
            }
            if (5.5 > Est[N].Car.Der.Criminologia)
            {
                cout << n++ << ": Criminología" << endl;
                Materias[Total++] = "Criminología";
            }
            if (5.5 > Est[N].Car.Der.Derecho_Penal_I)
            {
                cout << n++ << ": Derecho Penal I" << endl;
                Materias[Total++] = "Derecho Penal I";
            }
            if (Est[N].Car.Der.Derecho_Romano > 5.5 && 5.5 > Est[N].Car.Der.Filosofia_del_Derecho)
            {
                cout << n++ << ": Filosofía del Derecho" << endl;
                Materias[Total++] = "Filosofía del Derecho";
            }
            if (5.5 > Est[N].Car.Der.Derecho_Registral)
            {
                cout << n++ << ": Derecho Registral" << endl;
                Materias[Total++] = "Derecho Registral";
            }
            if (5.5 > Est[N].Car.Der.Proyecto_Socio_Juridico_Comunitario_I)
            {
                cout << n++ << ": Proyecto Socio Jurídico Comunitario I" << endl;
                Materias[Total++] = "Proyecto Socio Jurídico Comunitario I";
            }
            if (Est[N].Car.Der.Derecho_Civil_I > 5.5 && 5.5 > Est[N].Car.Der.Derecho_Civil_II)
            {
                cout << n++ << ": Derecho Civil II" << endl;
                Materias[Total++] = "Derecho Civil II";
            }
            if (5.5 > Est[N].Car.Der.Practicas_Juridicas_I)
            {
                cout << n++ << ": Prácticas Jurídicas I" << endl;
                Materias[Total++] = "Prácticas Jurídicas I";
            }
            if (5.5 > Est[N].Car.Der.Electiva_I)
            {
                cout << n++ << ": Electiva I" << endl;
                Materias[Total++] = "Electiva I";
            }
        }

        if (Est[N].Fecha.Year >= 3)
        {
            if (5.5 > Est[N].Car.Der.Derecho_Administrativo)
            {
                cout << n++ << ": Derecho Administrativo" << endl;
                Materias[Total++] = "Derecho Administrativo";
            }
            if (Est[N].Car.Der.Derecho_Penal_I > 5.5 && 5.5 > Est[N].Car.Der.Derecho_Penal_II)
            {
                cout << n++ << ": Derecho Penal II" << endl;
                Materias[Total++] = "Derecho Penal II";
            }
            if (5.5 > Est[N].Car.Der.Derecho_Laboral)
            {
                cout << n++ << ": Derecho Laboral" << endl;
                Materias[Total++] = "Derecho Laboral";
            }
            if (5.5 > Est[N].Car.Der.Derecho_Familiar)
            {
                cout << n++ << ": Derecho Familiar" << endl;
                Materias[Total++] = "Derecho Familiar";
            }
            if (5.5 > Est[N].Car.Der.Obligaciones_I)
            {
                cout << n++ << ": Obligaciones I" << endl;
                Materias[Total++] = "Obligaciones I";
            }
            if (5.5 > Est[N].Car.Der.Derecho_Internacional_Publico)
            {
                cout << n++ << ": Derecho Internacional Público" << endl;
                Materias[Total++] = "Derecho Internacional Público";
            }
            if (5.5 > Est[N].Car.Der.Teoria_General_del_Proceso)
            {
                cout << n++ << ": Teoría General del Proceso" << endl;
                Materias[Total++] = "Teoría General del Proceso";
            }
            if (5.5 > Est[N].Car.Der.Derecho_Tributario)
            {
                cout << n++ << ": Derecho Tributario" << endl;
                Materias[Total++] = "Derecho Tributario";
            }
            if (Est[N].Car.Der.Proyecto_Socio_Juridico_Comunitario_I > 5.5 && 5.5 > Est[N].Car.Der.Proyecto_Socio_Juridico_II)
            {
                cout << n++ << ": Proyecto Socio Jurídico Comunitario II" << endl;
                Materias[Total++] = "Proyecto Socio Jurídico Comunitario II";
            }
            if (Est[N].Car.Der.Practicas_Juridicas_I > 5.5 && 5.5 > Est[N].Car.Der.Practicas_Juridicas_II)
            {
                cout << n++ << ": Prácticas Jurídicas II" << endl;
                Materias[Total++] = "Prácticas Jurídicas II";
            }
            if (Est[N].Car.Der.Electiva_I > 5.5 && 5.5 > Est[N].Car.Der.Electiva_II)
            {
                cout << n++ << ": Electiva II" << endl;
                Materias[Total++] = "Electiva II";
            }
        }

        if (Est[N].Fecha.Year >= 4)
        {
            if (5.5 > Est[N].Car.Der.Derecho_Contencioso_Administrativo)
            {
                cout << n++ << ": Derecho Contencioso Administrativo" << endl;
                Materias[Total++] = "Derecho Contencioso Administrativo";
            }
            if (5.5 > Est[N].Car.Der.Derecho_Procesal_Penal_I)
            {
                cout << n++ << ": Derecho Procesal Penal I" << endl;
                Materias[Total++] = "Derecho Procesal Penal I";
            }
            if (5.5 > Est[N].Car.Der.Derecho_Procesal_Laboral_I)
            {
                cout << n++ << ": Derecho Procesal Laboral I" << endl;
                Materias[Total++] = "Derecho Procesal Laboral I";
            }
            if (5.5 > Est[N].Car.Der.Derecho_en_Sucesiones)
            {
                cout << n++ << ": Derecho en Sucesiones" << endl;
                Materias[Total++] = "Derecho en Sucesiones";
            }
            if (Est[N].Car.Der.Obligaciones_I > 5.5 && 5.5 > Est[N].Car.Der.Obligaciones_II)
            {
                cout << n++ << ": Obligaciones II" << endl;
                Materias[Total++] = "Obligaciones II";
            }
            if (5.5 > Est[N].Car.Der.Derecho_Internacional_Privado)
            {
                cout << n++ << ": Derecho Internacional Privado" << endl;
                Materias[Total++] = "Derecho Internacional Privado";
            }
            if (5.5 > Est[N].Car.Der.Derecho_Procesal_Civil_I)
            {
                cout << n++ << ": Derecho Procesal Civil I" << endl;
                Materias[Total++] = "Derecho Procesal Civil I";
            }
            if (5.5 > Est[N].Car.Der.Derecho_Probatorio_I)
            {
                cout << n++ << ": Derecho Probatorio I" << endl;
                Materias[Total++] = "Derecho Probatorio I";
            }
            if (Est[N].Car.Der.Proyecto_Socio_Juridico_II > 5.5 && 5.5 > Est[N].Car.Der.Proyecto_Socio_Juridico_III)
            {
                cout << n++ << ": Proyecto Socio Jurídico Comunitario III" << endl;
                Materias[Total++] = "Proyecto Socio Jurídico Comunitario III";
            }
            if (Est[N].Car.Der.Practicas_Juridicas_II > 5.5 && 5.5 > Est[N].Car.Der.Practicas_Juridicas_III)
            {
                cout << n++ << ": Prácticas Jurídicas III" << endl;
                Materias[Total++] = "Prácticas Jurídicas III";
            }
            if (Est[N].Car.Der.Electiva_II > 5.5 && 5.5 > Est[N].Car.Der.Electiva_III)
            {
                cout << n++ << ": Electiva III" << endl;
                Materias[Total++] = "Electiva III";
            }
        }

        if (Est[N].Fecha.Year >= 5)
        {
            if (Est[N].Car.Der.Derecho_Procesal_Penal_I > 5.5 && 5.5 > Est[N].Car.Der.Derecho_Procesal_Penal_II)
            {
                cout << n++ << ": Derecho Procesal Penal II" << endl;
                Materias[Total++] = "Derecho Procesal Penal II";
            }
            if (Est[N].Car.Der.Obligaciones_II > 5.5 && 5.5 > Est[N].Car.Der.Obligaciones_III)
            {
                cout << n++ << ": Obligaciones III" << endl;
                Materias[Total++] = "Obligaciones III";
            }
            if (Est[N].Car.Der.Derecho_Procesal_Civil_I > 5.5 && 5.5 > Est[N].Car.Der.Derecho_Procesal_Civil_II)
            {
                cout << n++ << ": Derecho Procesal Civil II" << endl;
                Materias[Total++] = "Derecho Procesal Civil II";
            }
            if (5.5 > Est[N].Car.Der.Derecho_Mercantil)
            {
                cout << n++ << ": Derecho Mercantil" << endl;
                Materias[Total++] = "Derecho Mercantil";
            }
            if (Est[N].Car.Der.Derecho_Probatorio_I > 5.5 && 5.5 > Est[N].Car.Der.Derecho_Probatorio_II)
            {
                cout << n++ << ": Derecho Probatorio II" << endl;
                Materias[Total++] = "Derecho Probatorio II";
            }
            if (5.5 > Est[N].Car.Der.Contratos_y_Garantias)
            {
                cout << n++ << ": Contratos y Garantías" << endl;
                Materias[Total++] = "Contratos y Garantías";
            }
            if (Est[N].Car.Der.Proyecto_Socio_Juridico_III > 5.5 && 5.5 > Est[N].Car.Der.Proyecto_Socio_Juridico_IV)
            {
                cout << n++ << ": Proyecto Socio Jurídico Comunitario IV" << endl;
                Materias[Total++] = "Proyecto Socio Jurídico Comunitario IV";
            }
            if (Est[N].Car.Der.Practicas_Juridicas_III > 5.5 && 5.5 > Est[N].Car.Der.Practicas_Juridicas_IV)
            {
                cout << n++ << ": Prácticas Jurídicas IV" << endl;
                Materias[Total++] = "Prácticas Jurídicas IV";
            }
            if (Est[N].Car.Der.Electiva_III > 5.5 && 5.5 > Est[N].Car.Der.Electiva_IV)
            {
                cout << n++ << ": Electiva IV" << endl;
                Materias[Total++] = "Electiva IV";
            }
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