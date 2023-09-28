#include<iostream>

using namespace std;

long long int elevar(long long int num, long long int ex){
  if(ex == 0)
    return 1;
  if(ex == 1)
    return num;
  return num * elevar(num, ex - 1);
}
int main(){

  long long int numero, exponente;
  cin>>numero>>exponente;
  cout<<elevar(numero, exponente);
  return 0;
}
