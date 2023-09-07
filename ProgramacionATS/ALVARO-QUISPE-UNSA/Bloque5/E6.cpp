#include <iostream>
#include <time.h>
using namespace std;
int main() {
    int x, n;
    cin>>n;
    int nums[n];
    for (int i = 0; i < n; i++) cin>>nums[i];  
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = 0; j < n; j++) {
            if (j != i) sum += nums[j];
        }
        if (nums[i] == sum) cout<<"Hay uno: "<<nums[i]<<endl;
    }
    
    
    system("pause");
    return 0;
}
