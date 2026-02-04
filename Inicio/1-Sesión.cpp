#include "../Main/Header.h"

using namespace std;

void Sesion (Variables (&Var), Estudiante (&Est)[D], Plan_Evaluacion (&Plan)[D], Reportes (&Rep)[D], Asignacion (&Asig)[D], Clase_Magistral (&Mag)[D], Solicitudes (&Soli)[D], Grupos (&Gru)[D], Clase (&Class)[D], Bloque_Horario (&List)[48], Materias (&Mat)[527], Profesor (&Prof)[D], Administrativo (&Admin)[D], Carnet (&Car)[D], Carnetizacion (&Carn)[D], Pasantias (&Pas)[D], Servicio_Comunitario (&SerC)[D], Market_Place (&MP)[D], Comida_MP (&C_MP)[D], Articulos_MP (&A_MP)[D], Servicios_MP (&S_MP)[D], Amigos (&Amig)[D], Publicaciones (&Publi)[D], Empleado (&Emp)[D], Inscrito (&Ins)[D], Novedades (&Nov)[D], Clubes (&Club)[D], Celebraciones (&Cel)[D], Eventos (&Even)[D], Ayuda_Social (&Soci)[D], Ayuda_Animal (&Anim)[D], Becas (&Beca)[D])
{

    int& N = Var.N;
    string Correo, Password;
    int I;
    int Contador = 0;
    bool Est_Valido = false;

    Limpiar();
    Dibujo = "Login";
    Art();

    cout << "Ingrese su Correo: ";
    cin >> Correo;
    cout << "Ingrese su Contraseña: ";
    cin >> Password;

    do
    {

        Est_Valido = false;

        for (I = 0; I < D; I++)
        {

            if (Est[I].Correo == Correo && Est[I].Password == Password)
            {

                Est_Valido = true;
                N = I;
                Rol = "Est";
                break;

            }
            else if (Prof[I].Correo == Correo && Prof[I].Password == Password)
            {

                Est_Valido = true;
                N = I;
                Rol = "Prof";
                break;

            }
            else if (Admin[I].Correo == Correo && Admin[I].Password == Password)
            {

                Est_Valido = true;
                N = I;
                Rol = "Admin";
                break;

            }

        }

        if (Est_Valido == false)
        {

            Contador++;

            if (Contador >= 3)
            {

                Recuperar_Password(Var, Est, Prof, Admin);
                Contador = 0;

            }

            Limpiar();
            Dibujo = "Login";
            Art();
            
            cout << "Ingrese su Correo nuevamente: ";
            cin >> Correo;
            cout << "Ingrese su Contraseña nuevamente: ";
            cin >> Password;

        }
        else
        {

            cout << GREEN << "Inicio de Sesión exitoso" << RESET << endl;
            Continue();

        }

    } while (Est_Valido == false);

    if (Rol == "Est")
    {

        if (Est[N].Oscuro == false)
        {

            Oscuro = 0;

        }
        else
        {

            Oscuro = 1;

        }

    }
    else if (Rol == "Prof")
    {

        if (Prof[N].Oscuro == 0)
        {

            Oscuro = 0;

        }
        else
        {

            Oscuro = 1;

        }

    }
    else if (Rol == "Admin")
    {

        if (Admin[N].Oscuro == 0)
        {

            Oscuro = 0;

        }
        else
        {

            Oscuro = 1;

        }

    }

    Principal_Global(Var, Est, Plan, Rep, Asig, Mag, Soli, Gru, Class, List, Mat, Prof, Admin, Car, Carn, Pas, SerC, MP, C_MP, A_MP, S_MP, Amig, Publi, Emp, Ins, Nov, Club, Cel, Even, Soci, Anim, Beca);

}