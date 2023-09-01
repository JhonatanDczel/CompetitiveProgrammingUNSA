#include <bits/stdc++.h>
#include <limits>
using namespace std;
int min_row(int a[][100], int row,int col){
	int minimo = numeric_limits<int>::max();
	for(int i = 0; i < col; i++){
		minimo = min(minimo, a[row][i]);
	}
	return minimo;
}
int main(){
	int n,m;
	cout<<"Ingrese la longitud de la matriz y sus elementos"<<endl;
	cin>>n>>m;
	int arr[n][100];
	for(int i = 0; i < n; i++){
		for(int j = 0; j <m; j++){
			cin>>arr[i][j];
		}
	}
	int fila;
	cout <<"Ingrese la fila para obtener el minimo elemento "<<endl;
	cin>>fila;
	fila = fila - 1;
	cout<<"El minimo elemento es "<<min_row(arr, fila, m);
	return 0;
}
