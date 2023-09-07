#include <bits/stdc++.h>
using namespace std;
void show_even(int arr[10]){
	int *dir_n;
	dir_n = arr;
	for(int i = 0 ; i < 10; i++){
		if(*dir_n%2 == 0){
			cout<<*dir_n<<": "<<dir_n<<"\t";
		}
		dir_n++;
	}
}
int main (){
	int arr[10] = {5, 7, 8, 9 ,4, 4, 4, 7, 8, 9};

	show_even(arr);	
	return 0;
}
