#include <iostream>
using namespace std;

int main(){
    int suma = 0, n, actual;
    cin >> n;
    for(int i = 1; i < n + 1; i++){
        actual = 1;
        for(int j = 1; j < i + 1; j++){
            actual *= j;
        }
        suma += actual;
    }
    cout << suma;
    return 0;
}
