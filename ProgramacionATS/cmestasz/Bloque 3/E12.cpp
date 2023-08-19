#include <iostream>

using namespace std;

int main()
{
    int opc;
    cout << "cubo (1), par o impar (2), salir (3): ";
    cin >> opc;
    if (opc == 3)
    {
        return 0;
    }
    int num;
    cout << "numero: ";
    cin >> num;
    switch (opc)
    {
    case 1:
        cout << num * num * num << endl;
        break;
    case 2:
        cout << (num % 2 == 0 ? "par" : "impar") << endl;
        break;
    }
    return 0;
}