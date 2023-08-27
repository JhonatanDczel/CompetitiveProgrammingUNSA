#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
    int numero;

    do{
        cout<<"Digite un numero del 1 al 10: "; cin >>numero;
    }while(numero>10 or numero<1);

    for(int i = 1; i<=20; i++){
        cout <<numero <<" * " <<i <<" = " <<numero*i <<endl;
    }


system("pause");
    return 0;
}