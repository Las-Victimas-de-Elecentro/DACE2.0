#ifndef HEADER_H
#define HEADER_H

//Librerias
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
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
   int Av;
   int I2;
   int Note;
   int Img;
   std::string Rol_G;

   bool Comunitario;
};

//Registros
#include "../Global/Registro Global.h"
#include "../Global/Academico/Registro Academico.h"
#include "../Estudiante/Registro Estudiante.h"
#include "../Docente/Registro Docente.h"
#include "../Administrativo/Registro Administrativo.h"
#include "../Global/Social/Registro Social.h"
#include "../Global/Extracurricular/Registro Extracurricular.h"

//Lenados
#include "../Llenado/Llenado.h"

//Funciones
#include "../Funciones/Funciones.h"
#include "../Funciones/Guardados/Guardados.h"

//Datos
#include "../Datos/Menu/Menu.h"
#include "../Datos/Personales/Personales.h"
#include "../Datos/Academico/Academico.h"
#include "../Datos/Social/Social.h"

//Estudiante
#include "../Estudiante/Academico/Academico Estudiante.h"
#include "../Estudiante/Academico/Materias/Mat.h"
#include "../Global/Personal/Historial/Historial.h"
#include "../Estudiante/Social/Social Estudiantil.h"

//Docente
#include "../Docente/Academico/Academico Docente.h"

//Administrativo
#include "../Administrativo/Gestion/Gestion.h"

//Extracurricular
#include "../Global/Extracurricular/Extracurricular.h"

//Inicio
#include "../Inicio/Inicio.h"

//Global
#include "../Global/Principal Global.h"
#include "../Global/Personal/Global.h"
#include "../Global/Social/Social Global.h"

#endif