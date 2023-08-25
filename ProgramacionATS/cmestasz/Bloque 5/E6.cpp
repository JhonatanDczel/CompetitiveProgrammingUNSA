#include <iostream>

using namespace std;

int main()
{
    double nums[] = {2, 5, 10, 3};
    for (int i = 0; i < 4; i++)
    {
        double sum = 0;
        for (int j = 0; j < 4; j++)
        {
            if (i == j)
            {
                continue;
            }
            sum += nums[j];
        }
        if (nums[i] == sum)
        {
            cout << nums[i] << endl;
        }
    }
    return 0;
}