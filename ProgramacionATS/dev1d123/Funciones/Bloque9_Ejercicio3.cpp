#include <iostream>
using namespace std;
void funpot(int a, int b){
	int res = 1;
	
	for(int i = 0; i < b; i++){
		res *= a; 
	}
	cout<<a<<" elevado a "<<b<<" es "<<res<<endl;	
}

int main(){
	int b,e;
	cout<<"Ingrese la base y el exponente "<<endl;	
	cin>>b>>e;
	funpot(b,e);
	return 0;
}