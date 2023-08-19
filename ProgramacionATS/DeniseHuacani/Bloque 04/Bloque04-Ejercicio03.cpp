//3: Realice un programa que calcule y muestre en la salida estándar la suma
//de los cuadrados de los 10 primeros enteros mayores que cero.
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int suma=0;
	
	for ( int i = 1; i <= 10; i++){
		suma += i*i;
		
	}
	cout<<"La suma de los cuadrados de los 10 primeros enteros mayores que cero es : "<<suma;
	getch();
	return 0;
}
