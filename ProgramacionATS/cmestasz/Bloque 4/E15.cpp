#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    int guess, count = 0;
    srand(time(NULL));
    int num = 1 + (rand() % 100);
    do
    {
        cin >> guess;
        if (guess > num)
        {
            cout << "Mayor" << endl;
        } else if (guess < num)
        {
            cout << "Menor" << endl;
        }
        count++;
    } while (guess != num);
    cout << "Intentos: " << count << endl;
    return 0;
}