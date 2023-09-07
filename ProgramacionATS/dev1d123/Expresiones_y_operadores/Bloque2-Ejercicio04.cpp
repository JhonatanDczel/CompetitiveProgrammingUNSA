//Ejercicio 3
#include <iostream>
using namespace std;
int main(){
	double a, b, c, d, res;
	cin >> a;
	cin >> b;
	cin >> c;
	cin >> d;

	res = a + b/(c-d) ;
	cout << "The answer is " << res;
	cin >> a;
	return 0; 
}