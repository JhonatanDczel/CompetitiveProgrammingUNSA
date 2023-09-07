#include <bits/stdc++.h>
using namespace std;
void invert(int[], int);
int main(){
	int n;
	cout<<"Ingrese la longitud del arreglo: ";
	cin>>n;
	int arr[n];
	for(int i = 0; i < n; i++){
		cout<<"Ingrese el elemento "<<i+1<<" : ";
		cin>>arr[i];
	}
	invert(arr, n);
	for(int i :arr){
		cout<<i<<" ";
	}
	
	return 0;
}
void invert(int a[], int n){
	bool isS = false;
	for(int i = 0; i < n; i++){
		a[i]*=-1;
	} 
}