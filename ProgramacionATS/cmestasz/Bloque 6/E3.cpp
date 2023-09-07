#include <iostream>

using namespace std;

int main()
{
    double nums[2][2] = {{2, 3}, {4, 5}};
    double nums2[2][2];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            nums2[i][j] = nums[i][j];
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << nums2[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}