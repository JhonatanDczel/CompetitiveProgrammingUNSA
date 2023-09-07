#include <iostream>
using namespace std;

int main(){
    int num;
    do{
        cin >> num;
    }while(!(1 <= num && num <= 10));
    for(int i = 0; i <= 12; i++){
        cout << num << " * " << i << " = " << num * i << endl;
    }
    return 0;
}