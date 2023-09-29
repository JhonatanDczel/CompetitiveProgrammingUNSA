#include <iostream>

using namespace std;

void funpot(int a, int b)
{
    int pot = 1;
    for (int i = 0; i < b; i++)
        pot *= a;
    cout << pot << endl;
}

int main()
{
    int a, b;
    cin >> a >> b;
    funpot(a, b);
    return 0;
}