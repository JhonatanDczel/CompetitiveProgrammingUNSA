#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
    int numero, i=2;

    cout <<"Digite un numero: "; cin >>numero;

    do{
        while(numero%i==0){
            cout <<i <<"  ";
            numero/=i;
        }
        i++;
    }while(numero != 1);
    cout <<endl;
    system("pause");
    return 0;
}