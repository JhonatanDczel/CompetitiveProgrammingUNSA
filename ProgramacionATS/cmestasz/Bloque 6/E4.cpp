#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    srand(time(NULL));
    int r, c;
    cin >> r >> c;
    double nums[r][c];
    double nums2[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            nums[i][j] = 1 + rand() % 100;
            nums2[i][j] = nums[i][j];
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << nums2[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}