#include <iostream>
#include <cmath>
using namespace std;
int main() {
    float a, b, c, d;
    cin >> a >> b >> c;
    d = sqrt( pow(b, 2) - 4 * a * c );
    cout << "x1 = "<< (- b + d) / (2 * a) << "\nx2 = " << (- b - d) / (2 * a);
    system("pause");
    return 0;

}