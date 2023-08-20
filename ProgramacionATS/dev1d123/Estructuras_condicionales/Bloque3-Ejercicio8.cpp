#include <iostream>
using namespace std;
int main(){
	int a,b,c,n;
	cin>>a;
	cin>>b;
	cin>>c;
	cin>>n;
	if(a == n || b == n || c == n){
		cout<<"El numero coincide con alguno"<<endl;
	} else{
		cout<<"El numero no coincide"<<endl;
	}
	return 0;
}