#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char str[14] = "Hola que tal ";
    char str2[30];
    cin.getline(str2, 30);
    cout << strcat(str, str2) << endl;
    return 0;
}