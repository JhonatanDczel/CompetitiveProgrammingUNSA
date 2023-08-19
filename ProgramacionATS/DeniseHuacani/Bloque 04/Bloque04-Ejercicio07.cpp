//7: Escriba un programa que calcule el valor de: 1+2+3+...+n
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int n, suma=0;
	cout<<"1+2+3+...+n";
	cout<<"Ingrese el valor de n:"; cin>>n;
	for ( int i = 1; i <= n; i++){
		suma += i;
		
	}
	cout<<"La suma de los numeros del 1 hasta "<<n<<" es : "<<suma;
	getch();
	return 0;
}

