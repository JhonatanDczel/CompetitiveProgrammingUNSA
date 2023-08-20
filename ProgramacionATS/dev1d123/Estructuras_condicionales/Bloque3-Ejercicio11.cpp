#include <iostream>
using namespace std;
int main(){
	int ret;
	int aum;
	int sal = 1000;
	int opt;
	cout<<"\t -*-*-*-*-*-*-*CAJERO AUTOMATICO*-*-*-*-*-*-*-*- "<<endl;
	cout<<"Bienvenido usuario, ingrese el numero de la operacion que desea realizar!"<<endl;
	cout<<"1) Retirar"<<endl;
	cout<<"2) Aumentar"<<endl;
	cout<<"3) Salir"<<endl;
	cin >> opt;
	if(opt == 1){
		cout<<"Indique cuanto dinero desea retirar"<<endl;
		cin >> ret;
		if(ret > sal){
			cout<<"Su saldo es menor que esa cantidad!"<<endl;
		} else{
			sal = sal - ret;
			cout<<"Ha retirado "<<ret<< "su saldo es "<<sal;
		}
	
	} else if(opt == 2){
		cout<<"Indique cuanto dinero desea aumentar"<<endl;
		cin >> aum;
		sal = sal + aum;
			cout<<"Ha aumentado "<<aum<< " su saldo es "<<sal;
		
	} else if(opt == 3){
		cout<<"Saliendo..."<<endl;
	} else{
		cout<<"Opcion no valida, saliendo..."<<endl;
	}

	return 0;
}
