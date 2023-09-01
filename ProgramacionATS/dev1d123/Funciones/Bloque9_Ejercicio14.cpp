#include <iostream>
using namespace std;
void odd_elem(int a[], int n){
	for(int i = 0; i < n; i++){
		if(a[i]%2==1){
			cout<<a[i]<<" ";
		}
	}
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i = 0; i < n; i++){
		cin>>arr[i];
	}
	odd_elem(arr, n);	
	return 0;
}