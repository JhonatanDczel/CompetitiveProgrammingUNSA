#include <iostream>

using namespace std;

int main()
{
    int n, f0 = 1, f1 = 1, f2 = 2;
    cin >> n;
    for (int i = 1; i < n; i++) {
        f2 = f0 + f1;
        f0 = f1;
        f1 = f2;
    }
    cout << f0 << endl;
    return 0;
}