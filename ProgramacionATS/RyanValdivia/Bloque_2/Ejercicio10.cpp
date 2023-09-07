#include <iostream>
#include <math.h>

using namespace std;

int main(){
    double a, b, c, discr;
    cin >> a >> b >> c;
    discr = pow(b, 2) - (4 * a * c);
    if(discr == 0){
        cout << (-1 * b) / (2 * a) << endl;
    }else{
        cout << ((-1 * b) + sqrt(discr)) / (2 * a) << endl;
        cout << ((-1 * b) - sqrt(discr)) / (2 * a) << endl;
    }
    return 0;
}