// (a + (b / c)) / (d + (e / f))
#include <iostream>
using namespace std;
int main(){
  double a, b, c, d, e, f;
  cout << "Enter six numbers: "; cin >> a >> b >> c >> d >> e >> f;
  cout << (a + (b / c)) / (d + (e / f)) << "\n";
  return 0;
}