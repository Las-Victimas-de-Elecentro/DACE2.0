#include "../Main/Header.h"
#ifndef REGISTRO_MATERIAS_H
#define REGISTRO_MATERIAS_H
using namespace std;

struct Pasantias
{
    string Nombre;
    int Edad;
    int Cedula;
    string Password;
    string Carrera;
    int Semestre;
    int Year;
    string Empresa;
    string Justificacion;
    int Estado_Solicitud;
    float Horas;
};

struct Servicio_Comunitario
{
    string Nombre;
    string Apellido;
    int Cedula;
    Nacimiento Fecha;
    string Area;
    int Semestre;
    int Year;
    float Horas_Realizadas;
};

struct Estudiante_Car
{
    long Cedula;
    string Nombre;
    string Apellido;
    bool Pago;
};

struct Carnetizacion
{
    string Lugar;
    string Carrera;
    Nacimiento Fecha;
    float Precio;
    bool Activo;
    Estudiante_Car Est;
};

struct Carnet
{
    string Nombre;
    string Apellido;
    int Cedula;
    string Carrera;
    Nacimiento Vencido;
};

struct Plan_Evaluacion
{
    string Nombre_Profesor;
    int CI_Profesor;
    string Codigo_Materia;
    string Nombre_Materia;
    Nacimiento Fecha;
    string Tema;
    string Estrategia;
    int Ponderacion;
    bool Firmado;
};

struct Asignacion
{
    string Nombre_Profesor;
    string Nombre_Materia;
    string Codigo_Materia;
    string Titulo;
    string Descripcion;
    Nacimiento Fecha_Publicacion;
    Fecha2 Fecha_Entrega;
    string Estado;
};

struct Reportes
{
    string Titulo;
    string Descripcion;
    string Titular;
    string Problema;
    Nacimiento Fecha;
    bool Recibido;
};

struct Solicitudes
{
    string Titulo;
    string Descripcion;
    string Titular;
    string Destinatario;
    Nacimiento Fecha;
    bool Estado;
};

struct Grupos
{
    string Nombre_Profesor;
    string Apellido_Profesor;
    long CI_Profesor;
    string Codigo_Materia;
    string Materia;
    int Miembros;
    int Seccion;
};

struct Estudiante_Mag
{
    long Cedula[D];
    string Nombre[D];
    string Apellido[D];
    bool Pago [D];
};

struct Estudiante_Clase
{
    long Cedula[D];
    string Nombre[D];
    string Apellido[D];
};

struct Clase2
{
    string Dia;
    string Hora_Inicio;
    string Hora_Fin;
    int Aula;
    bool Virtual;
    string Plataforma;
};

struct Clase1
{
    string Dia;
    string Hora_Inicio;
    string Hora_Fin;
    int Aula;
    bool Virtual;
    string Plataforma;
};

struct Clase_Magistral
{
    string Carrera;
    string Nombre_Profesor;
    string Apellido_Profesor;
    long CI_Profesor;
    string Nombre_Clase;
    Nacimiento Fecha;
    int Horas;
    int Aula;
    int Cant_Estudiantes;
    float Precio;
    bool Autorizacion;
    Estudiante_Mag Est_Mag;
};

struct Clase
{
    string Nombre_Profesor;
    string Apellido_Profesor;
    long CI_Profesor;
    string Codigo_Materia;
    string Nombre_Materia;
    string Periodo;
    int Seccion;
    int Cant_Estudiantes;
    string Estado;
    Clase1 Class1;
    Clase2 Class2;
    Estudiante_Clase Est_Class; 
};

struct Bloque_Horario
{
    int ID_Bloque;
    string Dia;
    string Hora_Inicio;
    string Hora_Fin;
};

struct Materias
{
    string Codigo;
    string Nombre;
    int Creditos;
};

struct Informatica
{
    float Matematica_I;
    float Fundamentos_de_la_Informatica;
    float Logica_Matematica;
    float Lenguaje_y_Comunicacion;
    float Ingles_I;
    float Formacion_Constitucional;
    float Economia_Digital;
    float Matematica_II;
    float Fisica_I;
    float Algoritmos_I;
    float Problematica_Cientifica_Tecnologica;
    float Ingles_II;
    float Electiva_I;
    float Arte_y_Cultura;
    float Matematica_III;
    float Fisica_II;
    float Algoritmos_II;
    float Programacion_I;
    float Metodologia_y_Tecnicas_de_Investigacion;
    float Electiva_II;
    float Matematica_IV;
    float Probabilidad_y_Estadistica;
    float Estructuras_Discretas_I;
    float Programacion_II;
    float Base_de_Datos;
    float Electiva_III;
    float Organizacion_del_Computador;
    float Algebra_Booleana;
    float Estructuras_Discretas_II;
    float Programacion_III;
    float Teoria_de_Sistemas;
    float Electiva_IV;
    float Arquitectura_del_Computador;
    float Metodos_Numericos;
    float Investigacion_de_Operaciones;
    float Ingenieria_Economica;
    float Sistemas_de_Informacion_I;
    float Electiva_V;
    float Sistemas_Operativos;
    float Control_de_Proyectos;
    float Gestion_Empresarial;
    float Traductores_e_Interpretes;
    float Sistemas_de_Informacion_II;
    float Redes;
    float Pasantias;
    float Electiva_de_Area_I;
    float Lenguajes_de_Programacion;
    float Sistemas_de_Informacion_III;
    float Sistemas_Distribuidos;
    float Proyecto_de_Grado_I;
    float Electiva_de_Area_II;
    float Electiva_Libre_I;
    float Etica_Profesional;
    float Deportes;
    float Gerencia_de_Proyectos;
    float Proyecto_de_Grado_II;
    float Electiva_de_Area_III;
    float Electiva_Libre_II;
    float Informatica_Educativa;
};

struct Civil 
{
    float Ingles_Tecnico;
    float Tecnicas_de_Estudio_y_Documentacion;
    float Geometria_Descriptiva_I;
    float Calculo_I;
    float Metodos_del_Razonamiento_Logico;
    float Arte_y_Cultura;
    float Calculo_II;
    float Introduccion_a_las_Ciencias_Humanas;
    float Fisica_I;
    float Geometria_Descriptiva_II;
    float Sociedad_Ciencia_y_Tecnologia;
    float Fisica_II;
    float Quimica_Basica;
    float Calculo_III;
    float Mecanica_Racional_I;
    float Deportes;
    float Informatica_para_Ingenieros;
    float Mecanica_Racional_II;
    float Quimica_Aplicada;
    float Topografia;
    float Calculo_IV;
    float Estadistica_para_Ingenieros;
    float Electiva_No_Tecnica;
    float Geologia_Aplicada;
    float Resistencia_de_Materiales;
    float Electiva_No_Tecnica_II;
    float Materiales_y_Ensayos;
    float Mecanica_de_Fluidos_I;
    float Calculo_V;
    float Mecanica_de_Suelos;
    float H_y_San_Ambiental;
    float Teorias_de_Estructuras_I;
    float Dibujo_de_Proyectos;
    float Hidrologia;
    float Mecanica_de_Fluidos_II;
    float Teorias_de_Estructuras_II;
    float Ingenieria_Economica;
    float Instalaciones_para_Edificios;
    float Metodologia_de_la_Investigacion;
    float Acueductos_y_Cloacas;
    float Electiva_Tecnica;
    float Electiva_Tecnica_II;
    float Obras_Hidraulicas;
    float Practica_Profesional;
    float Concreto_Armado;
    float Vias_de_Comunicacion_I;
    float Proyectos_Estructurales_de_Acero;
    float Practica_Comunitaria;
    float Trabajo_Especial_de_Grado_I;
    float Concreto_Pretenzado;
    float Fundaciones_y_Muros;
    float Vias_de_Comunicacion_II;
    float Proyectos_Estructurales_de_Concreto;
    float Trabajo_Especial_de_Grado_II;
    float Administracion_de_Obras;
    float Pavimentos;
    float Puentes;
};

struct Hidrocarburo
{
    float Formacion_Socio_Politica_I;
    float Proyecto_Comunitario_Socio_Energetico_I;
    float Dibujo_Tecnico_y_Descriptiva;
    float Matematica_I;
    float Ingles_Tecnico;
    float Quimica_Inorganica;
    float Orientacion_a_la_Ingenieria_del_Petroleo_y_Gas_Natural;
    float Arte_y_Cultura;
    float Informatica;
    float Matematica_II;
    float Fisica_I;
    float Quimica_Organica;
    float Formacion_Socio_Politica_II;
    float Proyecto_Comunitario_Socio_Energetico_II;
    float Deporte;
    float Formacion_Socio_Politica_III;
    float Proyecto_Comunitario_Socio_Energetico_III;
    float Fisica_II;
    float Geologia_General;
    float Matematica_III;
    float Laboratorio_de_Fisica;
    float Formacion_Socio_Politica_IV;
    float Proyecto_Comunitario_Socio_Energetico_IV;
    float Mecanica_de_las_Rocas_y_de_los_Fluidos;
    float Probabilidades_y_Estadisticas;
    float Termodinamica_General_y_Aplicada;
    float Caracterizacion_Fisica_de_los_Yacimientos;
    float Sistema_de_Compresion_de_Gas;
    float Formacion_Socio_Politica_Legislacion_Petrolera;
    float Proyecto_Socio_Comunitario_Socio_Energetico_V;
    float Perforacion_de_Pozos;
    float Caracterizacion_Energetica_de_los_Yacimientos;
    float Transporte_y_Distribucion_de_Hidrocarburos;
    float Geologia_Estructural;
    float Formacion_Socio_Politica_Integracion_Comercio_Internacional;
    float Proyecto_Comunitario_Socio_Energetico_VI;
    float Seguridad_Industrial;
    float Caracterizacion_Dinamica_de_los_Yacimientos;
    float Perfilaje_de_Pozos;
    float Competacion_de_Pozos;
    float Recuperacion_Secundaria_de_Yacimientos;
    float Proyecto_Comunitario_Socio_Energetico_VII;
    float Geologia_de_Produccion;
    float Ingenieria_de_Produccion_I;
    float Proteccion_Integral_de_Riesgos;
    float Electiva_Profesional_Corrosion_e_Integridad_Mecanica;
    float Evaluacion_y_Auditoria_Ambiental;
    float Transferencia_de_Calor;
    float Procesos_Petroquimicos;
    float Proyecto_Comunitario_Socio_Energetico_VIII;
    float Electiva_Profesional_Gestion_y_Control_de_Calidad;
    float Ingenieria_de_Produccion_II;
    float Simulacion_Numerica_de_Yacimientos;
    float Procesos_de_Refinacion;
    float Trabajo_Especial_de_Grado;
    float Recuperacion_Mejorada;
};

struct Medicina
{
    float Histologia_Embriologia_y_Genetica;
    float Bioetica_I;
    float Medicina_General_I;
    float Deportes_Arte_y_Cultura;
    float Metodologia_de_la_Investigacion_Cientifica;
    float Ingles_Instrumental;
    float Medicina_Preventiva_Comunitaria_y_Familiar_I;
    float Anatomia_Humana;
    float Historia_de_la_Medicina;
    float Antropologia;
    float Microbiologia;
    float Deportes_Arte_y_Cultura_II;
    float Bioquimica;
    float Medicina_General_II;
    float Psicologia_y_Sociologia_Gral;
    float Estadistica_y_Demografia_Medica_II;
    float Fisiologia_y_Biofisica;
    float Informatica;
    float Medicina_Preventiva_Comunitaria_y_Familiar_II;
    float Derecho_Constitucional;
    float Medicina_Preventiva_Comunitaria_y_Familiar_III;
    float Parasitologia;
    float Semiologia_Medico_Quirurgica;
    float Farmacologia;
    float Inteligencia_Etica_Deontologia_Practica_Medica;
    float Fisiopatologia;
    float Nutricion;
    float Psicologia_Medica_General;
    float Medicina_General_III;
    float Psicopatologia;
    float Clinica_Obstetrica_y_Ginecologia_I;
    float Clinica_Quirurgica_I;
    float Clinica_Pediatrica_I;
    float Anatomia_Patologica;
    float Medicina_Preventiva_Comunitaria_y_Familiar_IV;
    float Medicina_General_IV;
    float Clinica_Medica_I;
    float Clinica_Quirurgica_II;
    float Medicina_General_V;
    float Clinica_Pediatrica_II;
    float Medicina_Legal;
    float Medicina_Preventiva_Comunitaria_y_Familiar_V;
    float Clinica_Psiquiatrica;
    float Clinica_Obstetrica_y_Ginecologica_II;
    float Clinica_Medica_II;
    float Internado_Rural;
    float Clinica_Medica_III;
    float Clinica_Quirurgica_III;
    float Clinica_Obstetrica_III;
    float Clinica_Pediatrica_III;
    float Trabajo_de_Grado;
};

struct Odontologia
{
    float Morfologia_Dentaria_y_Oclusion;
    float Formacion_Cultural_y_Artistica;
    float Odontologia_Comunitaria_I;
    float Iniciacion_a_la_Clinica;
    float Morfologia_Humana;
    float Formacion_Instrumental;
    float Bioquimica_Aplicada;
    float Histologia_Embriologia_y_Genetica;
    float Educacion_Fisica_y_Deportes_I;
    float Investigacion_I;
    float Odontologia_Comunitaria_II;
    float Histofisiologia;
    float Clinica_Integral_del_Adulto_I;
    float Biomateriales_Odontologicos;
    float Educacion_Fisica_y_Deportes_II;
    float Investigacion_II;
    float Microbiologia_y_Parasitologia;
    float Formacion_Instrumental_II;
    float Formacion_Cultural_y_Artistica_II;
    float Investigacion_III;
    float Clinica_Integral_del_Adulto_II;
    float Atencion_Integral_de_Niño_I;
    float Odontologia_Comunitaria_III;
    float Medicina_Interna_y_Semiologia;
    float Fisiopatologia;
    float Farmacologia;
    float Investigacion_IV;
    float Clinica_Integral_del_Adulto_III;
    float Odontologia_Comunitaria_IV;
    float Atencion_Integral_de_Niño_II;
    float Investigacion_V;
    float Odontologia_Comunitaria_V;
    float Toxicologia;
    float Gerontologia;
};

struct Veterinaria
{
    float Faenas_Pecuarias;
    float Ingles_Instrumental;
    float Ecologia_Agricola;
    float Analisis_del_Perfil_Profesional;
    float Educacion_Fisica_y_Deportes;
    float Bioquimica;
    float Computacion;
    float Zoologia;
    float Anatomia_de_los_Animales_Domesticos;
    float Histologia_Veterinaria;
    float Arte_y_Cultura;
    float Bioestadistica;
    float Genetica;
    float Fisiologia_Animal;
    float Zootecnia;
    float Microbiologia;
    float Patologia_Clinica_Veterinaria;
    float Farmacologia_Veterinaria;
    float Semiologia_Veterinaria;
    float Nutricion_y_Alimentacion_Animal;
    float Reproduccion_Animal;
    float Parasitologia_Veterinaria;
    float Anatomia_Patologica_Veterinaria;
    float Gerencia_de_Servicio_Veterinaria;
    float Saneamiento_Ambiental;
    float Medicina_de_Rumiantes_y_Equino;
    float Mejoramiento_Animal;
    float Medicina_de_Caninos_y_Felinos;
    float Investigacion_Veterinaria_I;
    float Extension_Profesional_I;
    float Cirugia_Veterinaria;
    float Servicio_Comunitario;
    float Medicina_Preventiva_y_Clinica_Hospitalaria;
    float Extension_Profesional_II;
    float Investigacion_Veterinaria_II;
    float Medicina_Conejo_Peces_Especies_Silvestres_Laboratorio;
    float Legislacion_y_Deontologia_Veterinaria;
    float Proceso_de_Produccion_Ind_e_Inp_San;
    float Derecho_Constitucional;
    float Epidemiologia_General;
    float Medicina_de_Suinos_y_Aves;
    float Pasantias_Profesionales;
    float Invitacion_del_Patrimonio_Cultural;
    float Ortografia_y_Redacción;
    float Musica_Coral;
    float Probabilidad_y_Organizacion_Especial_del_Agro_Venezolano;
};

struct Derecho
{
    float Derecho_Civil_I;
    float Derecho_Constitucional;
    float Pensamiento_Bolivariano;
    float Introduccion_al_Derecho;
    float Economia_Politica;
    float Metodos_de_Investigacion_Juridica;
    float Derecho_Popular;
    float Derecho_Romano;
    float Logica_Juridica;
    float Deontologia_Juridica;
    float Arte_y_Cultura;
    float Deporte;
    float Derecho_Agrario;
    float Derecho_Ambiental;
    float Medicina_Legal;
    float Criminologia;
    float Derecho_Penal_I;
    float Filosofia_del_Derecho;
    float Derecho_Registral;
    float Proyecto_Socio_Juridico_Comunitario_I;
    float Derecho_Civil_II;
    float Practicas_Juridicas_I;
    float Electiva_I;
    float Derecho_Administrativo;
    float Derecho_Penal_II;
    float Derecho_Laboral;
    float Derecho_Familiar;
    float Obligaciones_I;
    float Derecho_Internacional_Publico;
    float Teoria_General_del_Proceso;
    float Derecho_Tributario;
    float Proyecto_Socio_Juridico_II;
    float Practicas_Juridicas_II;
    float Electiva_II;
    float Derecho_Contencioso_Administrativo;
    float Derecho_Procesal_Penal_I;
    float Derecho_Procesal_Laboral_I;
    float Derecho_en_Sucesiones;
    float Obligaciones_II;
    float Derecho_Internacional_Privado;
    float Derecho_Procesal_Civil_I;
    float Derecho_Probatorio_I;
    float Proyecto_Socio_Juridico_III;
    float Practicas_Juridicas_III;
    float Electiva_III;
    float Derecho_Procesal_Penal_II;
    float Obligaciones_III;
    float Derecho_Procesal_Civil_II;
    float Derecho_Mercantil;
    float Derecho_Probatorio_II;
    float Contratos_y_Garantias;
    float Proyecto_Socio_Juridico_IV;
    float Practicas_Juridicas_IV;
    float Electiva_IV;
    float Pasantias;
    float Seminario_Tesina_de_Grado;
};

struct Comunicacion
{
    float Morfosintaxis_del_Castellano;
    float Comunicacion_Social_en_el_Periodismo;
    float Psicologia_de_la_Comunicacion;
    float Estadistica;
    float Deporte_Arte_y_Cultura;
    float Pensamiento_Bolivariano;
    float Periodismo_Informativo;
    float Comunicacion_Social_en_la_Radio;
    float Comunicacion_Social_en_Cine;
    float Comunicacion_Social_en_la_Television;
    float Comunicacion_Social_en_la_Fotografia;
    float Taller_de_Redaccion_y_Estilo_I;
    float Proyecto_Comunitario_Socio_Comunicacional_I;
    float Taller_de_Redaccion_y_Estilo_II;
    float Comunicacion_Grafica;
    float Periodismo_Radiofonico;
    float Lenguaje_y_Planificacion_Cinematografica;
    float Periodismo_Televisivo;
    float Estetica_de_la_Imagen_y_el_Sonido;
    float Teoria_de_la_Comunicacion;
    float Opinion_Publica;
    float Formacion_Sociopolitica;
    float Proyecto_Comunitario_Socio_Comunicacional_II;
    float Etica_y_Legislacion_de_Medios_y_del_Periodismo;
    float Proyecto_Comunitario_Sociocomunicacional_III;
    float Sociologia_de_la_Comunicacion;
    float Investigacion_de_la_Comunicacion;
    float Periodismo_Interpretativo;
    float Periodismo_de_Opinion;
    float Economia_Politica;
    float Produccion_de_Television;
    float Produccion_de_Radio;
    float Produccion_de_Cine;
    float Seminario_de_Formacion_Socio_Critica_I;
    float Proyecto_Comunitario_Sociocomunicacional_IV;
    float Semiologia;
    float Fotoperiodismo;
    float Seminario_de_Formacion_Socio_Critica_II;
    float Periodismo_Cientifico;
    float Montajes_Audiovisuales;
    float Relaciones_Publicas;
    float Proyecto_Comunitario_Sociocomunicacional_V;
    float Tecnologia_de_la_Informacion;
    float Locucion_Basica;
    float Publicidad;
    float Idioma_Moderno;
    float Seminario_de_Formacion_Socio_Critica_III;
    float Periodismo_Economico;
    float Proyecto_Comunitario_Sociocomunicacional_VI;
    float Orientacion_Profesional_I;
    float Gerencia_Corporativa;
    float Mercadeo;
    float Locucion_Profesional;
    float Proyecto_Comunitario_Sociocomunicacional_VII;
    float Periodismo_Politico;
    float Orientacion_Profesional;
    float Vinculación_Profesional_en_el_Campo_Sociocomunicacional;
    float Trabajo_Especial_de_Grado;
};

struct Contaduria
{
    float Matematica_I;
    float Lenguaje_y_Comunicacion;
    float Legislacion_Mercantil;
    float Contabilidad_I;
    float Sociopolitica_Productiva;
    float Metodologia_de_la_Investigacion;
    float Deporte_y_Recreacion;
    float Matematica_II;
    float Contabilidad_II;
    float Ingles;
    float Legislacion_Laboral;
    float Estadistica_I;
    float Introduccion_a_la_Adminstracion;
    float Arte_y_Cultura;
    float Informatica;
    float Calculo_Financiero;
    float Introduccion_a_la_Teoria_Economica;
    float Estadistica_II;
    float Contabilidad_III;
    float Procesos_Administrativos;
    float Contabilidad_of_Costos_I;
    float Practica_Profesional_I;
    float Auditoria_I;
    float Contabilidad_Especializada_I;
    float Finanzas_y_Gestion_Presupuestaria;
    float Administracion_Publica;
    float Sistemas_de_Informacion_Gerencial;
    float Investigacion_de_Operaciones;
    float Auditoria_II;
    float Contabilidad_Especializada_II;
    float Contabilidad_de_Costos_II;
    float Gerencia_de_Proyectos;
    float Habilidades_Gerenciales;
    float Contabilidad_Ambiental;
    float Sistemas_Tributarios_I;
    float Mercadeo;
    float Presupuesto;
    float Contabilidad_de_Costos_III;
    float Seminario_I;
    float Practica_Profesional_II;
    float Sistemas_Tributarios_II;
    float Gestion_de_Talento_Humano;
    float Auditoria_III;
    float Analisis_de_Estados_Financieros;
    float Etica_y_Desarrollo_Profesional;
    float Seminario_II;
    float Tributacion_Aduanera;
    float Tecnicas_de_Negociacion_y_Conciliacion;
    float Avaluos;
    float Instituciones_Financieras;
    float Tesina_de_Grado;
    float Pasantias;
};

struct Economia
{
    float Introduccion_a_la_Economia;
    float Analisis_Matematico_I;
    float Lenguaje_y_Comunicacion;
    float Fundamentos_del_Derecho;
    float Metodologia_de_la_Investigacion;
    float Deporte_y_Recreacion;
    float Ingles_Instrumental;
    float Economia_I;
    float Sociologia;
    float Analisis_Matematico_II;
    float Contabilidad_General_I;
    float Informatica;
    float Arte_y_Cultura;
    float Estadistica_I;
    float Economia_II;
    float Sociopolitica_Productiva;
    float Estadistica_II;
    float Contabilidad_General_II;
    float Introduccion_a_la_Administracion;
    float Historia_y_Doctrina_Economica;
    float Informatica_Aplicada;
    float Macroeconomia_I;
    float Analisis_Financiero;
    float Matematica_III;
    float Microeconomia_I;
    float Teoria_e_Investigacion_de_Mercado;
    float Seminario_I;
    float Estadistica_Aplicada;
    float Macroeconomia_II;
    float Microeconomia_II;
    float Matematica_Financiera;
    float Contabilidad_Social;
    float Desarrollo_Economico;
    float Analisis_Economico_Regional;
    float Economia_Politica;
    float Formulacion_y_Evaluacion_de_Proyectos;
    float Investigacion_de_Operaciones;
    float Teoria_y_Politica_Fiscal;
    float Seminario_II;
    float Economia_y_Politica_Agricola;
    float Economia_Industrial;
    float Economia_Minera_y_Petrolera;
    float Economia_Ambiente_y_Sociedad;
    float Seminario_III;
    float Econometria;
    float Teoria_y_Politica_Monetaria;
    float Planificacion;
    float Economia_Internacional;
    float Formulacion_y_Evaluacion_de_Proyectos_Agricolas;
    float Gestion_Comunitaria;
    float Contabilidad_de_Costos;
    float Presupuesto;
    float Trabajo_Final_de_Grado;
    float Finanzas_Internacionales;
    float Estructura_Economica_Mundial;
    float Gestion_de_Riesgo;
    float Economia_y_Crisis;
};

struct Carreras
{
    Informatica Inf;
    Civil Civ;
    Hidrocarburo Hid;
    Medicina Med;
    Odontologia Odo;
    Veterinaria Vet;
    Derecho Der;
    Comunicacion Com;
    Contaduria Con;
    Economia Eco;
};

#endif