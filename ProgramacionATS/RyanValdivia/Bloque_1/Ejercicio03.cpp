#include <iostream>

using namespace std;

int main(){

    int edad;
    char sexo[10];
    double altura;

    cout << "Ingrese su edad: " << endl; cin >> edad;
    cout << "Ingrese su sexo: " << endl; cin >> sexo;
    cout << "Ingrese su altura en metros: " << endl; cin >> altura;

    cout << "\nSu edad es: " << edad << endl;
    cout << "Su sexo es: " << sexo << endl;
    cout << "Su altura en metros es: " << altura << endl;
    
    return 0;
}