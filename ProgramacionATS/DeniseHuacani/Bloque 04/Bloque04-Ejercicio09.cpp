// 9: Escriba un programa que calcule el valor de: 1*2*3*...*n (factorial)
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int n, factorial=1;
	cout<<"1*2*3*...*n\n";
	cout<<"Ingrese el valor de n:"; cin>>n;
	for ( int i = 1; i <= n; i++){
		factorial *= i;
		
	}
	cout<<"\nEl factorial de "<<n<<" es : "<<factorial;
	getch();
	return 0;
}
