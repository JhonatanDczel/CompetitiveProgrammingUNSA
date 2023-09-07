#include<iostream>
#include<math.h>

using namespace std;

int main(){
	int num,sum;
	cout<<"Hasta que potencia quiere: ";
	cin>>num;
	for(int i = 1; i<=num; i++){
		sum+=pow(2,i);
	}
	cout<<sum;
	return 0;
}
