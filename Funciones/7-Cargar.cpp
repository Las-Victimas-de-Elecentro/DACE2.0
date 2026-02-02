#include "../Main/Header.h"
using namespace std;

void Cargar (Variables (&Var), Estudiante (&Est)[D], Plan_Evaluacion (&Plan)[D], Reportes (&Rep)[D], Asignacion (&Asig)[D], Clase_Magistral (&Mag)[D], Solicitudes (&Soli)[D], Grupos (&Gru)[D], Clase (&Class)[D], Materias (&Mat)[527], Profesor (&Prof)[D], Administrativo (&Admin)[D], Carnet (&Car)[D], Carnetizacion (&Carn)[D], Pasantias (&Pas)[D], Servicio_Comunitario (&SerC)[D], Market_Place (&MP)[D], Comida_MP (&C_MP)[D], Articulos_MP (&A_MP)[D], Servicios_MP (&S_MP)[D], Amigos (&Amig)[D], Publicaciones (&Publi)[D], Empleado (&Emp)[D], Inscrito (&Ins)[D], Novedades (&Nov)[D])
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
            getline(Personal_Est, Texto, ';'); Est[I].UC_Aprobadas = stoi(Texto);
            getline(Personal_Est, Texto, ';'); Est[I].Oscuro = stoi(Texto);
            getline(Personal_Est, Texto, ';'); Est[I].Pasantias = stoi(Texto);
            getline(Personal_Est, Texto, ';'); Est[I].Comunitario = stoi(Texto);
            getline(Personal_Est, Texto); Est[I].Amigos = stoi(Texto);
            
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

    ifstream Archivo_P("Base de datos/Estudiantes/Pasantias.csv");
    if (Archivo_P.is_open())
    {
        int I = 0;
        getline(Archivo_P, Texto);
        while (I < D && getline(Archivo_P, Pas[I].Nombre, ';')) 
        {
            getline(Archivo_P, Texto, ';'); Pas[I].Edad = stoi(Texto);
            getline(Archivo_P, Texto, ';'); Pas[I].Cedula = stol(Texto);
            getline(Archivo_P, Pas[I].Password, ';');
            getline(Archivo_P, Pas[I].Carrera, ';');
            getline(Archivo_P, Texto, ';'); Pas[I].Semestre = stoi(Texto);
            getline(Archivo_P, Texto, ';'); Pas[I].Year = stoi(Texto);
            getline(Archivo_P, Pas[I].Empresa, ';');
            getline(Archivo_P, Pas[I].Justificacion, ';');
            getline(Archivo_P, Texto, ';'); Pas[I].Estado_Solicitud = stoi(Texto);
            getline(Archivo_P, Texto); Pas[I].Horas = stof(Texto);
            I++;
        }
        Archivo_P.close();
    }

    ifstream Archivo_S("Base de datos/Estudiantes/Servicio.csv");
    if (Archivo_S.is_open())
    {
        int I = 0;
        getline(Archivo_S, Texto);
        while (I < D && getline(Archivo_S, SerC[I].Nombre, ';'))
        {
            getline(Archivo_S, SerC[I].Apellido, ';');
            getline(Archivo_S, Texto, ';'); SerC[I].Cedula = stol(Texto);
            getline(Archivo_S, Texto, ';'); SerC[I].Fecha.Dia = stoi(Texto);
            getline(Archivo_S, Texto, ';'); SerC[I].Fecha.Mes = stoi(Texto);
            getline(Archivo_S, Texto, ';'); SerC[I].Fecha.Year = stoi(Texto);
            getline(Archivo_S, SerC[I].Area, ';');
            getline(Archivo_S, Texto, ';'); SerC[I].Semestre = stoi(Texto);
            getline(Archivo_S, Texto, ';'); SerC[I].Year = stoi(Texto);
            getline(Archivo_S, Texto); SerC[I].Horas_Realizadas = stof(Texto);
            I++;
        }
        Archivo_S.close();
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
        int P = 0;
        getline(Leer_Plan, Texto);
        while (P < D && getline(Leer_Plan, Plan[P].Nombre_Profesor, ';')) 
        {
            getline(Leer_Plan, Texto, ';'); 
            Plan[P].CI_Profesor = stoi(Texto);
            getline(Leer_Plan, Plan[P].Codigo_Materia, ';');
            getline(Leer_Plan, Plan[P].Nombre_Materia, ';');
            getline(Leer_Plan, Texto, ';'); Plan[P].Fecha.Dia = stoi(Texto);
            getline(Leer_Plan, Texto, ';'); Plan[P].Fecha.Mes = stoi(Texto);
            getline(Leer_Plan, Texto, ';'); Plan[P].Fecha.Year = stoi(Texto);
            getline(Leer_Plan, Plan[P].Tema, ';');
            getline(Leer_Plan, Plan[P].Estrategia, ';');
            getline(Leer_Plan, Texto, ';'); 
            Plan[P].Ponderacion = stoi(Texto);
            getline(Leer_Plan, Texto);
            Plan[P].Firmado = (Texto.find('1') != string::npos);
            P++;
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

    ifstream Mark("Base de datos/Marketplaces/Cuentas.csv");
    if (Mark.is_open())
    {
        int MA = 0;
        getline(Mark, Texto); 
        
        while (MA < D && getline(Mark, MP[MA].Usuario, ';'))
        {
            getline(Mark, Texto, ';'); MP[MA].Cedula = stol(Texto);
            getline(Mark, MP[MA].Contacto, ';');
            getline(Mark, MP[MA].Password, ';');
            getline(Mark, MP[MA].Datos_Bancarios, ';');
            getline(Mark, MP[MA].Area, ';');
            getline(Mark, Texto, ';'); MP[MA].Boveda = stof(Texto);
            getline(Mark, Texto, ';'); MP[MA].Ingresos = stof(Texto);
            getline(Mark, Texto, ';'); MP[MA].Egresos = stof(Texto);
            getline(Mark, MP[MA].Bitacora); 
            
            MA++;
        }
        Mark.close();
    }

    ifstream Mark_C("Base de datos/Marketplaces/Comida.csv");
    if (Mark_C.is_open())
    {
        int MA = 0;
        getline(Mark_C, Texto); 
        while (MA < D && getline(Mark_C, C_MP[MA].Vendedor, ';'))
        {
            getline(Mark_C, Texto, ';'); C_MP[MA].Cedula = stol(Texto);
            getline(Mark_C, C_MP[MA].Contacto, ';');
            getline(Mark_C, C_MP[MA].Datos_Bancarios, ';');
            getline(Mark_C, C_MP[MA].Producto, ';');
            getline(Mark_C, Texto, ';'); C_MP[MA].Stock = stoi(Texto);
            getline(Mark_C, Texto); C_MP[MA].Precio = stof(Texto);
            MA++;
        }
        Mark_C.close();
    }

    ifstream Mark_A("Base de datos/Marketplaces/Articulos.csv");
    if (Mark_A.is_open())
    {
        int MA = 0;
        getline(Mark_A, Texto); 
        while (MA < D && getline(Mark_A, A_MP[MA].Vendedor, ';'))
        {
            getline(Mark_A, Texto, ';'); A_MP[MA].Cedula = stol(Texto);
            getline(Mark_A, A_MP[MA].Contacto, ';');
            getline(Mark_A, A_MP[MA].Datos_Bancarios, ';');
            getline(Mark_A, A_MP[MA].Producto, ';');
            getline(Mark_A, Texto, ';'); A_MP[MA].Stock = stoi(Texto);
            getline(Mark_A, Texto); A_MP[MA].Precio = stof(Texto);
            MA++;
        }
        Mark_A.close();
    }

    ifstream Mark_S("Base de datos/Marketplaces/Servicios.csv");
    if (Mark_S.is_open())
    {
        int MA = 0;
        getline(Mark_S, Texto); 
        while (MA < D && getline(Mark_S, S_MP[MA].Vendedor, ';'))
        {
            getline(Mark_S, Texto, ';'); S_MP[MA].Cedula = stol(Texto);
            getline(Mark_S, Texto, ';'); S_MP[MA].Disp = stoi(Texto);
            getline(Mark_S, Texto, ';'); S_MP[MA].Precio = stof(Texto);
            getline(Mark_S, S_MP[MA].Contacto, ';');
            getline(Mark_S, S_MP[MA].Datos_Bancarios, ';');
            getline(Mark_S, S_MP[MA].Producto); 
            MA++;
        }
        Mark_S.close();
    }

    // Social

    ifstream Archivo("Base de datos/Social/Amigos.csv");

    if (Archivo.is_open())
    {

        getline(Archivo, Texto);

        int i = 0;
        while (i < D && getline(Archivo, Amig[i].Nombre_Emisor, ';'))
        {

            getline(Archivo, Texto, ';');
            if (Texto != "")
            {

                Amig[i].CI_Emisor = stol(Texto);
            }

            getline(Archivo, Texto, ';');
            stringstream ss_nom(Texto);
            string item_nom;
            int j_nom = 0;
            while (getline(ss_nom, item_nom, '|') && j_nom < D)
            {

                Amig[i].Nombre_Receptor[j_nom] = item_nom;
                j_nom++;
            }

            getline(Archivo, Texto, ';');
            stringstream ss_ci(Texto);
            string item_ci;
            int j_ci = 0;
            while (getline(ss_ci, item_ci, '|') && j_ci < D)
            {

                if (item_ci != "")
                {

                    Amig[i].CI_Receptor[j_ci] = stol(item_ci);
                }
                j_ci++;
            }

            getline(Archivo, Texto);
            stringstream ss_av(Texto);
            string item_av;
            int j_av = 0;
            while (getline(ss_av, item_av, '|') && j_av < D)
            {

                Amig[i].Avatar_Receptor[j_av] = item_av;
                j_av++;
            }

            i++;
        }
        Archivo.close();
    }

    ifstream Arch_Pub("Base de datos/Social/Publicaciones.csv");

    if (Arch_Pub.is_open())
    {

        int I = 0;
        getline(Arch_Pub, Texto);
        while (I < D && getline(Arch_Pub, Texto, ';'))
        {

            Publi[I].ID = stoi(Texto);
            getline(Arch_Pub, Texto, ';'); Publi[I].CI = stol(Texto);
            getline(Arch_Pub, Publi[I].Imagen, ';'); 
            getline(Arch_Pub, Publi[I].Autor, ';');
            getline(Arch_Pub, Publi[I].Normas, ';');
            getline(Arch_Pub, Publi[I].Tema, ';');
            getline(Arch_Pub, Publi[I].Texto, ';');
            getline(Arch_Pub, Texto, ';'); Publi[I].Fecha.Dia = stoi(Texto);
            getline(Arch_Pub, Texto, ';'); Publi[I].Fecha.Mes = stoi(Texto);
            getline(Arch_Pub, Texto, ';'); Publi[I].Fecha.Year = stoi(Texto);
            getline(Arch_Pub, Texto, ';'); Publi[I].Reac.Cant_Gusta = stoi(Texto);
            getline(Arch_Pub, Texto, ';'); Publi[I].Reac.Cant_Encanta = stoi(Texto);
            getline(Arch_Pub, Texto, ';'); Publi[I].Reac.Cant_Importa = stoi(Texto);
            getline(Arch_Pub, Texto, ';'); Publi[I].Reac.Cant_Divierte = stoi(Texto);
            getline(Arch_Pub, Texto, ';'); Publi[I].Reac.Cant_Asombra = stoi(Texto);
            getline(Arch_Pub, Texto, ';'); Publi[I].Reac.Cant_Entristece = stoi(Texto);
            getline(Arch_Pub, Texto, ';'); Publi[I].Reac.Cant_Molesta = stoi(Texto);
            getline(Arch_Pub, Texto, ';'); Publi[I].Cant_Reac = stoi(Texto);
            getline(Arch_Pub, Texto, ';'); Publi[I].Cant_Coment = stoi(Texto);
            getline(Arch_Pub, Texto, ';'); Publi[I].Activo = stoi(Texto);

            getline(Arch_Pub, Texto, ';');
            stringstream sse(Texto); string et; int e_idx = 0;
            while(sse >> et && e_idx < 50) { Publi[I].Etiqueta[e_idx++] = et; }
            getline(Arch_Pub, Texto, ';');
            stringstream ssr(Texto); int r; Publi[I].Mi_Reaccion.clear();
            while(ssr >> r) { Publi[I].Mi_Reaccion.push_back(r); }
            getline(Arch_Pub, Texto);
            stringstream ssc(Texto); long c; Publi[I].CI_Reaccion.clear();
            while(ssc >> c) { Publi[I].CI_Reaccion.push_back(c); }
            I++;
        }
        Arch_Pub.close();
    }

    ifstream Arch_Com("Base de datos/Social/Comentarios.csv");
    if (Arch_Com.is_open())
    {

        getline(Arch_Com, Texto);
        while (getline(Arch_Com, Texto, ';'))
        {

            int id_p = stoi(Texto); Comentarios aux_c;
            getline(Arch_Com, Texto, ';'); aux_c.ID = stoi(Texto);
            getline(Arch_Com, aux_c.Autor, ';');
            getline(Arch_Com, aux_c.Comentario, ';');
            getline(Arch_Com, Texto, ';'); aux_c.Fecha.Dia = stoi(Texto);
            getline(Arch_Com, Texto, ';'); aux_c.Fecha.Mes = stoi(Texto);
            getline(Arch_Com, Texto, ';'); aux_c.Fecha.Year = stoi(Texto);
            getline(Arch_Com, Texto, ';'); aux_c.Reac.Cant_Gusta = stoi(Texto);
            getline(Arch_Com, Texto, ';'); aux_c.Reac.Cant_Encanta = stoi(Texto);
            getline(Arch_Com, Texto, ';'); aux_c.Reac.Cant_Importa = stoi(Texto);
            getline(Arch_Com, Texto, ';'); aux_c.Reac.Cant_Divierte = stoi(Texto);
            getline(Arch_Com, Texto, ';'); aux_c.Reac.Cant_Asombra = stoi(Texto);
            getline(Arch_Com, Texto, ';'); aux_c.Reac.Cant_Entristece = stoi(Texto);
            getline(Arch_Com, Texto, ';'); aux_c.Reac.Cant_Molesta = stoi(Texto);
            getline(Arch_Com, Texto, ';'); aux_c.Cant_Reac = stoi(Texto);
            getline(Arch_Com, Texto, ';');
            stringstream ssr_c(Texto); int r; aux_c.Mi_Reaccion.clear();
            while(ssr_c >> r) { aux_c.Mi_Reaccion.push_back(r); }
            getline(Arch_Com, Texto);
            stringstream ssc_c(Texto); long c; aux_c.CI_Reaccion.clear();
            while(ssc_c >> c) { aux_c.CI_Reaccion.push_back(c); }

            for(int i = 0; i < D; i++)
            {

                if(Publi[i].ID == id_p && Publi[i].Activo) { Publi[i].Coment.push_back(aux_c); break; }
            }
        }
        Arch_Com.close();
    }

    ifstream Arch_Res("Base de datos/Social/Respuestas.csv");
    if (Arch_Res.is_open())
    {

        getline(Arch_Res, Texto);
        while (getline(Arch_Res, Texto, ';'))
        {

            int id_c = stoi(Texto); Respuesta aux_r;
            getline(Arch_Res, aux_r.Autor, ';');
            getline(Arch_Res, aux_r.Respuesta, ';');
            getline(Arch_Res, Texto, ';'); aux_r.Fecha.Dia = stoi(Texto);
            getline(Arch_Res, Texto, ';'); aux_r.Fecha.Mes = stoi(Texto);
            getline(Arch_Res, Texto, ';'); aux_r.Fecha.Year = stoi(Texto);
            getline(Arch_Res, Texto, ';'); aux_r.Reac.Cant_Gusta = stoi(Texto);
            getline(Arch_Res, Texto, ';'); aux_r.Reac.Cant_Encanta = stoi(Texto);
            getline(Arch_Res, Texto, ';'); aux_r.Reac.Cant_Importa = stoi(Texto);
            getline(Arch_Res, Texto, ';'); aux_r.Reac.Cant_Divierte = stoi(Texto);
            getline(Arch_Res, Texto, ';'); aux_r.Reac.Cant_Asombra = stoi(Texto);
            getline(Arch_Res, Texto, ';'); aux_r.Reac.Cant_Entristece = stoi(Texto);
            getline(Arch_Res, Texto, ';'); aux_r.Reac.Cant_Molesta = stoi(Texto);
            getline(Arch_Res, Texto, ';'); aux_r.Cant_Reac = stoi(Texto);
            getline(Arch_Res, Texto, ';');
            stringstream ssr_r(Texto); int r; aux_r.Mi_Reaccion.clear();
            while(ssr_r >> r) { aux_r.Mi_Reaccion.push_back(r); }
            getline(Arch_Res, Texto);
            stringstream ssc_r(Texto); long c; aux_r.CI_Reaccion.clear();
            while(ssc_r >> c) { aux_r.CI_Reaccion.push_back(c); }

            for(int i = 0; i < D; i++)
            {

                for(size_t j = 0; j < Publi[i].Coment.size(); j++)
                {

                    if(Publi[i].Coment[j].ID == id_c) { Publi[i].Coment[j].Resp.push_back(aux_r); }
                }
            }
        }
        Arch_Res.close();
    }

    ifstream LeerEmp("Base de datos/Solicitudes/Empleados.csv");
    if (LeerEmp.is_open())
    {
        int E = 0;
        getline(LeerEmp, Texto);

        while (E < D && getline(LeerEmp, Emp[E].Nombre, ';'))
        {
            getline(LeerEmp, Emp[E].Apellido, ';');
            getline(LeerEmp, Texto, ';'); Emp[E].Cedula = stol(Texto);
            getline(LeerEmp, Texto, ';'); Emp[E].Fecha.Dia = stoi(Texto);
            getline(LeerEmp, Texto, ';'); Emp[E].Fecha.Mes = stoi(Texto);
            getline(LeerEmp, Texto, ';'); Emp[E].Fecha.Year = stoi(Texto);
            getline(LeerEmp, Emp[E].Correo, ';');
            getline(LeerEmp, Emp[E].Experiencia, ';');
            getline(LeerEmp, Emp[E].Descripcion, ';');

            for (int i = 0; i < 20; i++)
            {
                getline(LeerEmp, Emp[E].Titulo[i], ';');
            }

            getline(LeerEmp, Texto, ';'); Emp[E].Aprobado = stoi(Texto);
            getline(LeerEmp, Texto); Emp[E].Trabajando = stoi(Texto);

            E++;
        }
        LeerEmp.close();
    }

    ifstream LeerIns("Base de datos/Solicitudes/Inscritos.csv");
    if (LeerIns.is_open())
    {
        int I = 0;
        getline(LeerIns, Texto);

        while (I < D && getline(LeerIns, Ins[I].Nombre, ';'))
        {
            getline(LeerIns, Ins[I].Apellido, ';');
            getline(LeerIns, Texto, ';'); Ins[I].Cedula = stol(Texto);
            getline(LeerIns, Texto, ';'); Ins[I].Fecha.Dia = stoi(Texto);
            getline(LeerIns, Texto, ';'); Ins[I].Fecha.Mes = stoi(Texto);
            getline(LeerIns, Texto, ';'); Ins[I].Fecha.Year = stoi(Texto);
            getline(LeerIns, Ins[I].Correo, ';');
            getline(LeerIns, Ins[I].Carrera, ';');
            getline(LeerIns, Texto, ';'); Ins[I].Semestre = stoi(Texto);
            getline(LeerIns, Texto, ';'); Ins[I].Year = stoi(Texto);
            getline(LeerIns, Texto, ';'); Ins[I].Aprobado = stoi(Texto);
            getline(LeerIns, Texto); Ins[I].Estudiando = stoi(Texto);

            I++;
        }
        LeerIns.close();
    }

    ifstream LeerNov("Base de datos/Administrativos/Novedades.csv");
    if (LeerNov.is_open())
    {
        int I = 0;
        getline(LeerNov, Texto); 

        while (I < D && getline(LeerNov, Nov[I].Hecho, ';'))
        {
            getline(LeerNov, Texto, ';'); Nov[I].Fecha.Dia = stoi(Texto);
            getline(LeerNov, Texto, ';'); Nov[I].Fecha.Mes = stoi(Texto);
            getline(LeerNov, Texto, ';'); Nov[I].Fecha.Year = stoi(Texto);
            getline(LeerNov, Nov[I].Responsables, ';');
            getline(LeerNov, Nov[I].Contexto, ';');
            getline(LeerNov, Nov[I].Lugar); 

            I++;
        }
        LeerNov.close();
    }

}