#include<iostream>

using namespace std;


int main(){
	int num,suma;
	cout<<"Introduzca numeros excepto los del 20 al 30\n";
	do{
		cin>>num;
		if(num>0){
			suma = suma + num;
		}
		
	}while((num<20 || num>30) && num!=0);
	cout<<suma;
	return 0;
}
