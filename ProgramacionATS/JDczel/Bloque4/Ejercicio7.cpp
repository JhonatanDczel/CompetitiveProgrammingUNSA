#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
    int i, num, suma=0;

    cout <<"Digite el numero: "; cin >>num;

    for(num; num>0; num--){
        suma += num;
    }

    cout <<"\nLa suma es: " <<suma <<endl;

    system("pause");
    return 0;
}