
#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    int data[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << data[i][j];
        }
        cout << "\n";
    }
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i == j) {
                cout << "[" << i << "][" << j << "]: " << data[i][j] << endl;
            }
        }
    }
    
    getch();
    return 0;
}
