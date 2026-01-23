#include "../Main/Header.h"
using namespace std;

void Guardar_Ins (Clase (&Class)[D], Estudiante (&Est)[D], Clase_Magistral (&Mag)[D])
{
    int Cont = 1; 

    for (int I = 0; I < D; I++)
    {
        if (Class[I].Nombre_Materia != "")
        {
            string NombreArchivo = "Base de datos/Clases/Clase" + to_string(Cont) + ".csv";
            ofstream Archivo_Clase(NombreArchivo);

            if (Archivo_Clase.is_open())
            {
                Archivo_Clase << "Cedula;Nombre;Apellido" << endl;

                for (int J = 0; J < 50; J++)
                {
                    if (Class[I].Est_Class.Nombre[J] != "")
                    {
                        Archivo_Clase << Class[I].Est_Class.Cedula[J] << ";";
                        Archivo_Clase << Class[I].Est_Class.Nombre[J] << ";";
                        Archivo_Clase << Class[I].Est_Class.Apellido[J] << endl;
                    }
                }
                Archivo_Clase.close();
                Cont++;
            }
        }
    }

    int Cont_M = 1;
    for (int I = 0; I < D; I++)
    {
        if (Mag[I].Nombre_Clase != "")
        {
            string Nom_Archivo_Mag = "Base de datos/Clases Magistrales/Magistral" + to_string(Cont_M) + ".csv";
            ofstream Archivo_Mag(Nom_Archivo_Mag);

            if (Archivo_Mag.is_open())
            {
                Archivo_Mag << "Cedula;Nombre;Apellido;Pago" << endl;

                for (int J = 0; J < D; J++)
                {
                    if (Mag[I].Est_Mag.Nombre[J] != "")
                    {
                        Archivo_Mag << Mag[I].Est_Mag.Cedula[J] << ";";
                        Archivo_Mag << Mag[I].Est_Mag.Nombre[J] << ";";
                        Archivo_Mag << Mag[I].Est_Mag.Apellido[J] << ";";
                        Archivo_Mag << Mag[I].Est_Mag.Pago[J] << endl;
                    }
                }
                Archivo_Mag.close();
                Cont_M++;
            }
        }
    }

    ofstream Clase("Base de datos/Docentes/Clases.csv");
    if (Clase.is_open())
    {
        Clase << "Nombre;Apellido;Cedula;Codigo;Materia;Periodo;Sección;Estudiantes;Estado;Dia1;Hora Inicio1;Hora Fin1;Aula1;Virtual1;Plataforma1;Dia2;Hora Inicio2;Hora Fin2;Aula2;Virtual2;Plataforma2" << endl;
        int C = 0;
        while (C < D)
        {
            if (Class[C].Nombre_Materia != "")
            {
                Clase << Class[C].Nombre_Profesor << ";";
                Clase << Class[C].Apellido_Profesor << ";";
                Clase << Class[C].CI_Profesor << ";";
                Clase << Class[C].Codigo_Materia << ";";
                Clase << Class[C].Nombre_Materia << ";";
                Clase << Class[C].Periodo << ";";
                Clase << Class[C].Seccion << ";";
                Clase << Class[C].Cant_Estudiantes << ";";
                Clase << Class[C].Estado << ";";
                Clase << Class[C].Class1.Dia << ";";
                Clase << Class[C].Class1.Hora_Inicio << ";";
                Clase << Class[C].Class1.Hora_Fin << ";";
                Clase << Class[C].Class1.Aula << ";";
                Clase << Class[C].Class1.Virtual << ";";
                Clase << Class[C].Class1.Plataforma << ";";
                Clase << Class[C].Class2.Dia << ";";
                Clase << Class[C].Class2.Hora_Inicio << ";";
                Clase << Class[C].Class2.Hora_Fin << ";";
                Clase << Class[C].Class2.Aula << ";";
                Clase << Class[C].Class2.Virtual << ";";
                Clase << Class[C].Class2.Plataforma << endl;
            }
            C++;
        }
        Clase.close();
    }

    ofstream Materia("Base de datos/Estudiantes/Materias.csv");
    if (Materia.is_open())
    {
        Materia << "Cedula;Nombre;Apellido;Materias;Cantidad" << endl;
        int M = 0;
        while (M < D)
        {
            if (Est[M].Nombre != "")
            {
                Materia << Est[M].Cedula << ";";
                Materia << Est[M].Nombre << ";";
                Materia << Est[M].Apellido << ";";
                Materia << Est[M].Materias << ";";
                Materia << Est[M].Cant_Mat << endl;
            }
            M++;
        }
        Materia.close();
    }

    ofstream Magistrales_Est("Base de datos/Estudiantes/Magistrales.csv");
    if (Magistrales_Est.is_open())
    {
        Magistrales_Est << "Cedula;Nombre;Apellido;Magistrales;Cantidad" << endl;
        int MA = 0;
        while (MA < D)
        {
            if (Est[MA].Nombre != "")
            {
                Magistrales_Est << Est[MA].Cedula << ";";
                Magistrales_Est << Est[MA].Nombre << ";";
                Magistrales_Est << Est[MA].Apellido << ";";
                Magistrales_Est << Est[MA].Magistral << ";";
                Magistrales_Est << Est[MA].Cant_Mag << endl;
            }
            MA++;
        }
        Magistrales_Est.close();
    }
}