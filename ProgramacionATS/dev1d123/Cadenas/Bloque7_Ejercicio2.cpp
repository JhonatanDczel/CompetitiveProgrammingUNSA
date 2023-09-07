#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;
int main(){
	char s[50];
	char a[50];
	cin.getline(s, 50,'\n');
	strcpy(a, s);
	cout<<a<<endl;
	getch();
	return 0;
}