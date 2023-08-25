#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    double nums[n];
    cin >> nums[0];
    double max = nums[0];
    for (int i = 1; i < n; i++)
    {
        cin >> nums[i];
        max = (max > nums[i] ? max : nums[i]);
    }
    cout << max;
    return 0;
}