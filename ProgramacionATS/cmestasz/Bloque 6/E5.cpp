#include <iostream>

using namespace std;

int main()
{
    double nums[3][3];
    double numsT[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> nums[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            numsT[i][j] = nums[j][i];
            cout << numsT[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}