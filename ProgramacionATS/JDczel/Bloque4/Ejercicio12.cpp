#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
    int n, suma =0, resta=0;

    cout <<"Digite un numero: "; cin >>n;

    for(int i = 1; i<=n; i+=2 ){
        suma += i;
    }

    for(int i=0; i<=n; i+=2){
        resta -=i;
    }

    cout <<"El resultado es: " <<resta+suma <<endl;
    system("pause");
    return 0;
}