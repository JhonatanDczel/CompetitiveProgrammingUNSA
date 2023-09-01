#include <iostream>
#include <conio.h>

#include <stdlib.h>
using namespace std;
void leer_datos();
void sumar(int**,int**,int,int);
void imprimir(int**, int, int);
int **p_mat1, **p_mat2, filas, columnas;
int main(){
	leer_datos();
	sumar(p_mat1, p_mat2,filas,columnas);
	cout<<"La suma de las dos matrices es "<<endl;
	imprimir(p_mat1,filas,columnas);
	
	for(int i = 0; i < filas;i++){
		delete[] p_mat1[i];
	}
	delete[] p_mat1;
	for(int i = 0; i < filas;i++){
		delete[] p_mat2[i];
	}
	delete[] p_mat2;
	getch();
	return 0;
}
void leer_datos(){
	cout<<"Escriba el numero de filas "<<endl;
	cin>>filas;
	
	cout<<"Escriba el numero de columnas "<<endl;
	cin>>columnas;
	
	p_mat1 = new int*[filas];
	for(int i = 0; i < filas; i++){
		p_mat1[i] = new int [columnas];
	}
	cout<<"Digite los elementos de la primera matriz \n";
	for(int i = 0; i < filas; i++){
		for(int j = 0; j < columnas; j++){
			cout<<"Digite el numero["<<i<<"]["<<j<<"]: ";
			cin>>*(*(p_mat1 + i) + j);
		}
	}
	p_mat2 = new int*[filas];
	for(int i = 0; i < filas;i++ ){
		p_mat2[i] = new int[columnas];
	}
	cout<<"Digite los elementos de la segunda matriz \n";
	for(int i = 0; i < filas; i++){
		for(int j = 0; j < columnas; j++){
			cout<<"Digite el numero["<<i<<"]["<<j<<"]: ";
			cin>>*(*(p_mat2 + i) + j);
		}
	}
}
void sumar(int **p_mat1,int **p_mat2,int f, int c){
	for(int i = 0; i < filas; i++){
		for(int j = 0; j < columnas; j++){
			*(*(p_mat1 + i) + j) += *(*(p_mat2 + i) + j);
		}
	}
}
void imprimir(int** p, int f, int c){
	for(int i = 0; i < filas; i++){
		for(int j = 0; j < columnas; j++){
			cout<<*(*(p_mat1 + i) + j)<<" ";
		}
		cout<<"\n";
	}
}