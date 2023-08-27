#include <iostream>
using namespace std;
int main(){
	int n1, n2;
	cin>>n1>>n2;
	char arr1[n1], arr2[n2];
	for(int i = 0; i < n1; i++){
		cin>>arr1[i];
	}
	for(int i = 0; i < n2; i++){
		cin>>arr2[i];
	}
	char arr3[n1+n2];
	for(int i = 0; i < (n1); ++i){
		arr3[i] = arr1[i];
	}
	for(int i = n1; i < (n2+n1); ++i){
		arr3[i] = arr2[i-n1];
	}
	for(char a: arr3){
		cout<<a<<" ";
	}
}