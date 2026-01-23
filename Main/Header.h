#ifndef HEADER_H
#define HEADER_H

// Librerias
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

//Var Global
extern std::string Dibujo;
extern std::string Rol;
extern bool Oscuro;
const int D = 500;

//Var
struct Variables
{
   std::string Car;
   int N;
   int Opc_F;
   int Cod;
   int T;
   int I2;
   int Note;
};

//Registros
#include "../Global/Registro Global.h"
#include "../Academico/Registro Academico.h"
#include "../Estudiante/Registro Estudiante.h"
#include "../Docente/Registro Docente.h"
#include "../Administrativo/Registro Administrativo.h"

//Lenados
#include "../LLenado/Llenado.h"

//Funciones
#include "../Funciones/Funciones.h"

// Datos
#include "../Datos/Menu/Menu.h"
#include "../Datos/Personales/Personales.h"
#include "../Datos/Academico/Academico.h"

// Estudiante
#include "../Estudiante/Academico/Academico Estudiante.h"
#include "../Estudiante/Academico/Materias/Mat.h"

// Docente
#include "../Docente/Academico/Academico Docente.h"

// Inicio
#include "../Inicio/Inicio.h"

// Global
#include "../Global/Principal Global.h"
#include "../Global/Personal/Global.h"
#endif