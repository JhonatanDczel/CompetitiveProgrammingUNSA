#include<iostream>

using namespace std;

int main(){
	int num,contador = 0;
	cout<<"Introduzca cualquier numero\n";
	do{
		cin>>num;
		if(num>0){
			contador++;
		}	
		
	}while(num != 0);
	cout<<"El numero de valores mayores de 0 es: "<<contador;
	return 0;
}
