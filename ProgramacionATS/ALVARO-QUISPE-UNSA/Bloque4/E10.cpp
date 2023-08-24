#include <iostream>
using namespace std;
int main() {
    int x, sum = 0;
    cin>>x;
    for (int i = 1; i <= x; i++) {
        int result = 1;
        for (int f = 1; f <= i; f++) {
            result *= f;
        }
        sum += result;
    }
    cout<<sum<<endl;
    system("pause");
    return 0;
}
