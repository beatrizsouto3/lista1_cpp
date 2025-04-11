/*Calcule e escreva a quantidade de dinheiro gasta por um fumante a partir da leitura das
informações: número de anos que ele fuma, quantidade de cigarros fumados por dia e preço de
uma carteira (contendo 10 cigarros). */

#include <iostream>

using namespace std;

int main (){
  int AF, QCD;
  float P, valor_total_gasto;
  cout <<"\n\tDigite o numero de anos fumando: ";
  cin >> AF;
  cout <<"\n\tDigite a quantidade de cigarros fumados por dia: ";
  cin >> QCD;
  cout <<"\n\tDigite o valor por carteira: R$";
  cin >> P;
  valor_total_gasto = ((AF*365*QCD)/10)*P;
  cout <<"\n\tO valor total gasto: R$" << valor_total_gasto << endl;
}