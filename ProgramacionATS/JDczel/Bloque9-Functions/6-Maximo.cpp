#include<iostream>

using namespace std;

template <class TIPO>

TIPO maximo(TIPO n1, TIPO n2, TIPO n3){
  if(n2 > n1 && n2 > n3)
    return n2;
  if(n3 > n1)
    return n3;
  return n1;
}

int main(){
  int n1, n2, n3;
  cin>>n1 >>n2 >>n3;
  cout<<maximo(n1, n2, n3);
  return 0;
}
