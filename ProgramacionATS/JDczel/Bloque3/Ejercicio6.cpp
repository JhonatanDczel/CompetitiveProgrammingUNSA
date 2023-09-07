#include<iostream>

using namespace std;

int main(){
    char letra;

    cout <<"Ingresa una letra: "; cin >>letra;

    switch(letra){
        case 'a': case 'e': case 'i': case 'o': case 'u': cout <<"Es una vocal minuscula"; break;
        default:
        switch(letra){
            case 'A': case 'E': case 'I': case 'O': case 'U': cout <<"Es una vocal mayucula"; break;
            default: cout <<"No es una vocal"; break;
        }
        break;
    }
    
    cout <<"\nFin del programa";
    return 0;
}