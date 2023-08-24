#include <iostream> 
using namespace std;
int main() {
    int nums[] = {1, 2, 5};
    int sum = 0;
    for (int i = 0; i < 3; i++) {
        sum += nums[i];
    }
    cout<<sum<<endl;
    system("pause");
    return 0;
}
