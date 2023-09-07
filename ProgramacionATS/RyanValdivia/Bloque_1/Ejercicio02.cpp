#include <iostream>

using namespace std;

int main(){

    double precio, pfinal;
    cout << "Ingrese el precio del producto: " << endl; cin >> precio;
    pfinal = precio * 1.18;
    cout << "El precio tras aplicar IGV es: " << pfinal << endl;
    
    return 0;
}