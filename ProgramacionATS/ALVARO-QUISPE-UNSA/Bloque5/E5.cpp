#include <iostream>
using namespace std;
int main() {
    int n, max;
    cin>>n;
    int nums [n];
    for (int i = 0; i < n; i++) {
        cin>>nums[i];
    }
    max = nums[0];
    for (int i = 0; i < n; i++) {
        if (nums[i] > max) max = nums[i];
    }
    cout<<"max: "<<max<<endl;
    system("pause");
    return 0;

}
