#include <iostream>
using namespace std;
int main(){
	int n = 0;
	cin>>n;
	while(n >= 1){
		for(int i = 2; i <= n; i++){
			if(n%i == 0){
				n = n/i;
				if(n != 1){
					cout<<i<<" x ";
				}else{
					cout<<i<<endl;
				}
				
				break;
			}
		}
	}
	return 0;
}