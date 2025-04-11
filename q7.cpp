/*Leia uma temperatura em graus Celsius e apresente-a convertida em graus Fahrenheit. A
fórmula de conversão é F=(9*C+160)/5, sendo F a temperatura em Fahrenheit e C a temperatura
em Celsius.*/

#include <iostream>

using namespace std;

int main (){
  float C, F;
  cout << "\n\tDigite a temperatura em graus Celsius (C): ";
  cin >> C;
  F = (9*C+160)/5;
  cout <<"\n\tTemperatura convertida em Fahrenheit (F): " << F << "F." << endl;
}