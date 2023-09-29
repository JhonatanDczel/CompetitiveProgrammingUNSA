#include <iostream>

using namespace std;

int menor(int nums[][3], int n, int fila)
{
    int posMin = 0;
    for (int i = 0; i < n; i++)
    {
        if (nums[fila][i] < nums[fila][posMin])
            posMin = i;
    }
    return nums[fila][posMin];
}

int main()
{
    int nums[3][3] = {
        {2, 5, 5},
        {5, 2, 1},
        {5, 1, 0}};
    cout << menor(nums, 3, 1) << endl;
    return 0;
}