//Escriba un fragmento de programa que intercambie los valores de dos
//variables.
#include<iostream>
using namespace std;
int main(){
	double a, b, c=0;
	cout<<"Ingresa el valor de a:"; cin>>a;
	cout<<"Ingresa el valor de b:"; cin>>b;
	c =a;
	a=b;
	b=c;
	cout<<"\nAhora el valor de a:"<<a;
	cout<<"\nAhora el valor de b:"<<b;
	return 0 ;
}
