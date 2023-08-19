//11: Hacer un programa que simule un cajero automático con un saldo inicial
//de 1000 Dólares.
#include<iostream>

using namespace std;
int main(){
	int saldo_inicial=1000,opc;
	double extra,saldo, retirar;
	cout<<"\tBienvenido a su Cajero Automatico : \n";
	cout<<"\n1. Ingresar dinero en cuenta ";
	cout<<"\n2. Retirar dinero de la cuenta ";
	cout<<"\n3. Salir ";
	cout<<"\nOpcion\n";
	cin>>opc;
	
	switch(opc){
		case 1:
			cout<<"Escribe la cantidad que quieres ingresar : ";cin>>extra;
			saldo = saldo_inicial+extra; 
			cout<<"\nDinero en cuenta : "<<saldo; break;
		case 2:
			cout<<"Escribe la cantidad que quieres retirar : ";cin>>retirar; 
			if (retirar>saldo_inicial){
				cout<<"No cuenta con la cantidad necesitada"; 
			}else{
				saldo = saldo_inicial-retirar; 
				cout<<"\nDinero en cuenta :"<<saldo; 
			}break;
			
		case 3:
			break;
		
		default :cout<<"\nEscribe numero entre (1-3)";break;
	}
	return 0;
}
