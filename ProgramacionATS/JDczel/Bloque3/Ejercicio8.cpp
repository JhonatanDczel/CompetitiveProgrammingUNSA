#include<iostream>

using namespace std;

int main() {
    int n1 = 0, n2 = 0, n3 = 0, n4 = 0;
    
    cout <<"Digita tres numeros: "; cin >>n1 >>n2 >>n3;
    cout <<"Digita un cuarto numero: "; cin >>n4;


    if(n4==n1 or n4==n2 or n4==n3){
        cout <<"Ya has ingresado este numero";
    }
    else{
        cout <<"Es un nuevo numero";
    }

//opcion b
/*
    switch(n4){
        case n1: case n2: case n3: cout <<"Ya has ingresado ese numero"; break;
        default: cout <<"Es un nuevo numero"; break;
    }
    return 0;
*/
}