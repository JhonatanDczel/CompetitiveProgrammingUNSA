#include <iostream>
using namespace std;
int main() {
    int nums[4];
    for (int i = 0; i < 4; i++) {
        cin>>nums[i];
    }
    for (int i = 3; i >= 0; i--) {
        cout<<i<<" - "<<nums[i]<<endl;
    }
    system("pause");
    return 0;

}
