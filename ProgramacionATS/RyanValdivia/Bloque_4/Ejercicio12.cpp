#include <iostream>
using namespace std;

int main(){
    int n, pares = 0, impares = 0;
    cin >> n;
    for(int i = 1; i < n + 1; i++){
        if(i % 2 == 0){
            pares += i;
        }else{
            impares += i;
        }
    }
    cout << impares - pares;
    return 0;
}