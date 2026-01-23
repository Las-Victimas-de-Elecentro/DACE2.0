#include "../Main/Header.h"
#include <limits>
using namespace std;

void Continuar()
{
    cout << MAGENTA << "Presione Enter para continuar..." << RESET;
    
    cin.clear(); 
    
    if (cin.rdbuf()->in_avail() > 0)
    {
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    string pausa;
    getline(cin, pausa);
}

