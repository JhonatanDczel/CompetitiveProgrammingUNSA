#include <iostream>
#include <limits>
#include <algorithm>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	int maxim =  numeric_limits<int>::min();
	
	for(int i = 0; i < n; i++){
		cin>>arr[i];
		maxim = max(maxim, arr[i]);	
	}
	cout<<maxim<<endl;
	
	return 0;
}