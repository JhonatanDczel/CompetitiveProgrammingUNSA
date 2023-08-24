#include <iostream>
using namespace std;
int main() {
    float a, b, c, d, e, f;
    cin>>a>>b>>c>>d>>e>>f;
    cout.precision(3);
    cout<<(a + b / c) / (d + e / f);
    system("pause");
}