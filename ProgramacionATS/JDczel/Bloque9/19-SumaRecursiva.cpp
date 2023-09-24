#include<iostream>

using namespace std;

int suma(int n){
  if(n == 1)
    return 1;
  return n + suma(n - 1);
}
int main(){
  int num;
  cin>>num;
  cout<<suma(num);
  return 0;
}
