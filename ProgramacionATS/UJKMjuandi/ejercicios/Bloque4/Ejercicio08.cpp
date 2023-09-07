#include<iostream>

using namespace std;

int main(){
	int sum,num;
	cout<<"Coloca hasta que numero impar quieres sumar: ";
	cin>>num;
	for(int i = 1 ; i <= num; i++ ){
		sum = sum + (2*i - 1);
	}
	cout<<"La suma es: "<<sum;
	return 0;
}
