#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n){
	for(int i = n/2; i >=2; i--){
		if(n%i == 0){
			return false;
		}
	}
	return true;
	
	
	
}
int main(){
	int n, *dir_n;
	cin>>n;
	dir_n = &n;
	if(isPrime(*dir_n)){
		cout<<"Es primo "<<endl;
	}else{
		cout<<"No es primo "<<endl;
	}
	cout<<"La posicion de memoria es "<<dir_n<<endl;
	
	return 0;	
}