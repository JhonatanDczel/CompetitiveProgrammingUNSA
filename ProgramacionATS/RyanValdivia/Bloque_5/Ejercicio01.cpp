#include <iostream>
using namespace std;

int main(){
    int suma = 0, nums[] = {2, 4, 5, 6};
    for(int n: nums){
        suma += n;
    }
    cout << "La suma es: " << suma << endl;
    return 0;
}