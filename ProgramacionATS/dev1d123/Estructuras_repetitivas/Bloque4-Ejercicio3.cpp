#include <iostream>
#include <cmath>
int main(){
	int sum = 0;
	for(int i = 1; i <=10; i++){
		sum += pow(i,2); 
	}
	std::cout <<"La suma es "<<sum<<std::endl;
	return 0;
} 