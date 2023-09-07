#include <iostream>

using namespace std;

int main()
{
    int n, sum = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int exp = 1;
        for (int j = 1; j <= i; j++)
        {
            exp *= 2;
        }
        sum += exp;
    }
    cout << sum << endl;
    return 0;
}