/*. Leia os valores dos lados de um retângulo, calcule e escreva sua área.*/

#include <iostream>

using namespace std;

int main(){
  float L1, L2, A;
  cout << "\n\tDigite o valor do lado 1 do retangulo: ";
  cin >> L1;
  cout << "\n\tDigite o valor do lado 2 do retangulo: ";
  cin >> L2;
  A = L1*L2;
  cout << "\n\tArea do retangulo: " << A << endl;
}