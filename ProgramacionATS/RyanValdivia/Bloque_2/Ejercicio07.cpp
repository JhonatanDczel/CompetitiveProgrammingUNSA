#include <iostream>

using namespace std;

int main(){
    double nPr, nT, nPar, nFinal;
    cin >> nPr >> nT >> nPar;
    nFinal = nPr * 0.3 + nT * 0.6 + nPar * 0.1;
    cout << nFinal; 
    return 0;
}