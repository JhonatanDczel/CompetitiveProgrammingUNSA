#include <iostream>
using namespace std;
int main(){
  int n1; cin>>n1;
  int n2; cin>>n2;
  int n3; cin>>n3;
  int m = (n1 < n2)? n2:n1;
  m = (m < n3)? n3:m;
  cout<<m;
}
