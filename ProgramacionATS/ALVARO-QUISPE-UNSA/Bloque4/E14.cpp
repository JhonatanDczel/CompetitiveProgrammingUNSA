#include <iostream>
using namespace std;
int main () {
    int tEx, almU, ult;
    tEx = 0;
    almU = ult = tEx;
    for (int i = 0; i < 5; i++) {
        cout<<"Estudiante "<<i + 1<<endl;
        int reg = 0;
        for (int j = 0; j < 3; j++) {
            cout<<"Nota "<<j + 1<<endl;
            int x;
            cin>>x;
            if (x > 10.5) reg++;
            if (j == 2 && x > 10.5) ult++;
        }
        if (reg == 3) tEx ++;
        if (reg > 0) almU++;
        
    }
    cout<<"Todos los examenes "<<tEx<<"\nAl menos un examen: "<<almU<<"\nEl último exámen: "<<ult<<endl;
    
    system("pause");
    return 0;
}

