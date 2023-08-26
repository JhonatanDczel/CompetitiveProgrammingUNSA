#include <iostream>
using namespace std;

int main(){
    int producto = 1, nums[] = {2, 4, 5, 6};
    for(int n: nums){
        producto *= n;
    }
    cout << "El producto es: " << producto << endl;
    return 0;
}