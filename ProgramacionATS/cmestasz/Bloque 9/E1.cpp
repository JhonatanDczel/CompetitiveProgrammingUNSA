#include <iostream>

using namespace std;

void mult(float a, float b)
{
    cout << a * b << endl;
}

int main()
{
    float a, b;
    cin >> a >> b;
    mult(a, b);
    return 0;
}