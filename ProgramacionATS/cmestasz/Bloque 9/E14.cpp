#include <iostream>

using namespace std;

void imprimir(int nums[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (nums[i] % 2 == 1)
            cout << nums[i] << " ";
    }
}

int main()
{
    int nums[4] = {5, 0, 1, 8};
    imprimir(nums, 4);
    return 0;
}