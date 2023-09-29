#include <iostream>

using namespace std;

int sumar(int n)
{
    if (n == 0)
        return 0;
    return n + sumar(n - 1);
}

int main()
{
    int n = 7;
    cout << sumar(n) << endl;
    return 0;
}