#include <iostream>
#include <cmath>
using namespace std;
int main(){
	double c1, c2, h;
	cout << "Enter the leg 1: ";
	cin >> c1;
	cout << "Enter the leg 2: ";
	cin >> c2;
	h = pow(pow(c1, 2) + pow(c2, 2), 0.5);
	cout << "The hypotenuse is: " << h<<endl;
	cin >> h;
	return 0;
}