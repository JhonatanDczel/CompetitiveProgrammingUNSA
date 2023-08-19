#include <iostream> 
using namespace std;
int main () {
    int a, b;
    cin>>a>>b;
    if (a > b || a == b) {
        cout<<a;
    } else {
        cout<<b<<endl;
    }
    system("pause");
    return 0;
}