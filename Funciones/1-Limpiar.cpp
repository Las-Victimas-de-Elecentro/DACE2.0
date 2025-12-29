#include "../Main/Header.h"

void Limpiar()
{
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}