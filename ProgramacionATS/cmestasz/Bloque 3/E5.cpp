#include <iostream>

using namespace std;

int main()
{
    char a;
    cin >> a;
    bool vm = a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u';
    cout << (vm ? "si" : "no") << endl;
    return 0;
}