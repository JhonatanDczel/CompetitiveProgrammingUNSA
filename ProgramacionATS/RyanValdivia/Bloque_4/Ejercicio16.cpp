#include <iostream>
using namespace std;

int main(){
    int num;
    cin >> num;
    cout << num << " = ";
    while(num != 1){
        for(int i = 2; i <= num; i++){
            if(num % i == 0){
                num /= i;
                if(num == 1){
                    cout << i << endl;
                }else{
                    cout << i << " * ";
                }
                break;
            }
        }
    }
    return 0;
}