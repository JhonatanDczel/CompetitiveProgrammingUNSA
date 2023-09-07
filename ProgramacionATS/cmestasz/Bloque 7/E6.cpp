#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char str[30];
    char str2[30];
    cin.getline(str, 30);
    cin.getline(str2, 30);
    cout << (strcmp(strupr(str), strupr(str2)) == 0 ? "si" : "no") << endl;
    return 0;
}