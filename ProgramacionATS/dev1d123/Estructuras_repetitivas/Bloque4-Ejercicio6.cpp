#include <iostream>
using namespace std;
int main(){
	int x, y;
	cout << "Ingrese el valor de x (base): ";
	cin >> x;
	cout << "Ingrese el valor de y (exponente): ";
	cin >> y;
	int res = 1;
	for(int i = 0; i < y; i++){
		res = res * x;
	}
	cout << "El valor de la potencia es: " << res <<endl;
	
}