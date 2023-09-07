#include <iostream>
using namespace std;
int main(){
	int a=0;
	int b=1;
	int c=1;
	int n;
	cin>>n;
	while (c <= n){
		cout<<c << " ";
		a = b;
		b = c;
		c = a+b;
	}
	return 0;
	
}