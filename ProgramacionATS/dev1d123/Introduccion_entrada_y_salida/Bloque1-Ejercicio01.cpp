//Ejercicio 1
#include<iostream> 
using namespace std;
int main(){
	double num1, num2;
	cout << "Ingrese el primer numero : ";
	cin >> num1;
	
	cout << "Ingrese el segundo numero : ";
	cin >> num2;
	
	cout << "La suma es " << (num1 + num2)<<endl;
	cout << "La resta es " << (num1 - num2)<<endl;
	cout << "La multiplicacion es " << (num1 * num2)<<endl;
	cout << "La division es " << (num1 / num2)<<endl;
	//para que la consola no se cierre
	cin >>num1;
	return 0;
}