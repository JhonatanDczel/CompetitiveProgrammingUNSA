#include <iostream>
#include <vector>
using namespace std;

int suma_arr(vector<int>& a); 

int main() {
    int n;
    cout << "Ingrese la longitud del vector: " << endl;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cout << "Ingrese el elemento " << i + 1 << " : ";
        cin >> arr[i];
    }
    cout << "La suma de elementos es " << suma_arr(arr);
    return 0;
}

int suma_arr(vector<int>& a) {
    int s=0;
    for (int i:a)s+=i;
    return s;
}
