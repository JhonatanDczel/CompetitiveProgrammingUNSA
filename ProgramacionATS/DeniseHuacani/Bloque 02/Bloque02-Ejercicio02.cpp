//02 Escribe la siguiente expresión como expresión en C++:
#include<iostream>
using namespace std;
int main(){
	double a, b, c, d, respuesta =0;
	cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;
    cout << "d = "; cin >> d;
	
    respuesta = (a+b)/(c+d);
	cout.precision(2);
    cout << " \n(a+b)/(c+d) es: " << respuesta <<endl;
	return 0 ;
}
