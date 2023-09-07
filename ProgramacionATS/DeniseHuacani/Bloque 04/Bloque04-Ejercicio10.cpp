//10: Escriba un programa que calcule el valor de: 1!+2!+3!+...+n! (suma de
//factoriales).
#include<iostream>

using namespace std;
int main(){
	int n , suma =0;
	cout<<"1!+2!+3!+...+n!";
	cout<<"\nIngrese el valor de n:"; cin>>n;
	for(int j =1;j<=n; j++){
		int factorial=1;
		for ( int i = 1; i <= j; i++){
			factorial *= i;
			
		}
		suma = suma + factorial;
	}
	cout<<"\nSuma de factoriales "<<suma;
	return 0;
}
