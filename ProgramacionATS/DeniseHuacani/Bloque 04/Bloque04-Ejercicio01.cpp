//1: Realice un programa que solicite de la entrada est�ndar un entero del 1 al
//10 y muestre en la salida est�ndar su tabla de multiplicar.
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int num,multi=0;
	do{
		cout<<"Ingrese un numero entero :"; cin>>num;
	}while((num<1)|| (num>10));
	
	for ( int i =0;i<=10;i++){
		multi = num*i;
		cout<<num<<"*"<<i<<"="<<multi<<"\n";
	}
	getch();
	return 0;
}
