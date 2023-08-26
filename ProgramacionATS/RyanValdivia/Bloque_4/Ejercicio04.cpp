#include <iostream>
using namespace std;

int main(){
    int actual, max, min;
    double media = 0;
    for(int i = 0; i < 6; i++){
        cin >> actual;
        if(i == 0){
            max = actual;
            min = actual;
        }
        if(actual >= max){
            max = actual;
        }
        if(actual <= min){
            min = actual;
        }
        media += actual / 6.0;
    }
    cout << "La temperatura mas baja es: " << min << endl;
    cout << "La temperatura mas alta es: " << max << endl;
    cout << "La temperatura media es: " << media;
    return 0;
}