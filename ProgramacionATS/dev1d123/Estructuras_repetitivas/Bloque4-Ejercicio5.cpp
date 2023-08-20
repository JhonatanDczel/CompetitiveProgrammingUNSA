#include <iostream>
using namespace std;
int main(){
	int n = -1;
	int posSum = 0;
	while(n != 0){
		cout<<"Ingrese un numero, que no sea 0 y que no este en el rango [20 - 30]"<<endl;
		cin >>n;
		if((n > 0) &&(n > 30 || n < 20)){
			posSum += n;
		}
	}
	cout << "La suma de los valores positivos es "<<posSum<<endl;
}