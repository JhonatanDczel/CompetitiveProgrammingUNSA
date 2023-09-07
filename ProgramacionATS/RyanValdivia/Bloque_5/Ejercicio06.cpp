#include <iostream>
using namespace std;

int main(){
    int n, suma = 0;
    bool condicion = false;
    cin >> n;
    int nums[n];
    for(int i = 0; i < n; i++){
        cin >> nums[i];
        suma += nums[i];
    }
    for(int i = 0; i < n; i++){
        if(nums[i] == suma - nums[i]){
            condicion = true;
            break;
        }
    }
    if(condicion){
        cout << "Si existe" << endl;
    }else{
        cout << "No existe" << endl;
    }
    
    return 0;
}