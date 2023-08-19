#include <iostream>

using namespace std;

int main()
{
    int a;
    cin >> a;
    bool rango = 18 <= a && a <= 25;
    cout << (rango ? "si" : "no") << endl;
    return 0;
}