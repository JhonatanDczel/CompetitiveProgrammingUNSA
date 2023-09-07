#include <iostream>
#include <string.h>
using namespace std;

int main(){
    string palabra, res = "Es palindromo!"; 
    cin >> palabra;
    int len = palabra.length();
    for(int i = 0; i < len; i++){
        if(palabra[i] != palabra[len - i - 1]){
            res = "No es palindromo";
            break;
        }
    }
    cout << res;
    return 0;
}