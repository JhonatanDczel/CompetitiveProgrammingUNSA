#include <iostream>
using namespace std;
int main(){
	int a, b;
	cout << "Enter the a value: ";
	cin >> a;
	cout << "Enter the b value: ";
	cin >> b;
	if(a>=b){
		cout << a << " es mayor que " << b << endl;
	} else{
		cout << b << " es mayor que " << a << endl;
	}
	return 0;
}