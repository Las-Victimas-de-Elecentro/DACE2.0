#include "../Main/Header.h"
using namespace std;

void Registrar (Variables (&Var), Estudiante (&Est)[D], Profesor (&Prof)[D], Administrativo (&Admin)[D])    
{
    int& N = Var.N;
    int& Opc_F = Var.Opc_F;

    //Personal
    ifstream Verificar_P("Base de datos/Estudiantes/Estudiantes.csv");
    bool Vacio_P = (Verificar_P.peek() == ifstream::traits_type::eof());
    Verificar_P.close();

    ofstream Archivo_P("Base de datos/Estudiantes/Estudiantes.csv", ios::app); 
    if (Archivo_P.is_open()) 
    {
        if (Vacio_P == true) 
        {
            Archivo_P << "Avatar;Nombre;Segundo Nombre;Apellido;Segundo Apellido;Cedula;Dia;Mes;Year;Dirección;Telefono;Genero;Parroquia;Etnia;Correo;Password;Carrera;Semestre;Año;UC Aprobadas;Oscuro;Pasantias;Comunitario;Amigos" << endl;
        }

        Archivo_P << Est[N].Avatar << ";";
        Archivo_P << Est[N].Nombre << ";";
        Archivo_P << Est[N].Nombre2 << ";";
        Archivo_P << Est[N].Apellido << ";";
        Archivo_P << Est[N].Apellido2 << ";";
        Archivo_P << Est[N].Cedula << ";";
        Archivo_P << Est[N].Fecha.Dia << ";";
        Archivo_P << Est[N].Fecha.Mes << ";";
        Archivo_P << Est[N].Fecha.Year << ";";
        Archivo_P << Est[N].Direccion << ";";
        Archivo_P << Est[N].Telefono << ";";
        Archivo_P << Est[N].Genero << ";";
        Archivo_P << Est[N].Parroquia << ";";
        Archivo_P << Est[N].Etnia << ";";
        Archivo_P << Est[N].Correo << ";";
        Archivo_P << Est[N].Password << ";";
        Archivo_P << Est[N].Carrera << ";";
        Archivo_P << Est[N].Semestre << ";";
        Archivo_P << Est[N].Year << ";";
        Archivo_P << Est[N].UC_Aprobadas << ";";
        Archivo_P << Est[N].Oscuro << ";";
        Archivo_P << Est[N].Pasantias << ";";
        Archivo_P << Est[N].Comunitario << ";";
        Archivo_P << Est[N].Amigos << endl; 
        
        Archivo_P.close();
    }

    //Salud
    ifstream Verificar_S("Base de datos/Estudiantes/Salud.csv");
    bool Vacio_S = (Verificar_S.peek() == ifstream::traits_type::eof());
    Verificar_S.close();

    ofstream Archivo_S("Base de datos/Estudiantes/Salud.csv", ios::app);
    if (Archivo_S.is_open())
    {
        if (Vacio_S == true)
        {
            Archivo_S << "Cedula;Nombre;Apellido;Transmisibles;Cronicas;Neurologicas;Neoplasias;Autoinmunes;Transtornos;Lesiones;Congenitas;Metabolicos;Ocupacionales" << endl;
        }

        Archivo_S << Est[N].Cedula << ";";
        Archivo_S << Est[N].Nombre << ";";
        Archivo_S << Est[N].Apellido << ";";
        Archivo_S << "" << ";";
        Archivo_S << "" << ";";
        Archivo_S << "" << ";";
        Archivo_S << "" << ";";
        Archivo_S << "" << ";";
        Archivo_S << "" << ";";
        Archivo_S << "" << ";";
        Archivo_S << "" << ";";
        Archivo_S << "" << ";";
        Archivo_S << "" << endl;
        
        Archivo_S.close();
    }
}