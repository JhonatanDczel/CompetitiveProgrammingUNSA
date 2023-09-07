#include<iostream>

using namespace std;

int main(){
	int num1;
	cout<<"Escriba un numero: ";
	cin>>num1;
	if(num1<=25 && num1>=18 ){
		cout<<"Su numero esta dentro del rango [18-25]";
	}else{
		cout<<"Su numero no esta dentro del rango [18-25]";
	}
	return 0;
}
