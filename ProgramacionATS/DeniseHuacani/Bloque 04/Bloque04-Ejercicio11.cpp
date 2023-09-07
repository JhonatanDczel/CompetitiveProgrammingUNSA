//11: Escriba un programa que calcule el valor de: 2^1+2^2+2^3+...+2^n
#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n , suma =0;
	cout<<"2^1+2^2+2^3+...+2^n";
	cout<<"\nIngrese el valor de n:"; cin>>n;
	for(int i =1;i<=n; i++){
		
		int potencia =pow(2,i);
		suma = suma + potencia;
	}
	cout<<"\nLa respuesta es :  "<<suma;
	return 0;
}


