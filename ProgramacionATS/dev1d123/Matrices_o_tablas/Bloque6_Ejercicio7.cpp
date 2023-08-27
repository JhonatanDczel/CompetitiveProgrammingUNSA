#include <iostream>
using namespace std;
int main(){
	int arr[3][3];
	int arrT[3][3];
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			cin>>arr[i][j];
		}
	}
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			if(!(arr[i][j] == arr[j][i])){
				cout<<"no"<<endl;
				return 0;
			}
		}
	}
	cout<<"yes"<<endl;

	return 0;
}