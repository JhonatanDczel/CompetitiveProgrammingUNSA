#include <iostream>
using namespace std;

int main(){
    int n, suma = 0;
    cin >> n;
    for(int i = 1; i < n + 1; i++){
        suma += i;
    }
    cout << suma;
    return 0;
}