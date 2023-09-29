#include <iostream>

using namespace std;

bool verificar(int nums[], int n)
{
    int suma = 0;
    for (int i = 1; i < n; i++)
    {
        if (nums[i - 1] > nums[i])
            return false;
    }
    return true;
}

int main()
{
    int nums[4] = {2, 5, 10, 9};
    bool suma = verificar(nums, 4);
    cout << suma << endl;
    return 0;
}