#include<iostream>
#include<math.h>

using namespace std;

int main(){
  int x, y;
  cin>>x >>y;
  int respuesta = (sqrt(x)) / (pow(y, 2) - 1);
  cout<<respuesta;
  return 0;
}
