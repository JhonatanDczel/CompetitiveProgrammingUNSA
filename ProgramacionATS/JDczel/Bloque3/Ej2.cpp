#include<iostream>

using namespace std;

int main(){
  int a, b, c;

  cin>>a >> b >>c;
  int mayor = a;

  if(b > c && b > a){
    mayor = b;
  }
  if(c > a && c > b){
    mayor = c;
  }

  cout<<mayor;
}
