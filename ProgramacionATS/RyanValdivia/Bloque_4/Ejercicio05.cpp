#include <iostream>
using namespace std;

int main(){
    int num, suma = 0;
    do{
        cin >> num;
        if(!(20 <= num && num <= 30) || num == 0){
            break;
        }
        suma += num;
    }while((20 <= num && num <= 30) || num == 0);
    cout << suma;
    return 0;
}