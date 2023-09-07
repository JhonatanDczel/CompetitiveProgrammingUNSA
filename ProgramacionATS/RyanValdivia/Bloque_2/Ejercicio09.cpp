#include <iostream>
#include <math.h>

using namespace std;

int main(){
    double x, y;
    cin >> x >> y;
    cout << sqrt(x) / (pow(y, 2) - 1);
    return 0;
}