#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int suma;
	for(int i= 1; i<=10;i++){
		suma = suma + pow(i,2); 
		cout<<pow(i,2)<<endl;
	}
	cout<<suma;
	return 0;
}
