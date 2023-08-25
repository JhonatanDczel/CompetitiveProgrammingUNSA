#include <iostream>

using namespace std;

int main()
{
    double nums[3][3] = {{2, 3, 4}, {5, 1, 7}, {5, 1, 2}};
    double nums2[3][3] = {{9, 5, 2}, {1, 4, 6}, {4, 3, 9}};
    double numsP[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            double sum = 0;
            for (int k = 0; k < 3; k++)
            {
                sum += nums[i][k] * nums2[k][j];
            }
            numsP[i][j] = sum;
            cout << numsP[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}