#include <iostream>
#include <cmath>
using namespace std;
int main() {
    float x, y;
    cout<<"f(x, y) ...\nx = ";
    cin>>x;
    cout<<"y = ";
    cin>>y;
    cout<< "f(" << x << ", " << y << ") = " << sqrt(x) / (pow(y, 2) - 1)<<endl;
    system("pause");
}