/*
 * Ejercicio 6: Escribe un programa que defina un vector de números y calcule si existe
algún número en el vector cuyo valor equivale a la suma del resto de números del vector.
*/
#include <iostream> 
using namespace std;
int main(){
  int nums[] = {2, 2, 10, 2, 2, 2}, sum = 0;
  for(int i = 0; i < 6; i++){
    for(int u = 0; u < 6; u++){
      if(i != u){
        sum += nums[u];
      }
    }
    if(sum == nums[i]){
      cout << "El numero que cumple los requisitos es: " << nums[i] << "\n";
      return 0;
    }
    sum = 0;
  }
  cout << "Ningun numero cumple con los requisitos\n";
  return 0;
}
