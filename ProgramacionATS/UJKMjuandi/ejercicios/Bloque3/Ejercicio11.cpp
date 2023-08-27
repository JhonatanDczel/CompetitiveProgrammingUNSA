#include<iostream>

using namespace std;

int main(){
	int num,extra,retiro,saldo = 1000;
	cout<<"Bievenido a su cajero \nSu saldo es de: "<<saldo<<"\nQue desea hacer?\n1.-Despositar dinero\n2.-Sacar dinero\n3.-salir";
	cout<<"\nOpcion: ";
	cin>>num;
	switch(num){
		case 1: 
			cout<<"Coloque cuanto quiere depositar: ";
			cin>>extra;
			saldo = saldo+extra;
			cout<<"Su nuevo saldo es: "<<saldo; break;
		case 2:
			cout<<"Cuanto quiere retirar: ";
			cin>>retiro;
			if(retiro < saldo){
				cout<<"Se retiro: "<<retiro;
				saldo = saldo - retiro;
				cout<<"\nSu saldo actual es de: "<<saldo; break;
			}else{
				cout<<"Saldo insuficiente"; break;
			}
			
		case 3:
			cout<<"Tenga un buen dia :) "; break;	
	}
	return 0;
}
