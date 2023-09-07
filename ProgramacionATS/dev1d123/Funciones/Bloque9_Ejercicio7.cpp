#include <iostream>
using namespace std;
void intercambio (int &a, int &b){
	int temp = a;
	a = b;
	b = temp;
}
int main(){
	int a = 8;
	int b = 5;	
	cout<<"a vale "<<a<<endl;
	cout<<"b vale "<<b<<endl;
	intercambio(a,b);
	cout<<"a vale "<<a<<endl;
	cout<<"b vale "<<b<<endl;
	return 0;
}