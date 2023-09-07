#include<iostream>

using namespace std;

int main(){
	double n1,n2,n3;
	cout<<"Coloque la nota de las practicas: ";
	cin>>n1;
	cout<<"Coloque la nota de teoria: ";
	cin>>n2;
	cout<<"Coloque la nota de participacion: ";
	cin>>n3;
	cout<<"Su nota final: "<<n1*0.3+n2*0.6+n3*0.1;
	return 0;
}
