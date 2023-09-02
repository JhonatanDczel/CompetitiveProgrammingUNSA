#include <iostream>
using namespace std;
int main(){
  int v[5];
  int max = -100;
  for(int i = 0; i < 5; i++){
    cin>>v[i];
  }
  for(int i = 0; i < 5; i++){
    (v[i] > max)? max = v[i] : max;
  }
  cout<<max;
}
