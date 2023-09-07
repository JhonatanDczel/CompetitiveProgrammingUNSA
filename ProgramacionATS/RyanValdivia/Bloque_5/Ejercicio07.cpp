#include <iostream>
using namespace std;

int main(){
    char parte1[] = {'a', 'b', 'c', 'd', 'e'};
    char parte2[] = {'f', 'g', 'h', 'i', 'j'};
    char junto[10];
    for(int i = 0; i < 10; i++){
        if(i < 5){
            junto[i] = parte1[i]; 
        }else{
            junto[i] = parte2[i - 5];
        }
    }
    for(int i = 0; i < 10; i++){
        cout << junto[i] << " ";
    }
    return 0;
}