#include <iostream>
using namespace std;
int main(){
  int n;cin>>n;
  int t = 0;
  for(int i = 1; i <= n; i++){
    (i % 2 == 0)? t -= i : t += i;
  }
  cout<<t;
}
