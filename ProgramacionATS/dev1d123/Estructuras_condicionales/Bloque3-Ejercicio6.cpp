#include <iostream>
#include <cctype>

using namespace std;
int main(){
	char l;
	bool vowel = false;
	cout << "Ingrese un caracter: ";
	cin >> l;
	switch(l){
		case 'A': 
		case 'E':
		case 'I':
		case 'O':
		case 'U':
		case 'a': 
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			vowel = true;
	}
	if(vowel){
		if(isupper(l)){
			cout <<l<< " es una vocal mayuscula"<<endl;
		}else{
			cout <<l<< " es una vocal minuscula"<<endl;
		}
	}else{
		cout <<l<< " no es una vocal"<<endl;
	}
	return 0;
}