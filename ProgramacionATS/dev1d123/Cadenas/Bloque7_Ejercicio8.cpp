#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;
int main(){
	char s[50];
	char a[10];
	cout<<"Ingrese un numero entero "<<endl;
	cin.getline(s, 10,'\n');
	cout<<"Ingrese un numero real "<<endl;
	cin.getline(a, 10,'\n');
	int x = atoi(s);
	double y = atof(a);
	
	cout<<(x+y)<<endl;
	getch();
	return 0;
}