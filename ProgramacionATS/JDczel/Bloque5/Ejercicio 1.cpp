#include<iostream>
#include<conio.h>

using namespace std;

int main(){
    int vector[]={1, 2, 3, 4, 5}, suma = 0;

    for(int i = 0; i<6; i++){
        suma += vector[i];
    }
    cout <<"La suma es: " <<suma;
    cout <<endl <<vector[5];

    getch();
}