#include<iostream>

using namespace std;

int main(){
	char letra;
	cout<<"Digite una letra";
	cin>>letra;
	
	switch(letra){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u': cout<<"Si es una vocal minuscula:";break;	
		default : cout<<"No es una vocal minuscula:";break;
			
	}
	return 0;
}
