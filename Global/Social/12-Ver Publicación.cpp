#include "../../Main/Header.h"
using namespace std;

void Menu_Reacciones () 
{
    cout << CYAN << "¿Qué tipo de reacción desea agregar?" << RESET << endl;

    cout << BLUE << "1: Me gusta" << endl;
    cout << RED << "2: Me encanta" << endl;
    cout << REDPASTEL << "3: Me importa" << endl;
    cout << AMBER << "4: Me divierte" << endl;
    cout << BEIGE << "5: Me asombra" << endl;
    cout << SKY << "6: Me entristece" << endl;
    cout << ORANGE << "7: Me molesta" << RESET << endl;

    cout << "Ingrese: ";
}

template <typename T>
void Top_Reacciones (T &Entidad) 
{
    int I, J, Mostrados;

    string Nombres[7] = {"Me gusta", "Me encanta", "Me importa", "Me divierte", "Me asombra", "Me entristece", "Me molesta"};
    
    int Cantidades[7] =
    {
        Entidad.Reac.Cant_Gusta, Entidad.Reac.Cant_Encanta, Entidad.Reac.Cant_Importa, 
        Entidad.Reac.Cant_Divierte, Entidad.Reac.Cant_Asombra, Entidad.Reac.Cant_Entristece, 
        Entidad.Reac.Cant_Molesta
    };

    string Colores[7] = {BLUE, RED, REDPASTEL, AMBER, BEIGE, SKY, ORANGE};

    I = 0; J = 0; Mostrados = 0;

    for (I = 0; I < 6; I++) 
    {
        for (J = 0; J < 6 - I; J++) 
        {
            if (Cantidades[J] < Cantidades[J + 1]) 
            {

                swap(Cantidades[J], Cantidades[J + 1]);
                swap(Nombres[J], Nombres[J + 1]);
                swap(Colores[J], Colores[J + 1]);
            }
        }
    }

    for (I = 0; I < 7; I++) 
    {
        if (Cantidades[I] > 0 && Mostrados < 3) 
        {

            if (Mostrados > 0) 
            {

                cout << " / ";
            }
            cout << Colores[I] << Nombres[I] << RESET;
            Mostrados++;
        }
    }

    if (Mostrados == 0)
    {

        cout << "Sin reacciones";
    }

    cout << endl;
}

template <typename T>
void Ver_Reacciones (T &Entidad, Variables &Var, Publicaciones (&Publi)[D], Estudiante (&Est)[D], Profesor (&Prof)[D], Administrativo (&Admin)[D], bool Es_Public) 
{
    int I;
    bool Hay;

    string Nombres[7] = {"Me gusta", "Me encanta", "Me importa", "Me divierte", "Me asombra", "Me entristece", "Me molesta"};
    
    int Cantidades[7] =
    {
        Entidad.Reac.Cant_Gusta, Entidad.Reac.Cant_Encanta, Entidad.Reac.Cant_Importa, 
        Entidad.Reac.Cant_Divierte, Entidad.Reac.Cant_Asombra, Entidad.Reac.Cant_Entristece, 
        Entidad.Reac.Cant_Molesta
    };
    
    I = 0; Hay = false;

    for (I = 0; I < 7; I++) 
    {
        if (Cantidades[I] > 0) 
        {

            if (Hay == false)
            {

                Limpiar(); 
                Dibujo = Nombres[I]; 
                Reac(); 
                cout << CYAN << Nombres[I] << ": " << Cantidades[I] << RESET << endl;
                Continue(); 
                Hay = true;
            }
            else
            {

                Limpiar(); 
                Dibujo = Nombres[I]; 
                Reac(); 
                cout << CYAN << Nombres[I] << ": " << Cantidades[I] << RESET << endl;
                Continuar(); 
            }
        }
    }
    
    if (Hay == false) 
    { 

        Limpiar(); 
        
        if (Es_Public == true)
        {

            Imagen(Var, Publi);
        }
        else 
        {

            Avatares_Social(Var, Est, Prof, Admin);
        }
        
        cout << RED << "Sin reacciones" << RESET << endl; 
        Continue(); 
    }
}

template <typename T>
void Añadir_Reaccion(int Opc, T &Entidad, int Cedula_Usuario) 
{
    bool Encontrado = false;
    int Reaccion_Vieja;

    for (int i = 0; i < Entidad.CI_Reaccion.size(); i++) 
    {
        if (Entidad.CI_Reaccion[i] == Cedula_Usuario) 
        {

            Reaccion_Vieja = Entidad.Mi_Reaccion[i];

            switch (Reaccion_Vieja) 
            {
                case 1: Entidad.Reac.Cant_Gusta--; break;
                case 2: Entidad.Reac.Cant_Encanta--; break;
                case 3: Entidad.Reac.Cant_Importa--; break;
                case 4: Entidad.Reac.Cant_Divierte--; break;
                case 5: Entidad.Reac.Cant_Asombra--; break;
                case 6: Entidad.Reac.Cant_Entristece--; break;
                case 7: Entidad.Reac.Cant_Molesta--; break;
            }

            if (Opc == Reaccion_Vieja) 
            {

                Entidad.Mi_Reaccion.erase(Entidad.Mi_Reaccion.begin() + i);
                Entidad.CI_Reaccion.erase(Entidad.CI_Reaccion.begin() + i);
            }
            else 
            {

                Entidad.Mi_Reaccion[i] = Opc;

                switch (Opc) 
                {
                    case 1: Entidad.Reac.Cant_Gusta++; break;
                    case 2: Entidad.Reac.Cant_Encanta++; break;
                    case 3: Entidad.Reac.Cant_Importa++; break;
                    case 4: Entidad.Reac.Cant_Divierte++; break;
                    case 5: Entidad.Reac.Cant_Asombra++; break;
                    case 6: Entidad.Reac.Cant_Entristece++; break;
                    case 7: Entidad.Reac.Cant_Molesta++; break;
                }
            }

            Encontrado = true;
            break;
        }
    }

    if (!Encontrado) 
    {

        Entidad.Mi_Reaccion.push_back(Opc);
        Entidad.CI_Reaccion.push_back(Cedula_Usuario);

        switch (Opc) 
        {
            case 1: Entidad.Reac.Cant_Gusta++; break;
            case 2: Entidad.Reac.Cant_Encanta++; break;
            case 3: Entidad.Reac.Cant_Importa++; break;
            case 4: Entidad.Reac.Cant_Divierte++; break;
            case 5: Entidad.Reac.Cant_Asombra++; break;
            case 6: Entidad.Reac.Cant_Entristece++; break;
            case 7: Entidad.Reac.Cant_Molesta++; break;
        }
    }
}

void Ver_Publicaciones(Variables &Var, Estudiante (&Est)[D], Publicaciones (&Publi)[D], Profesor (&Prof)[D], Administrativo (&Admin)[D], Amigos (&Amig)[D]) 
{
    int& N = Var.N;
    int& Img = Var.Img;
    int& Av = Var.Av;
    int M, I, J, K, L, Opc, Opc_Coment, Opc_Ver_Reac, P, Next, Pos_Respuesta;
    bool Ultima_Public, Existe_Otra, Es_Amigo;

    Ultima_Public = true;

    for (I = 0; I < D; I++) 
    {
        Es_Amigo = false;
        for (M = 0; M < D; M++)
        {
            if (Amig[N].CI_Receptor[M] == Publi[I].CI && Amig[N].CI_Receptor[M] != 0)
            {
                Es_Amigo = true;
                break;
            }
        }

        if (Publi[I].Activo == 1 && Publi[I].Autor != Est[N].Nombre && Es_Amigo == true) 
        {

            Ultima_Public = false;
            do 
            {
                Limpiar(); 
                Img = I; 
                Imagen(Var, Publi);

                cout << CYAN << "Autor: " << Publi[I].Autor << RESET << " | " << Publi[I].Fecha.Dia << "/" << Publi[I].Fecha.Mes << "/" << Publi[I].Fecha.Year << endl;
                cout << YELLOW << "Tema: " << Publi[I].Tema << RESET << endl;
                cout << "Contenido: " << Publi[I].Texto << endl;
                Top_Reacciones(Publi[I]);

                for (int K_Et = 0; K_Et < 5; K_Et++) 
                {
                    if (Publi[I].Etiqueta[K_Et] != "") 
                    {

                        cout << "#" << Publi[I].Etiqueta[K_Et] << " ";
                    }
                }
                cout << endl << endl;
                
                cout << "1: Reaccionar" << endl;
                cout << "2: Ver reacciones" << endl;
                cout << "3: Comentar" << endl;
                cout << "4: Ver Comentarios" << endl;
                cout << "5: Siguiente" << endl;
                cout << "6: Salir" << endl;

                cout << "Ingrese: ";
                Opc = Opc_Menu(6);

                if (Opc == 6)
                {

                    return;
                }

                if (Opc == 5) 
                {

                    Existe_Otra = false;
                    for(Next = I + 1; Next < D; Next++) 
                    {
                        bool Next_Es_Amigo = false;
                        for (int m2 = 0; m2 < D; m2++)
                        {
                            if (Amig[N].CI_Receptor[m2] == Publi[Next].CI && Amig[N].CI_Receptor[m2] != 0)
                            {

                                Next_Es_Amigo = true;
                                break;
                            }
                        }

                        if(Publi[Next].Activo == 1 && Publi[Next].Autor != Est[N].Nombre && Next_Es_Amigo == true) 
                        { 

                            Existe_Otra = true; 
                            break; 
                        }
                    }

                    if(Existe_Otra == false) 
                    {

                        Limpiar(); 
                        Imagen(Var, Publi);
                        cout << RED << "No existen más publicaciones de tus amigos" << RESET << endl;
                        Continue();
                    }
                    break;
                }

                switch (Opc) 
                {
                    case 1:
                        Limpiar(); Img = I; Imagen(Var, Publi); 
                        Menu_Reacciones();
                        Añadir_Reaccion(Opc_Menu(7), Publi[I], Est[N].Cedula);
                        Guardar_Foro(Publi);
                        cout << GREEN << "Su reacción ha sido enviada con éxito" << RESET << endl;
                        Continue(); 
                        break;

                    case 2: 
                        Ver_Reacciones(Publi[I], Var, Publi, Est, Prof, Admin, true); 
                        break;

                    case 3:
                        do 
                        {
                            Limpiar(); Img = I; Imagen(Var, Publi);
                            Publi[I].Coment.push_back(Comentarios());
                            P = Publi[I].Coment.size() - 1;
                            cout << "Comentario: "; 
                            Publi[I].Coment[P].Comentario = Contenido();
                            
                            Limpiar(); Img = I; Imagen(Var, Publi);
                            cout << "Dia: "; Publi[I].Coment[P].Fecha.Dia = Dia_User();
                            cout << "Mes: "; Publi[I].Coment[P].Fecha.Mes = Mes_User();
                            cout << "Año: "; Publi[I].Coment[P].Fecha.Year = Year_User();
                            
                            Limpiar(); Img = I; Imagen(Var, Publi);
                            cout << "¿Es correcto? Ingrese: 1: Sí / 0: No : ";

                            if (Opc_Bool() == 1) 
                            {

                                Publi[I].Coment[P].Autor = Est[N].Nombre;
                                Publi[I].Cant_Coment++;
                                Guardar_Foro(Publi);
                                cout << GREEN << "Su comentario ha sido enviado con éxito" << RESET << endl;
                                break;
                            } 
                            else 
                            {

                                Publi[I].Coment.pop_back();
                            }
                        } while (true);
                        Continue(); 
                        break;

                    case 4:
                        if (Publi[I].Coment.empty() == true) 
                        {

                            Limpiar(); Img = I; Imagen(Var, Publi); 
                            cout << RED << "Sin comentarios" << RESET << endl;
                            Continue();
                        } 
                        else 
                        {

                            for (J = 0; J < (int)Publi[I].Coment.size(); J++) 
                            {
                                do 
                                {
                                    Av = 0;
                                    for (L = 0; L < D; L++) 
                                    { 
                                        if (Est[L].Nombre == Publi[I].Coment[J].Autor) 
                                        { 
                                            Av = L; 
                                            break; 
                                        } 
                                    }

                                    Limpiar(); Avatares_Social(Var, Est, Prof, Admin); 
                                    cout << CYAN << "Comentario de: " << Publi[I].Coment[J].Autor << RESET << endl;
                                    cout << "Dice: " << Publi[I].Coment[J].Comentario << endl;
                                    Top_Reacciones(Publi[I].Coment[J]);
                                    
                                    cout << endl;
                                    cout << "1: Responder" << endl;
                                    cout << "2: Ver Respuestas" << endl;
                                    cout << "3: Reaccionar" << endl;
                                    cout << "4: Ver reacciones" << endl;
                                    cout << "5: Siguiente" << endl;
                                    cout << "6: Salir" << endl;

                                    cout << "Ingrese: ";
                                    Opc_Coment = Opc_Menu(6);
                                    
                                    if (Opc_Coment == 5 && J == (int)Publi[I].Coment.size() - 1) 
                                    {

                                        Limpiar(); Avatares_Social(Var, Est, Prof, Admin);
                                        cout << RED << "No existen más comentarios" << RESET << endl;
                                        Continue();
                                    }
                                    
                                    if (Opc_Coment == 6 || Opc_Coment == 5) 
                                    {

                                        break;
                                    }

                                    switch (Opc_Coment)
                                    {
                                        case 1:
                                            do 
                                            {
                                                Limpiar(); Avatares_Social(Var, Est, Prof, Admin);
                                                Publi[I].Coment[J].Resp.push_back(Respuesta());
                                                Pos_Respuesta = Publi[I].Coment[J].Resp.size() - 1;
                                                cout << "Respuesta: "; 
                                                Publi[I].Coment[J].Resp[Pos_Respuesta].Respuesta = Contenido();
                                                
                                                Limpiar(); Avatares_Social(Var, Est, Prof, Admin);
                                                cout << "Dia: "; Publi[I].Coment[J].Resp[Pos_Respuesta].Fecha.Dia = Dia_User();
                                                cout << "Mes: "; Publi[I].Coment[J].Resp[Pos_Respuesta].Fecha.Mes = Mes_User();
                                                cout << "Año: "; Publi[I].Coment[J].Resp[Pos_Respuesta].Fecha.Year = Year_User();
                                                
                                                Limpiar(); Avatares_Social(Var, Est, Prof, Admin);
                                                cout << "¿Es correcto? Ingrese: 1: Sí / 0: No : ";

                                                if (Opc_Bool() == 1) 
                                                {

                                                    Publi[I].Coment[J].Resp[Pos_Respuesta].Autor = Est[N].Nombre;
                                                    Guardar_Foro(Publi);
                                                    cout << GREEN << "Su respuesta ha sido enviada con éxito" << RESET << endl;
                                                    break;
                                                }
                                                else 
                                                {

                                                    Publi[I].Coment[J].Resp.pop_back();
                                                }
                                            } while (true);
                                            Continue();
                                            break;

                                        case 2:
                                            if (Publi[I].Coment[J].Resp.empty() == true) 
                                            {

                                                Limpiar(); Avatares_Social(Var, Est, Prof, Admin); 
                                                cout << RED << "Sin respuestas" << RESET << endl; 
                                                Continue();
                                            } 
                                            else 
                                            {

                                                for (K = 0; K < (int)Publi[I].Coment[J].Resp.size(); K++) 
                                                {
                                                    do 
                                                    {
                                                        Av = 0;
                                                        for (L = 0; L < D; L++) 
                                                        { 
                                                            if (Est[L].Nombre == Publi[I].Coment[J].Resp[K].Autor) 
                                                            { 
                                                                Av = L; 
                                                                break; 
                                                            } 
                                                        }

                                                        Limpiar(); Avatares_Social(Var, Est, Prof, Admin);
                                                        cout << CYAN << "Respuesta de: " << Publi[I].Coment[J].Resp[K].Autor << RESET << endl;
                                                        cout << "Dice: " << Publi[I].Coment[J].Resp[K].Respuesta << endl;
                                                        Top_Reacciones(Publi[I].Coment[J].Resp[K]);
                                                        
                                                        cout << endl;
                                                        cout << "1: Reaccionar" << endl;
                                                        cout << "2: Ver reacciones" << endl;
                                                        cout << "3: Siguiente" << endl;
                                                        cout << "4: Salir" << endl;

                                                        cout << "Ingrese: ";
                                                        Opc_Ver_Reac = Opc_Menu(4);
                                                        
                                                        if (Opc_Ver_Reac == 3 && K == (int)Publi[I].Coment[J].Resp.size() - 1) 
                                                        {

                                                            Limpiar(); Avatares_Social(Var, Est, Prof, Admin);
                                                            cout << RED << "No existen más respuestas" << RESET << endl;
                                                            Continue();
                                                        }

                                                        if (Opc_Ver_Reac == 1) 
                                                        {

                                                            Limpiar(); Avatares_Social(Var, Est, Prof, Admin); 
                                                            Menu_Reacciones();
                                                            Añadir_Reaccion(Opc_Menu(7), Publi[I].Coment[J].Resp[K], Est[N].Cedula);
                                                            Guardar_Foro(Publi);
                                                            cout << GREEN << "Su reacción ha sido enviada con éxito" << RESET << endl;
                                                            Continue();
                                                        } 
                                                        else if (Opc_Ver_Reac == 2) 
                                                        {

                                                            Ver_Reacciones(Publi[I].Coment[J].Resp[K], Var, Publi, Est, Prof, Admin, false);
                                                        }

                                                    } while (Opc_Ver_Reac != 3 && Opc_Ver_Reac != 4);
                                                    
                                                    if (Opc_Ver_Reac == 4) 
                                                    {

                                                        break;
                                                    }
                                                }
                                            }
                                            break;

                                        case 3:
                                            Limpiar(); Avatares_Social(Var, Est, Prof, Admin); 
                                            Menu_Reacciones();
                                            Añadir_Reaccion(Opc_Menu(7), Publi[I].Coment[J], Est[N].Cedula);
                                            Guardar_Foro(Publi);
                                            cout << GREEN << "Su reacción ha sido enviada con éxito" << RESET << endl;
                                            Continue();
                                            break;

                                        case 4: 
                                            Ver_Reacciones(Publi[I].Coment[J], Var, Publi, Est, Prof, Admin, false); 
                                            break;
                                    }
                                } while (Opc_Coment != 5);

                                if (Opc_Coment == 6) 
                                {

                                    break;
                                }
                            }
                        }
                        break;
                }
            } while (Opc != 5);
        }
    }
    
    if (Ultima_Public == true) 
    {

        Limpiar(); Dibujo = "Public"; Art();
        cout << RED << "No Hay publicaciones de tus amigos para mostrar" << RESET << endl;
        Continue();
    }
}

void Buscar_Publicaciones(Variables &Var, Estudiante (&Est)[D], Publicaciones (&Publi)[D], Profesor (&Prof)[D], Administrativo (&Admin)[D], Amigos (&Amig)[D]) 
{
    int& N = Var.N;
    int& Img = Var.Img;
    int& Av = Var.Av;
    int M, I, J, K, L, Opc, Opc_Coment, Opc_Ver_Reac, P, Pos_Respuesta, Buscar_Opc, K_Et;
    string Busqueda;
    bool Encontrado, Coincide, Es_Amigo;

    do 
    {
        Encontrado = false;

        Limpiar(); Dibujo = "Search"; Art();
        cout << CYAN << "¿De qué forma desea buscar la publicación?" << RESET << endl;
        
        cout << "1: Por Autor" << endl;
        cout << "2: Por Tema" << endl;
        cout << "3: Por Etiqueta" << endl;
        cout << "4: Salir" << endl;

        cout << "Ingrese: ";
        Buscar_Opc = Opc_Menu(4);

        if (Buscar_Opc == 4)
        {

            return;
        }

        do 
        {
            Limpiar(); Dibujo = "Search"; Art();

            if (Buscar_Opc == 1) 
            {

                cout << "Ingrese el autor que desea buscar: ";
            }

            if (Buscar_Opc == 2) 
            {

                cout << "Ingrese el tema que desea buscar: ";
            }

            if (Buscar_Opc == 3) 
            {

                cout << "Ingrese la etiqueta que desea buscar (sin #): ";
            }
            
            Busqueda = Contenido();

            Limpiar(); Dibujo = "Search"; Art();
            cout << "¿Es correcto? Ingrese: 1: Sí / 0: No : ";

            if (Opc_Bool() == 1) 
            {

                break;
            }
        } while (true);

        for (I = 0; I < D; I++) 
        {
            Coincide = false;
            Es_Amigo = false;

            for (M = 0; M < D; M++)
            {
                if (Amig[N].CI_Receptor[M] == Publi[I].CI && Amig[N].CI_Receptor[M] != 0)
                {

                    Es_Amigo = true;
                    break;
                }
            }

            if (Publi[I].Activo == 1 && Publi[I].Autor != Est[N].Nombre && Es_Amigo == true) 
            {

                if (Buscar_Opc == 1)
                {

                    if (Publi[I].Autor == Busqueda)
                    {

                        Coincide = true;
                    }
                }

                if (Buscar_Opc == 2)
                {

                    if (Publi[I].Tema == Busqueda)
                    {

                        Coincide = true;
                    }
                }

                if (Buscar_Opc == 3) 
                {

                    for (K_Et = 0; K_Et < 5; K_Et++) 
                    {
                        if (Publi[I].Etiqueta[K_Et] == Busqueda) 
                        {

                            Coincide = true;
                        }
                    }
                }

                if (Coincide == true) 
                {

                    Encontrado = true;

                    do 
                    {
                        Limpiar(); Img = I; Imagen(Var, Publi);

                        cout << CYAN << "Autor: " << Publi[I].Autor << RESET << " | " << Publi[I].Fecha.Dia << "/" << Publi[I].Fecha.Mes << "/" << Publi[I].Fecha.Year << endl;
                        cout << YELLOW << "Tema: " << Publi[I].Tema << RESET << endl;
                        cout << "Contenido: " << Publi[I].Texto << endl;
                        Top_Reacciones(Publi[I]);

                        for (int E = 0; E < 5; E++) 
                        {
                            if (Publi[I].Etiqueta[E] != "") 
                            {

                                cout << "#" << Publi[I].Etiqueta[E] << " ";
                            }
                        }

                        cout << endl << endl;
                        cout << "1: Reaccionar" << endl;
                        cout << "2: Ver reacciones" << endl;
                        cout << "3: Comentar" << endl;
                        cout << "4: Ver Comentarios" << endl;
                        cout << "5: Salir" << endl;

                        cout << "Ingrese: ";
                        Opc = Opc_Menu(5);

                        if (Opc == 5) 
                        {

                            break;
                        }

                        switch (Opc) 
                        {
                            case 1:
                                Limpiar(); Img = I; Imagen(Var, Publi); 
                                Menu_Reacciones();
                                Añadir_Reaccion(Opc_Menu(7), Publi[I], Est[N].Cedula);
                                Guardar_Foro(Publi);
                                cout << GREEN << "Su reacción ha sido enviada con éxito" << RESET << endl;
                                Continue(); 
                                break;

                            case 2: 
                                Ver_Reacciones(Publi[I], Var, Publi, Est, Prof, Admin, true); 
                                break;

                            case 3:
                                do 
                                {
                                    Limpiar(); Img = I; Imagen(Var, Publi);
                                    Publi[I].Coment.push_back(Comentarios());
                                    P = Publi[I].Coment.size() - 1;
                                    cout << "Comentario: "; 
                                    Publi[I].Coment[P].Comentario = Contenido();
                                    
                                    Limpiar(); Img = I; Imagen(Var, Publi);
                                    cout << "Dia: "; Publi[I].Coment[P].Fecha.Dia = Dia_User();
                                    cout << "Mes: "; Publi[I].Coment[P].Fecha.Mes = Mes_User();
                                    cout << "Año: "; Publi[I].Coment[P].Fecha.Year = Year_User();

                                    Limpiar(); Img = I; Imagen(Var, Publi);
                                    cout << "¿Es correcto? Ingrese: 1: Sí / 0: No : ";
                                    
                                    if (Opc_Bool() == 1) 
                                    {

                                        Publi[I].Coment[P].Autor = Est[N].Nombre;
                                        Publi[I].Cant_Coment++;
                                        Guardar_Foro(Publi);
                                        cout << GREEN << "Su comentario ha sido enviado con éxito" << RESET << endl;
                                        break;
                                    } 
                                    else 
                                    {

                                        Publi[I].Coment.pop_back();
                                    }
                                } while (true);
                                Continue(); 
                                break;

                            case 4:
                                if (Publi[I].Coment.empty() == true) 
                                {

                                    Limpiar(); Img = I; Imagen(Var, Publi); 
                                    cout << RED << "Sin comentarios" << RESET << endl;
                                    Continue();
                                } 
                                else 
                                {

                                    for (J = 0; J < (int)Publi[I].Coment.size(); J++) 
                                    {
                                        do 
                                        {
                                            Av = 0;
                                            for (L = 0; L < D; L++) 
                                            { 
                                                if (Est[L].Nombre == Publi[I].Coment[J].Autor) 
                                                { 
                                                    Av = L; 
                                                    break; 
                                                } 
                                            }

                                            Limpiar(); Avatares_Social(Var, Est, Prof, Admin); 
                                            cout << CYAN << "Comentario de: " << Publi[I].Coment[J].Autor << RESET << endl;
                                            cout << "Dice: " << Publi[I].Coment[J].Comentario << endl;
                                            Top_Reacciones(Publi[I].Coment[J]);
                                            
                                            cout << endl;
                                            cout << "1: Responder" << endl;
                                            cout << "2: Ver Respuestas" << endl;
                                            cout << "3: Reaccionar" << endl;
                                            cout << "4: Ver reacciones" << endl;
                                            cout << "5: Siguiente" << endl;
                                            cout << "6: Salir" << endl;

                                            cout << "Ingrese: ";
                                            Opc_Coment = Opc_Menu(6);
                                            
                                            if (Opc_Coment == 5 && J == (int)Publi[I].Coment.size() - 1) 
                                            {

                                                Limpiar(); Avatares_Social(Var, Est, Prof, Admin);
                                                cout << RED << "No existen más comentarios" << RESET << endl;
                                                Continue();
                                            }

                                            if (Opc_Coment == 6 || Opc_Coment == 5) 
                                            { 

                                                break; 
                                            }

                                            switch (Opc_Coment)
                                            {
                                                case 1:
                                                    do 
                                                    {
                                                        Limpiar(); Avatares_Social(Var, Est, Prof, Admin);
                                                        Publi[I].Coment[J].Resp.push_back(Respuesta());
                                                        Pos_Respuesta = Publi[I].Coment[J].Resp.size() - 1;
                                                        cout << "Respuesta: "; 
                                                        Publi[I].Coment[J].Resp[Pos_Respuesta].Respuesta = Contenido();
                                                        
                                                        Limpiar(); Avatares_Social(Var, Est, Prof, Admin);
                                                        cout << "Dia: "; Publi[I].Coment[J].Resp[Pos_Respuesta].Fecha.Dia = Dia_User();
                                                        cout << "Mes: "; Publi[I].Coment[J].Resp[Pos_Respuesta].Fecha.Mes = Mes_User();
                                                        cout << "Año: "; Publi[I].Coment[J].Resp[Pos_Respuesta].Fecha.Year = Year_User();

                                                        Limpiar(); Avatares_Social(Var, Est, Prof, Admin);
                                                        cout << "¿Es correcto? Ingrese: 1: Sí / 0: No : ";
                                                        
                                                        if (Opc_Bool() == 1) 
                                                        {

                                                            Publi[I].Coment[J].Resp[Pos_Respuesta].Autor = Est[N].Nombre;
                                                            Guardar_Foro(Publi);
                                                            cout << GREEN << "Su respuesta ha sido enviada con éxito" << RESET << endl;
                                                            break;
                                                        }
                                                        else 
                                                        {

                                                            Publi[I].Coment[J].Resp.pop_back();
                                                        }
                                                    } while (true);
                                                    Continue();
                                                    break;

                                                case 2:
                                                    if (Publi[I].Coment[J].Resp.empty() == true) 
                                                    { 

                                                        Limpiar(); Avatares_Social(Var, Est, Prof, Admin); 
                                                        cout << RED << "Sin respuestas" << RESET << endl; 
                                                        Continue(); 
                                                    } 
                                                    else 
                                                    {

                                                        for (K = 0; K < (int)Publi[I].Coment[J].Resp.size(); K++) 
                                                        {
                                                            do 
                                                            {
                                                                Av = 0;
                                                                for (L = 0; L < D; L++) 
                                                                { 
                                                                    if (Est[L].Nombre == Publi[I].Coment[J].Resp[K].Autor) 
                                                                    { 
                                                                        Av = L; 
                                                                        break; 
                                                                    } 
                                                                }

                                                                Limpiar(); Avatares_Social(Var, Est, Prof, Admin);
                                                                cout << CYAN << "Respuesta de: " << Publi[I].Coment[J].Resp[K].Autor << RESET << endl;
                                                                cout << "Dice: " << Publi[I].Coment[J].Resp[K].Respuesta << endl;
                                                                Top_Reacciones(Publi[I].Coment[J].Resp[K]);
                                                                
                                                                cout << endl;
                                                                cout << "1: Reaccionar" << endl;
                                                                cout << "2: Ver reacciones" << endl;
                                                                cout << "3: Siguiente" << endl;
                                                                cout << "4: Salir" << endl;

                                                                cout << "Ingrese: "; 
                                                                Opc_Ver_Reac = Opc_Menu(4);

                                                                if (Opc_Ver_Reac == 3 && K == (int)Publi[I].Coment[J].Resp.size() - 1) 
                                                                { 

                                                                    Limpiar(); Avatares_Social(Var, Est, Prof, Admin); 
                                                                    cout << RED << "No existen más respuestas" << RESET << endl; 
                                                                    Continue(); 
                                                                }

                                                                if (Opc_Ver_Reac == 1) 
                                                                { 

                                                                    Limpiar(); Avatares_Social(Var, Est, Prof, Admin); 
                                                                    Menu_Reacciones(); 
                                                                    Añadir_Reaccion(Opc_Menu(7), Publi[I].Coment[J].Resp[K], Est[N].Cedula); 
                                                                    Guardar_Foro(Publi);
                                                                    cout << GREEN << "Su reacción ha sido enviada con éxito" << RESET << endl; 
                                                                    Continue(); 
                                                                } 
                                                                else if (Opc_Ver_Reac == 2) 
                                                                { 

                                                                    Ver_Reacciones(Publi[I].Coment[J].Resp[K], Var, Publi, Est, Prof, Admin, false); 
                                                                }

                                                            } while (Opc_Ver_Reac != 3 && Opc_Ver_Reac != 4);

                                                            if (Opc_Ver_Reac == 4) 
                                                            { 

                                                                break; 
                                                            }
                                                        }
                                                    }
                                                    break;

                                                case 3:
                                                    Limpiar(); Avatares_Social(Var, Est, Prof, Admin); 
                                                    Menu_Reacciones();
                                                    Añadir_Reaccion(Opc_Menu(7), Publi[I].Coment[J], Est[N].Cedula);
                                                    Guardar_Foro(Publi);
                                                    cout << GREEN << "Su reacción ha sido enviada con éxito" << RESET << endl;
                                                    Continue();
                                                    break;

                                                case 4: 
                                                    Ver_Reacciones(Publi[I].Coment[J], Var, Publi, Est, Prof, Admin, false); 
                                                    break;
                                            }

                                        } while (Opc_Coment != 5);

                                        if (Opc_Coment == 6) 
                                        { 

                                            break; 
                                        }
                                    }
                                }
                                break;
                        }
                    } while (Opc != 5);
                }
            }
        }
        
        if (Encontrado == false) 
        {

            Limpiar(); Dibujo = "Search"; Art();
            cout << RED << "No se encontraron publicaciones de tus amigos" << RESET << endl;
            Continue();
        }
    } while (true);
}

void Gestionar_Publicaciones_Propias(Variables &Var, Estudiante (&Est)[D], Publicaciones (&Publi)[D], Profesor (&Prof)[D], Administrativo (&Admin)[D]) 
{
    int& N = Var.N;
    int& Img = Var.Img;
    int& Av = Var.Av;
    int I, J, K, L, Opc, Opc_Coment, Opc_Ver_Reac, P, Pos_Respuesta, Buscar_Opc, Sub_Opc, K_Et;
    string Busqueda;
    bool Encontrado, Coincide;

    do 
    {
        Limpiar();
        Dibujo = "Public"; 
        Art();

        cout << SKY << "Bienvenido a la seccion de busqueda, edicion y eliminacion tus propias publicaciones" << RESET << endl;
        
        cout << "1: Ver publicaciones tuyas" << endl;
        cout << "2: Buscar publicaciones tuyas" << endl;
        cout << "3: Salir" << endl;

        cout << "Ingrese: ";
        Sub_Opc = Opc_Menu(3);

        if (Sub_Opc == 3)
        {

            return;
        }

        Busqueda = "";
        Buscar_Opc = 0;

        if (Sub_Opc == 2) 
        {

            do 
            {
                Limpiar(); Dibujo = "Search"; Art();
                cout << CYAN << "¿De qué forma desea buscar en sus publicaciones?" << RESET << endl;
                
                cout << "1: Por Tema" << endl;
                cout << "2: Por Etiqueta" << endl;
                cout << "3: Regresar" << endl;

                cout << "Ingrese: ";
                Buscar_Opc = Opc_Menu(3);

                if (Buscar_Opc == 3)
                {

                    break;
                }

                do 
                {
                    Limpiar(); Dibujo = "Search"; Art();

                    if (Buscar_Opc == 1) 
                    {

                        cout << "Ingrese el tema: ";
                    }

                    if (Buscar_Opc == 2) 
                    {

                        cout << "Ingrese la etiqueta (sin #): ";
                    }

                    Busqueda = Contenido();

                    Limpiar(); Dibujo = "Search"; Art();
                    cout << "¿Es correcto? Ingrese: 1: Sí / 0: No : ";

                    if (Opc_Bool() == 1) 
                    {

                        break;
                    }
                } while (true);
                break; 
            } while (true);

            if (Buscar_Opc == 3) 
            {

                continue;
            }
        }

        Encontrado = false;

        for (I = 0; I < D; I++) 
        {
            Coincide = false;

            if (Publi[I].Activo == 1 && Publi[I].Autor == Est[N].Nombre) 
            {

                if (Sub_Opc == 1) 
                {

                    Coincide = true;
                }
                else 
                {

                    if (Buscar_Opc == 1)
                    {

                        if (Publi[I].Tema == Busqueda)
                        {

                            Coincide = true;
                        }
                    }

                    if (Buscar_Opc == 2) 
                    {

                        for (K_Et = 0; K_Et < 5; K_Et++) 
                        { 
                            if (Publi[I].Etiqueta[K_Et] == Busqueda) 
                            {

                                Coincide = true;
                            }
                        }
                    }
                }

                if (Coincide == true) 
                {

                    Encontrado = true;

                    do 
                    {
                        Limpiar(); Img = I; Imagen(Var, Publi);

                        cout << CYAN << "Autor (Tú): " << Publi[I].Autor << RESET << " | " << Publi[I].Fecha.Dia << "/" << Publi[I].Fecha.Mes << "/" << Publi[I].Fecha.Year << endl;
                        cout << YELLOW << "Tema: " << Publi[I].Tema << RESET << endl;
                        cout << "Contenido: " << Publi[I].Texto << endl;
                        Top_Reacciones(Publi[I]);

                        for (int E = 0; E < 5; E++) 
                        { 
                            if (Publi[I].Etiqueta[E] != "") 
                            {

                                cout << "#" << Publi[I].Etiqueta[E] << " ";
                            }
                        }

                        cout << endl << endl;
                        cout << "1: Reaccionar" << endl;
                        cout << "2: Ver reacciones" << endl;
                        cout << "3: Comentar" << endl;
                        cout << "4: Ver Comentarios" << endl;
                        cout << "5: Siguiente" << endl;
                        cout << "6: Salir" << endl;

                        cout << "Ingrese: ";
                        Opc = Opc_Menu(6);

                        if (Opc == 6) 
                        {

                            break;
                        }

                        if (Opc == 5)
                        {

                            break;
                        }

                        switch (Opc) 
                        {
                            case 1:
                                Limpiar(); Img = I; Imagen(Var, Publi); 
                                Menu_Reacciones();
                                Añadir_Reaccion(Opc_Menu(7), Publi[I], Est[N].Cedula);
                                Guardar_Foro(Publi);
                                cout << GREEN << "Reacción añadida con éxito" << RESET << endl;
                                Continue(); 
                                break;

                            case 2: 
                                Ver_Reacciones(Publi[I], Var, Publi, Est, Prof, Admin, true); 
                                break;

                            case 3:
                                do 
                                {
                                    Limpiar(); Img = I; Imagen(Var, Publi);
                                    Publi[I].Coment.push_back(Comentarios());
                                    P = Publi[I].Coment.size() - 1;
                                    cout << "Tu Comentario: "; 
                                    Publi[I].Coment[P].Comentario = Contenido();
                                    
                                    Limpiar(); Img = I; Imagen(Var, Publi);
                                    cout << "Dia: "; Publi[I].Coment[P].Fecha.Dia = Dia_User();
                                    cout << "Mes: "; Publi[I].Coment[P].Fecha.Mes = Mes_User();
                                    cout << "Año: "; Publi[I].Coment[P].Fecha.Year = Year_User();

                                    Limpiar(); Img = I; Imagen(Var, Publi);
                                    cout << "¿Es correcto? Ingrese: 1: Sí / 0: No : ";
                                    
                                    if (Opc_Bool() == 1) 
                                    { 

                                        Publi[I].Coment[P].Autor = Est[N].Nombre; 
                                        Publi[I].Cant_Coment++; 
                                        Guardar_Foro(Publi);
                                        cout << GREEN << "Comentario enviado" << RESET << endl;
                                        break;
                                    } 
                                    else 
                                    {

                                        Publi[I].Coment.pop_back();
                                    }
                                } while (true);
                                Continue();
                                break;

                            case 4:
                                if (Publi[I].Coment.empty() == true) 
                                { 

                                    Limpiar(); Img = I; Imagen(Var, Publi); 
                                    cout << RED << "Sin comentarios" << RESET << endl; 
                                    Continue(); 
                                } 
                                else 
                                {

                                    for (J = 0; J < (int)Publi[I].Coment.size(); J++) 
                                    {
                                        do 
                                        {
                                            Av = 0;
                                            for (L = 0; L < D; L++) 
                                            { 
                                                if (Est[L].Nombre == Publi[I].Coment[J].Autor) 
                                                { 
                                                    Av = L; 
                                                    break; 
                                                } 
                                            }

                                            Limpiar(); Avatares_Social(Var, Est, Prof, Admin); 
                                            cout << CYAN << "Comentario de: " << Publi[I].Coment[J].Autor << RESET << endl;
                                            cout << "Dice: " << Publi[I].Coment[J].Comentario << endl;
                                            Top_Reacciones(Publi[I].Coment[J]);
                                            
                                            cout << endl;
                                            cout << "1: Responder" << endl;
                                            cout << "2: Ver Respuestas" << endl;
                                            cout << "3: Reaccionar" << endl;
                                            cout << "4: Ver reacciones" << endl;
                                            cout << "5: Siguiente" << endl;
                                            cout << "6: Salir" << endl;

                                            cout << "Ingrese: "; 
                                            Opc_Coment = Opc_Menu(6);
                                            
                                            if (Opc_Coment == 5 && J == (int)Publi[I].Coment.size() - 1) 
                                            { 

                                                Limpiar(); Avatares_Social(Var, Est, Prof, Admin);
                                                cout << RED << "No hay más comentarios" << RESET << endl; 
                                                Continue(); 
                                            }

                                            if (Opc_Coment == 6 || Opc_Coment == 5) 
                                            { 

                                                break; 
                                            }

                                            switch (Opc_Coment)
                                            {
                                                case 1:
                                                    do 
                                                    {
                                                        Limpiar(); Avatares_Social(Var, Est, Prof, Admin);
                                                        Publi[I].Coment[J].Resp.push_back(Respuesta());
                                                        Pos_Respuesta = Publi[I].Coment[J].Resp.size() - 1;
                                                        cout << "Tu Respuesta: "; 
                                                        Publi[I].Coment[J].Resp[Pos_Respuesta].Respuesta = Contenido();
                                                        
                                                        Limpiar(); Avatares_Social(Var, Est, Prof, Admin);
                                                        cout << "Dia: "; Publi[I].Coment[J].Resp[Pos_Respuesta].Fecha.Dia = Dia_User();
                                                        cout << "Mes: "; Publi[I].Coment[J].Resp[Pos_Respuesta].Fecha.Mes = Mes_User();
                                                        cout << "Año: "; Publi[I].Coment[J].Resp[Pos_Respuesta].Fecha.Year = Year_User();

                                                        Limpiar(); Avatares_Social(Var, Est, Prof, Admin);
                                                        cout << "¿Es correcto? Ingrese: 1: Sí / 0: No : ";

                                                        if (Opc_Bool() == 1) 
                                                        { 

                                                            Publi[I].Coment[J].Resp[Pos_Respuesta].Autor = Est[N].Nombre; 
                                                            Guardar_Foro(Publi);
                                                            cout << GREEN << "Respuesta enviada" << RESET << endl;
                                                            break;
                                                        }
                                                        else 
                                                        { 

                                                            Publi[I].Coment[J].Resp.pop_back(); 
                                                        }
                                                    } while (true);
                                                    Continue();
                                                    break;

                                                case 2:
                                                    if (Publi[I].Coment[J].Resp.empty() == true) 
                                                    { 

                                                        Limpiar(); Avatares_Social(Var, Est, Prof, Admin);
                                                        cout << RED << "Sin respuestas" << RESET << endl; 
                                                        Continue(); 
                                                    }
                                                    else 
                                                    {

                                                        for (K = 0; K < (int)Publi[I].Coment[J].Resp.size(); K++) 
                                                        {
                                                            do 
                                                            {
                                                                Av = 0;
                                                                for (L = 0; L < D; L++) 
                                                                { 
                                                                    if (Est[L].Nombre == Publi[I].Coment[J].Resp[K].Autor) 
                                                                    { 
                                                                        Av = L; 
                                                                        break; 
                                                                    } 
                                                                }

                                                                Limpiar(); Avatares_Social(Var, Est, Prof, Admin);
                                                                cout << "Respuesta de: " << Publi[I].Coment[J].Resp[K].Autor << endl;
                                                                cout << "Dice: " << Publi[I].Coment[J].Resp[K].Respuesta << endl;
                                                                Top_Reacciones(Publi[I].Coment[J].Resp[K]);

                                                                cout << endl;
                                                                cout << "1: Reaccionar" << endl;
                                                                cout << "2: Ver reacciones" << endl;
                                                                cout << "3: Siguiente" << endl;
                                                                cout << "4: Salir" << endl;

                                                                cout << "Ingrese: ";
                                                                Opc_Ver_Reac = Opc_Menu(4);

                                                                if (Opc_Ver_Reac == 3 && K == (int)Publi[I].Coment[J].Resp.size() - 1) 
                                                                { 

                                                                    Limpiar(); Avatares_Social(Var, Est, Prof, Admin);
                                                                    cout << RED << "Fin respuestas" << RESET << endl; 
                                                                    Continue(); 
                                                                }

                                                                if (Opc_Ver_Reac == 1) 
                                                                { 

                                                                    Limpiar(); Avatares_Social(Var, Est, Prof, Admin);
                                                                    Menu_Reacciones(); 
                                                                    Añadir_Reaccion(Opc_Menu(7), Publi[I].Coment[J].Resp[K], Est[N].Cedula); 
                                                                    Guardar_Foro(Publi);
                                                                    cout << GREEN << "Su reacción ha sido enviada con éxito" << RESET << endl;
                                                                    Continue();
                                                                }
                                                                else if (Opc_Ver_Reac == 2) 
                                                                { 

                                                                    Ver_Reacciones(Publi[I].Coment[J].Resp[K], Var, Publi, Est, Prof, Admin, false); 
                                                                }

                                                            } while (Opc_Ver_Reac != 3 && Opc_Ver_Reac != 4);

                                                            if (Opc_Ver_Reac == 4) 
                                                            { 

                                                                break; 
                                                            }
                                                        }
                                                    }
                                                    break;

                                                case 3:
                                                    Limpiar(); Avatares_Social(Var, Est, Prof, Admin);
                                                    Menu_Reacciones(); 
                                                    Añadir_Reaccion(Opc_Menu(7), Publi[I].Coment[J], Est[N].Cedula); 
                                                    Guardar_Foro(Publi);
                                                    cout << GREEN << "Su reacción ha sido enviada con éxito" << RESET << endl;
                                                    Continue();
                                                    break;

                                                case 4:
                                                    Ver_Reacciones(Publi[I].Coment[J], Var, Publi, Est, Prof, Admin, false);
                                                    break;
                                            }

                                        } while (Opc_Coment != 5);

                                        if (Opc_Coment == 6) 
                                        { 

                                            break; 
                                        }
                                    }
                                }
                                break;
                        }
                    } while (Opc != 5 && Opc != 6);

                    if (Opc == 6) 
                    {

                        return;
                    }
                }
            }
        }

        if (Encontrado == false) 
        {
            Limpiar(); Dibujo = "Search"; Art();
            cout << RED << "No se encontraron publicaciones tuyas" << RESET << endl;
            Continue();
        }

    } while (Sub_Opc != 3);
}