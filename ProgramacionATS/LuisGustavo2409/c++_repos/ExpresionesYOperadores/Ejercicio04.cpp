// a + (b / (c - d))
#include <iostream>
using namespace std;
int main(){
  double a, b, c, d;
  cout << "Enter four numbers: "; cin >> a >> b >> c >> d;
  cout << a + (b / (c - d)) << "\n";
  return 0;
}