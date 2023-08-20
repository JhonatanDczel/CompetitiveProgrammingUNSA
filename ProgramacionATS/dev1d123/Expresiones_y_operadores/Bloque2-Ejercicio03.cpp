//Ejercicio 3
#include <iostream>
using namespace std;
int main(){
	double a, b, c, d, e, f, res;
	cin >> a;
	cin >> b;
	cin >> c;
	cin >> d;
	cin >> e;
	cin >> f;
	res = (a + (b/c))/(d + (e/f));
	cout << "The answer is " << res;
	cin >> a;
	return 0; 
}