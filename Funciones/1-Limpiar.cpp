#include "../Main/Header.h"

void Limpiar()
{
    if (Oscuro == 0) {
        cout << "\033[0m\033[2J\033[H" << flush;
    } else {
        cout << "\033[30;47m\033[2J\033[H" << flush;
    }
}