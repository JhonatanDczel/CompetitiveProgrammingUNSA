//Escriba un programa que calcule las soluciones de una ecuación de
//segundo grado de la forma ax^2 + bx + c = 0, teniendo en cuenta que:
#include<iostream>
#include<math.h>
using namespace std;
int main(){
	double a, b, c, sol1 =0, sol2=0;
	cout<<"En ax^2 + bx + c = 0 \n";
	cout<< "Ingresa el valor de a : "; cin >> a;
    cout<< "Ingresa el valor de b : "; cin >> b;
    cout<< "Ingresa el valor de c : "; cin >> c;
    sol1 = (-b+sqrt(b*b-(4*a*c)))/(2*a);
    sol2 = (-b-sqrt(b*b-(4*a*c)))/(2*a);
    cout << "\n x=" << sol1;
    cout << "\n x=" << sol2;
	return 0 ;
}
