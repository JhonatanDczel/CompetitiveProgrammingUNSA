#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;
int main(){
    int num, dato, contador = 0;

    srand(time(NULL));

    dato = 1+rand()%100;

    do{
        cout <<"Digita un numero: "; cin >>num;
        contador++;
        if(num>dato){
            cout <<"Digita un numero menor" <<endl;
        }
        if(num<dato){
            cout<<"Digita un numero mayor" <<endl ;
        }
    }while(dato!=num);

    cout <<"El numero de intentos fue: " <<contador;
}