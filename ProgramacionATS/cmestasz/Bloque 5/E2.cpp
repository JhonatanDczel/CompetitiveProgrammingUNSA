#include <iostream>

using namespace std;

int main()
{
    int mult = 1;
    double nums[] = {2, 5, 6, 3};
    for (int i = 0; i < 4; i++)
    {
        mult *= nums[i];
    }
    cout << mult << endl;
    return 0;
}