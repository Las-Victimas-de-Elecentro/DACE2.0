#include "../../Main/Header.h"
using namespace std;

void Enfermedades_Global_Personal (Variables (&Var), Estudiante (&Est)[D], Profesor (&Prof)[D], Administrativo (&Admin)[D])
{
    int& N = Var.N;
    int& Opc_F = Var.Opc_F;

    string Enf;

    int Opc, Opc2;
    bool R;
    Limpiar();

    do {
        Limpiar();
        Opc_F = 11;
        Dibujo = "Healt"; Art();
        cout << "Ingreso de información de salud" << endl;
        cout << "¿Que tipo de enfermedad desea ingresar?" << endl;
        cout << "1: Transmisibles" << endl;
        cout << "2: Cronicas" << endl;
        cout << "3: Neurologicas" << endl;
        cout << "4: Neoplasias" << endl;
        cout << "5: Autoinmunes" << endl;
        cout << "6: Trastornos" << endl;
        cout << "7: Lesiones" << endl;
        cout << "8: Congenitas" << endl;
        cout << "9: Metabolicos" << endl;
        cout << "10: Ocupacionales" << endl;
        cout << "11: Salir" << endl;
        cout << "Ingrese: ";
        Opc = Opc_Menu(Opc_F);
        
        if (Opc == 1)
        {
            do {
                Limpiar();
                Dibujo = "Healt"; Art();
                cout << "1: Gripe" << endl;
                cout << "2: COVID 19" << endl;
                cout << "3: Tuberculosis" << endl;
                cout << "4: Dengue" << endl;
                cout << "5: VIH SIDA" << endl;
                cout << "6: Hepatitis" << endl;
                cout << "7: Gastroenteritis" << endl;
                cout << "8: Varicela" << endl;
                cout << "9: Malaria" << endl;
                cout << "10: Sarampion" << endl;
                cout << "11: Otra" << endl;
                cout << "Ingrese: ";
                Opc2 = Opc_Menu(Opc_F);

                switch (Opc2) 
                {
                    case 1:
                        Enf = "Gripe"; 
                        break;
                    case 2:
                        Enf = "COVID 19"; 
                        break;
                    case 3:
                        Enf = "Tuberculosis"; 
                        break;
                    case 4:
                        Enf = "Dengue"; 
                        break;
                    case 5:
                        Enf = "VIH SIDA"; 
                        break;
                    case 6:
                        Enf = "Hepatitis"; 
                        break;
                    case 7:
                        Enf = "Gastroenteritis"; 
                        break;
                    case 8:
                        Enf = "Varicela"; 
                        break;
                    case 9:
                        Enf = "Malaria"; 
                        break;
                    case 10:
                        Enf = "Sarampion"; 
                        break;
                    default:
                        cout << "Ingrese el nombre de la enfermedad: ";
                        getline(cin >> ws, Enf); 
                        break;
                }


                if (Rol == "Est")
                {
                    if (Est[N].Enf.Transmisibles == "") 
                    {
                        Est[N].Enf.Transmisibles = Enf;
                    } 
                    else 
                    {
                        Est[N].Enf.Transmisibles += ", " + Enf;
                    }
                }
                else if (Rol == "Prof")
                {
                    if (Prof[N].Enf.Transmisibles == "") 
                    {
                        Prof[N].Enf.Transmisibles = Enf;
                    } 
                    else 
                    {
                        Prof[N].Enf.Transmisibles += ", " + Enf;
                    }
                }
                else if (Rol == "Admin")
                {
                    if (Admin[N].Enf.Transmisibles == "") 
                    {
                        Admin[N].Enf.Transmisibles = Enf;
                    } 
                    else 
                    {
                        Admin[N].Enf.Transmisibles += ", " + Enf;
                    }
                } 

                Guardar (Var, Est, Prof, Admin);
                cout << "Enfermedad ingresada con exito" << endl;
                cout << "¿Desea ingresar otra enfermedad? Ingrese 1:Sí / 0:No : ";
                R = Opc_Bool();
            } while (R == 1);
        }
        else if (Opc == 2)
        {
            do {
                Limpiar();
                Dibujo = "Healt"; Art();
                cout << "1: Hipertension arterial" << endl;
                cout << "2: Diabetes tipo 2" << endl;
                cout << "3: Asma" << endl;
                cout << "4: EPOC" << endl;
                cout << "5: Artritis reumatoide" << endl;
                cout << "6: Insuficiencia cardiaca" << endl;
                cout << "7: Obesidad" << endl;
                cout << "8: Osteoporosis" << endl;
                cout << "9: Enfermedad renal cronica" << endl;
                cout << "10: Apnea del sueno" << endl;
                cout << "11: Otra" << endl;
                cout << "Ingrese: ";
                Opc2 = Opc_Menu(Opc_F);

                switch (Opc2)
                {
                    case 1:
                        Enf = "Hipertension arterial"; 
                        break;
                    case 2:
                        Enf = "Diabetes tipo 2"; 
                        break;
                    case 3:
                        Enf = "Asma"; 
                        break;
                    case 4:
                        Enf = "EPOC"; 
                        break;
                    case 5:
                        Enf = "Artritis reumatoide"; 
                        break;
                    case 6:
                        Enf = "Insuficiencia cardiaca"; 
                        break;
                    case 7:
                        Enf = "Obesidad"; 
                        break;
                    case 8:
                        Enf = "Osteoporosis"; 
                        break;
                    case 9:
                        Enf = "Enfermedad renal cronica"; 
                        break;
                    case 10:
                        Enf = "Apnea del sueno"; 
                        break;
                    default:
                        cout << "Ingrese el nombre de la enfermedad: ";
                        getline(cin >> ws, Enf); 
                        break;
                }

                if (Rol == "Est")
                {
                    if (Est[N].Enf.Cronicas == "") 
                    {
                        Est[N].Enf.Cronicas = Enf;
                    } 
                    else 
                    {
                        Est[N].Enf.Cronicas += ", " + Enf;
                    }
                }
                else if (Rol == "Prof")
                {
                    if (Prof[N].Enf.Cronicas == "") 
                    {
                        Prof[N].Enf.Cronicas = Enf;
                    } 
                    else 
                    {
                        Prof[N].Enf.Cronicas += ", " + Enf;
                    }
                }
                else if (Rol == "Admin")
                {
                    if (Admin[N].Enf.Cronicas == "") 
                    {
                        Admin[N].Enf.Cronicas = Enf;
                    } 
                    else 
                    {
                        Admin[N].Enf.Cronicas += ", " + Enf;
                    }
                }
                
                Guardar (Var, Est, Prof, Admin);
                cout << "Enfermedad ingresada con exito" << endl;
                cout << "¿Desea ingresar otra enfermedad? Ingrese 1:Sí / 0:No : ";
                R = Opc_Bool();
            } while (R == 1);
        }
        else if (Opc == 3)
        {
            do {
                Limpiar();
                Dibujo = "Healt"; Art();
                cout << "1: Migrana" << endl;
                cout << "2: Alzheimer" << endl;
                cout << "3: Parkinson" << endl;
                cout << "4: Epilepsia" << endl;
                cout << "5: Esclerosis multiple" << endl;
                cout << "6: Ictus cerebral" << endl;
                cout << "7: Demencia vascular" << endl;
                cout << "8: Esclerosis lateral amiotrofica" << endl;
                cout << "9: Neuralgia del trigemino" << endl;
                cout << "10: Neuropatia periferica" << endl;
                cout << "11: Otra" << endl;
                cout << "Ingrese: ";
                Opc2 = Opc_Menu(Opc_F);

                switch (Opc2)
                {
                    case 1:
                        Enf = "Migrana"; 
                        break;
                    case 2:
                        Enf = "Alzheimer"; 
                        break;
                    case 3:
                        Enf = "Parkinson"; 
                        break;
                    case 4:
                        Enf = "Epilepsia"; 
                        break;
                    case 5:
                        Enf = "Esclerosis multiple"; 
                        break;
                    case 6:
                        Enf = "Ictus cerebral"; 
                        break;
                    case 7:
                        Enf = "Demencia vascular"; 
                        break;
                    case 8:
                        Enf = "Esclerosis lateral amiotrofica"; 
                        break;
                    case 9:
                        Enf = "Neuralgia del trigemino"; 
                        break;
                    case 10:
                        Enf = "Neuropatia periferica"; 
                        break;
                    default:
                        cout << "Ingrese el nombre de la enfermedad: ";
                        getline(cin >> ws, Enf); 
                        break;
                }

                if (Rol == "Est")
                {
                    if (Est[N].Enf.Neurologicas == "") 
                    {
                        Est[N].Enf.Neurologicas = Enf;
                    } 
                    else 
                    {
                        Est[N].Enf.Neurologicas += ", " + Enf;
                    }
                }
                else if (Rol == "Prof")
                {
                    if (Prof[N].Enf.Neurologicas == "") 
                    {
                        Prof[N].Enf.Neurologicas = Enf;
                    } 
                    else 
                    {
                        Prof[N].Enf.Neurologicas += ", " + Enf;
                    }
                }
                else if (Rol == "Admin")
                {
                    if (Admin[N].Enf.Neurologicas == "") 
                    {
                        Admin[N].Enf.Neurologicas = Enf;
                    } 
                    else 
                    {
                        Admin[N].Enf.Neurologicas += ", " + Enf;
                    }
                }
                
                Guardar (Var, Est, Prof, Admin);
                cout << "Enfermedad ingresada con exito" << endl;
                cout << "¿Desea ingresar otra enfermedad? Ingrese 1:Sí / 0:No : ";
                R = Opc_Bool();
            } while (R == 1);
        }
        else if (Opc == 4)
        {
            do {
                Limpiar();
                Dibujo = "Healt"; Art();
                cout << "1: Cancer de mama" << endl;
                cout << "2: Cancer de pulmon" << endl;
                cout << "3: Cancer de colon" << endl;
                cout << "4: Cancer de prostata" << endl;
                cout << "5: Cancer de piel" << endl;
                cout << "6: Cancer de estomago" << endl;
                cout << "7: Leucemia" << endl;
                cout << "8: Linfoma" << endl;
                cout << "9: Cancer de pancreas" << endl;
                cout << "10: Cancer de cuello uterino" << endl;
                cout << "11: Otra" << endl;
                cout << "Ingrese: ";
                Opc2 = Opc_Menu(Opc_F);

                switch (Opc2)
                {
                    case 1:
                        Enf = "Cancer de mama"; 
                        break;
                    case 2:
                        Enf = "Cancer de pulmon"; 
                        break;
                    case 3:
                        Enf = "Cancer de colon"; 
                        break;
                    case 4:
                        Enf = "Cancer de prostata"; 
                        break;
                    case 5:
                        Enf = "Cancer de piel"; 
                        break;
                    case 6:
                        Enf = "Cancer de estomago"; 
                        break;
                    case 7:
                        Enf = "Leucemia"; 
                        break;
                    case 8:
                        Enf = "Linfoma"; 
                        break;
                    case 9:
                        Enf = "Cancer de pancreas"; 
                        break;
                    case 10:
                        Enf = "Cancer de cuello uterino"; 
                        break;
                    default:
                        cout << "Ingrese el nombre de la enfermedad: ";
                        getline(cin >> ws, Enf); 
                        break;
                }

                if (Rol == "Est")
                {
                    if (Est[N].Enf.Neoplasias == "") 
                    {
                        Est[N].Enf.Neoplasias = Enf;
                    } 
                    else 
                    {
                        Est[N].Enf.Neoplasias += ", " + Enf;
                    }
                }
                else if (Rol == "Prof")
                {
                    if (Prof[N].Enf.Neoplasias == "") 
                    {
                        Prof[N].Enf.Neoplasias = Enf;
                    } 
                    else 
                    {
                        Prof[N].Enf.Neoplasias += ", " + Enf;
                    }
                }
                else if (Rol == "Admin")
                {
                    if (Admin[N].Enf.Neoplasias == "") 
                    {
                        Admin[N].Enf.Neoplasias = Enf;
                    } 
                    else 
                    {
                        Admin[N].Enf.Neoplasias += ", " + Enf;
                    }
                }

                Guardar (Var, Est, Prof, Admin);
                cout << "Enfermedad ingresada con exito" << endl;
                cout << "¿Desea ingresar otra enfermedad? Ingrese 1:Sí / 0:No : ";
                R = Opc_Bool();
            } while (R == 1);
        }
        else if (Opc == 5)
        {
            do {
                Limpiar();
                Dibujo = "Healt"; Art();
                cout << "1: Lupus" << endl;
                cout << "2: Celiaquia" << endl;
                cout << "3: Psoriasis" << endl;
                cout << "4: Diabetes tipo 1" << endl;
                cout << "5: Enfermedad de Crohn" << endl;
                cout << "6: Vitiligo" << endl;
                cout << "7: Tiroiditis de Hashimoto" << endl;
                cout << "8: Miastenia gravis" << endl;
                cout << "9: Sindrome de Sjogren" << endl;
                cout << "10: Vasculitis" << endl;
                cout << "11: Otra" << endl;
                cout << "Ingrese: ";
                Opc2 = Opc_Menu(Opc_F);

                switch (Opc2)
                {
                    case 1:
                        Enf = "Lupus"; 
                        break;
                    case 2:
                        Enf = "Celiaquia"; 
                        break;
                    case 3:
                        Enf = "Psoriasis"; 
                        break;
                    case 4:
                        Enf = "Diabetes tipo 1"; 
                        break;
                    case 5:
                        Enf = "Enfermedad de Crohn"; 
                        break;
                    case 6:
                        Enf = "Vitiligo"; 
                        break;
                    case 7:
                        Enf = "Tiroiditis de Hashimoto"; 
                        break;
                    case 8:
                        Enf = "Miastenia gravis"; 
                        break;
                    case 9:
                        Enf = "Sindrome de Sjogren"; 
                        break;
                    case 10:
                        Enf = "Vasculitis"; 
                        break;
                    default:
                        cout << "Ingrese el nombre de la enfermedad: ";
                        getline(cin >> ws, Enf); 
                        break;
                }

                if (Rol == "Est")
                {
                    if (Est[N].Enf.Autoinmunes == "") 
                    {
                        Est[N].Enf.Autoinmunes = Enf;
                    } 
                    else 
                    {
                        Est[N].Enf.Autoinmunes += ", " + Enf;
                    }
                }
                else if (Rol == "Prof")
                {
                    if (Prof[N].Enf.Autoinmunes == "") 
                    {
                        Prof[N].Enf.Autoinmunes = Enf;
                    } 
                    else 
                    {
                        Prof[N].Enf.Autoinmunes += ", " + Enf;
                    }
                }
                else if (Rol == "Admin")
                {
                    if (Admin[N].Enf.Autoinmunes == "") 
                    {
                        Admin[N].Enf.Autoinmunes = Enf;
                    } 
                    else 
                    {
                        Admin[N].Enf.Autoinmunes += ", " + Enf;
                    }
                }

                Guardar (Var, Est, Prof, Admin);
                cout << "Enfermedad ingresada con exito" << endl;
                cout << "¿Desea ingresar otra enfermedad? Ingrese 1:Sí / 0:No : ";
                R = Opc_Bool();
            } while (R == 1);
        }
        else if (Opc == 6)
        {
            do {
                Limpiar();
                Dibujo = "Healt"; Art();
                cout << "1: Ansiedad" << endl;
                cout << "2: Depresion" << endl;
                cout << "3: Trastorno bipolar" << endl;
                cout << "4: Esquizofrenia" << endl;
                cout << "5: TDAH" << endl;
                cout << "6: Trastorno obsesivo compulsivo" << endl;
                cout << "7: Trastorno de estres postraumatico" << endl;
                cout << "8: Trastorno de la conducta alimentaria" << endl;
                cout << "9: Trastorno de personalidad" << endl;
                cout << "10: Autismo" << endl;
                cout << "11: Otra" << endl;
                cout << "Ingrese: ";
                Opc2 = Opc_Menu(Opc_F);

                switch (Opc2)
                {
                    case 1:
                        Enf = "Ansiedad"; 
                        break;
                    case 2:
                        Enf = "Depresion"; 
                        break;
                    case 3:
                        Enf = "Trastorno bipolar"; 
                        break;
                    case 4:
                        Enf = "Esquizofrenia"; 
                        break;
                    case 5:
                        Enf = "TDAH"; 
                        break;
                    case 6:
                        Enf = "Trastorno obsesivo compulsivo"; 
                        break;
                    case 7:
                        Enf = "Trastorno de estres postraumatico"; 
                        break;
                    case 8:
                        Enf = "Trastorno de la conducta alimentaria"; 
                        break;
                    case 9:
                        Enf = "Trastorno de personalidad"; 
                        break;
                    case 10:
                        Enf = "Autismo"; 
                        break;
                    default:
                        cout << "Ingrese el nombre de la enfermedad: ";
                        getline(cin >> ws, Enf); 
                        break;
                }

                if (Rol == "Est")
                {
                    if (Est[N].Enf.Transtornos == "") 
                    {
                        Est[N].Enf.Transtornos = Enf;
                    } 
                    else 
                    {
                        Est[N].Enf.Transtornos += ", " + Enf;
                    }
                }
                else if (Rol == "Prof")
                {
                    if (Prof[N].Enf.Transtornos == "") 
                    {
                        Prof[N].Enf.Transtornos = Enf;
                    } 
                    else 
                    {
                        Prof[N].Enf.Transtornos += ", " + Enf;
                    }
                }
                else if (Rol == "Admin")
                {
                    if (Admin[N].Enf.Transtornos == "") 
                    {
                        Admin[N].Enf.Transtornos = Enf;
                    } 
                    else 
                    {
                        Admin[N].Enf.Transtornos += ", " + Enf;
                    }
                }

                Guardar (Var, Est, Prof, Admin);
                cout << "Enfermedad ingresada con exito" << endl;
                cout << "¿Desea ingresar otra enfermedad? Ingrese 1:Sí / 0:No : ";
                R = Opc_Bool();
            } while (R == 1);
        }
        else if (Opc == 7)
        {
            do {
                Limpiar();
                Dibujo = "Healt"; Art();
                cout << "1: Fractura osea" << endl;
                cout << "2: Esguince" << endl;
                cout << "3: Quemadura" << endl;
                cout << "4: Luxacion" << endl;
                cout << "5: Lesion medular" << endl;
                cout << "6: Traumatismo craneoencefalico" << endl;
                cout << "7: Rotura de ligamentos" << endl;
                cout << "8: Hernia discal" << endl;
                cout << "9: Desgarro muscular" << endl;
                cout << "10: Contusion pulmonar" << endl;
                cout << "11: Otra" << endl;
                cout << "Ingrese: ";
                Opc2 = Opc_Menu(Opc_F);

                switch (Opc2)
                {
                    case 1:
                        Enf = "Fractura osea"; 
                        break;
                    case 2:
                        Enf = "Esguince"; 
                        break;
                    case 3:
                        Enf = "Quemadura"; 
                        break;
                    case 4:
                        Enf = "Luxacion"; 
                        break;
                    case 5:
                        Enf = "Lesion medular"; 
                        break;
                    case 6:
                        Enf = "Traumatismo craneoencefalico"; 
                        break;
                    case 7:
                        Enf = "Rotura de ligamentos"; 
                        break;
                    case 8:
                        Enf = "Hernia discal"; 
                        break;
                    case 9:
                        Enf = "Desgarro muscular"; 
                        break;
                    case 10:
                        Enf = "Contusion pulmonar"; 
                        break;
                    default:
                        cout << "Ingrese el nombre de la enfermedad: ";
                        getline(cin >> ws, Enf); 
                        break;
                }

                if (Rol == "Est")
                {
                    if (Est[N].Enf.Lesiones == "") 
                    {
                        Est[N].Enf.Lesiones = Enf;
                    } 
                    else 
                    {
                        Est[N].Enf.Lesiones += ", " + Enf;
                    }
                }
                else if (Rol == "Prof")
                {
                    if (Prof[N].Enf.Lesiones == "") 
                    {
                        Prof[N].Enf.Lesiones = Enf;
                    } 
                    else 
                    {
                        Prof[N].Enf.Lesiones += ", " + Enf;
                    }
                }
                else if (Rol == "Admin")
                {
                    if (Admin[N].Enf.Lesiones == "") 
                    {
                        Admin[N].Enf.Lesiones = Enf;
                    } 
                    else 
                    {
                        Admin[N].Enf.Lesiones += ", " + Enf;
                    }
                }

                Guardar (Var, Est, Prof, Admin);
                cout << "Enfermedad ingresada con exito" << endl;
                cout << "¿Desea ingresar otra enfermedad? Ingrese 1:Sí / 0:No : ";
                R = Opc_Bool();
            } while (R == 1);
        }
        else if (Opc == 8)
        {
            do {
                Limpiar();
                Dibujo = "Healt"; Art();
                cout << "1: Sindrome de Down" << endl;
                cout << "2: Espina bifida" << endl;
                cout << "3: Cardiopatia congenita" << endl;
                cout << "4: Labio leporino" << endl;
                cout << "5: Fibrosis quistica" << endl;
                cout << "6: Fenilcetonuria" << endl;
                cout << "7: Microcefalia" << endl;
                cout << "8: Displasia de cadera" << endl;
                cout << "9: Hemofilia" << endl;
                cout << "10: Acondroplasia" << endl;
                cout << "11: Otra" << endl;
                cout << "Ingrese: ";
                Opc2 = Opc_Menu(Opc_F);

                switch (Opc2)
                {
                    case 1:
                        Enf = "Sindrome de Down"; 
                        break;
                    case 2:
                        Enf = "Espina bifida"; 
                        break;
                    case 3:
                        Enf = "Cardiopatia congenita"; 
                        break;
                    case 4:
                        Enf = "Labio leporino"; 
                        break;
                    case 5:
                        Enf = "Fibrosis quistica"; 
                        break;
                    case 6:
                        Enf = "Fenilcetonuria"; 
                        break;
                    case 7:
                        Enf = "Microcefalia"; 
                        break;
                    case 8:
                        Enf = "Displasia de cadera"; 
                        break;
                    case 9:
                        Enf = "Hemofilia"; 
                        break;
                    case 10:
                        Enf = "Acondroplasia"; 
                        break;
                    default:
                        cout << "Ingrese el nombre de la enfermedad: ";
                        getline(cin >> ws, Enf); 
                        break;
                }

                if (Rol == "Est")
                {
                    if (Est[N].Enf.Congenitas == "") 
                    {
                        Est[N].Enf.Congenitas = Enf;
                    } 
                    else 
                    {
                        Est[N].Enf.Congenitas += ", " + Enf;
                    }
                }
                else if (Rol == "Prof")
                {
                    if (Prof[N].Enf.Congenitas == "") 
                    {
                        Prof[N].Enf.Congenitas = Enf;
                    } 
                    else 
                    {
                        Prof[N].Enf.Congenitas += ", " + Enf;
                    }
                }
                else if (Rol == "Admin")
                {
                    if (Admin[N].Enf.Congenitas == "") 
                    {
                        Admin[N].Enf.Congenitas = Enf;
                    } 
                    else 
                    {
                        Admin[N].Enf.Congenitas += ", " + Enf;
                    }
                }

                Guardar (Var, Est, Prof, Admin);
                cout << "Enfermedad ingresada con exito" << endl;
                cout << "¿Desea ingresar otra enfermedad? Ingrese 1:Sí / 0:No : ";
                R = Opc_Bool();
            } while (R == 1);
        }
        else if (Opc == 9)
        {
            do {
                Limpiar();
                Dibujo = "Healt"; Art();
                cout << "1: Hipercolesterolemia" << endl;
                cout << "2: Hipotiroidismo" << endl;
                cout << "3: Hipertiroidismo" << endl;
                cout << "4: Sindrome metabolico" << endl;
                cout << "5: Resistencia a la insulina" << endl;
                cout << "6: Hiperuricemia" << endl;
                cout << "7: Anemia ferropenica" << endl;
                cout << "8: Deficiencia de vitamina D" << endl;
                cout << "9: Intolerancia a la lactosa" << endl;
                cout << "10: Hemocromatosis" << endl;
                cout << "11: Otra" << endl;
                cout << "Ingrese: ";
                Opc2 = Opc_Menu(Opc_F);

                switch (Opc2)
                {
                    case 1:
                        Enf = "Hipercolesterolemia"; 
                        break;
                    case 2:
                        Enf = "Hipotiroidismo"; 
                        break;
                    case 3:
                        Enf = "Hipertiroidismo"; 
                        break;
                    case 4:
                        Enf = "Sindrome metabolico"; 
                        break;
                    case 5:
                        Enf = "Resistencia a la insulina"; 
                        break;
                    case 6:
                        Enf = "Hiperuricemia"; 
                        break;
                    case 7:
                        Enf = "Anemia ferropenica"; 
                        break;
                    case 8:
                        Enf = "Deficiencia de vitamina D"; 
                        break;
                    case 9:
                        Enf = "Intolerancia a la lactosa"; 
                        break;
                    case 10:
                        Enf = "Hemocromatosis"; 
                        break;
                    default:
                        cout << "Ingrese el nombre de la enfermedad: ";
                        getline(cin >> ws, Enf); 
                        break;
                }

                if (Rol == "Est")
                {
                    if (Est[N].Enf.Metabolicos == "") 
                    {
                        Est[N].Enf.Metabolicos = Enf;
                    } 
                    else 
                    {
                        Est[N].Enf.Metabolicos += ", " + Enf;
                    }
                }
                else if (Rol == "Prof")
                {
                    if (Prof[N].Enf.Metabolicos == "") 
                    {
                        Prof[N].Enf.Metabolicos = Enf;
                    } 
                    else 
                    {
                        Prof[N].Enf.Metabolicos += ", " + Enf;
                    }
                }
                else if (Rol == "Admin")
                {
                    if (Admin[N].Enf.Metabolicos == "") 
                    {
                        Admin[N].Enf.Metabolicos = Enf;
                    } 
                    else 
                    {
                        Admin[N].Enf.Metabolicos += ", " + Enf;
                    }
                }

                Guardar (Var, Est, Prof, Admin);
                cout << "Enfermedad ingresada con exito" << endl;
                cout << "¿Desea ingresar otra enfermedad? Ingrese 1:Sí / 0:No : ";
                R = Opc_Bool();
            } while (R == 1);
        }
        else if (Opc == 10)
        {
            do {
                Limpiar();
                Dibujo = "Healt"; Art();
                cout << "1: Tunel carpiano" << endl;
                cout << "2: Estres laboral" << endl;
                cout << "3: Tendinitis" << endl;
                cout << "4: Silicosis" << endl;
                cout << "5: Lumbalgia cronica" << endl;
                cout << "6: Sordera profesional" << endl;
                cout << "7: Dermatitis por contacto" << endl;
                cout << "8: Burnout" << endl;
                cout << "9: Varices" << endl;
                cout << "10: Epicondilitis" << endl;
                cout << "11: Otra" << endl;
                cout << "Ingrese: ";
                Opc2 = Opc_Menu(Opc_F);

                switch (Opc2)
                {
                    case 1:
                        Enf = "Tunel carpiano"; 
                        break;
                    case 2:
                        Enf = "Estres laboral"; 
                        break;
                    case 3:
                        Enf = "Tendinitis"; 
                        break;
                    case 4:
                        Enf = "Silicosis"; 
                        break;
                    case 5:
                        Enf = "Lumbalgia cronica"; 
                        break;
                    case 6:
                        Enf = "Sordera profesional"; 
                        break;
                    case 7:
                        Enf = "Dermatitis por contacto"; 
                        break;
                    case 8:
                        Enf = "Burnout"; 
                        break;
                    case 9:
                        Enf = "Varices"; 
                        break;
                    case 10:
                        Enf = "Epicondilitis"; 
                        break;
                    default:
                        cout << "Ingrese el nombre de la enfermedad: ";
                        getline(cin >> ws, Enf); 
                        break;
                }

                if (Rol == "Est")
                {
                    if (Est[N].Enf.Ocupacionales == "") 
                    {
                        Est[N].Enf.Ocupacionales = Enf;
                    } 
                    else 
                    {
                        Est[N].Enf.Ocupacionales += ", " + Enf;
                    }
                }
                else if (Rol == "Prof")
                {
                    if (Prof[N].Enf.Ocupacionales == "") 
                    {
                        Prof[N].Enf.Ocupacionales = Enf;
                    } 
                    else 
                    {
                        Prof[N].Enf.Ocupacionales += ", " + Enf;
                    }
                }
                else if (Rol == "Admin")
                {
                    if (Admin[N].Enf.Ocupacionales == "") 
                    {
                        Admin[N].Enf.Ocupacionales = Enf;
                    } 
                    else 
                    {
                        Admin[N].Enf.Ocupacionales += ", " + Enf;
                    }
                }

                Guardar (Var, Est, Prof, Admin);
                cout << GREEN << "Enfermedad ingresada con exito" << RESET << endl;
                cout << "¿Desea ingresar otra enfermedad? Ingrese 1:Sí / 0:No : ";
                R = Opc_Bool();
            } while (R == 1);
        }
            
    } while (Opc != 11);

}