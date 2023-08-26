#include <iostream>
using namespace std;

int main(){
    int num, m, c, d, u;
    cin >> num;
    u = num % 10; num /= 10;
    d = num % 10; num /= 10;
    c = num % 10; num /= 10;
    m = num;

    switch (m){
        case 3: cout << "MMM";
            break;
        case 2: cout << "MM";
            break;
        case 1: cout << "M";
            break;    
        default: cout << "";
            break;
    }

    switch (c){
        case 9: cout << "CM";
            break;
        case 8: cout << "DCCC";
            break;
        case 7: cout << "DCC";
            break;
        case 6: cout << "DC";
            break;
        case 5: cout << "D";
            break;
        case 4: cout << "CD";
            break;
        case 3: cout << "CCC";
            break;
        case 2: cout << "CC";
            break;
        case 1: cout << "C";
            break;  
        default: cout << "";
            break;
    }

    switch (d){
        case 9: cout << "XC";
            break;
        case 8: cout << "LXXX";
            break;
        case 7: cout << "LXX";
            break;
        case 6: cout << "LX";
            break;
        case 5: cout << "L";
            break;
        case 4: cout << "XL";
            break;
        case 3: cout << "XXX";
            break;
        case 2: cout << "XX";
            break;
        case 1: cout << "X";
            break;  
        default: cout << "";
            break;
    }

    switch (u){
        case 9: cout << "IX";
            break;
        case 8: cout << "VIII";
            break;
        case 7: cout << "VII";
            break;
        case 6: cout << "VI";
            break;
        case 5: cout << "V";
            break;
        case 4: cout << "IV";
            break;
        case 3: cout << "III";
            break;
        case 2: cout << "II";
            break;
        case 1: cout << "I";
            break;  
        default: cout << "";
            break;
    }
    return 0;
}