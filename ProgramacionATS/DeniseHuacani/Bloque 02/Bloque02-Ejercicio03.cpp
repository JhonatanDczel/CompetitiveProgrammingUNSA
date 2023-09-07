//03 Escribe la siguiente expresión como expresión en C++:
#include<iostream>
using namespace std;
int main(){
	double a, b, c, d, e, f, respuesta=0;
	cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;
    cout << "d = "; cin >> d;
    cout << "e = "; cin >> e;
    cout << "f = "; cin >> f;

    respuesta = (a+(b/c))/(d+(e/f));
    cout << " \n(a+(b/c))/(d+(e/f)) es: " << respuesta <<endl;
	return 0 ;
}
