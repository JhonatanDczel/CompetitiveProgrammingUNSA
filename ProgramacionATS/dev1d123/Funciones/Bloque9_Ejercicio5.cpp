#include <iostream>
using namespace std;
template <class T>
void despliegue(T valor) {
    cout << "El valor es: " << valor << endl;
}

int main() {
    int entero = 666;
    double decimal = 3.14;
    char caracter = 'P';
    char nombre[10] = "Alfregod";
    despliegue(entero);   
    despliegue(decimal);  
    despliegue(caracter); 
    despliegue(nombre); 
    
    return 0;
}
