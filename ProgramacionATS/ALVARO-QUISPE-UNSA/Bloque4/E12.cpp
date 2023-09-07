#include <iostream>
using namespace std;
int main () {
    int n, sum = 0;
    cin>>n;
    for (int i = 0; i <= n; i++) {
        int a = i;
        if (a % 2 == 0) a = -a;
        sum += a;
    }
    cout<<sum<<endl;
    system("pause");
    return 0;
}
