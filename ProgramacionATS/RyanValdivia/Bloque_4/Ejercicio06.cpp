#include <iostream>
using namespace std;

int main(){
    int num, i, res = 1;
    cin >> num >> i;
    for(int j = 0; j < i; j++){
        res *= num;
    }
    cout << res;
    return 0;
}