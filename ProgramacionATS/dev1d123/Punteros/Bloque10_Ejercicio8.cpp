#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
void c_vocal(char*);

int main(){
	char word[50];
	cout<<"Ingrese la palabra: ";
	cin.getline(word, 50, '\n');
	strupr(word);
	c_vocal(word);
	return 0;
}
void c_vocal(char* word){
	int a=0,e=0,i=0,o=0,u=0;
	while(*word){
		switch(*word){
			case 'A':a++; break;
			case 'E':e++; break;
			case 'I':i++; break;
			case 'O':o++; break;
			case 'U':u++;
		}		
		word++;
	}
	cout<<"a: "<<a<<'\n';
	cout<<"e: "<<e<<'\n';
	cout<<"i: "<<i<<'\n';
	cout<<"o: "<<o<<'\n';
	cout<<"u: "<<u<<'\n';
}