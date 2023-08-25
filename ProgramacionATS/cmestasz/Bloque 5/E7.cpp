#include <iostream>

using namespace std;

int main()
{
    char chars1[] = {'a', 'b', 'c'};
    char chars2[] = {'d', 'f', 'h'};
    char res[6];
    for (int i = 0; i < 3; i++)
    {
        res[i] = chars1[i];
    }
    for (int i = 0; i < 3; i++)
    {
        res[i + 3] = chars2[i];
    }
    for (int i = 0; i < 6; i++)
    {
        cout << res[i] << " ";
    }
}