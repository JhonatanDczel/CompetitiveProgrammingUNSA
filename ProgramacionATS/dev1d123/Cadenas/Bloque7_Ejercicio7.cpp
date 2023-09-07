#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;
int main(){
	cout<<"Ingrese su nombre en mayusculas "<<endl;
	char s[50];
	cin.getline(s, 50,'\n');
	if(s[0] == 'A'){
		strlwr(s);
	}

	cout<<s<<endl;
	getch();
	return 0;
}