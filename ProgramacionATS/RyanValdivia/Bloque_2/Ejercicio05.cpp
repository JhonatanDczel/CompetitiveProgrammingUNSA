#include <iostream>

using namespace std;

int main(){

    int a, b, pivot;
    cin >> a >> b;
    pivot = a;
    a = b;
    b = pivot;
    cout << "El valor de a ahora es: " << a;
    cout << "El valor de b ahora es: " << b;
    return 0;
}