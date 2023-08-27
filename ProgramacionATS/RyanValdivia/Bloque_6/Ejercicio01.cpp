#include <iostream>
using namespace std;

int main(){
    int x, y;
    cin >> x >> y;
    int nums[100][100];
    for(int i = 0; i < x; i++){
        for(int j = 0; j < x; j++){
            cin >> nums[i][j];
        }
    }
    for(int i = 0; i < x; i++){
        for(int j = 0; j < x; j++){
            cout << nums[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}