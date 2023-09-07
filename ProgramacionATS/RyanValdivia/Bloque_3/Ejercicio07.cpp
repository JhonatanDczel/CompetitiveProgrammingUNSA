#include <iostream>
using namespace std;

int main(){
    int edad;
    cout << "Ingrese su edad: " << endl;
    cin >> edad;
    if(18 <= edad && edad <= 25){
        cout << "Su edad si esta en el rango" << endl;
    }else{
        cout << "Su edad no esta en el rango" << endl;
    }
    return 0;
}