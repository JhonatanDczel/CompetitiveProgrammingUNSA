#include <iostream>
using namespace std;
int main(){
  int a = 2, b = 3, aux;
  aux = a;
  a = b;
  b = aux;
  cout<<a<<endl<<b;
}
