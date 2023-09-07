#include<iostream>

using namespace std;

int main(){
	int tot,num;
	cout<<"Coloque hasta que sumero quiere sumar y restar: ";
	cin>>num;
	for(int i = 1; i<=num; i++){
		if(i%2 == 0){
			tot-=i;
		}else{
			tot+=i;
		}
	}
	cout<<"El total es: "<<tot;
	
	return 0;
}
