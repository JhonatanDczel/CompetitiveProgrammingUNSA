#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
    int suma=0, num;

    cout <<"Digite un numero: "; cin >>num;

    for(int i = 1; i <= (num); i += 2){
        suma += i;
    }

    cout <<"\nLa suma es: " <<suma <<endl;

    system("pause");
    return 0;
}