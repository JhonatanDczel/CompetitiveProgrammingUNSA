//1. Escriba un programa que lea dos números y determine cuál de ellos es el mayor.
#include<iostream>

using namespace std;
int main(){
	double num1,num2;
	cout<<"Escribe dos numeros : \n";cin>>num1; cin >>num2;
	if(num1==num2){
		cout<<"Los dos numeros son iguales";
	}
	else if (num1>num2){
		cout<<"El mayor numero es :"<<num1;
	}else{
		cout<<"El mayor numero es :"<<num2;
	}
	return 0;
}
