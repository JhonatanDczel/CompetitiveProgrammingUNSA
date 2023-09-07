#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int suma = 0;
    for(int i = 1; i < 11; i++){
        suma += pow(i, 2);
    }
    cout << suma;
    return 0;
}