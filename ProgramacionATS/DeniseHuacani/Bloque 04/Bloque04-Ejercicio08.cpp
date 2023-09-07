// 8: Escriba un programa que calcule el valor de: 1+3+5+...+2n-1
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int n,hasta, suma=0;
	cout<<"1+3+5+...+2n-1\n";
	cout<<"Ingrese el valor de n:"; cin>>n;
	hasta= n*2-1;
	for ( int i = 1; i <= hasta; i+=2){
		suma += i;
		
	}
	cout<<"\nLa suma es : "<<suma;
	getch();
	return 0;
}
