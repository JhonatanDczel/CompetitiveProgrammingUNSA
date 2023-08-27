#include <iostream>
using namespace std;

int main(){
    int nums[2][2], nums2[2][2];
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            cin >> nums[i][j];
        }
    }
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            nums2[i][j] = nums[i][j];
            cout << nums2[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}