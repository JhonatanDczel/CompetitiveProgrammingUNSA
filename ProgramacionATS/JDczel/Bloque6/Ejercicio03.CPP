#include <iostream>
using namespace std;

int main() {
    int data1[2][2], data2[2][2];
    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> data1[i][j];
        }
    }
    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            data2[i][j] = data1[i][j];
            cout << data2[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}

