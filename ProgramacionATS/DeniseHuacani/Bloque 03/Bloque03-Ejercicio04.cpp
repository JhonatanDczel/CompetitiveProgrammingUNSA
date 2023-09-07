//4: Comprobar si un número digitado por el usuario es positivo o negativo
#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"Escribe un numero : ";cin>>num;
	if(num==0){
		cout<<"\nEl numero es cero";
	}
	else if(num>0){
		cout<<"\nEs un numero positivo";
	}else{
		cout<<"\nEs un numero negativo";
	}
	return 0;
}
