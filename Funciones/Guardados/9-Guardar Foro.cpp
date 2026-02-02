#include "../../Main/Header.h"
using namespace std;

void Guardar_Foro (Publicaciones (&Publi)[D])
{
    ofstream Arch_Pub("Base de datos/Social/Publicaciones.csv");
    ofstream Arch_Com("Base de datos/Social/Comentarios.csv");
    ofstream Arch_Res("Base de datos/Social/Respuestas.csv");

    if (Arch_Pub.is_open() && Arch_Com.is_open() && Arch_Res.is_open())
    {

        Arch_Pub << "ID;CI;Imagen;Autor;Normas;Tema;Texto;Dia;Mes;Year;Gusta;Encanta;Importa;Divierte;Asombra;Entristece;Molesta;Cant_Reac;Cant_Coment;Activo;Etiquetas;Mi_Reac;CI_Reac" << endl;
        Arch_Com << "ID_Pub;ID_Com;Autor;Texto;Dia;Mes;Year;Gusta;Encanta;Importa;Divierte;Asombra;Entristece;Molesta;Cant_Reac;Mi_Reac;CI_Reac" << endl;
        Arch_Res << "ID_Com;Autor;Texto;Dia;Mes;Year;Gusta;Encanta;Importa;Divierte;Asombra;Entristece;Molesta;Cant_Reac;Mi_Reac;CI_Reac" << endl;

        for (int i = 0; i < D; i++)
        {

            if (Publi[i].Activo == true)
            {

                Arch_Pub << Publi[i].ID << ";" << Publi[i].CI << ";" << Publi[i].Imagen << ";" << Publi[i].Autor << ";" << Publi[i].Normas << ";" << Publi[i].Tema << ";" << Publi[i].Texto << ";";
                Arch_Pub << Publi[i].Fecha.Dia << ";" << Publi[i].Fecha.Mes << ";" << Publi[i].Fecha.Year << ";";
                Arch_Pub << Publi[i].Reac.Cant_Gusta << ";" << Publi[i].Reac.Cant_Encanta << ";" << Publi[i].Reac.Cant_Importa << ";" << Publi[i].Reac.Cant_Divierte << ";" << Publi[i].Reac.Cant_Asombra << ";" << Publi[i].Reac.Cant_Entristece << ";" << Publi[i].Reac.Cant_Molesta << ";";
                Arch_Pub << Publi[i].Cant_Reac << ";" << Publi[i].Cant_Coment << ";" << Publi[i].Activo << ";";
                
                for(int e = 0; e < 50; e++) { if(Publi[i].Etiqueta[e] != "") Arch_Pub << Publi[i].Etiqueta[e] << " "; }
                Arch_Pub << ";";
                for(int r : Publi[i].Mi_Reaccion) Arch_Pub << r << " ";
                Arch_Pub << ";";
                for(long c : Publi[i].CI_Reaccion) Arch_Pub << c << " ";
                Arch_Pub << endl;

                for (const auto& com : Publi[i].Coment)
                {

                    Arch_Com << Publi[i].ID << ";" << com.ID << ";" << com.Autor << ";" << com.Comentario << ";" << com.Fecha.Dia << ";" << com.Fecha.Mes << ";" << com.Fecha.Year << ";";
                    Arch_Com << com.Reac.Cant_Gusta << ";" << com.Reac.Cant_Encanta << ";" << com.Reac.Cant_Importa << ";" << com.Reac.Cant_Divierte << ";" << com.Reac.Cant_Asombra << ";" << com.Reac.Cant_Entristece << ";" << com.Reac.Cant_Molesta << ";" << com.Cant_Reac << ";";
                    for(int r : com.Mi_Reaccion) Arch_Com << r << " ";
                    Arch_Com << ";";
                    for(long c : com.CI_Reaccion) Arch_Com << c << " ";
                    Arch_Com << endl;

                    for (const auto& res : com.Resp)
                    {

                        Arch_Res << com.ID << ";" << res.Autor << ";" << res.Respuesta << ";" << res.Fecha.Dia << ";" << res.Fecha.Mes << ";" << res.Fecha.Year << ";";
                        Arch_Res << res.Reac.Cant_Gusta << ";" << res.Reac.Cant_Encanta << ";" << res.Reac.Cant_Importa << ";" << res.Reac.Cant_Divierte << ";" << res.Reac.Cant_Asombra << ";" << res.Reac.Cant_Entristece << ";" << res.Reac.Cant_Molesta << ";" << res.Cant_Reac << ";";
                        for(int r : res.Mi_Reaccion) Arch_Res << r << " ";
                        Arch_Res << ";";
                        for(long c : res.CI_Reaccion) Arch_Res << c << " ";
                        Arch_Res << endl;
                    }
                }
            }
        }
    }
    Arch_Pub.close(); Arch_Com.close(); Arch_Res.close();
}