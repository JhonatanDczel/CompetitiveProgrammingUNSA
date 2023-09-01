#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;
void leer();
void find(int);
int n, *dato;

int main(){
	leer();	
	int p;
	cout<<"Ingrese el numero para buscar "<<'\n';
	cin>>p;
	find(p);
	delete[] dato;
	getch();
	return 0;
}

void leer(){
	cout<<"Ingrese la cantidad de numeros "<<'\n';
	cin>>n;
	dato = new int[n];	
	for(int i = 0; i < n; i++){
		cout<<"Ingrese un numero: ";
		cin>>dato[i];	
	}
}
void find(int num){
	for(int i = 0; i < n; i++){
		if(dato[i] == num){
			cout<<"Se encontro el numero en la pos "<<i+1<<'\n';
			return;
		}	
	}
	cout<<"No se encontro "<<'\n';
}