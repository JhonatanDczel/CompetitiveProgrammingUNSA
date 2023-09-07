#include <iostream>
using namespace std;

int main(){
    int nums[3][3];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> nums[i][j];
        }
    }
    for(int i = 0; i < 3; i++){
        cout << nums[i][i] << endl;
    }
    return 0;
}