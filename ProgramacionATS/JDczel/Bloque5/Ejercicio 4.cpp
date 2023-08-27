/*4. Escribe un programa que defina un vector de n�meros y muestre en la salida 
est�ndar el vector en orden inverso�del �ltimo al primer elemento.*/

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
    int numeros[] = {1, 2, 3, 4, 5};

    for(int i = 4; i>=0; i--){
        cout <<numeros[i] <<endl;
    }
    system("pause");
    return 0; 
}