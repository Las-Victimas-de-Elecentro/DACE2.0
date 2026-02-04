#include "../../Main/Header.h"
#ifndef REGISTRO_SOCIAL_H
#define REGISTRO_SOCIAL_H
using namespace std;

struct Ayuda_Social
{
    string Nombre_Afectado;
    string Razon;
    string Contacto;
};

struct Ayuda_Animal
{
    string Nombre_Animal;
    string Tipo_Animal;
    string Raza;
    string Razon;
    string Contacto;
};

struct Market_Place
{
    string Usuario;
    long Cedula;
    string Contacto;
    string Password;
    string Datos_Bancarios;
    string Area;
    float Boveda;
    float Ingresos;
    float Egresos;
    string Bitacora;
};

struct Comida_MP
{
    string Vendedor;
    long Cedula;
    string Contacto;
    string Datos_Bancarios;
    string Producto;
    int Stock;
    float Precio;
};

struct Articulos_MP
{
    string Vendedor;
    long Cedula;
    string Contacto;
    string Datos_Bancarios;
    string Producto;
    int Stock;
    float Precio;
};

struct Servicios_MP
{
    string Vendedor;
    long Cedula;
    bool Disp;
    float Precio;
    string Contacto;
    string Datos_Bancarios;
    string Producto;
};

struct Reacciones
{
    int Cant_Gusta;
    int Cant_Encanta;
    int Cant_Importa;
    int Cant_Divierte;
    int Cant_Asombra;
    int Cant_Entristece;
    int Cant_Molesta;
};

struct Respuesta
{
    int ID;
    string Autor;
    string Respuesta;
    Nacimiento Fecha;
    Reacciones Reac;
    int Cant_Reac;
    vector<int> Mi_Reaccion; 
    vector<int> CI_Reaccion;
};

struct Comentarios 
{
    int ID;
    string Autor;
    string Comentario;
    Nacimiento Fecha;
    Reacciones Reac;
    int Cant_Reac;
    vector<Respuesta> Resp;
    vector<int> Mi_Reaccion; 
    vector<int> CI_Reaccion;
};

struct Publicaciones
{
    int ID;
    long CI;
    string Imagen;
    string Autor;
    string Normas;
    string Tema;
    string Texto;
    Nacimiento Fecha;
    Reacciones Reac;
    int Cant_Reac;
    vector<Comentarios> Coment;
    int Cant_Coment;
    string Etiqueta[50];
    bool Activo;
    vector<int> Mi_Reaccion; 
    vector<int> CI_Reaccion;
};

struct Amigos
{
    string Nombre_Emisor;
    long CI_Emisor;
    string Nombre_Receptor[D];
    long CI_Receptor[D];
    string Avatar_Receptor[D];
};

struct Novedades
{
    string Hecho;
    Nacimiento Fecha;
    string Responsables;
    string Contexto;
    string Lugar;
};

struct Chatbot
{
    string Preguntas;
    string Respuesta1;
    string Respuesta2;
    string Respuesta3;
    string Respuesta4;
};

#endif