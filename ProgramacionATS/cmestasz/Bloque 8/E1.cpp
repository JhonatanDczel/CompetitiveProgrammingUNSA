#include <iostream>
#include <string.h>
using namespace std;

struct Corredor
{
    char nombre[30];
    int edad;
    char sexo;
    char club[30];
} corredor;

int main()
{
    char categoria[30];
    cin.getline(corredor.nombre, 30);
    cin >> corredor.edad;
    cin >> corredor.sexo;
    fflush(stdin);
    cin.getline(corredor.club, 30);
    if (corredor.edad <= 18)
    {
        strcpy(categoria, "juvenil");
    }
    else if (corredor.edad <= 40)
    {
        strcpy(categoria, "senior");
    }
    else
    {
        strcpy(categoria, "veterano");
    }
    cout << corredor.nombre << endl;
    cout << corredor.edad << endl;
    cout << corredor.sexo << endl;
    cout << corredor.club << endl;
    cout << categoria << endl;
    return 0;
}
