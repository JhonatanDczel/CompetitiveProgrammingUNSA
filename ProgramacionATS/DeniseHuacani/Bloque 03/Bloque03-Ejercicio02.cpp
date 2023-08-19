//2: Escriba un programa que lea tres números y determine cuál de ellos es el
//mayor.
#include<iostream>

using namespace std;
int main(){
	double num1, num2, num3;
	cout<<"Escribe tres numeros : \n";cin>>num1; cin >>num2; cin >>num3;
	
	if (num1>num2){
		if (num3>num1){
			cout<<"El mayor numero es :"<<num3;
		}else{
			cout<<"El mayor numero es :"<<num1;
		}
	}else{
		if (num3>num2){
			cout<<"El mayor numero es :"<<num3;
		}else{
			cout<<"El mayor numero es :"<<num2;
		}
		
	}
	return 0;
}
