#include <iostream>
using namespace std;

int main(){
    int nums[5], nums2[5];
    for(int i = 0; i < 5; i++){
        cin >> nums[i];
    }
    for(int i = 0; i < 5; i++){
        nums2[i] = nums[i] * 2;
    }
    for(int i = 0; i < 5; i++){
        cout << nums2[i] << " ";
    }
    return 0;
}