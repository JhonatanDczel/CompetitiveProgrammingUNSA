#include<iostream>
#include<stdlib.h>
#include<math.h>

using namespace std;

int  main(){
    int n, suma = 0;

    cout <<"Digita un numero: "; cin >>n;

    for(int i=1; i<=n; i++){
        suma += pow(2, i); 
    }

    cout <<"La suma es: " <<suma <<endl;
    system("pause");
    return 0;
}