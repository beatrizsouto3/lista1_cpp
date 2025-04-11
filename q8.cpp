/*Escreva o valor em reais (R$) de um valor lido em dólares (US$). O algoritmo deverá solicitar o
valor da cotação do dólar e também a quantidade de dólares que o usuário deseja converter.*/

#include <iostream>

using namespace std;

int main (){
  float D, R, QD;
  cout << "\n\tDigite a cotacao do dolar (US$ para R$): ";
  cin >> D;
  cout << "\n\tDigite a quantidade de dolares que deseja converter: ";
  cin >> QD;
  R = D*QD;
  cout << "\n\tO valor em reais (R$) e: R$ " << R << endl;
}