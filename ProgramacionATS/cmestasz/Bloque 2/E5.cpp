#include <iostream>

using namespace std;

int main()
{
    double a, b;
    cin >> a >> b;
    double t = a;
    a = b;
    b = t;
    cout << a << " " << b << endl;
}