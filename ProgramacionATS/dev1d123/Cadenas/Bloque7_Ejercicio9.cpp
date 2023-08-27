#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
int main() {
    char s[50];
    cout << "Ingrese una palabra" << endl;
    cin.getline(s, 50, '\n');
	int a=0,e=0,i=0,o=0,u=0;
	for(char c: s){
		if(c == 'a'){
			a++;
		}else if(c=='e'){
			e++;
		}else if(c == 'i'){
			i++;
		}else if(c == 'o'){
			o++;
		}else if(c == 'u'){
			u++;
		}
	}
    cout << "a: " << a << endl;
    cout << "e: " << e << endl;
    cout << "i: " << i << endl;
    cout << "o: " << o << endl;
    cout << "u: " << u << endl;

    getch();
    return 0;
}
