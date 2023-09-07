#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
    int n, suma = 0, producto = 1;

    cout <<"Digite un numero: "; cin >>n;

    for(n; n>0; n--){
        for(int i = n; i>0; i--){
            producto *= i;
        }
        suma += producto;
        producto = 1;
    }
    cout <<"\nLa suma de factoriales es: " <<suma <<endl;

    system("pause");
}