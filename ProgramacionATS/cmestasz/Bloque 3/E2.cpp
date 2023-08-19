#include <iostream>

using namespace std;

int main()
{
    double a, b, c;
    cin >> a >> b >> c;
    double m1 = a > b ? a : b;
    cout << (m1 > c ? m1 : c) << endl;
    return 0;
}