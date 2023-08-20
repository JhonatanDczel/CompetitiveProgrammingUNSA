#include <iostream>
#include <cmath>
using namespace std;
int main(){
	double a, b, c, x1, x2;
	cout <<"Enter the a value: ";
	cin >> a;
	cout <<"Enter the b value: ";
	cin >> b;
	cout <<"Enter the c value: ";
	cin >> c;
	double d = pow(b,2)-(4*a*c);
	x1 = (-b + sqrt(d))/(2*a);
	x2 = (-b - sqrt(d))/(2*a);
	cout <<"x1 = " << x1 << endl;
	cout <<"x2 = " << x2 << endl;
	cin >> d;

}