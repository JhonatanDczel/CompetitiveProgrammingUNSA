#include <iostream>

using namespace std;

int main()
{
    double t, sum, max, min;
    cin >> t;
    sum = min = max = t;
    for (int i = 4; i < 24; i += 4)
    {
        cin >> t;
        sum += t;
        max = max > t ? max : t;
        min = min < t ? min : t;
    }
    cout << "Promedio: " << sum / 6 << endl;
    cout << "Maximo: " << max << endl;
    cout << "Minimo: " << min << endl;
    return 0;
}