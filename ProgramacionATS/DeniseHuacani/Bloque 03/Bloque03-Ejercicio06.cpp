/*6: Escriba un programa que lea de la entrada est�ndar un car�cter e indique
en la salida est�ndar si el car�cter es una vocal min�scula, es una vocal may�scula o
no es una vocal.*/
#include<iostream>
using namespace std;
int main(){
	char letra;
	cout<<"Escribe un caracter : ";cin>>letra;
	switch(letra){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':cout<<"\nEs una vocal minuscula"; break;
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':cout<<"\nEs una vocal mayuscula"; break;
		default :cout<<"\nNo es vocal ";break;
	}
	return 0;
}

