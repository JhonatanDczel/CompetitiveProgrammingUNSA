//3: Realice un programa que lea un valor entero y determine si se trata de un
//número par o impar
#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"Escribe un numero entero : ";cin>>num;
	if(num==0){
		cout<<"\nEl numero es cero";
	}
	else if(num%2==0){
		cout<<"\nEs un numero par";
	}else{
		cout<<"\nEs un numero impar";
	}
	return 0;
}
