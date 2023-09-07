#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main(){
    int num, intentos = 0, actual;
    srand(time(NULL));
    num = 1 + rand() % (100); 
    do{
        cin >> actual;
        if(actual == num){
            cout << "Lo adivinaste!" << endl;
        }else if(actual > num){
            cout << "Es mas pequeño" << endl;
        }else{
            cout << "Es mas grande" << endl;
        }
        intentos++;
    }while(actual != num);
    cout << "Tardo " << intentos << " intentos" << endl;
    return 0;
}