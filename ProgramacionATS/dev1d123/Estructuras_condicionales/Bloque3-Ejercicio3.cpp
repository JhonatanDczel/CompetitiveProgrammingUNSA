#include <iostream>
using namespace std;
int main(){
	int n;
	cout << "Enter a number: ";
	cin >> n;
	if(n%2 == 0){
		cout << "Is a even number" << endl;
	} else{
		cout << "Is a odd number" << endl;
	}
	cin >> n;
	return 0;
}