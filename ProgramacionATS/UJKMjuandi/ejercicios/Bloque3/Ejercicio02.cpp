#include<iostream>

using namespace std;

int main(){
	int num1,num2,num3;
	cout<<"Coloque un numero: ";
	cin>>num1;
	cout<<"Coloque otro numero: ";
	cin>>num2;
	cout<<"Coloque otro nuemro: ";
	cin>>num3;
	if(num1>num2){
		if(num1>num3){
			cout<<num1<<" Es el mayor de los 3";
		}else{
			cout<<num3<<" Es el mayor de los 3";
		}
	}else{
		if(num2>num3){
			cout<<num2<<" Es el mayor de los 3";
		}else{
			cout<<num3<<" Es el mayor de los 3";
	    }
	}
	return 0;
}
