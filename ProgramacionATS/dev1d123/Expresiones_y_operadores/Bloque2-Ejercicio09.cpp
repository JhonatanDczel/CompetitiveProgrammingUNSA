#include <iostream>
#include <cmath>
using namespace std;
int main(){
	double x, y, fx;
	cout << "Enter the x value: ";
	cin >> x;
	cout << "Enter the y value: ";
	cin >> y;
	fx = sqrt(x)/(pow(y, 2)-1);
	cout << "The imagen is: " << fx << endl;
	cin >> fx;
	return 0;
}