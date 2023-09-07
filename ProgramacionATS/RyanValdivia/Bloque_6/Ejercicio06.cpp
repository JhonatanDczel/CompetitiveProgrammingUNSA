#include <iostream>
using namespace std;

int main(){
    int nums[3][3], nums2[3][3], suma[3][3];
    cout << "Ingrese la matriz 1: " << endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> nums[i][j];
        }
    }
    cout << "Ingrese la matriz 2: " << endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> nums2[i][j];
        }
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            suma[i][j] = nums[i][j] + nums2[i][j];
            cout << suma[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}