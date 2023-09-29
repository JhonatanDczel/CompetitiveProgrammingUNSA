#include <iostream>

using namespace std;

template <class TipoDato>
void despliegue(TipoDato dato)
{
    cout << dato << endl;
}

int main()
{
    despliegue(2.5);
    despliegue(5);
    despliegue('z');
    return 0;
}