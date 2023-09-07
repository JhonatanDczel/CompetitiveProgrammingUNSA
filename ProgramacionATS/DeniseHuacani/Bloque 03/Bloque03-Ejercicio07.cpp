/*7: Escriba un programa que solicite una edad (un entero) e indique en la salida
estándar si la edad introducida está en el rango [18-25].*/
#include<iostream>
using namespace std;
int main(){
	int edad;
	cout<<"Escribe tu edad : ";cin>>edad;
	if(edad>=18 && edad<=25){
		cout<<"\nSI esta en el rango [18-25]";
	}
	else{
		cout<<"\nNO esta en el rango [18-25]";
	}
	return 0;
}
