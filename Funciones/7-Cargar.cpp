#include "../Main/Header.h"
using namespace std;

void Cargar(Variables (&Var), Estudiante (&Est)[D], Plan_Evaluacion (&Plan)[D], Reportes (&Rep)[D], Asignacion (&Asig)[D], Clase_Magistral (&Mag)[D], Solicitudes (&Soli)[D], Grupos (&Gru)[D], Clase (&Class)[D], Materias (&Mat)[527], Profesor (&Prof)[D], Administrativo (&Admin)[D], Carnet (&Car)[D], Carnetizacion (&Carn)[D])
{
    string Texto;

    //Estudiante

    ifstream Personal_Est("Base de datos/Estudiantes/Estudiantes.csv");
    if (Personal_Est.is_open())
    {
        int I = 0;
        getline(Personal_Est, Texto);
        while (I < D && getline(Personal_Est, Est[I].Avatar, ';'))
        {
            getline(Personal_Est, Est[I].Nombre, ';');
            getline(Personal_Est, Est[I].Nombre2, ';');
            getline(Personal_Est, Est[I].Apellido, ';');
            getline(Personal_Est, Est[I].Apellido2, ';');
            getline(Personal_Est, Texto, ';'); Est[I].Cedula = stol(Texto);
            getline(Personal_Est, Texto, ';'); Est[I].Fecha.Dia = stoi(Texto);
            getline(Personal_Est, Texto, ';'); Est[I].Fecha.Mes = stoi(Texto);
            getline(Personal_Est, Texto, ';'); Est[I].Fecha.Year = stoi(Texto);
            getline(Personal_Est, Est[I].Direccion, ';');
            getline(Personal_Est, Texto, ';'); Est[I].Telefono = stoll(Texto);
            getline(Personal_Est, Est[I].Genero, ';');
            getline(Personal_Est, Est[I].Parroquia, ';');
            getline(Personal_Est, Est[I].Etnia, ';');
            getline(Personal_Est, Est[I].Correo, ';');
            getline(Personal_Est, Est[I].Password, ';');
            getline(Personal_Est, Est[I].Carrera, ';');
            getline(Personal_Est, Texto, ';'); Est[I].Semestre = stoi(Texto);
            getline(Personal_Est, Texto, ';'); Est[I].Year = stoi(Texto);
            getline(Personal_Est, Texto, ';'); Est[I].UC_Aprobadas= stoi(Texto);
            getline(Personal_Est, Texto); Est[I].Oscuro = stoi(Texto);
            I++;
        }
        Personal_Est.close();
    }

    ifstream Salud_Est("Base de datos/Estudiantes/Salud.csv");
    if (Salud_Est.is_open())
    {
        int I = 0;
        getline(Salud_Est, Texto);
        while (I < D && getline(Salud_Est, Texto, ';')) 
        {
            getline(Salud_Est, Texto, ';');
            getline(Salud_Est, Texto, ';');
            getline(Salud_Est, Est[I].Enf.Transmisibles, ';');
            getline(Salud_Est, Est[I].Enf.Cronicas, ';');
            getline(Salud_Est, Est[I].Enf.Neurologicas, ';');
            getline(Salud_Est, Est[I].Enf.Neoplasias, ';');
            getline(Salud_Est, Est[I].Enf.Autoinmunes, ';');
            getline(Salud_Est, Est[I].Enf.Transtornos, ';');
            getline(Salud_Est, Est[I].Enf.Lesiones, ';');
            getline(Salud_Est, Est[I].Enf.Congenitas, ';');
            getline(Salud_Est, Est[I].Enf.Metabolicos, ';');
            getline(Salud_Est, Est[I].Enf.Ocupacionales); 
            I++;
        }
        Salud_Est.close();
    }

    ifstream Tarjetas_Est("Base de datos/Estudiantes/Tarjetas.csv");
    if (Tarjetas_Est.is_open())
    {
        int I = 0;
        int Pos;
        getline(Tarjetas_Est, Texto);
        while (I < D && getline(Tarjetas_Est, Texto, ';'))
        {
            getline(Tarjetas_Est, Texto, ';');
            getline(Tarjetas_Est, Texto, ';');
            for (Pos = 0; Pos < 49; Pos++)
            {
                getline(Tarjetas_Est, Texto, ';');
                Est[I].Tarjeta[Pos] = stoi(Texto);
            }
            getline(Tarjetas_Est, Texto);
            Est[I].Tarjeta[49] = stoi(Texto);
            I++;
        }
        Tarjetas_Est.close();
    }

    ifstream Leer_Materia_Est("Base de datos/Estudiantes/Materias.csv");
    if (Leer_Materia_Est.is_open())
    {
        int ME = 0;
        getline(Leer_Materia_Est, Texto);
        while (ME < D && getline(Leer_Materia_Est, Texto, ';'))
        {
            Est[ME].Cedula = stol(Texto);
            getline(Leer_Materia_Est, Est[ME].Nombre, ';');
            getline(Leer_Materia_Est, Est[ME].Apellido, ';');
            getline(Leer_Materia_Est, Est[ME].Materias, ';');
            getline(Leer_Materia_Est, Texto); Est[ME].Cant_Mat = stoi(Texto);
            ME++;
        }
        Leer_Materia_Est.close();
    }

    ifstream Leer_Mag("Base de datos/Docentes/Clases Magistrales.csv");
    if (Leer_Mag.is_open())
    {
        int I = 0;
        int ContEstMag = 1;
        getline(Leer_Mag, Texto);
        while (I < D && getline(Leer_Mag, Mag[I].Nombre_Profesor, ';'))
        {
            getline(Leer_Mag, Mag[I].Apellido_Profesor, ';');
            getline(Leer_Mag, Texto, ';'); Mag[I].CI_Profesor = stol(Texto);
            getline(Leer_Mag, Mag[I].Carrera, ';');
            getline(Leer_Mag, Mag[I].Nombre_Clase, ';');
            getline(Leer_Mag, Texto, ';'); Mag[I].Fecha.Dia = stoi(Texto);
            getline(Leer_Mag, Texto, ';'); Mag[I].Fecha.Mes = stoi(Texto);
            getline(Leer_Mag, Texto, ';'); Mag[I].Fecha.Year = stoi(Texto);
            getline(Leer_Mag, Texto, ';'); Mag[I].Horas = stoi(Texto);
            getline(Leer_Mag, Texto, ';'); Mag[I].Aula = stoi(Texto);
            getline(Leer_Mag, Texto, ';'); Mag[I].Cant_Estudiantes = stoi(Texto);
            getline(Leer_Mag, Texto, ';'); Mag[I].Precio = stof(Texto);
            getline(Leer_Mag, Texto); Mag[I].Autorizacion = (Texto == "1");

            if (Mag[I].Nombre_Clase != "")
            {
                string Nom_Archivo_Mag = "Base de datos/Clases Magistrales/Magistral" + to_string(ContEstMag) + ".csv";
                ifstream Leer_Est_Mag(Nom_Archivo_Mag);
                if (Leer_Est_Mag.is_open())
                {
                    int E = 0;
                    string Cabecera_Mag;
                    getline(Leer_Est_Mag, Cabecera_Mag);
                    while (E < D && getline(Leer_Est_Mag, Texto, ';'))
                    {
                        Mag[I].Est_Mag.Cedula[E] = stol(Texto);
                        getline(Leer_Est_Mag, Mag[I].Est_Mag.Nombre[E], ';');
                        getline(Leer_Est_Mag, Mag[I].Est_Mag.Apellido[E], ';');
                        getline(Leer_Est_Mag, Texto); Mag[I].Est_Mag.Pago[E] = stoi(Texto);
                        E++;
                    }
                    Leer_Est_Mag.close();
                }
                ContEstMag++;
            }
            I++;
        }
        Leer_Mag.close();
    }

    ifstream Leer_Mag_Est("Base de datos/Estudiantes/Magistrales.csv");
    if (Leer_Mag_Est.is_open())
    {
        int MA = 0;
        getline(Leer_Mag_Est, Texto);
        while (MA < D && getline(Leer_Mag_Est, Texto, ';'))
        {
            Est[MA].Cedula = stol(Texto);
            getline(Leer_Mag_Est, Est[MA].Nombre, ';');
            getline(Leer_Mag_Est, Est[MA].Apellido, ';');
            getline(Leer_Mag_Est, Est[MA].Magistral, ';');
            getline(Leer_Mag_Est, Texto);
            if (!Texto.empty()) Est[MA].Cant_Mag = stoi(Texto);
            MA++;
        }
        Leer_Mag_Est.close();
    }

    //Docentes

    ifstream Personal_Prof("Base de datos/Docentes/Docentes.csv");
    if (Personal_Prof.is_open())
    {
        int J = 0;
        getline(Personal_Prof, Texto);
        while (J < D && getline(Personal_Prof, Prof[J].Avatar, ';'))
        {
            getline(Personal_Prof, Prof[J].Nombre, ';');
            getline(Personal_Prof, Prof[J].Nombre2, ';');
            getline(Personal_Prof, Prof[J].Apellido, ';');
            getline(Personal_Prof, Prof[J].Apellido2, ';');
            getline(Personal_Prof, Texto, ';'); Prof[J].Cedula = stol(Texto);
            getline(Personal_Prof, Texto, ';'); Prof[J].Fecha.Dia = stoi(Texto);
            getline(Personal_Prof, Texto, ';'); Prof[J].Fecha.Mes = stoi(Texto);
            getline(Personal_Prof, Texto, ';'); Prof[J].Fecha.Year = stoi(Texto);
            getline(Personal_Prof, Prof[J].Cargo, ';');
            getline(Personal_Prof, Prof[J].Direccion, ';');
            getline(Personal_Prof, Texto, ';'); Prof[J].Telefono = stoll(Texto);
            getline(Personal_Prof, Prof[J].Genero, ';');
            getline(Personal_Prof, Prof[J].Parroquia, ';');
            getline(Personal_Prof, Prof[J].Etnia, ';');
            getline(Personal_Prof, Prof[J].Correo, ';');
            getline(Personal_Prof, Prof[J].Password, ';');
            getline(Personal_Prof, Texto); Prof[J].Oscuro = stoi(Texto);
            J++;
        }
        Personal_Prof.close();
    }

    ifstream Salud_Prof("Base de datos/Docentes/Salud.csv");
    if (Salud_Prof.is_open())
    {
        int J = 0;
        getline(Salud_Prof, Texto);
        while (J < D && getline(Salud_Prof, Texto, ';'))
        {
            getline(Salud_Prof, Texto, ';');
            getline(Salud_Prof, Texto, ';');
            getline(Salud_Prof, Prof[J].Enf.Transmisibles, ';');
            getline(Salud_Prof, Prof[J].Enf.Cronicas, ';');
            getline(Salud_Prof, Prof[J].Enf.Neurologicas, ';');
            getline(Salud_Prof, Prof[J].Enf.Neoplasias, ';');
            getline(Salud_Prof, Prof[J].Enf.Autoinmunes, ';');
            getline(Salud_Prof, Prof[J].Enf.Transtornos, ';');
            getline(Salud_Prof, Prof[J].Enf.Lesiones, ';');
            getline(Salud_Prof, Prof[J].Enf.Congenitas, ';');
            getline(Salud_Prof, Prof[J].Enf.Metabolicos, ';');
            getline(Salud_Prof, Prof[J].Enf.Ocupacionales);
            J++;
        }
        Salud_Prof.close();
    }

    ifstream Tarjetas_Prof("Base de datos/Docentes/Tarjetas.csv");
    if (Tarjetas_Prof.is_open())
    {
        int J = 0;
        int Pos;
        getline(Tarjetas_Prof, Texto);
        while (J < D && getline(Tarjetas_Prof, Texto, ';'))
        {
            getline(Tarjetas_Prof, Texto, ';');
            getline(Tarjetas_Prof, Texto, ';');
            for (Pos = 0; Pos < 49; Pos++)
            {
                getline(Tarjetas_Prof, Texto, ';');
                Prof[J].Tarjeta[Pos] = stoi(Texto);
            }
            getline(Tarjetas_Prof, Texto);
            Prof[J].Tarjeta[49] = stoi(Texto);
            J++;
        }
        Tarjetas_Prof.close();
    }

    ifstream Archivo_Mat("Base de datos/Materias/Materias.csv");

    if (Archivo_Mat.is_open())
    {
        int M = 0;
        getline(Archivo_Mat, Texto);

        while (M < 527 && getline(Archivo_Mat, Mat[M].Codigo, ';'))
        {
            getline(Archivo_Mat, Mat[M].Nombre, ';');
            getline(Archivo_Mat, Texto);
            if(!Texto.empty()) 
            {
                Mat[M].Creditos = stoi(Texto);
            }
            M++;
        }
        Archivo_Mat.close();
    }

    ifstream Clases_Mag("Base de datos/Docentes/Magistrales.csv");
    if (Clases_Mag.is_open())
    {
        int MA = 0;
        getline(Clases_Mag, Texto);
        while (MA < D && getline(Clases_Mag, Texto, ';'))
        {
            Prof[MA].Cedula = stol(Texto);
            getline(Clases_Mag, Prof[MA].Nombre, ';');
            getline(Clases_Mag, Prof[MA].Apellido, ';');
            getline(Clases_Mag, Prof[MA].Magistral, ';');
            getline(Clases_Mag, Texto);
            if (!Texto.empty())
            {
                Prof[MA].Cant_Mag = stoi(Texto);
            }
            MA++;
        }
        Clases_Mag.close();
    }

    ifstream Leer_Materia_Doc("Base de datos/Docentes/Materias.csv");
    if (Leer_Materia_Doc.is_open())
    {
        int M = 0;
        getline(Leer_Materia_Doc, Texto);
        while (M < D && getline(Leer_Materia_Doc, Texto, ';'))
        {
            Prof[M].Cedula = stol(Texto);
            getline(Leer_Materia_Doc, Prof[M].Nombre, ';');
            getline(Leer_Materia_Doc, Prof[M].Apellido, ';');
            getline(Leer_Materia_Doc, Prof[M].Materias, ';');
            getline(Leer_Materia_Doc, Texto); Prof[M].Cant_Mat = stoi(Texto);
            M++;
        }
        Leer_Materia_Doc.close();
    }

    ifstream Leer_Clases("Base de datos/Docentes/Clases.csv");
    if (Leer_Clases.is_open())
    {
        int C = 0;
        int ContEst = 1;
        string Texto;
        getline(Leer_Clases, Texto); 

        while (C < D && getline(Leer_Clases, Class[C].Nombre_Profesor, ';'))
        {
            getline(Leer_Clases, Class[C].Apellido_Profesor, ';');
            getline(Leer_Clases, Texto, ';'); Class[C].CI_Profesor = stol(Texto);
            getline(Leer_Clases, Class[C].Codigo_Materia, ';');
            getline(Leer_Clases, Class[C].Nombre_Materia, ';');
            getline(Leer_Clases, Class[C].Periodo, ';');
            getline(Leer_Clases, Texto, ';'); Class[C].Seccion = stoi(Texto);
            getline(Leer_Clases, Texto, ';'); Class[C].Cant_Estudiantes = stoi(Texto);
            getline(Leer_Clases, Class[C].Estado, ';');
            
            getline(Leer_Clases, Class[C].Class1.Dia, ';');
            getline(Leer_Clases, Class[C].Class1.Hora_Inicio, ';');
            getline(Leer_Clases, Class[C].Class1.Hora_Fin, ';');
            getline(Leer_Clases, Texto, ';'); Class[C].Class1.Aula = stoi(Texto);
            getline(Leer_Clases, Texto, ';'); Class[C].Class1.Virtual = (Texto == "1");
            getline(Leer_Clases, Class[C].Class1.Plataforma, ';');
            
            getline(Leer_Clases, Class[C].Class2.Dia, ';');
            getline(Leer_Clases, Class[C].Class2.Hora_Inicio, ';');
            getline(Leer_Clases, Class[C].Class2.Hora_Fin, ';');
            getline(Leer_Clases, Texto, ';'); Class[C].Class2.Aula = stoi(Texto);
            getline(Leer_Clases, Texto, ';'); Class[C].Class2.Virtual = (Texto == "1");
            getline(Leer_Clases, Class[C].Class2.Plataforma);

            if (Class[C].Nombre_Materia != "")
            {
                string NombreArchivo = "Base de datos/Clases/Clase" + to_string(ContEst) + ".csv";
                ifstream Leer_Est(NombreArchivo);

                if (Leer_Est.is_open())
                {
                    int E = 0;
                    string Cabecera;
                    getline(Leer_Est, Cabecera);

                    while (E < 50 && getline(Leer_Est, Texto, ';'))
                    {
                        Class[C].Est_Class.Cedula[E] = stol(Texto);
                        getline(Leer_Est, Class[C].Est_Class.Nombre[E], ';');
                        getline(Leer_Est, Class[C].Est_Class.Apellido[E]);
                        E++;
                    }
                    Leer_Est.close();
                }
                ContEst++;
            }
            C++;
        }
        Leer_Clases.close();
    }

    ifstream Leer_Grupo("Base de datos/Docentes/Grupos.csv");
    if (Leer_Grupo.is_open())
    {
        int G = 0;
        getline(Leer_Grupo, Texto);
        while (G < D && getline(Leer_Grupo, Gru[G].Nombre_Profesor, ';'))
        {
            getline(Leer_Grupo, Gru[G].Apellido_Profesor, ';');
            getline(Leer_Grupo, Texto, ';'); Gru[G].CI_Profesor = stol(Texto);
            getline(Leer_Grupo, Gru[G].Codigo_Materia, ';');
            getline(Leer_Grupo, Gru[G].Materia, ';');
            getline(Leer_Grupo, Texto, ';'); Gru[G].Miembros = stoi(Texto);
            getline(Leer_Grupo, Texto); Gru[G].Seccion = stoi(Texto);
            G++;
        }
        Leer_Grupo.close();
    }

    ifstream Solicitud("Base de datos/Docentes/Solicitudes.csv");
    if (Solicitud.is_open())
    {
        int S = 0;
        getline(Solicitud, Texto);
        while (S < D && getline(Solicitud, Soli[S].Titulo, ';'))
        {
            getline(Solicitud, Soli[S].Descripcion, ';');
            getline(Solicitud, Soli[S].Titular, ';');
            getline(Solicitud, Soli[S].Destinatario, ';');
            getline(Solicitud, Texto, ';'); Soli[S].Fecha.Dia = stoi(Texto);
            getline(Solicitud, Texto, ';'); Soli[S].Fecha.Mes = stoi(Texto);
            getline(Solicitud, Texto, ';'); Soli[S].Fecha.Year = stoi(Texto);
            getline(Solicitud, Texto); Soli[S].Estado = (Texto == "1");
            S++;
        }
        Solicitud.close();
    }

    ifstream Leer_Asig("Base de datos/Docentes/Asignaciones.csv");
    if (Leer_Asig.is_open())
    {
        int I = 0;
        getline(Leer_Asig, Texto); 
        while (I < D && getline(Leer_Asig, Asig[I].Nombre_Profesor, ';'))
        {
            getline(Leer_Asig, Asig[I].Nombre_Materia, ';');
            getline(Leer_Asig, Asig[I].Codigo_Materia, ';');
            getline(Leer_Asig, Asig[I].Titulo, ';');
            getline(Leer_Asig, Asig[I].Descripcion, ';');
            getline(Leer_Asig, Texto, ';'); Asig[I].Fecha_Publicacion.Dia = stoi(Texto);
            getline(Leer_Asig, Texto, ';'); Asig[I].Fecha_Publicacion.Mes = stoi(Texto);
            getline(Leer_Asig, Texto, ';'); Asig[I].Fecha_Publicacion.Year = stoi(Texto);
            getline(Leer_Asig, Texto, ';'); Asig[I].Fecha_Entrega.Dia = stoi(Texto);
            getline(Leer_Asig, Texto, ';'); Asig[I].Fecha_Entrega.Mes = stoi(Texto);
            getline(Leer_Asig, Texto, ';'); Asig[I].Fecha_Entrega.Year = stoi(Texto);
            getline(Leer_Asig, Asig[I].Estado);
            I++;
        }
        Leer_Asig.close();
    }

    ifstream Leer_Rep("Base de datos/Docentes/Reportes.csv");
    if (Leer_Rep.is_open())
    {
        int I = 0;
        getline(Leer_Rep, Texto);
        while (I < D && getline(Leer_Rep, Rep[I].Titulo, ';'))
        {
            getline(Leer_Rep, Rep[I].Descripcion, ';');
            getline(Leer_Rep, Rep[I].Titular, ';');
            getline(Leer_Rep, Rep[I].Problema, ';');
            getline(Leer_Rep, Texto, ';'); Rep[I].Fecha.Dia = stoi(Texto);
            getline(Leer_Rep, Texto, ';'); Rep[I].Fecha.Mes = stoi(Texto);
            getline(Leer_Rep, Texto, ';'); Rep[I].Fecha.Year = stoi(Texto);
            getline(Leer_Rep, Texto); Rep[I].Recibido = (Texto == "1");
            I++;
        }
        Leer_Rep.close();
    }

    //Administrativo

    ifstream Personal_Admin("Base de datos/Administrativos/Administrativos.csv");
    if (Personal_Admin.is_open())
    {
        int K = 0;
        getline(Personal_Admin, Texto);
        while (K < D && getline(Personal_Admin, Admin[K].Avatar, ';'))
        {
            getline(Personal_Admin, Admin[K].Nombre, ';');
            getline(Personal_Admin, Admin[K].Nombre2, ';');
            getline(Personal_Admin, Admin[K].Apellido, ';');
            getline(Personal_Admin, Admin[K].Apellido2, ';');
            getline(Personal_Admin, Texto, ';'); Admin[K].Cedula = stol(Texto);
            getline(Personal_Admin, Texto, ';'); Admin[K].Fecha.Dia = stoi(Texto);
            getline(Personal_Admin, Texto, ';'); Admin[K].Fecha.Mes = stoi(Texto);
            getline(Personal_Admin, Texto, ';'); Admin[K].Fecha.Year = stoi(Texto);
            getline(Personal_Admin, Admin[K].Cargo, ';');
            getline(Personal_Admin, Admin[K].Direccion, ';');
            getline(Personal_Admin, Texto, ';'); Admin[K].Telefono = stoll(Texto);
            getline(Personal_Admin, Admin[K].Genero, ';');
            getline(Personal_Admin, Admin[K].Parroquia, ';');
            getline(Personal_Admin, Admin[K].Etnia, ';');
            getline(Personal_Admin, Admin[K].Correo, ';');
            getline(Personal_Admin, Admin[K].Password, ';');
            getline(Personal_Admin, Texto); Admin[K].Oscuro = stoi(Texto);
            K++;
        }
        Personal_Admin.close();
    }

    ifstream Salud_Admin("Base de datos/Administrativos/Salud.csv");
    if (Salud_Admin.is_open())
    {
        int K = 0;
        getline(Salud_Admin, Texto);
        while (K < D && getline(Salud_Admin, Texto, ';'))
        {
            getline(Salud_Admin, Texto, ';');
            getline(Salud_Admin, Texto, ';');
            getline(Salud_Admin, Admin[K].Enf.Transmisibles, ';');
            getline(Salud_Admin, Admin[K].Enf.Cronicas, ';');
            getline(Salud_Admin, Admin[K].Enf.Neurologicas, ';');
            getline(Salud_Admin, Admin[K].Enf.Neoplasias, ';');
            getline(Salud_Admin, Admin[K].Enf.Autoinmunes, ';');
            getline(Salud_Admin, Admin[K].Enf.Transtornos, ';');
            getline(Salud_Admin, Admin[K].Enf.Lesiones, ';');
            getline(Salud_Admin, Admin[K].Enf.Congenitas, ';');
            getline(Salud_Admin, Admin[K].Enf.Metabolicos, ';');
            getline(Salud_Admin, Admin[K].Enf.Ocupacionales);
            K++;
        }
        Salud_Admin.close();
    }

    ifstream Tarjetas_Admin("Base de datos/Administrativos/Tarjetas.csv");
    if (Tarjetas_Admin.is_open())
    {
        int K = 0;
        int Pos;
        getline(Tarjetas_Admin, Texto);
        while (K < D && getline(Tarjetas_Admin, Texto, ';'))
        {
            getline(Tarjetas_Admin, Texto, ';');
            getline(Tarjetas_Admin, Texto, ';');
            for (Pos = 0; Pos < 49; Pos++)
            {
                getline(Tarjetas_Admin, Texto, ';');
                Admin[K].Tarjeta[Pos] = stoi(Texto);
            }
            getline(Tarjetas_Admin, Texto);
            Admin[K].Tarjeta[49] = stoi(Texto);
            K++;
        }
        Tarjetas_Admin.close();
    }

    ifstream Leer_Plan("Base de datos/Docentes/Plan_Evaluacion.csv");
    if (Leer_Plan.is_open())
    {
        int i = 0;
        getline(Leer_Plan, Texto);
        while (i < D && getline(Leer_Plan, Texto, ';'))
        {
            getline(Leer_Plan, Plan[i].Nombre_Profesor, ';');
            getline(Leer_Plan, Texto, ';'); Plan[i].CI_Profesor = stoi(Texto);
            getline(Leer_Plan, Plan[i].Codigo_Materia, ';');
            getline(Leer_Plan, Plan[i].Nombre_Materia, ';');
            getline(Leer_Plan, Texto, ';'); Plan[i].Fecha.Dia = stoi(Texto);
            getline(Leer_Plan, Texto, ';'); Plan[i].Fecha.Mes = stoi(Texto);
            getline(Leer_Plan, Texto, ';'); Plan[i].Fecha.Year = stoi(Texto);
            getline(Leer_Plan, Plan[i].Tema, ';');
            getline(Leer_Plan, Plan[i].Estrategia, ';');
            getline(Leer_Plan, Texto, ';'); Plan[i].Ponderacion = stoi(Texto);
            getline(Leer_Plan, Texto); Plan[i].Firmado = (Texto == "1");
            i++;
        }
        Leer_Plan.close();
    }

    ifstream Leer_Jor_Admin("Base de datos/Administrativos/Jornada Carnet.csv");
    if (Leer_Jor_Admin.is_open())
    {
        int CJ = 0;
        getline(Leer_Jor_Admin, Texto);
        while (CJ < D && getline(Leer_Jor_Admin, Carn[CJ].Lugar, ';'))
        {
            getline(Leer_Jor_Admin, Carn[CJ].Carrera, ';');
            getline(Leer_Jor_Admin, Texto, ';'); Carn[CJ].Fecha.Dia = stoi(Texto);
            getline(Leer_Jor_Admin, Texto, ';'); Carn[CJ].Fecha.Mes = stoi(Texto);
            getline(Leer_Jor_Admin, Texto, ';'); Carn[CJ].Fecha.Year = stoi(Texto);
            getline(Leer_Jor_Admin, Texto, ';'); Carn[CJ].Precio = stof(Texto);
            getline(Leer_Jor_Admin, Texto); Carn[CJ].Activo = (Texto == "1");
            CJ++;
        }
        Leer_Jor_Admin.close();
    }

    ifstream Leer_Est_Jor("Base de datos/Administrativos/Carnet.csv");
    if (Leer_Est_Jor.is_open())
    {
        int C = 0;
        getline(Leer_Est_Jor, Texto);
        while (C < D && getline(Leer_Est_Jor, Texto, ';'))
        {
            Carn[C].Est.Cedula = stol(Texto);
            getline(Leer_Est_Jor, Carn[C].Est.Nombre, ';');
            getline(Leer_Est_Jor, Carn[C].Est.Apellido, ';');
            getline(Leer_Est_Jor, Texto);
            if (!Texto.empty() && Texto.back() == '\r') Texto.pop_back();
            Carn[C].Est.Pago = (Texto == "1");
            C++;
        }
        Leer_Est_Jor.close();
    }

    ifstream Leer_Car_Est("Base de datos/Estudiantes/Carnet.csv");
    if (Leer_Car_Est.is_open())
    {
        int CE = 0;
        getline(Leer_Car_Est, Texto);
        while (CE < D && getline(Leer_Car_Est, Car[CE].Nombre, ';'))
        {
            getline(Leer_Car_Est, Car[CE].Apellido, ';');
            getline(Leer_Car_Est, Texto, ';'); Car[CE].Cedula = stoi(Texto);
            getline(Leer_Car_Est, Car[CE].Carrera, ';');
            getline(Leer_Car_Est, Texto, ';'); Car[CE].Vencido.Dia = stoi(Texto);
            getline(Leer_Car_Est, Texto, ';'); Car[CE].Vencido.Mes = stoi(Texto);
            getline(Leer_Car_Est, Texto); Car[CE].Vencido.Year = stoi(Texto);
            CE++;
        }
        Leer_Car_Est.close();
    }

}