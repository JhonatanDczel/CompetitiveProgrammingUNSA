#include <iostream>
using namespace std;

int main(){
    int nums[100];
    int n, actual;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> actual;
        nums[i] = actual; 
    }
    for(int i = 0; i < n; i++){
        cout << i << " -> " << nums[i] << endl;
    }
    return 0;
}