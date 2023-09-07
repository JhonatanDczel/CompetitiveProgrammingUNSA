#include <iostream>
using namespace std;

int main(){
    int num, contador = 0;
    do{
        cin >> num;
        if(num == 0){
            break;
        }
        contador++;
    }while(num != 0);
    cout << contador;
    return 0;
}