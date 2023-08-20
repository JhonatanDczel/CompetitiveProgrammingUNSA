#include <iostream>
using namespace std;
int main(){
	int a, b, temp;
	cout <<"Enter the a value: " << endl;
	cin >> a;
	cout << "Enter the b value: " << endl;
	cin >> b;
	temp = a;
	a = b;
	b = temp;
	cout << "The value of a is: " << a << endl;
	cout << "The value of b is: " << b << endl;
	cin >> a;
	return 0;
}