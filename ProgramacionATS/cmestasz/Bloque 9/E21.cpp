#include <iostream>

using namespace std;

int potencia(int x, int y)
{
    if (y == 0)
        return 1;
    if (y == 1)
        return x;
    return x * potencia(x, y - 1);
}

int main()
{
    int x = 3, y = 5;
    cout << potencia(x, y) << endl;
    return 0;
}