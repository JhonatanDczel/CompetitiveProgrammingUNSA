#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char str[30];
    cin.getline(str, 30);
    cout << (strcmp(str, strrev(str)) == 0 ? "si" : "no") << endl;
    return 0;
}