#include "../../Main/Header.h"
using namespace std;

void Registrar_Becas (Variables (&Var), Estudiante (&Est)[D], Becas (&Beca)[D])
{
    int& N = Var.N; 
    int I;
    bool Encontrado = false;
    bool R;

    for (I = 0; I < D; I++)
    {

        if (Est[N].Cedula == Beca[I].CI)
        {

            Encontrado = true;

            Limpiar();
            Dibujo = "Beca"; 
            Art();

            cout << YELLOW << "Usted ya posee una solicitud de beca" << RESET << endl;
            cout << "Nombre: " << Beca[I].Nombre << endl;
            cout << "Cedula: " << Beca[I].CI << endl;
            cout << "Motivo: " << Beca[I].Motivo << endl;
            cout << "Carta Rec.: " << Beca[I].Carta_Recomendacion << endl;
            cout << "Carta Mot.: " << Beca[I].Carta_Motivacion << endl;
            
            if (Beca[I].Verificada == true)
            {
                cout << "Estado: " << GREEN << "Verificada / Aprobada" << RESET << endl;
            }
            else
            {
                cout << "Estado: " << RED << "Pendiente por verificar" << RESET << endl;
            }
            Continue();
            return;

        }

    }

    if (Encontrado == false)
    {

        for (I = 0; I < D; I++)
        {

            if (Beca[I].Nombre == "")
            {

                Limpiar();
                Dibujo = "Beca"; 
                Art();

                cout << CYAN << "Bienvenido al apartado de solicitar becas" << RESET << endl;

                Beca[I].Nombre = Est[N].Nombre;
                Beca[I].CI = Est[N].Cedula;

                cout << "Ingrese el motivo de la beca: ";
                getline(cin >> ws, Beca[I].Motivo);

                Limpiar();
                Dibujo = "Beca"; 
                Art();
                cout << endl << "¿Tiene carta de recomendación? 1: Sí / 0: No : ";
                R = Opc_Bool();

                if (R == 1)
                {
                    Limpiar();
                    Dibujo = "Beca"; 
                    Art();
                    cout << "Ingrese el texto de la carta: ";
                    getline(cin >> ws, Beca[I].Carta_Recomendacion);

                }
                else
                {
                    Limpiar();
                    Dibujo = "Beca"; 
                    Art();
                    cout << "Perfecto, siga adelante." << endl;
                    Beca[I].Carta_Recomendacion = "Ninguna";

                }

                Limpiar();
                Dibujo = "Beca"; 
                Art();
                cout << endl << "¿Tiene carta de motivación? 1: Sí / 0: No : ";
                R = Opc_Bool();

                if (R == 1)
                {
                    Limpiar();
                    Dibujo = "Beca"; 
                    Art();
                    cout << "Ingrese el texto de la carta: ";
                    getline(cin >> ws, Beca[I].Carta_Motivacion);

                }
                else
                {
                Limpiar();
                    Dibujo = "Beca"; 
                    Art();
                    cout << "Perfecto." << endl;
                    Beca[I].Carta_Motivacion = "Ninguna";

                }

                Limpiar();
                Dibujo = "Beca"; 
                Art();
                Beca[I].Verificada = false;
                cout << endl << GREEN << "Solicitud enviada correctamente" << RESET << endl;
                Continue();
                
                return;

            }

        }

    }

}