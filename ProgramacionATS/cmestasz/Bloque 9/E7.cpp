#include <iostream>

using namespace std;

void intercambiar(int &n1, int &n2)
{
    int t = n1;
    n1 = n2;
    n2 = t;
}

int main()
{
    int a = 2, b = 5;
    intercambiar(a, b);
    cout << a << " " << b << endl;
    return 0;
}