#include <iostream>
using namespace std;
int main() {
	int saldo = 1000;
	cout<<"\tBienvenido al cajero virtual"<<endl<<"1. Ingrese su dinero"<<endl;
	cout<<"2. Retirar su dinero"<<endl<<"3. Salir"<<endl;
	int opc;
	cin>>opc;
	switch (opc) {
		case 1:
			cout<<"Ingrese la cantidad de dinero"<<endl;
			int extra;
			cin>>extra;
			saldo += extra;
			break;
		case 2:
			cout<<"Indique la cantidad a retirar"<<endl;
			int ing;
			cin>>ing;
			if (ing > saldo) cout<<"No puede retirar tanto dinero";
			saldo -= ing;
			break;
		default: cout<<"Bye bye";
	}
	cout<<endl;
	system("pause");
	return 0;

			
			
	

}

