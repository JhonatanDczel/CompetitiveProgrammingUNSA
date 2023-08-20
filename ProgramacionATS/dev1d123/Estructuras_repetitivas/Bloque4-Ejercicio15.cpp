#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(){
	int n, a, c = 0;
	srand(time(NULL));
	a = 1 + rand()%(100);
	while(1){
		cout<<"Ingrese un numero entre 1 y 100"<<endl;
		cin>>n;
		if(n < a){
			cout<<"El numero ingresado es menor"<<endl;
		}else if(a < n){
			cout<<"El numero ingresado es mayor"<<endl;
		}else{
			cout<<"WIN"<<endl;
			cout<<"Intentos: "<<c<<endl;
			break;
		}
		c++;
	}
	return 0;
}