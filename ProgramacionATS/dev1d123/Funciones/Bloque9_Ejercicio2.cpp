#include <iostream>
using namespace std;
void al_cuadrado(double a){
	cout<<a*a<<endl;
}
int main(){
	double n;
	cout<<"Ingrese un numero "<<endl;
	cin>>n;
	al_cuadrado(n);
	return 0;
}
