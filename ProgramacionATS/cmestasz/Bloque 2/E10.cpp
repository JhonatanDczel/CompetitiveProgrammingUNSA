#include <cmath>
#include <iostream>

using namespace std;

int main()
{
    double a, b, c;
    cin >> a >> b >> c;
    double disc = sqrt(b * b - 4 * a * c);
    cout << (-b + disc) / (2 * a) << endl;
    cout << (-b - disc) / (2 * a) << endl;
    return 0;
}