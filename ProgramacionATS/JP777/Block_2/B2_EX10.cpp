#include <iostream>
#include <math.h>
using namespace std;
int main(){
  double a; cin>>a;
  double b; cin>>b;
  double c; cin>>c;
  double r1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
  double r2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
  cout<<r1<<endl<<r2;
}
