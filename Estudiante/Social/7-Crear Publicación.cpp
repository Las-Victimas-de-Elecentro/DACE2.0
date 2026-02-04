#include "../../Main/Header.h"
using namespace std;

void Crear_Publicacion (Variables &Var, Estudiante (&Est)[D], Publicaciones (&Publi)[D]) 
{
    bool R, R2, R_Img;
    int& N = Var.N; 
    int& Opc_F = Var.Opc_F;
    int& Img = Var.Img; 
    int I = 0, J = 0, P = -1, Opc_Img = 0;

    for (I = 0; I < D; I++) 
    {
        if (Publi[I].Activo == 0) 
        {
            P = I;
            break;
        }
    }

    if (P == -1) 
    {
        Limpiar();
        Dibujo = "Public"; Art();
        cout << RED << "No hay espacio para más publicaciones." << RESET << endl;
        Continuar();
        return;
    }

    do 
    {
        Limpiar();
        Dibujo = "Public"; Art();
        cout << CYAN << "Creación de Publicaciones" << RESET << endl;

        cout << "Ingrese fecha de publicación" << endl;
        cout << "Ingrese Dia: ";
        Publi[P].Fecha.Dia = Dia_User();

        Limpiar();
        Dibujo = "Public"; Art();
        cout << "Ingrese Mes: ";
        Publi[P].Fecha.Mes = Mes_User();

        Limpiar();
        Dibujo = "Public"; Art();
        cout << "Ingrese Año: ";
        Publi[P].Fecha.Year = Year_User();

        Limpiar();
        Dibujo = "Public"; Art();
        cout << "Ingrese la temática: ";
        Publi[P].Tema = Contenido();

        Limpiar();
        Dibujo = "Public"; Art();
        cout << "Ingrese las normas: ";
        Publi[P].Normas = Contenido();

        Limpiar();
        Dibujo = "Public"; Art();
        cout << "Ingrese el contenido: ";
        Publi[P].Texto = Contenido();

        for (J = 0; J < 50; J++) 
        {
            Limpiar();
            Dibujo = "Public"; Art();
            cout << "Ingrese la etiqueta: ";
            Publi[P].Etiqueta[J] = Etiqueta(); 
            
            cout << "¿Desea ingresar otra etiqueta? Ingrese: 1: Si / 0: No : ";
            R2 = Opc_Bool();

            if (R2 == 0) 
            {
                break; 
            }
        }

        Limpiar();
        Dibujo = "Public"; Art();
        cout << "¿Desea ingresar una imagen a su publicacion? Ingrese: 1: Si / 0: No: ";
        R_Img = Opc_Bool();

        if (R_Img == 1) 
        {
            Limpiar();
            Dibujo = "Public"; Art();
            cout << "Seleccione una imagen" << endl;
            cout << "1: Trollface" << endl;
            cout << "2: Among Us" << endl;
            cout << "3: Chill de Cojones" << endl;
            cout << "4: Shrek" << endl;
            cout << "5: Gato Pitufo" << endl;
            cout << "6: Mr. Increible" << endl;
            cout << "7: Spiderman" << endl;
            cout << "8: Sigma" << endl;
            cout << "9: Megamente" << endl;
            cout << "10: Freddy Fazbear" << endl;
            cout << "Ingrese: ";
            Opc_F = 10;
            Opc_Img = Opc_Menu(Opc_F);

            switch (Opc_Img) 
            {
                case 1:
                    Publi[P].Imagen = "Trollface"; 
                    break;
                case 2:
                    Publi[P].Imagen = "Among Us"; 
                    break;
                case 3:
                    Publi[P].Imagen = "Chill de Cojones"; 
                    break;
                case 4:
                    Publi[P].Imagen = "Shrek"; 
                    break;
                case 5:
                    Publi[P].Imagen = "Gato Pitufo"; 
                    break;
                case 6:
                    Publi[P].Imagen = "Mr. Increible"; 
                    break;
                case 7:
                    Publi[P].Imagen = "Spiderman"; 
                    break;
                case 8:
                    Publi[P].Imagen = "Sigma"; 
                    break;
                case 9:
                    Publi[P].Imagen = "Megamente"; 
                    break;
                case 10:
                    Publi[P].Imagen = "Freddy Fazbear"; 
                    break;
            }
        }
        else
        {
            Publi[P].Imagen = "Ninguna";
        }

        
        Img = P; 
        Limpiar();
        Imagen(Var, Publi);

        cout << CYAN << "Resumen de la Publicación" << RESET << endl;
        cout << "Fecha: " << Publi[P].Fecha.Dia << "/" << Publi[P].Fecha.Mes << "/" << Publi[P].Fecha.Year << endl;
        cout << "Tema: " << Publi[P].Tema << endl;
        cout << "Texto: " << Publi[P].Texto << endl;
        
        cout << "Etiquetas: ";
        for (int K = 0; K <= J; K++)
        {
            if (Publi[P].Etiqueta[K] != "")
            {
                cout << "#" << Publi[P].Etiqueta[K] << " ";
            }
        }
        cout << endl;

        cout << "¿Esos datos son correctos? Ingrese 1: Sí / 0: No : ";
        R = Opc_Bool();

    } while (R == 0);

    Publi[P].Autor = Est[N].Nombre;
    Publi[P].CI = Est[N].Cedula;
    Publi[P].ID = P;
    Publi[P].Activo = 1;
    Publi[P].Cant_Reac = 0;
    Publi[P].Cant_Coment = 0;
    Guardar_Foro(Publi);
    cout << GREEN << "Publicación creada con éxito." << RESET << endl;
    Continue();
}