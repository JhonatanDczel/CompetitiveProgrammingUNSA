#include <iostream>

using namespace std;

int main()
{
    int cA, cB, cC;
    cA = cB = cC = 0;
    for (int i = 0; i < 5; i++)
    {
        double n1, n2, n3;
        bool c1, c2, c3;
        cin >> n1 >> n2 >> n3;
        c1 = n1 >= 10.5;
        c2 = n2 >= 10.5;
        c3 = n3 >= 10.5;
        if (c1 && c2 && c3)
        {
            cA++;
        }
        if (c1 || c2 || c3)
        {
            cB++;
        }
        if (!c1 && !c2 && c3)
        {
            cC++;
        }
    }
    cout << "Aprobaron todos: " << cA << endl;
    cout << "Aprobaron al menos 1: " << cB << endl;
    cout << "Solo aprobaron el 3ro: " << cC << endl;
    return 0;
}