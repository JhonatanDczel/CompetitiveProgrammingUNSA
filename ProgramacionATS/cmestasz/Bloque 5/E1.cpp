#include <iostream>

using namespace std;

int main()
{
    int sum = 0;
    double nums[] = {2, 5, 6, 3};
    for (int i = 0; i < 4; i++)
    {
        sum += nums[i];
    }
    cout << sum << endl;
    return 0;
}