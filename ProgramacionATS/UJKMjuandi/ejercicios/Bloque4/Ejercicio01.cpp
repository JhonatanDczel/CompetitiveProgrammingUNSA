#include<iostream>

using namespace std;

int main(){
	int num;
	cout<<"Coloque un numero del 1 al 10: ";
	cin>>num;
	for(int i = 1; i <= num; i++ ){
		for(int j = 1; j<13 ; j++){
			cout<<i<<" X "<<j<<" = "<<i*j<<"\n";
		}
	}
	return 0;
}
