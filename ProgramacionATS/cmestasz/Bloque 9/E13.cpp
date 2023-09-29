#include <iostream>

using namespace std;

void invertir(int nums[], int n)
{
    for (int i = 0; i < n; i++)
        nums[i] *= -1;
}

int main()
{
    int nums[4] = {5, 0, -2, 7};
    invertir(nums, 4);
    cout << nums[0] << " " << nums[1] << " " << nums[2] << " " << nums[3] << endl;
    return 0;
}