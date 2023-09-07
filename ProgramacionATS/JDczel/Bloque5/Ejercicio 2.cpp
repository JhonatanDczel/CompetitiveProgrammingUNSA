#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
    int vector[] = {1, 2, 3, 4, 5}, producto = 1;

    for(int i = 0; i<5 ; i++){
        producto *= vector[i];
    }

    cout <<"El producto es: " <<producto <<endl;

    system("pause");
    return 0;
}