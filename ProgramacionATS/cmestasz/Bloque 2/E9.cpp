#include <cmath>
#include <iostream>

using namespace std;

int main()
{
    double x, y;
    cin >> x >> y;
    cout << sqrt(x) / (y * y - 1) << endl;
    return 0;
}