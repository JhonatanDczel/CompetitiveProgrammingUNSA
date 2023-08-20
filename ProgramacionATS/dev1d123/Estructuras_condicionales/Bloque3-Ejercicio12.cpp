#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int n;
	cout<<"Por favor, ingrese el valor de n"<<endl;
	
	cin>>n;
	int opt; 
	cout<<"\t -*-*-*-*-*-*-*MENU MORTAL*-*-*-*-*-*-*-*- "<<endl;
	cout<<"Bienvenido usuario, ingrese el numero de la operacion que desea realizar!"<<endl;
	cout<<"1) Cubo de un numero"<<endl;
	cout<<"2) Numero par o impar"<<endl;
	cout<<"3) Salir"<<endl;
	cin>>opt;
	if(opt == 1){
		cout<<"El cubo de "<<n<<" es "<<pow(n,3)<<endl;
	
	} else if(opt == 2){
		if(n%2 == 0){
			cout<<"El numero "<<n<<" es par"<<endl;
		} else{
			cout<<"El numero "<<n<<" es impar"<<endl;	 
		}
	} else if(opt == 3){
		cout<<"Saliendo del programa"<<endl;

	} else{
		cout<<"Numero erroneo, saliendo....."<<endl;
	}
}