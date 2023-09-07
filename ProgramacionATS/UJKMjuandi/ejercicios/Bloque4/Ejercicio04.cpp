#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int num,suma,min = INT_MAX, max = INT_MIN ;
	cout<<"Coloque las 6 temperaturas \n";
	for(int i = 1;i<=6;i++){
		cin>>num;
		max = std::max(num,max);
		suma = suma + num;
		min = std::min(num,min);
	}
	cout<<"La temperatura media es: "<<suma/6.0<<endl;
	cout<<"La temperatura mas alta: "<<max<<endl;
	cout<<"La menor temperatura es: "<<min<<endl;
	
	return 0;
}
