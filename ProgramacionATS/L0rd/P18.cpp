#include<iostream>
using namespace std;
int main(){
    char a;
    cin>>a;
    if(a==toupper(a)){
        cout<<"Es mayuscula";
    }else{
        cout<<"Es minuscula";
    }

    return 0;
}