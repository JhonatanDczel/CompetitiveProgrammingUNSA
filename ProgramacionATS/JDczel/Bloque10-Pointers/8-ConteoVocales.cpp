#include<iostream>

using namespace std;

char palabra[30];

void contarVocales(char *palabra, int n){
  int a = 0, e = 0, i = 0, o = 0, u = 0;
  while(*palabra){
    switch(*palabra){
      case 'a':
        a++;
        break;
      case 'e':
        e++;
        break;
      case 'i':
        i++;
        break;
      case 'o':
        o++;
        break;
      case 'u':
        u++;
        break;
    }
    palabra++;
  }
  cout<<"La cantidad de vocales a es: " <<a <<endl;
  cout<<"La cantidad de vocales e es: " <<e <<endl;
  cout<<"La cantidad de vocales i es: " <<i <<endl;
  cout<<"La cantidad de vocales o es: " <<o <<endl;
  cout<<"La cantidad de vocales u es: " <<u <<endl;
}


int main(){
  cin.getline(palabra, 30, '\n');
  contarVocales(palabra, 30);
  return 0;
}
