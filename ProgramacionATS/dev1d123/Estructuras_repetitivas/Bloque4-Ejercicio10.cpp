#include <iostream>
using namespace std;
int main(){
	int n;
	int sum = 0;
	cin>>n;
	for(int i = 1; i <=n; i++){
		int fact = 1;
		for(int k = i; k != 0; k--){
			fact = fact * k;
		}	
		if(i == n){
			cout<<fact<<endl;
		}else{
			cout<<fact<<" + ";
		}
		sum += fact;
	}
	cout<<"la suma es "<<sum<<endl;
	return 0;
}