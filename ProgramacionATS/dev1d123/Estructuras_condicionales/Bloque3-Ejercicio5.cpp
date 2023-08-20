#include <iostream>
using namespace std;
int main(){
	char l;
	bool vowel = false;
	cout << "Ingrese un caracter: ";
	cin >> l;
	switch(l){
		case 'a': 
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			vowel = true;
	}
	if(vowel){
		cout <<l<< " es una vocal"<<endl;
	}else{
		cout <<l<< " no es una vocal"<<endl;
	}
}
			