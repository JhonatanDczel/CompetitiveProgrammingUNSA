#include <bits/stdc++.h>
using namespace std;
void isSort(int[], int);
int main(){
	int n;
	cout<<"Ingrese la longitud del arreglo: ";
	cin>>n;
	int arr[n];
	for(int i = 0; i < n; i++){
		cout<<"Ingrese el elemento "<<i+1<<" : ";
		cin>>arr[i];
	}
	isSort(arr,n);
	
	return 0;
}
void isSort(int a[], int n){
	bool isS = true;
	for(int i = n-1; i >= 1; i--){
		if(a[i-1] >= a[i]){
			isS = false;
			break;
		}
	} 
	if(isS){
		cout<<"Arreglo ordenado "<<endl;
	}else{
		cout<<"Arreglo desordenado "<<endl;
	}
}