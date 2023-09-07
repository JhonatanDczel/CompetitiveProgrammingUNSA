#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
int c_vocal(char*);

int main(){
	char name[30];
	cout<<"Ingrese el nombre: ";
	cin.getline(name, 30, '\n');
	strupr(name);
	cout<<"La cantidad de vocales es "<<c_vocal(name);
	return 0;
}
int c_vocal(char* name){
	int c;
	while(*name){
		switch(*name){
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U': c++;
		}		
		name++;
	}
	return c;
}
