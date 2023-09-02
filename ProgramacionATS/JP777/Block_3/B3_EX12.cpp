#include <iostream>
#include <math.h>
using namespace std;
int main(){
  int n; cin>>n;
  char o; cin>>o;
  char p =  (n % 2 == 0)? 'p':'i';
  switch (o){
    case 'c' : cout<<pow(n,3);break;
    case 'p' : cout<<p;break;
    case 's' : break;
  }
}
