#include <iostream>

using namespace std;

int main()
{
    double nums[3][3] = {{0, 5, 3}, {8, 4, 1}, {9, 5, 1}};
    for (int i = 0, j = 0; i < 3 && j < 3; i++, j++)
    {
        cout << nums[i][j] << endl;
    }
    return 0;
}