#include <iostream>
using namespace std;
int main(){
	int n=-1;
	int pos = 0;
	while(n != 0){
		cout<<"Ingrese un numero"<<endl;
		cin >> n;
		if(n > 0){
			pos++;
		}
	}
	cout <<"La cantidad de numeros positivos es "<<pos<<endl;
	return 0;
}