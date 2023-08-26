#include <iostream>
using namespace std;

int main(){
    int nums[] = {1, 2, 3, 4, 5};
    for(int i = 4; i >= 0; i--){
        if(i == 0){
            cout << nums[i] << endl;
        }else{
            cout << nums[i] << " ";
        }
    }
    return 0;
}