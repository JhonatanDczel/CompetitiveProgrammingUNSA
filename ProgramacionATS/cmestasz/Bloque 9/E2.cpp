#include <iostream>

using namespace std;

void al_cuadrado(float a)
{
    cout << a * a << endl;
}

int main()
{
    float a;
    cin >> a;
    al_cuadrado(a);
    return 0;
}