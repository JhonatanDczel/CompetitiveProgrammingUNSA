#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char str[30];
    char str2[30];
    cin.getline(str, 30);
    cin.getline(str2, 30);
    if (strcmp(str, str2) == 0)
    {
        cout << "si" << endl;
    }
    else
    {
        cout << (strcmp(str, str2) < 0 ? str : str2) << endl;
    }
    return 0;
}