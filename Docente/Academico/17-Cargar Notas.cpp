#include "../../Main/Header.h"
using namespace std;

void Cargar_Notas (Variables (&Var), Estudiante (&Est)[D], Plan_Evaluacion (&Plan)[D], Reportes (&Rep)[D], Asignacion (&Asig)[D], Clase_Magistral (&Mag)[D], Solicitudes (&Soli)[D], Grupos (&Gru)[D], Clase (&Class)[D], Materias (&Mat)[527], Profesor (&Prof)[D], Administrativo (&Admin)[D])
{
    int& N = Var.N;
    int& Opc_F = Var.Opc_F;

    string& Car = Var.Car;
    int& T = Var.T, I2 = Var.I2, Note = Var.Note;

    int I, J, K, Es = -1, Cont, Opc_Mat, Opc_Car;
    bool R;
    string Elegida;

    do {
        Limpiar();
        Dibujo = "Academic"; Art();

        Es = -1;
        cout << CYAN << "Bienvenido al apartado de cargar notas en el sistema" << RESET << endl;
        
        cout << "¿Cual es la Carrera en la que desea cargar notas?" << endl;
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
        Opc_Car = Opc_Menu(Opc_F);

        switch (Opc_Car)
        {
            case 1: 
                Car = "Informática"; 
                break;
            case 2: 
                Car = "Civil"; 
                break;
            case 3: 
                Car = "Hidrocarburo"; 
                break;
            case 4: 
                Car = "Medicina"; 
                break;
            case 5: 
                Car = "Odontología"; 
                break;
            case 6: 
                Car = "Veterinaria"; 
                break;
            case 7: 
                Car = "Derecho"; 
                break;
            case 8: 
                Car = "Social"; 
                break;
            case 9: 
                Car = "Contaduría"; 
                break;
            case 10: 
                Car = "Economía"; 
                break;
        }

        Limpiar();
        Dibujo = "Academic"; Art();

        if (Prof[N].Materias != "")
        {
            cout << "Materias Registradas" << endl;
            cout << "¿A que materia le cargara notas?" << endl;
            Cont = Salto_Numerado(Prof[N].Materias);
            cout << endl;
            
            Opc_F = Cont;
            cout << "Ingrese Opcion: ";
            Opc_Mat = Opc_Menu(Opc_F);
            Elegida = Obtener_Materia(Prof[N].Materias, Opc_Mat);

            for (I = 0; I < 527; I++)
            {
                if (Mat[I].Nombre == Elegida)
                {
                    T = I; 
                    break;
                }
            }

            int Pos_Clase = -1;
            for (I = 0; I < D; I++)
            {
                if (Class[I].Nombre_Materia == Elegida)
                {
                    Pos_Clase = I;
                    break;
                }
            }

            if (Pos_Clase != -1)
            {
                for (J = 0 ; J < Class[Pos_Clase].Cant_Estudiantes ; J++)
                {
                    for (K = 0; K < D; K++)
                    {
                        if (Est[K].Cedula == Class[Pos_Clase].Est_Class.Cedula[J] && Est[K].Carrera == Car)
                        {
                            Limpiar();
                            Dibujo = "Academic"; Art();
                            
                            cout << "Estudiante: " << Class[Pos_Clase].Est_Class.Nombre[J] << " " << Class[Pos_Clase].Est_Class.Apellido[J];
                            cout << " | CI: " << Class[Pos_Clase].Est_Class.Cedula[J] << endl;
                            
                            cout << "Ingrese la nota para este estudiante: ";
                            Note = Notas();
                            
                            I2 = K;
                            
                            Notas_Materias_Prof(Var, Est, Mat);
                            Es = 1;
                            break;
                        }
                    }
                }
            }

            Limpiar();
            Dibujo = "Academic"; Art();

            if (Es != -1)
            {
                cout << GREEN << "Notas cargadas con éxito" << RESET << endl;
                Guardar_Academic(Var, Est, Plan, Rep, Asig, Mag, Soli, Gru, Class, Mat, Prof, Admin);
                Continue();
            }
            else
            {
                cout << RED << "No existen estudiantes de " << Car << " registrados en esta clase." << RESET << endl;
                Continue();
            }

            cout << "¿Desea cargar notas de otra materia? Ingrese: 1: Sí / 0: No : ";
            R = Opc_Bool();
        }
        else
        {
            cout << RED << "No has registrado ninguna Materia" << RESET << endl;
            Continue();
            return;
        }

    } while (R == 1);
}