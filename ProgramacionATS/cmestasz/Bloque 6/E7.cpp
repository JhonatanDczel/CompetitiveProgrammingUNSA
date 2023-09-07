#include <iostream>

using namespace std;

int main()
{
    double nums[3][3] = {{1, 0, 0}, {0, 1, 2}, {0, 2, 1}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (nums[i][j] != nums[j][i])
            {
                cout << "no" << endl;
                return 0;
            }
        }
    }
    cout << "si" << endl;
    return 0;
}