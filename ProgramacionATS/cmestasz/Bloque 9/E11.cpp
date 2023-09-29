#include <iostream>

using namespace std;

int sumar(int nums[], int n)
{
    int suma = 0;
    for (int i = 0; i < n; i++)
        suma += nums[i];
    return suma;
}

int main()
{
    int nums[4] = {2, 5, 9, 9};
    int suma = sumar(nums, 4);
    cout << suma << endl;
    return 0;
}