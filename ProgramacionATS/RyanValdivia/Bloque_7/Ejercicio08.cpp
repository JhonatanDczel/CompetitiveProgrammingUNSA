#include <iostream>
#include <string>
using namespace std;

int main(){
    string cEntero, cReal;
    cin >> cEntero >> cReal;
    cout << stoi(cEntero) + stod(cReal);
}