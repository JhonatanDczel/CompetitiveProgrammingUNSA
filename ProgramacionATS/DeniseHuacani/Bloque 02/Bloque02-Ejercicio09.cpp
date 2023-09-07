//9: Realice un programa que calcule el valor que toma la siguiente función para
//unos valores dados de x e y:
#include<iostream>
#include<math.h>
using namespace std;
int main(){
	double x, y, respuesta =0;
	cout<<"En la f(x,y) \n";
	cout<< "Ingresa el valor de x : "; cin >> x;
    cout<< "Ingresa el valor de y : "; cin >> y;
    respuesta = (sqrt(x))/(pow(y,2)-1);
    cout << "\n La respuesta es: " << respuesta;
	return 0 ;
}
