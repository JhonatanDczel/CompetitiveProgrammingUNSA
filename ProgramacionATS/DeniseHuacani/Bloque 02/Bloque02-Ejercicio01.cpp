//01 Escribe la siguiente expresión como expresión en C++:
#include<iostream>
using namespace std;
int main(){
	double a , b, respuesta=0;
	cout << "Ingrese el valor de a: ";
    cin >> a;
    cout << "Ingrese el valor de b: ";
    cin >> b;
	respuesta = a / b + 1;
	cout.precision(3);
    cout << "\n a/b + 1 es: " << respuesta <<endl;
	return 0 ;
}
