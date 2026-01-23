#include "../Main/Header.h"
#include <limits>
using namespace std;

void Continue()
{
    cout << MAGENTA << "Presione Enter para continuar..." << RESET;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin.get();
}