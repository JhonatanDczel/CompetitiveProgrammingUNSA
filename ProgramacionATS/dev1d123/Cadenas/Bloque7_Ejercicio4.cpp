#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;
int main(){
	cout<<"Digite su nombre: ";
	char s[50] = "Hola que tal ";
	char a[10];
	cin.getline(a, 10,'\n');
	strcat(s, a);
	cout<<s<<endl;
	getch();
	return 0;
}