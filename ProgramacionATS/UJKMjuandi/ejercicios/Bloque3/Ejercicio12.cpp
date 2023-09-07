#include<iostream>
#include<math.h>

using namespace std;

int main(){
	int num,opc;
	cout<<"Coloque numero: ";
	cin>>num;
	cout<<"Que desea saber del numero?\n1.-Saber su cubo\n2.-Saber si es par o impar\n3.-Salir";
	cout<<"\nElija la opcion: ";
	cin>>opc;
	switch(opc){
		case 1: cout<<"El cubo del numero: "<<pow(num,3);break;
		case 2: 
			if(num%2 == 0){
				cout<<"Su numero es par";break;
			}else{
				cout<<"Su numero es impar";break;
			}
		case 3: cout<<"Nos vemos,gracias :)"; break;
	}
	
	return 0;
}
