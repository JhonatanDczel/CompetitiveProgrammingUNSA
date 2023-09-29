#include <iostream>

using namespace std;

void tiempo(int totalSeg, int &horas, int &min, int &seg)
{
    min = totalSeg / 60;
    totalSeg %= 60;
    horas = min / 60;
    min %= 60;
    seg = totalSeg;
}

int main()
{
    int totalSeg = 4758, horas, min, seg;
    tiempo(totalSeg, horas, min, seg);
    cout << horas << " " << min << " " << seg << endl;
    return 0;
}