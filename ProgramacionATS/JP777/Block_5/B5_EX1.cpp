#include <iostream>
using namespace std;
int main(){
  int v[10];
  int s = 0;
  for(int i = 0; i < 10; i++){
    v[i] = 1 + rand()%9;
    s += v[i];
    (i == 0)? cout<<"" : cout<<" + ";
    cout<<v[i];
  }
  cout<<" = "<<s;
}
