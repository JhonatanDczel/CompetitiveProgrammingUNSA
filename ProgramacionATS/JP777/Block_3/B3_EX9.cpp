#include <iostream>
#include <math.h>
using namespace std;

char romano(int n){
  switch(n){  
    case(1) : return 'I';
    case(5) : return 'V';
    case(10) : return 'X';
    case(50) : return 'L';
    case(100) : return 'C';
    case(500) : return 'D';
    case(1000) : return 'M';
  }
}
int main(){
  int n; cin>>n;
  int nr = 0;
  for(int i = 3; i > 0; i--){
    if(n / pow(10,i) != 0){
      nr = n / pow(10,i);
      n = n - nr * pow(10,i);
      for(int j = 0; j < nr; j++){
	cout<<romano(pow(10,i));
      }
    }
  }
}
