#include <iostream>
using namespace std;

int main(){
    int a = 0, b = 1, c = 1, n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cout << c << " ";
        a = b;
        b = c;
        c = a + b;
    }
    return 0;
}