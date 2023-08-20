#include <iostream>

using namespace std;

int main()
{
    int num, count = 0;
    do
    {
        cin >> num;
        if (num > 0)
        {
            count++;
        }
    } while (num != 0);
    cout << "Cuenta: " << count << endl;
    return 0;
}