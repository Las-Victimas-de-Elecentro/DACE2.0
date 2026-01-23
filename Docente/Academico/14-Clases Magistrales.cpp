#include "../../Main/Header.h"
using namespace std;

void Magistrales_Prof (Variables (&Var), Estudiante (&Est)[D], Plan_Evaluacion (&Plan)[D], Reportes (&Rep)[D], Asignacion (&Asig)[D], Clase_Magistral (&Mag)[D], Solicitudes (&Soli)[D], Grupos (&Gru)[D], Clase (&Class)[D], Materias (&Mat)[527], Profesor (&Prof)[D], Administrativo (&Admin)[D])
{
    int& N = Var.N;
    int& Opc_F = Var.Opc_F;
    int I, J, K, M = -1, Opc_Car;
    bool R, Repetido;
    string Nombre_Mag;

    do 
    {
        M = -1;
        Limpiar();
        Dibujo = "BookTwo"; Art();

        cout << CYAN << "Bienvenido a la sección de Clases Magistrales" << RESET << endl;
        
        for (J = 0 ; J < D ; J++)
        {
            if (Mag[J].Nombre_Clase == "")
            {
                M = J;
                break;
            }
        }

        if (M != -1)
        {
            cout << "¿Cual es la Carrera a la que va dirigida la clase magistral?" << endl;
            cout << "1: Informática" << endl;
            cout << "2: Civil" << endl;
            cout << "3: Hidrocarburo" << endl;
            cout << "4: Medicina" << endl;
            cout << "5: Odontología" << endl;
            cout << "6: Veterinaria" << endl;
            cout << "7: Derecho" << endl;
            cout << "8: Social" << endl;
            cout << "9: Contaduría" << endl;
            cout << "10: Economía" << endl;
            
            Opc_F = 10;
            cout << "Ingrese Opcion: ";
            Opc_Car = Opc_Menu(Opc_F);

            switch (Opc_Car)
            {
                case 1:
                    Mag[M].Carrera = "Informática";
                    break;
                case 2:
                    Mag[M].Carrera = "Civil";
                    break;
                case 3:
                    Mag[M].Carrera = "Hidrocarburo";
                    break;
                case 4:
                    Mag[M].Carrera = "Medicina";
                    break;
                case 5:
                    Mag[M].Carrera = "Odontología";
                    break;
                case 6:
                    Mag[M].Carrera = "Veterinaria";
                    break;
                case 7:
                    Mag[M].Carrera = "Derecho";
                    break;
                case 8:
                    Mag[M].Carrera = "Social";
                    break;
                case 9:
                    Mag[M].Carrera = "Contaduría";
                    break;
                case 10:
                    Mag[M].Carrera = "Economía";
                    break;
            }

            Limpiar();
            Dibujo = "BookTwo"; Art();        
            do
            {
                Repetido = 0;
                cout << "Ingrese el nombre de la clase magistral: ";
                Nombre_Mag = Palabra();

                for (K = 0 ; K < D ; K++)
                {
                    if (Mag[K].Nombre_Clase == Nombre_Mag)
                    {
                        cout << RED << "Ya existe una clase magistral con ese nombre." << RESET << endl;
                        Repetido = 1;
                        break;
                    }
                }

            } while (Repetido == 1);

            Mag[M].Nombre_Clase = Nombre_Mag;

            Prof[N].Cant_Mag++;
            if (Prof[N].Magistral == "") 
            {
                Prof[N].Magistral = Nombre_Mag;
            } 
            else 
            {
                Prof[N].Magistral += ", " + Nombre_Mag;
            }

            cout << "Ingrese fecha de la clase" << endl;

            cout << "Dia: ";
            Mag[M].Fecha.Dia = Dia_User();

            cout << "Mes: ";
            Mag[M].Fecha.Mes = Mes_User();

            cout << "Año: ";
            Mag[M].Fecha.Year = Year_User();

            cout << "Cuántas horas durará: ";
            Mag[M].Horas = Horas_Academic();

            cout << "Ingrese el aula en donde se realizará la clase: ";
            Mag[M].Aula = Entero();

            cout << "Ingrese el precio que costará dicha clase: ";
            Mag[M].Precio = Real();

            Mag[M].Nombre_Profesor = Prof[N].Nombre;
            Mag[M].Apellido_Profesor = Prof[N].Apellido;
            Mag[M].CI_Profesor = Prof[N].Cedula;
            Mag[M].Cant_Estudiantes = 0;
            Mag[M].Autorizacion = 1; 

            Limpiar();
            Dibujo = "BookTwo"; Art();

            cout << GREEN << "Solicitud de clase magistral enviada correctamente" << RESET << endl;
            
            Guardar_Academic(Var, Est, Plan, Rep, Asig, Mag, Soli, Gru, Class, Mat, Prof, Admin);
            
            Continue();
        }
        else
        {
            cout << RED << "No se pueden asignar mas clases magistrales" << RESET << endl;
            Continue();
            return;
        }

        cout << "¿Desea asignar otra clase magistral? Ingrese: 1: Sí / 0: No : ";
        R = Opc_Bool();

    } while (R == 1);
}