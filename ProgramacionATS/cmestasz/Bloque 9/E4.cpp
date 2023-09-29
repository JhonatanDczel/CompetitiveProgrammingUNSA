#include <iostream>

using namespace std;

float frac(float a)
{
    return a - (int) a ;
}

int main()
{
    float a;
    cin >> a;
    float res = frac(a);
    cout << res << endl;
    return 0;
}