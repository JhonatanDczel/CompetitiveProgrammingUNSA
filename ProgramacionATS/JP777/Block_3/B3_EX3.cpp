#include <iostream>
using namespace std;
int main(){
  int n1; cin>>n1;
  const char *p = (n1 % 2 == 0)? "p":"i";
  cout<<p;
}
