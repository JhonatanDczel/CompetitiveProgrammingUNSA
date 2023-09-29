#include <iostream>

using namespace std;

void escribeNumeros(int ini, int fin)
{
    if (ini == fin)
    {
        cout << ini << endl;
        return;
    }
    cout << ini << " ";
    escribeNumeros(ini + 1, fin);
}

int main()
{
    int ini = 2, fin = 45;
    escribeNumeros(ini, fin);
    return 0;
}