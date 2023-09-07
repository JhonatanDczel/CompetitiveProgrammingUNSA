#include <iostream>
#include <string.h>
using namespace std;

int main(){
    char nombre[10];
    cin >> nombre;
    if(nombre[0] == 'A'){
        cout << strlwr(nombre) << endl;
    }else{
        cout << nombre << endl;
    }
    return 0;
}