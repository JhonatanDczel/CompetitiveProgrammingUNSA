#include <bits/stdc++.h>
#include <vector> //para size()
using namespace std;
bool is_sym(int a[100][100], int m, int n){
	//int m = arr.size();
	//int n = a[0].size();
	for(int i = 0; i < m; i++){
		for(int j = 0; j <n; ++j){
			if(a[i][j] != a[j][i]){
				return false;
			}
		}
	}
	return true;
}
int main(){
	int m,n;
	cout<<"Ingrese la cantidad de filas "<<endl;
	cin>>m;
	cout<<"Ingrese la cantidad de columnas "<<endl;
	cin>>n;
	int mat[100][100];
	for(int i = 0 ; i < m; i++){
		for(int j = 0; j < n; j++){
			cin>>mat[i][j];
		}
	}
	if(is_sym(mat, m, n)){
		cout<<"Es simetrica "<<endl;
	}else{
		cout<<"No es simetrica "<<endl;
	}
}