#include <iostream>

using namespace std;

bool verificar(int nums[][3], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (nums[i][j] != nums[j][i])
                return false;
        }
    }
    return true;
}

int main()
{
    int nums[3][3] = {
        {2, 5, 5},
        {5, 2, 1},
        {5, 1, 0}};
    cout << verificar(nums, 3) << endl;
    return 0;
}