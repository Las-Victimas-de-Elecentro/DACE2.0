#include "../../Main/Header.h"
using namespace std;

void Amigos_Global (Variables (&Var), Estudiante (&Est)[D], Profesor (&Prof)[D], Administrativo (&Admin)[D], Amigos (&Amig)[D])
{
    int Opc, I, J, K, L, ID;
    int& N = Var.N;
    int& Av = Var.Av;
    int& Opc_F = Var.Opc_F;
    long CI_Busqueda, CI_Temp, CI_Aux;
    string Nombre_Busqueda, Nom_Aux, Av_Aux;
    bool R, Coincide, Ya_Es_Amigo, Encontrado_List;

    do
    {
        Limpiar();
        Dibujo = "Friends"; Art();
        Opc_F = 6;
        cout << CYAN << "Bienvenido a la sección de amigos" << RESET << endl;
        cout << "1: Agregar a un amigo" << endl;
        cout << "2: Ver tus amigos" << endl;
        cout << "3: Buscar a un amigo" << endl;
        cout << "4: Eliminar un amigo" << endl;
        cout << "5: Ver total de amigos" << endl;
        cout << "6: Salir" << endl;
        cout << "Ingrese: ";
        Opc = Opc_Menu(Opc_F);

        switch (Opc)
        {
            case 1:
                Limpiar();
                Dibujo = "Friends"; Art();
                cout << "¿Desea buscar por? 1: Nombre / 0: Cédula : ";
                R = Opc_Bool();

                if (R == 1)
                {
                    Limpiar();
                    Dibujo = "Friends"; Art();
                    cout << "Ingrese el nombre de la persona: ";
                    Nombre_Busqueda = Nombre_User();
                }
                else
                {
                    Limpiar();
                    Dibujo = "Friends"; Art();
                    cout << "Ingrese cédula: ";
                    CI_Busqueda = Cedula_User();
                }

                if ((R == 1 && Nombre_Busqueda == Est[N].Nombre) || (R == 0 && CI_Busqueda == Est[N].Cedula))
                {
                    cout << RED << "No te puedes agregar a ti mismo" << RESET << endl;
                    Continue();
                }
                else
                {
                    Ya_Es_Amigo = false;
                    for (J = 0; J < D; J++) 
                    {
                        if (Amig[N].CI_Receptor[J] != 0 && ((R == 1 && Amig[N].Nombre_Receptor[J] == Nombre_Busqueda) || (R == 0 && Amig[N].CI_Receptor[J] == CI_Busqueda))) 
                        {
                            Ya_Es_Amigo = true;
                            break;
                        }
                    }

                    if (Ya_Es_Amigo == true) 
                    {
                        cout << YELLOW << "Esta persona ya está en tu lista de amigos" << RESET << endl;
                        Continue();
                    }
                    else 
                    {
                        for (I = 0; I < D; I++)
                        {
                            Coincide = false;
                            if ((R == 1 && Nombre_Busqueda == Est[I].Nombre && Est[I].Cedula != 0) || (R == 0 && CI_Busqueda == Est[I].Cedula && Est[I].Cedula != 0))
                            {
                                Nom_Aux = Est[I].Nombre; CI_Aux = Est[I].Cedula; Av_Aux = Est[I].Avatar; Coincide = true;
                            }
                            else if ((R == 1 && Nombre_Busqueda == Prof[I].Nombre && Prof[I].Cedula != 0) || (R == 0 && CI_Busqueda == Prof[I].Cedula && Prof[I].Cedula != 0))
                            {
                                Nom_Aux = Prof[I].Nombre; CI_Aux = Prof[I].Cedula; Av_Aux = Prof[I].Avatar; Coincide = true;
                            }

                            if (Coincide == true)
                            {
                                for (J = 0; J < D; J++)
                                {
                                    if (Amig[N].CI_Receptor[J] == 0)
                                    {
                                        for (K = 0; K < D; K++)
                                        {
                                            if (Amig[I].CI_Receptor[K] == 0)
                                            {
                                                Amig[N].Nombre_Emisor = Est[N].Nombre;
                                                Amig[N].CI_Emisor = Est[N].Cedula;
                                                Amig[N].Nombre_Receptor[J] = Nom_Aux;
                                                Amig[N].CI_Receptor[J] = CI_Aux;
                                                Amig[N].Avatar_Receptor[J] = Av_Aux;
                                                Est[N].Amigos++;

                                                Amig[I].Nombre_Emisor = Nom_Aux;
                                                Amig[I].CI_Emisor = CI_Aux;
                                                Amig[I].Nombre_Receptor[K] = Est[N].Nombre;
                                                Amig[I].CI_Receptor[K] = Est[N].Cedula;
                                                Amig[I].Avatar_Receptor[K] = Est[N].Avatar;
                                                
                                                for(L = 0; L < D; L++) 
                                                {
                                                    if(Est[L].Cedula == CI_Aux) Est[L].Amigos++;
                                                    else if(Prof[L].Cedula == CI_Aux) Prof[L].Amigos++;
                                                }
                                                Guardar_Amigos (Amig, Est);
                                                cout << GREEN << "Amigo agregado con éxito" << RESET << endl;
                                                Continuar();
                                                goto FinBusqueda; 
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        cout << RED << "No se encontró a la persona" << RESET << endl;
                        Continuar();
                    }
                }
                FinBusqueda:
                break;

            case 2:
                Limpiar();
                Dibujo = "Friends"; Art();
                cout << CYAN << "Tus Amigos" << RESET << endl;
                if (Est[N].Amigos == 0)
                {
                    cout << RED << "No tienes amigos agregados" << RESET << endl;
                    Continue();
                }
                else
                {
                    for (I = 0; I < D; I++)
                    {
                        if (Amig[N].CI_Receptor[I] != 0)
                        {
                            cout << "- " << Amig[N].Nombre_Receptor[I] << " CI: " << Amig[N].CI_Receptor[I] << endl;
                        }
                    }
                    Continue();
                }
                break;

            case 3:
                Limpiar();
                Dibujo = "Friends"; Art();
                if (Est[N].Amigos == 0)
                {
                    cout << RED << "No tienes amigos agregados" << RESET << endl;
                    Continue();
                }
                else
                {
                    cout << "¿Desea buscar por? 1: Nombre / 0: Cédula : ";
                    R = Opc_Bool();
                    if (R == 1)
                    {
                        cout << "Ingrese nombre del amigo a consultar: ";
                        Nombre_Busqueda = Nombre_User();
                    }
                    else
                    {
                        cout << "Ingrese cédula del amigo a consultar: ";
                        CI_Busqueda = Cedula_User();
                    }

                    Encontrado_List = false;
                    for (I = 0; I < D; I++)
                    {
                        if (Amig[N].CI_Receptor[I] != 0 && ((R == 1 && Amig[N].Nombre_Receptor[I] == Nombre_Busqueda) || (R == 0 && Amig[N].CI_Receptor[I] == CI_Busqueda)))
                        {
                            Encontrado_List = true;
                            string Nom_Actual = Amig[N].Nombre_Receptor[I];
                            for (J = 0; J < D; J++)
                            {
                                if (Est[J].Nombre == Nom_Actual && Est[J].Cedula != 0)
                                {
                                    Av = J;
                                    Limpiar();
                                    Avatares_Social(Var, Est, Prof, Admin);
                                    cout << CYAN << "Nombre: " << Est[J].Nombre << RESET << endl;
                                    cout << "Carrera: " << Est[J].Carrera << endl;
                                    cout << "Semestre: " << Est[J].Semestre << endl;
                                    break;
                                }
                                else if (Prof[J].Nombre == Nom_Actual && Prof[J].Cedula != 0)
                                {
                                    Av = J;
                                    Limpiar();
                                    Avatares_Social(Var, Est, Prof, Admin);
                                    cout << CYAN << "Profesor: " << Prof[J].Nombre << RESET << endl;
                                    cout << "Cédula: " << Prof[J].Cedula << endl;
                                    break;
                                }
                            }
                            break;
                        }
                    }
                    if(Encontrado_List == false) 
                    {
                        cout << RED << "Esa persona no está en tu lista de amigos" << RESET << endl;
                        Continue();
                    }
                    else Continuar();
                }
                break;

            case 4:
                do {
                    Limpiar();
                    Dibujo = "Friends"; Art();
                    if (Est[N].Amigos == 0)
                    {
                        cout << RED << "No tienes amigos agregados" << RESET << endl;
                        Continue();
                        break;
                    }
                    cout << "Tus amigos actuales:" << endl;
                    int Contador = 1;
                    int Indices[D];
                    for (I = 0; I < D; I++)
                    {
                        if (Amig[N].CI_Receptor[I] != 0)
                        {
                            cout << Contador << ": " << Amig[N].Nombre_Receptor[I] << endl;
                            Indices[Contador] = I;
                            Contador++;
                        }
                    }
                    int Opc_Salir = Contador;
                    cout << Opc_Salir << ": Salir" << endl;
                    cout << "Ingrese el amigo que quiere eliminar: ";
                    Opc_F = Opc_Salir;
                    ID = Opc_Menu(Opc_F);

                    if (ID == Opc_Salir) break;

                    int Ind_R = Indices[ID];
                    cout << "¿Seguro de eliminar a " << Amig[N].Nombre_Receptor[Ind_R] << "? 1: Si / 0: No : ";
                    R = Opc_Bool();
                    if (R == 1)
                    {
                        CI_Temp = Amig[N].CI_Receptor[Ind_R];
                        Amig[N].Nombre_Receptor[Ind_R] = "";
                        Amig[N].CI_Receptor[Ind_R] = 0;
                        Amig[N].Avatar_Receptor[Ind_R] = "";
                        Est[N].Amigos--;

                        for (I = 0; I < D; I++) 
                        {
                            if (Amig[I].CI_Emisor == CI_Temp) 
                            {
                                for (J = 0; J < D; J++) 
                                {
                                    if (Amig[I].CI_Receptor[J] == Est[N].Cedula) 
                                    {
                                        Amig[I].Nombre_Receptor[J] = "";
                                        Amig[I].CI_Receptor[J] = 0;
                                        Amig[I].Avatar_Receptor[J] = "";
                                        for(L = 0; L < D; L++) 
                                        {
                                            if(Est[L].Cedula == CI_Temp) Est[L].Amigos--;
                                            else if(Prof[L].Cedula == CI_Temp) Prof[L].Amigos--;
                                        }
                                    }
                                }
                            }
                        }
                        Guardar_Amigos (Amig, Est);
                        cout << RED << "Amistad eliminada" << RESET << endl;
                        Continuar();
                    }
                } while (true);
                break;

            case 5:
                Limpiar();
                Dibujo = "Friends"; Art();
                if (Est[N].Amigos == 0)
                {
                    cout << "Tienes un total de: " << RED << "0" << RESET << " amigos" << endl;
                    Continue();
                }
                else
                {
                    cout << "Tienes un total de: " << GREEN << Est[N].Amigos << RESET << " amigos" << endl;
                    Continue();
                }
                break;
        }

    } while (Opc != 6);
}