#include <iostream>

using namespace std;

int main()
{
    double nums[5];
    double nums2[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> nums[i];
        nums2[i] = nums[i] * 2;
    }
    for (int i = 0; i < 5; i++)
    {
        cout << nums2[i] << " ";
    }
}