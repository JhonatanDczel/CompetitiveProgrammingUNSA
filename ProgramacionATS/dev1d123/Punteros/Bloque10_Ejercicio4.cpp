#include <bits/stdc++.h>
#include <limits>
using namespace std;

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i = 0; i<n;i++){
		cin>>arr[i];
	}
	int *dir_n;
	int minimo = numeric_limits<int>::max();
	for(int i = 0; i<n;++i){
		minimo = min(minimo, arr[i]);
		if(arr[i] == minimo){
			dir_n = &arr[i];
		}
	}
	cout<<"El menor elemento es "<<minimo<<" y su direccion es "<<dir_n<<endl;
	return 0;
}