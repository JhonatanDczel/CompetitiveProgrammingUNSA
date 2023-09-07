#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;
int main(){
	char s[50];
	char a[50];
	cin.getline(s,50,'\n');
	cin.getline(a,50,'\n');
	
	if(strcmp(s,a) == 0){
		cout<<"son iguales"<<endl;
	}else{
		if(strcmp(s,a) > 0){
			cout<<a<<endl;
		}else{
			cout<<s<<endl;

		}
	}
	getch();
	return 0;
}