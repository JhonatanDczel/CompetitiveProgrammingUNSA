#include<iostream>

using namespace std;

int main(){
	int x,y,total = 1;
	cout<<"Coloque 2 numeros: \n";
	cin>>x>>y;
	if(x>0 && y>0 ){
		for(int i=1;i<=y;i++){
			total = total*x;
		}
		cout<<"x elevado a y es: "<<total;
	}else{
		cout<<"Sus numeros no son positivos";
	}
	return 0;
}
