#include <iostream>

using namespace std;

int main()
{
    int n, sum = 0;
    cin >> n;
    double nums[n];
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
        cout << i << ": " << nums[i] << endl;
    }
    return 0;
}