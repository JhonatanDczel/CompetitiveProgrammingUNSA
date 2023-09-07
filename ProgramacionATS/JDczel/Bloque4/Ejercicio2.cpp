#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
    int numero, i = 0;

    cout <<"Digita el numero 0: "; cin >>numero;

    while(numero!=0){
        if(numero>0){
            i++;
        }
        cout <<"Digita el numero 0: "; cin >>numero;
    }

    cout <<"El total de intentos fallidos es: " <<i <<endl;

    system("pause");
    return 0;
}