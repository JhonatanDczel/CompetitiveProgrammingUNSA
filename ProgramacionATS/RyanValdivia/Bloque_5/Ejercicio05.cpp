#include <iostream>
using namespace std;

int main(){
    int nums[100], n, max;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }
    for(int i = 0; i < n; i++){
        if(i == 0){
            max = nums[i];
        }
        if(nums[i] > max){
            max = nums[i];
        }
    }
    cout << max;
    return 0;
}