#include <iostream>
using namespace std;
int main() {
    int x, result = 1;
    cin>>x;
    for (int i = 1; i <= x; i++) {
        result *= i;
    }
    cout<<result<<endl;
    system("pause");
    return 0;
}
