/*. Leia três notas e três pesos, um para cada nota, calcule e escreva a média aritmética e a média
ponderada das três notas e, nos dois casos, quanto falta para o aluno ser aprovado por média
(considere a média para aprovação igual a 6,0).*/

#include <iostream>

using namespace std;

int main(){
  float N1, N2, N3, MA, MP;
  int P1, P2, P3;
  const int Aprovado = 6;
  //digitacao de notas
  cout << "\n\tDigite a nota 1: ";
  cin >> N1;
  cout << "\n\tDigite a nota 2: ";
  cin >> N2;
  cout << "\n\tDigite a nota 3: ";
  cin >> N3;
  //Media aritmetica
  MA = (N1+N2+N3)/3;
  //digitacao dos pesos
  cout << "\n\tDigite o peso 1: ";
  cin >> P1;
  cout << "\n\tDigite o peso 2: ";
  cin >> P2;
  cout << "\n\tDigite o peso 3: ";
  cin >> P3;
  //Media ponderada
  MP = ((N1*P1)+(N2*P2)+(N3*P3))/(P1+P2+P3);
  //exibir medias
  cout << "\n\tMedia Aritmetica: " << MA << endl;
  if (MA >= Aprovado) {
    cout << "\n\tAprovado por media aritmetica!";
  } else {
    cout << "\n\tFaltam " << Aprovado - MA << " pontos para ser aprovado em media aritmetica." << endl;
  }

  cout << "\n\tMedia Ponderada: " << MP << endl;
  if (MP >= Aprovado) {
    cout << "\n\tAprovado por media ponderada!";
  } else {
    cout << "\n\tFaltam " << Aprovado - MP << " pontos para ser aprovado em media ponderada." << endl;
  }
}