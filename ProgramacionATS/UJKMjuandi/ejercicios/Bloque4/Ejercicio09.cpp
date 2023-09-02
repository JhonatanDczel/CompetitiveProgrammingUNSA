#include<iostream>

using namespace std;

int main(){
	int num,fac = 1;
	cout<<"Coloque que factorial quiere: ";
	cin>>num;
	for(int i=1; i<=num; i++){
		fac*=i;
	}
	cout<<fac;
	return 0;
}
