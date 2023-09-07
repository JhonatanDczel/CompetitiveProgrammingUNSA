//Ejercicio 2
#include<iostream> 
using namespace std;
int main(){
	double precio;
	cout << "Ingrese el precio del producto : ";
	cin >> precio;
	cout << "El precio tras aplicar IVA es: " << (precio*1.18)<<endl;

	cin >> precio;
	return 0;
}