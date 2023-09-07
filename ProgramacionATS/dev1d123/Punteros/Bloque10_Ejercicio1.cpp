#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, *dir_n;
	cin>>n;
	dir_n = &n;
	if(*dir_n%2 == 0){
		cout<<"El numero es par "<<endl;
	}else{
		cout<<"El numero es impar "<<endl;
	}
	cout<<"La posicion de memoria es "<<dir_n;
	return 0;
}