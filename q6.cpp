/*O custo ao consumidor de um carro novo é a soma do custo de fábrica com a percentagem do
distribuidor e dos impostos, ambos aplicados ao custo de fábrica. Supondo que a percentagem
do distribuidor seja de 28% e os impostos de 45%, escreva um algoritmo que leia o custo de
fábrica de um carro e escreva o custo ao consumidor.*/

#include <iostream>

using namespace std;

int main (){
  const float PD = 0.28;
  const float Pi = 0.45;
  float CF, New_Car;
  cout <<"\n\tDigite o custo de fabrica de um carro: R$";
  cin >> CF;
  New_Car = (Pi*CF) + (PD*CF) + CF;
  cout <<"\n\tO custo ao consumidor do carro novo: R$" << New_Car << endl;
}