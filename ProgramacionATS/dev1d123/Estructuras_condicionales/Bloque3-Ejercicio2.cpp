
#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Enter the first number: ";
    cin >> a;

    cout << "Enter the second number: ";
    cin >> b;

    cout << "Enter the third number: ";
    cin >> c;

    int max = a;
    if (a <= b) {
        max = b;
    }
    if (max <= c) {
        max = c;
    }

    cout << "The max number is: " << max << endl;

    cin >> max;

    return 0;
}

