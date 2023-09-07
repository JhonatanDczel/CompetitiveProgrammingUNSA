#include <iostream>
using namespace std;
int main(){
	int arr[2][2];
	cin>>arr[0][0]>>arr[0][1]>>arr[1][0]>>arr[1][1];
	int arr2[2][2];
	for(int i = 0; i < 2; i++){
		for(int j = 0; j <2; j++){
			arr2[i][j] = arr[i][j];
		}
	}
	for(int i = 0; i < 2; i++){
		for(int j = 0; j <2; j++){
			cout<<arr2[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}