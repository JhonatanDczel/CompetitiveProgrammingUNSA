#include<iostream>

using namespace std;

int main(){
	
	int lim,sum;
	cout<<"Coloque hasta que numero desea sumar \n";
	cin>>lim;
	for(int i = 0; i <= lim ; i++){
		sum = sum + i;
		
	}
	cout<<"La suma es: "<<sum;
	return 0;
}
