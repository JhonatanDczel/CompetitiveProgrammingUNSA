#include <iostream>

using namespace std;

template <class TipoDato>
TipoDato maximo(TipoDato dato, TipoDato dato2, TipoDato dato3)
{
    TipoDato max = dato;
    if (dato2 > max)
        max = dato2;
    if (dato3 > max)
        max = dato3;
    return max;
}

int main()
{
    cout << maximo(2.5, 5.6, 3.2) << endl;
    return 0;
}