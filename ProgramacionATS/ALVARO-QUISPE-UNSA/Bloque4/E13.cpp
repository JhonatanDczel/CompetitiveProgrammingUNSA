#include <iostream>
using namespace std;
int main() {
    int n, a1 = 1, a2 = 1, sum = 0;
    cin>>n;
    for (int i = 0; i <= n; i++) {
        sum = a1 + a2;
        if (i == 0 || i == 1) sum = 1;
        a2 = a1; a1 = sum;
    }
    cout<<sum<<endl;
    system("pause");
    return 0; 
}
