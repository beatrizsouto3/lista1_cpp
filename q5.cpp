/*Leia o tempo de duração de um evento expresso em segundos, converta-o e mostre-o expresso
em horas, minutos e segundos.*/

#include <iostream>

using namespace std;

int main (){
  int S, H, M, Seg_Rest;
  cout <<"\n\tDigite o tempo total do evento em segundos: ";
  cin >> S;
  H = S/3600;
  M = (S%3600)/60;
  Seg_Rest = S%60;
  cout <<"\n\tO tempo convertido e: " << H << "h " << M << "m " << Seg_Rest << "s" << endl;
}