#include <iostream>

using namespace std;

int main()
{
    double a, b, c, d;
    cin >> a >> b >> c >> d;
    bool coincide = d == a || d == b || d == c;
    cout << (coincide ? "si" : "no") << endl;
    return 0;
}