#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
    int n, producto = 1;

    cout <<"Digite un numero: "; cin >>n;

    for(n; n>0; n--){
        producto *= n;
    }
    cout <<"El factorial es: " <<producto;
    return 0;
}