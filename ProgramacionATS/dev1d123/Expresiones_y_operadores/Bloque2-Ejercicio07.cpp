#include <iostream>
using namespace std;
int main(){
	double n1, n2, n3, fn;
	cout << "Enter the practice note: ";
	cin >> n1;
	cout << "Enter the theoric note: ";
	cin >> n2;
	cout << "Enter the participation note: ";
	cin >> n3;
	fn = 0.3*n1 + 0.6*n2 + 0.1*n3;
	
	cout << "The final note is: " << fn << endl;
	cin >> fn;
	return 0;
}