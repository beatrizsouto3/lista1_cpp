/*Leia o valor de uma compra nas Lojas Sua Melhor Compra e mostre o valor das prestações de
acordo com a quantidade de parcelas desejada pelo usuário. A loja está vendendo seus produtos
a vista ou parcelado em até 10 vezes sem juros. */

#include <iostream>

using namespace std;

int main () {
  float VC, Valor_Parcelas;
  int P;
  cout << "\n\tDigite o valor da compra: R$";
  cin >> VC;
  cout << "\n\tDigite a quantidade de parcelas desejadas (1 a 10): ";
  cin >> P;
  if (P<1 || P>10){
    cout <<"\n\tA quantidade de parcelas não estar de acordo com o determinado. Tente novamente com um valor entre 1 a 10.";
  } else {
    Valor_Parcelas = VC/P;
    cout <<"\n\tValor da compra: R$" << VC << endl;
    cout <<"\n\tQuantidade de parcelas determinadas: " << P << endl;
    cout <<"\n\tValor total por parcela: R$" << Valor_Parcelas << endl;
  }
}