#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int sum = 0;
    for (int i = 1; i < 11; i++) {
        sum += pow(i, 2);
    }
    cout<<sum<<endl;
    system("pause");
    return 0;
}
