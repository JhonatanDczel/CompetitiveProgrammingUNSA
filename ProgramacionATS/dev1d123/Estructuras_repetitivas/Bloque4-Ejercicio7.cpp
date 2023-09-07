#include <iostream>
using namespace std;
int main(){
	int n;
	cout<< "Ingrese el valor de n: ";
	cin >> n;
	int sum = 0;
	for(int i = 1; i <= n; i++){
		if(i != n){
			cout<<i<<" + ";
		}else{
			cout<<i<<endl;
		}
		sum = sum + i;
	} 
	
	cout<<"El valor de la suma es "<<sum<<endl;
}