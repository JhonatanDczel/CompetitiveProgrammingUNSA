#include <iostream>
using namespace std;
int main() {
    int x, sum;
    sum = 0;
    cin>>x;
    while (!(x >= 20) || !(30 >= x)) {
        if (x > 0) sum += x;
        cin>>x;
    }
    cout<<sum<<endl;
    system("pause");
    return 0;

}
