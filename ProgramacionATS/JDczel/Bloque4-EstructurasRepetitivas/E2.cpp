#include<iostream>

using namespace std;

int main(){
  int count = 0;
  int num;

  do{
    cin>> num;
    if(num > 0)
      count++;
  }while(num != 0);

  cout<<count;
  return 0;
}
