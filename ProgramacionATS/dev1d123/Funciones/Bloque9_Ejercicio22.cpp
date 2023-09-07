#include <bits/stdc++.h>
using namespace std;
void escribeNumeros(int ini, int fin){
	for(int i = ini; i <= fin; ++i){
		cout<<i<<endl;
	}
}
int main(){
	int a,b;
	cout<<"Ingrese el inicio y el fin"<<endl;
	cin>>a>>b;
	escribeNumeros(a,b);
	
	return 0;
}