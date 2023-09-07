#include <iostream>
using namespace std;

int main(){
    int todos = 0, alMenos = 0, ultimo = 0;
    for(int i = 0; i < 5; i++){
        double n1, n2, n3;
        cin >> n1 >> n2 >> n3;
        if(n1 >= 11 && n2 >= 11 && n3 >= 11){
            todos++;
        }
        if(n1 >= 11 || n2 >= 11 || n3 >= 11){
            alMenos++;
        }
        if(n1 < 11 && n2 < 11 && n3 >= 11){
            ultimo++;
        }
    }
    cout << "Los que aprobaron todos son: " << todos << endl;
    cout << "Los que aprobaron al menos uno son: " << alMenos << endl;
    cout << "Los que aprobaron solo el ultimo son: " << ultimo << endl;
    return 0;
}