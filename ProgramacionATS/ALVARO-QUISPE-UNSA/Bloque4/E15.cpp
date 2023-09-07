#include <iostream>
#include <time.h>
using namespace std;
int main() {
    int min, max, t, count;
    min = 1;
    max = 100;
    count = 0;
    srand(time(NULL));
    t = 1 + rand() % 100;
    while (min <= t && t <= max) {
        char r;
        cout<<t<<" </>/="<<endl;
        count++;
        cin>>r;
        if ( r == '<') max = t;
        if ( r == '>') min = t;
        if ( r == '=') break;
        t = min + rand() % (max - min + 1);
    }
    cout<<"es: "<<t<<"con :"<<count<<" intentos\n";
    system("pause");
    return 0;
}
