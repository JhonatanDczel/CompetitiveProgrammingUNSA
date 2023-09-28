#include<iostream>
#include<math.h>

using namespace std;

int main(){
  int a, b, c;
  cin>>a >>b >>c;
  int x1 = (-b + (sqrt(pow(b, 2) - 4 * a * c))) / (2 * a);
  int x2 = (-b - (sqrt(pow(b, 2) - 4 * a * c))) / (2 * a);
  cout<<x1 <<endl <<x2;
  return 0;
}
