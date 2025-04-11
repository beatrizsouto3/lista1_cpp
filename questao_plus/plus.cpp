/*Elabore um algoritmo que leia 4 numeros inteiros e uma ordem ('C'- crescente, 'D' - decrescente ou 'a' - aleatorio) e escreva os numeros de acordo com a ordem escolhida*/

#include <iostream>

using namespace std;

int main (){
  int n1, n2, n3, n4, aux;
  char ordem;

  //entrada
  cout << "\n\tInsira 4 numeros inteiros:";
  cin >> n1 >> n2 >> n3 >> n4;

  cout << "\n\tInsira a ordem que deseja (ordem crescente - 'C', ordem decrescente - 'D' ou ordem aleatoria - 'A'): ";
  cin >> ordem;

  //Processamento
  if (ordem == 'C' || ordem == 'c') {
    // Ordenação crescente
    if (n1 > n2) { aux = n1; n1 = n2; n2 = aux; }
    if (n2 > n3) { aux = n2; n2 = n3; n3 = aux; }
    if (n3 > n4) { aux = n3; n3 = n4; n4 = aux; }
    if (n1 > n2) { aux = n1; n1 = n2; n2 = aux; }
    if (n2 > n3) { aux = n2; n2 = n3; n3 = aux; }
    if (n1 > n2) { aux = n1; n1 = n2; n2 = aux; }
  } else if (ordem == 'D' || ordem == 'd') {
    // Ordenação decrescente
    if (n1 < n2) { aux = n1; n1 = n2; n2 = aux; }
    if (n2 < n3) { aux = n2; n2 = n3; n3 = aux; }
    if (n3 < n4) { aux = n3; n3 = n4; n4 = aux; }
    if (n1 < n2) { aux = n1; n1 = n2; n2 = aux; }
    if (n2 < n3) { aux = n2; n2 = n3; n3 = aux; }
    if (n1 < n2) { aux = n1; n1 = n2; n2 = aux; }
  } else if (ordem == 'A' || ordem == 'a') {
    aux = n1; n1 = n3; n3 = aux;
    aux = n2; n2 = n4; n4 = aux;
    aux = n1; n1 = n4; n4 = aux;
  } else {
    cout << "\n\t Opção invalida!" << endl;
    return 15;
  }

  //saida dos numeros na ordem
  cout << "\n\tNumeros ordenados: " << n1 << " " << n2 << " " << n3 << " " << n4 << endl;
}