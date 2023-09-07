#include <iostream>
using namespace std;
int main(){
  int x; cin>>x;
  int y; cin>>y;
  int pow = 1;
  for(int i = 0; i < y; i++){
    pow *= x;
  }
  cout<<pow;
}
