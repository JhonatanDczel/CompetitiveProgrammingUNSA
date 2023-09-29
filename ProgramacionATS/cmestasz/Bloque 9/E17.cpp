#include <iostream>

using namespace std;

struct Complejo
{
    float a, b;
} z1, z2;

Complejo sumar(Complejo z1, Complejo z2)
{
    Complejo z3;
    z3.a = z1.a + z2.a;
    z3.b = z1.b + z2.b;
    return z3;
}

int main()
{
    z1.a = 2;
    z1.b = 2.5;
    z2.a = 1;
    z2.b = 3.3;
    Complejo res = sumar(z1, z2);
    cout << res.a << "i + " << res.b << endl;
    return 0;
}