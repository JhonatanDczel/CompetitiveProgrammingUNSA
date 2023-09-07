#include <iostream>
using namespace std;
int main(){
  int n;cin>>n;
  int p = 1;
  int pp = 1;
  cout<<p<<" "<<pp<<" ";
  for(int i = 2; i < n; i++){
    int a = p + pp;
    cout<<a<<" ";
    pp = p;
    p = a;
  }
}
