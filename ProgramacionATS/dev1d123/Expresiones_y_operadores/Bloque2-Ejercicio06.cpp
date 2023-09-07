#include <iostream>
using namespace std;
int main(){
	double n1, n2, n3, avg;
	cout << "Enter the first note: ";
	cin >> n1;
	cout << "Enter the second note: ";
	cin >> n2;
	cout << "Enter the third note: ";
	cin >> n3;
	avg = (n1+n2+n3)/3;
	cout << "The average is: " << avg << endl;
	cin >> avg;
	return 0;
}