//sqrt(x) / (y ^ 2 - 1)
#include <iostream>
#include <math.h>
using namespace std;
int main(){
  double x, y;
  cout << "Enter values x e y: "; cin >> x >> y;
  cout << "The result is: " << sqrt(x) / (pow(y, 2) - 1) << "\n";
  return 0;
}