/*Leia a idade de uma pessoa expressa em anos, meses e dias e mostre-a expressa apenas em dias.
Obs: Considere cada mês com 30 dias.*/

#include <iostream>

using namespace std;

int main () {
  int A, M, D, Dias_Totais;
  cout <<"\n\tDigite sua idade em anos, meses e dias: ";
  cin >> A >> M >> D;
  Dias_Totais = (A*365)+(M*30)+D;
  cout <<"\n\tDias totais: " << Dias_Totais << " dias." <<endl;
}