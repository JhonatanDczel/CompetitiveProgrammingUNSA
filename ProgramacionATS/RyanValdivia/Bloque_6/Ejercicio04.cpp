#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main(){
    srand(time(NULL));
    int x, y;
    cin >> x >> y;
    int nums[x][y], nums2[x][y];
    for(int i = 0; i < x; i++){
        for(int j = 0; j < y; j++){
            nums[i][j] = rand() % (x * y);
        }
    }
    for(int i = 0; i < x; i++){
        for(int j = 0; j < y; j++){
            nums2[i][j] = nums[i][j];
            cout << nums2[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}