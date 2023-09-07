#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
    int x, y, resultado=1;
    bool posible = true;

    cout <<"Ingrese el valor de x: "; cin >>x;
    cout <<"Ingrese el valor de y: "; cin >>y;
    if(x==0 && y==0){
        posible = false;
    }
    if(((x>=0)&&(y>=0)) && posible){
        for(int i = y; i>0; i--){
            resultado *= x;
        }
        cout <<"\nEl resultado es " <<resultado <<endl;
    }
    else{
        if(!posible){
        cout <<"\nLa expresion es indefinida";
        }
        cout <<"\nLos numeros tienen que ser enteros positivos";
    }
    
    system("pause");
    return 0;
}