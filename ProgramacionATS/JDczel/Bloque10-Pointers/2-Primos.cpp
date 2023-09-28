#include<iostream>

using namespace std;

int main(){
  string rpta = " si";
  int num, *pNum;
  pNum = &num;
  cin>>num;

  for(int i = 2; i < num - 1; i++){
    if(num % i == 0)
      rpta = " no";
  }
  cout<<"La variable cuya ubicacion es: " <<pNum <<rpta << " es primo";

  return 0;
}
