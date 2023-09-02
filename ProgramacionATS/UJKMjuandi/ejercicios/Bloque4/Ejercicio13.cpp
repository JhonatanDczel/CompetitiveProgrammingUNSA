#include<iostream>

using namespace std;

int main(){
	int num,ap = 0,ot=1,ap2;
	cout<<"Hasta que numero de la serie fibonacci quiere: ";
	cin>>num;
	cout<<"1\n";
	for(int i = 1; i<num;i++){
		
		ot=ap+ap2;
		cout<<ot<<"\n";
		ap=ap2;
		ap2=ot;
		
	}
	return 0;
}
