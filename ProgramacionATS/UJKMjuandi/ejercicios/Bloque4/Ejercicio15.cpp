#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main(){
	int num,dato,cont;
	srand(time(NULL));
	dato = 1 + rand()%(100);
	do{
		cout<<"Coloque su numero: ";
		cin>>num;
		
		if(num>dato){
			cout<<"El numero es menor\n";
		}
		if(num<dato){
			cout<<"El numero es mayor\n";
		}
		cont++;
	}while(num!=dato);
	cout<<"FELICIDADES ADIVINASTE";
	cout<<"\nSu numero de intentos fue: "<<cont;
	return 0;
}
