#include <iostream>
using namespace std;
int main(){
  int n1; cin>>n1;
  const char *p = (n1 < 0)? "n":"p";
  p = (n1 == 0)? "o":p;
  cout<<p;
}
