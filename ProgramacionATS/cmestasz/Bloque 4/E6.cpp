#include <iostream>

using namespace std;

int main()
{
    int x, y, pow = 1;
    cin >> x >> y;
    for (int i = 0; i < y; i++)
    {
        pow *= x;
    }
    cout << pow << endl;
    return 0;
}