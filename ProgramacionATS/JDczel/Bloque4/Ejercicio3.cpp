#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

int main(){
    int contador = 1, cuadrado, suma = 0;

    for(int i = 1; i<=10 ; i++){

        cuadrado = pow(i, 2);
        suma += cuadrado;
    }

    cout <<"El resultado es: " <<suma;
    getch();
    return 0;
}