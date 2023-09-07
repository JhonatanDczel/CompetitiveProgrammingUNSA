/* 6: Escriba un programa que calcule x^y, donde tanto x como y son enteros
positivos, sin utilizar la función pow().*/
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int x, y, potencia =1;
	cout<<"\tCalcule x^y \n";
	cout<<"Ingrese el valor de x:"; cin>>x;
	cout<<"Ingrese el valor de y:"; cin>>y;
	
	for ( int i = 1; i <= y; i++){
		potencia *= x;
		
	}
	cout<<"\nEl valor de "<<x<<"^"<<y<<" es : "<<potencia;
	getch();
	return 0;
}
