#include <iostream> 
using namespace std;
int main() {
    int nums[] = {1, 2, 5};
    int p = 1;
    for (int i = 0; i < 3; i++) {
        p *= nums[i];
    }
    cout<<p<<endl;
    system("pause");
    return 0;    
}
