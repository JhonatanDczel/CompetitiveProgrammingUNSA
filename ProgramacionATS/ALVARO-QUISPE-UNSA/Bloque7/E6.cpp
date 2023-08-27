#include <iostream>
#include <string.h>
using namespace std;
int main() {
    char w1[] = "hoLa";
    char w2[] = "HOla";
    strupr(w1);
    strupr(w2);
    if (strcmp(w1, w2) == 0) cout<<"igual"<<endl;
    else cout<<"no"<<endl;
    system("pause");
    return 0;

}
