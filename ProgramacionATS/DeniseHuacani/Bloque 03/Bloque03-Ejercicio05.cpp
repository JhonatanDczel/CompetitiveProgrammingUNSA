//5: Escriba un programa que lea de la entrada estándar un carácter e indique
//en la salida estándar si el carácter es una vocal minúscula o no.
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
		default :cout<<"\nNo es vocal minuscula";break;
	}
	return 0;
}

