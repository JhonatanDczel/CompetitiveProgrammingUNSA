#include <iostream>
using namespace std;
int main(){
	int arr[5];
	for(int i = 0; i<5;i++){
		cin>>arr[i];
	}
	int arr2[5];
	for(int i = 0; i<5;i++){
		arr2[i] = arr[i]*2;
		cout<<arr2[i]<<" ";
	}
	return 0;
}