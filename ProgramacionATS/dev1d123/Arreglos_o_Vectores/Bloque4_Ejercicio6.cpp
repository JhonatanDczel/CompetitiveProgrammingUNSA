#include <iostream>
#include <limits>
#include <algorithm>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	int sum = 0;
	
	for(int i = 0; i < n; i++){
		cin>>arr[i];
		sum+= arr[i];	
	}
	for(int i = 0; i < n; i++){
		if(arr[i] == sum - arr[i]){
			cout<<"yes"<<endl;
			return 0;
		}	
	}
	cout<<"no"<<endl;
	
	return 0;
}