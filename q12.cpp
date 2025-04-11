/*Leia dois números inteiros quaisquer e escreva a soma entre os três sucessores do primeiro e os
dois antecessores do segundo.*/

#include <iostream>

using namespace std;

int main(){
  int N1, N2, SS, SA;
  cout << "\n\tDigite um numero inteiro: ";
  cin >> N1;
  cout << "\n\tDigite outro numero inteiro: ";
  cin >> N2;
  SS = (N1+1)+(N1+2)+(N1+3);
  cout << "\n\tSoma entre os tres sucessores do primeiro numero: " << SS << endl;
  SA = (N2-1)+(N2-2);
  cout << "\n\tSoma entre os dois antecessores do segundo numero: " << SA << endl;
}