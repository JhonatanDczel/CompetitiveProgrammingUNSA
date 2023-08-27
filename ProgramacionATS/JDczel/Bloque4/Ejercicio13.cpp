#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
    int i = 1, n, a=0, e;

    cout <<"Digita un numero: "; cin >>n;

    while(i<=n){
    cout <<i <<endl;
    e = i;
    i = i + a;
    a = e;
    }
    return 0;
}