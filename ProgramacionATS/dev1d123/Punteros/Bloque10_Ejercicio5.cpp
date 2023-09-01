#include <iostream>
#include <stdlib.h>
using namespace std;

void leer_elementos();
void ordenar(int*, int);
void mostrar(int*, int);

int n, *elem;
int main(){
	leer_elementos();
	ordenar(elem, n);
	mostrar(elem, n);
	delete[] elem;
		
	return 0;
}
void leer_elementos(){
	cout<<"Ingrese la cantidad de elementos del arreglo"<<endl;
	cin>>n;
	elem = new int[n];
	for(int i = 0; i < n; ++i){
		cout<<"Ingrese un elemento "<<endl;
		cin>>*(elem + i);
	}
}
void ordenar(int* elemento, int size){
	int temp;
	for(int i = 0; i < size; i++){
		for(int j = 0; j < size - 1; j++){
			if(*(elemento + j) > *(elemento+j+1)){
				temp = *(elemento + j);
				*(elemento + j) = *(elemento + j + 1);
				*(elemento + j + 1) = temp;
			}
		}
	}
}
void mostrar(int* elemento, int size){
	for(int i = 0; i < size; i++){
		cout<<*(elemento+i)<<" ";
	}
}
