#include <iostream>
using namespace std;
int main(){
  int v[4];
  int p = 1;
  for(int i = 0; i < 4; i++){
    v[i] = 1 + rand()%9;
    p *= v[i];
    (i == 0)? cout<<"" : cout<<" * ";
    cout<<v[i];
  }
  cout<<" = "<<p;
}
