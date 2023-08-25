#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char str[30];
    cin.getline(str, 30);
    if (strlen(str) > 10)
    {
        cout << str << endl;
    }
    return 0;
}