#include <iostream>
using namespace std;
int main() {
    int x, q;
    cin>>x;
    q = 2;
    while (x != 1) {
        while (x % q == 0) {
            cout<<q<<"*";
            x /= q;
        }
        q++;
    }
    cout<<endl;
    system("pause");
    return 0;
}
