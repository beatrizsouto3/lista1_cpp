/*Leia um número inteiro N e um percentual qualquer e escreva qual o valor do percentual
aplicado ao número.*/

#include <iostream>

using namespace std;

int main () {
  int N;
  float P, Percentual_Aplicado;
  cout <<"\n\tDigite um numero inteiro: ";
  cin >> N;
  cout <<"\n\tDigite um percentual que queira aplicar: ";
  cin >> P;
  Percentual_Aplicado = (P/100)*N;
  cout <<"\n\tO valor de " << P << "% de " << N << " e: " << Percentual_Aplicado << endl;
}