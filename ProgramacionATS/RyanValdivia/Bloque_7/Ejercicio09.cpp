#include <iostream>
#include <string>
#include <string.h>
using namespace std;

int main(){
    int a = 0, e = 0, i = 0, o = 0, u = 0;
    char cadena[30];
    cin >> cadena;
    strupr(cadena);
    for(char c: cadena){
        switch(c){
            case 'A': a++;
                break;
            case 'E': e++;
                break;
            case 'I': i++;
                break;
            case 'O': o++;
                break;
            case 'U': u++;
                break;
        }
    }
    cout << "La cantidad de concurrencias de la 'a' es: " << a << endl;
    cout << "La cantidad de concurrencias de la 'e' es: " << e << endl;
    cout << "La cantidad de concurrencias de la 'i' es: " << i << endl;
    cout << "La cantidad de concurrencias de la 'o' es: " << o << endl;
    cout << "La cantidad de concurrencias de la 'u' es: " << u << endl;
    
    return 0;
}