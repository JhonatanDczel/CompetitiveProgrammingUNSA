#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;
int main(){
	char s[50];
	char inv[50];
	cin.getline(s, 50,'\n');
	strcpy(inv,s);
	strrev(inv);
	if(strcmp(inv, s) == 0){
		cout<<"son palindromas "<<endl;
	}else{
		cout<<"No son palindromas "<<endl;
	}
	getch();
	return 0;
}