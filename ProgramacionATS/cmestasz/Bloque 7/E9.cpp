#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char str[30];
    cin.getline(str, 30);
    strlwr(str);
    int v1, v2, v3, v4, v5;
    v1 = v2 = v3 = v4 = v5 = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        switch (str[i])
        {
        case 'a':
            v1++;
            break;
        case 'e':
            v2++;
            break;
        case 'i':
            v3++;
            break;
        case 'o':
            v4++;
            break;
        case 'u':
            v5++;
            break;
        }
    }
    cout << "a: " << v1 << endl;
    cout << "e: " << v2 << endl;
    cout << "i: " << v3 << endl;
    cout << "o: " << v4 << endl;
    cout << "u: " << v5 << endl;
    return 0;
}