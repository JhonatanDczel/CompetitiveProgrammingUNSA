#include <iostream>
using namespace std;

int main(){
    int n, suma = 0;
    cin >> n;
    for(int i = 1; i < n + 1; i++){
        suma += 2 * i - 1;
    }
    cout << suma;
    return 0;
}