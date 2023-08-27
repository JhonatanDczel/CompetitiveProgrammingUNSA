#include<iostream>
using namespace std;
int main(){
	double num1,num2;
	cout<<"escriba un numero";
	cin>>num1;
	cout<<"Escriba otro numero";
	cin>>num2;
	if(num1==num2){
		cout<<"Los numeros son iguales";
	}
	if(num1<num2){
		cout<<num2<<" Es mayor que "<< num1;
	}else{
		cout<<num1<<" Es mayor que "<< num2;
	}
	return 0;
}
