#include <iostream>

using namespace std;

int main()
{
    char opc;
    int cant;
    cout << "depositar (d), retirar (r): ";
    cin >> opc;
    cout << "cantidad: ";
    cin >> cant;
    if (cant < 0)
    {
        return 0;
    }
    switch (opc)
    {
    case 'd':
        cout << "saldo: " << 1000 + cant << endl;
        break;
    case 'r':
        if (1000 - cant < 0)
        {
            return 0;
        }
        cout << "saldo: " << 1000 - cant << endl;
        break;
    }
    return 0;
}