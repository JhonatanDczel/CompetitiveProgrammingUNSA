#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main(){
	int r,c;
	cin>>r>>c;
	srand(time(NULL));
	int arr[r][c];
	for(int i = 0; i < r; i++){
		for(int j = 0; j < c; j++){
			arr[i][j] = 1 + rand()%(1000);
		}
	}
	for(int i = 0; i < r; i++){
		for(int j = 0; j < c; j++){
			cout<<arr[i][j]<<"\t";
		}
		cout<<endl;
	}
	return 0;
}