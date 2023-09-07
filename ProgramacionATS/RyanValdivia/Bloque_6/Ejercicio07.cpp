#include <iostream>
using namespace std;

int main(){
    int x, y;
    bool sim = false;
    cin >> x >> y;
    if(x != y){
        cout << "No es simétrica" << endl;
    }else{
        int nums[x][y];
        for(int i = 0; i < x; i++){
            for(int j = 0; j < y; j++){
                cin >> nums[i][j];
            }
        }
        for(int i = 0; i < x; i++){
            if(sim){
                break;
            }
            for(int j = 0; j < y; j++){
                if(nums[i][j] != nums[j][i]){
                    cout << "No es simetrica" << endl;
                    sim = true;
                    break;
                }
            }
        }
    }
    return 0;
}