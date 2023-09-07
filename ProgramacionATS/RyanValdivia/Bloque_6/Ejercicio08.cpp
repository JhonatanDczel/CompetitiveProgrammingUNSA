#include <iostream>
using namespace std;

int main(){
    int nums[3][3], nums2[3][3], numsP[3][3];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> nums[i][j];
        }
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> nums2[i][j];
        }
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            int suma = 0;
            for(int k = 0; k < 3; k++){
                suma += nums[i][k] * nums2[k][j];
            }
            numsP[i][j] = suma;
            cout << numsP[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}