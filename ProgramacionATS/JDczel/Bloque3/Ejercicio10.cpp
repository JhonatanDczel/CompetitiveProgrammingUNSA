#include<iostream>

using namespace std;

int main(){
    int mes;
    
    cout <<"Ingresa un mes del año: "; cin >>mes;

    switch(mes){
        case 1: cout <<"\nEs mes es enero"; break;
        case 2: cout <<"\nEs mes es febrero"; break;
        case 3: cout <<"\nEs mes es marzo"; break;
        case 4: cout <<"\nEs mes es abril"; break;
        case 5: cout <<"\nEs mes es mayo"; break;
        case 6: cout <<"\nEs mes es junio"; break;
        case 7: cout <<"\nEs mes es julio"; break;
        case 8: cout <<"\nEs mes es agosto"; break;
        case 9: cout <<"\nEs mes es setiembre"; break;
        case 10: cout <<"\nEs mes es octubre"; break;
        case 11: cout <<"\nEs mes es noviembre"; break;
        case 12: cout <<"\nEs mes es diciembre"; break;
        default: cout <<"\nNo es un numero correspondiente a un mes"; break;
    }
    
    return 0;
}