#include <iostream>

using namespace std;

int main()
{
    int r, c;
    cin >> r >> c;
    double nums[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> nums[i][j];
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << nums[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}