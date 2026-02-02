#include "../../Main/Header.h"
using namespace std;

void Guardar_MarketPlace (Market_Place (&MP)[D], Comida_MP (&C_MP)[D], Articulos_MP (&A_MP)[D], Servicios_MP (&S_MP)[D])
{
    ofstream Archivo("Base de datos/Marketplaces/Cuentas.csv");
    if (Archivo.is_open())
    {
        Archivo << "Usuario;Cedula;Contacto;Password;Datos_Bancarios;Area;Boveda;Ingresos;Egresos;Bitacora" << endl;
        
        for (int i = 0; i < D; i++)
        {
            if (MP[i].Usuario != "")
            {
                Archivo << MP[i].Usuario << ";";
                Archivo << MP[i].Cedula << ";";
                Archivo << MP[i].Contacto << ";";
                Archivo << MP[i].Password << ";";
                Archivo << MP[i].Datos_Bancarios << ";";
                Archivo << MP[i].Area << ";";
                Archivo << MP[i].Boveda << ";";
                Archivo << MP[i].Ingresos << ";";
                Archivo << MP[i].Egresos << ";";
                Archivo << MP[i].Bitacora << endl;
            }
        }
        Archivo.close();
    }

    string Ruta_Mark_C = "Base de datos/Marketplaces/Comida.csv";
    ofstream Mark_C(Ruta_Mark_C);
    if (Mark_C.is_open())
    {
        Mark_C << "Vendedor;Cedula;Contacto;Datos_Bancarios;Producto;Stock;Precio" << endl;
        
        int MA = 0;
        while (MA < D)
        {
            if (C_MP[MA].Vendedor != "")
            {
                Mark_C << C_MP[MA].Vendedor << ";";
                Mark_C << C_MP[MA].Cedula << ";";
                Mark_C << C_MP[MA].Contacto << ";";
                Mark_C << C_MP[MA].Datos_Bancarios << ";";
                Mark_C << C_MP[MA].Producto << ";";
                Mark_C << C_MP[MA].Stock << ";";
                Mark_C << C_MP[MA].Precio << endl;
            }
            MA++;
        }
        Mark_C.close();
    }

    string Ruta_Mark_A = "Base de datos/Marketplaces/Articulos.csv";
    ofstream Mark_A(Ruta_Mark_A);
    if (Mark_A.is_open())
    {
        Mark_A << "Vendedor;Cedula;Contacto;Datos_Bancarios;Producto;Stock;Precio" << endl;
        
        int MA = 0;
        while (MA < D)
        {
            if (A_MP[MA].Vendedor != "")
            {
                Mark_A << A_MP[MA].Vendedor << ";";
                Mark_A << A_MP[MA].Cedula << ";";
                Mark_A << A_MP[MA].Contacto << ";";
                Mark_A << A_MP[MA].Datos_Bancarios << ";";
                Mark_A << A_MP[MA].Producto << ";";
                Mark_A << A_MP[MA].Stock << ";";
                Mark_A << A_MP[MA].Precio << endl;
            }
            MA++;
        }
        Mark_A.close();
    }

    string Ruta_Mark_S = "Base de datos/Marketplaces/Servicios.csv";
    ofstream Mark_S(Ruta_Mark_S);
    if (Mark_S.is_open())
    {
        Mark_S << "Vendedor;Cedula;Disponibilidad;Precio;Contacto;Datos_Bancarios;Producto" << endl;
        
        int MA = 0;
        while (MA < D)
        {
            if (S_MP[MA].Vendedor != "")
            {
                Mark_S << S_MP[MA].Vendedor << ";";
                Mark_S << S_MP[MA].Cedula << ";";
                Mark_S << S_MP[MA].Disp << ";";
                Mark_S << S_MP[MA].Precio << ";";
                Mark_S << S_MP[MA].Contacto << ";";
                Mark_S << S_MP[MA].Datos_Bancarios << ";";
                Mark_S << S_MP[MA].Producto << endl;
            }
            MA++;
        }
        Mark_S.close();
    }

}