#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;
int main(){
	char s[100];
	cin.getline(s, 100,'\n');
	int len = strlen(s);
	if(len>=10){
		cout<<s<<endl;
	}else{
		cout<<"La cadena no supera los 10 caracteres "<<endl;
	}
	getch();
	return 0;
}

