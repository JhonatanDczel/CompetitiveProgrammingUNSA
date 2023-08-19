#include <iostream>

using namespace std;

int main()
{
    char a;
    cin >> a;
    if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u')
    {
        cout << "vocal minuscula" << endl;
    }
    else if (a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U')
    {
        cout << "vocal mayuscula" << endl;
    }
    else
    {
        cout << "no vocal" << endl;
    }
    return 0;
}