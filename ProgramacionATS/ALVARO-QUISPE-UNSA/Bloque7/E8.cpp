#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;
int main () {
    char w1[10];
    char w2[10];
    cin>>w1>>w2;
    int z = atoi(w1);
    float r = atof(w2);
    int x = z + r;
    cout<<x<<endl;
    system("pause");
    return 0;
}
