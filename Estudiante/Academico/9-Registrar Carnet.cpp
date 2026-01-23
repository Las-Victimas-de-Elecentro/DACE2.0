#include "../../Main/Header.h"
using namespace std;

void Carnet_Est (Variables (&Var), Estudiante (&Est)[D], Carnet (&Car)[D], Carnetizacion (&Carn)[D])
{
    int& N = Var.N;
    int I, P = -1;
    bool R, Registrado = false, Pagado = false;

    Limpiar();
    Dibujo = "Card"; Art();
    cout << CYAN << "Sistema de carnetización" << RESET << endl;

    for (I = 0; I < D; I++)
    {
        if (Carn[I].Lugar != "")
        {
            if (Carn[I].Est.Cedula == Est[N].Cedula)
            {
                Registrado = true;
                P = I;
                if (Carn[I].Est.Pago == true)
                {
                    Pagado = true;
                }
                break;
            }
        }
    }

    Limpiar();
    Dibujo = "Card"; Art();

    if (Registrado == true)
    {
        if (Pagado == true)
        {
            cout << GREEN << "Pago válido, aquí tiene su carnet" << RESET << endl;
            cout << CYAN << "Carnet Universitario" << RESET << endl;
            cout << "Nombre: " << Car[N].Nombre << endl;
            cout << "Apellido: " << Car[N].Apellido << endl;
            cout << "Cédula: " << Car[N].Cedula << endl;
            cout << "Carrera: " << Car[N].Carrera << endl;
            cout << "Vencimiento: " << Car[N].Vencido.Dia << "/" << Car[N].Vencido.Mes << "/" << Car[N].Vencido.Year << endl;
        }
        else
        {
            cout << YELLOW << "Esperando transferencia" << RESET << endl;
            cout << "Sede: " << Carn[P].Lugar << " | Monto: " << Carn[P].Precio << "$" << endl;
            cout << "Por favor, diríjase a la sede con su comprobante" << endl;
        }
        Continue();
    }
    else
    {
        int Cont_Carn = 0;
        for (I = 0; I < D; I++)
        {
            if (Carn[I].Activo == 1 && Carn[I].Carrera == Est[N].Carrera && Carn[I].Est.Nombre == "")
            {
                Cont_Carn++;
                cout << "Sede: " << Carn[I].Lugar << " | Fecha: " << Carn[I].Fecha.Dia << "/" << Carn[I].Fecha.Mes << "/" << Carn[I].Fecha.Year << endl;
                cout << "Precio: " << Carn[I].Precio << "$" << endl;
                cout << "¿Desea solicitar su carnet aquí? Ingrese: 1: Si / 0: No: ";
                R = Opc_Bool();

                if (R == 1)
                {
                    Carn[I].Est.Nombre = Est[N].Nombre;
                    Carn[I].Est.Apellido = Est[N].Apellido;
                    Carn[I].Est.Cedula = Est[N].Cedula;
                    Carn[I].Est.Pago = false;

                    cout << GREEN << "Registro completado." << RESET << endl;
                    Guardar_Carn(Car, Carn);
                    Continue();
                    return;
                }
            }
        }
        
        if (Cont_Carn == 0)
        {
            cout << RED << "No hay operativos disponibles para tu carrera." << RESET << endl;
            Continue();
        }
    }
}