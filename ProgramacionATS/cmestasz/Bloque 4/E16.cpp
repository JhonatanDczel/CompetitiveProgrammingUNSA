#include <iostream>

using namespace std;

int main()
{
    int n, div = 2;
    cin >> n;
    while (n != 1)
    {
        while (n % div == 0)
        {
            cout << div << "*";
            n /= div;
        }
        div++;
    }
    return 0;
}