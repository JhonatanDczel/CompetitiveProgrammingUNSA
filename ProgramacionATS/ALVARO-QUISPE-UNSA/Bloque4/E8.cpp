#include <iostream>
using namespace std;
int main() {
    int x, sum = 0;
    cin>>x;
    for (int i = 1; i <= 2 * x - 1; i+= 2) {
        sum += i;
    } 
    cout<<sum<<endl;
    system("pause");
    return 0;
}
