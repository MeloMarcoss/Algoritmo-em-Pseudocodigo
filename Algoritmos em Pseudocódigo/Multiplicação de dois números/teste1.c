/*

Passo 1 - Receber os dois números que serão multiplicados.
Passo 2 - Multiplicar os números.
Passo 3 - Mostrar o resultado obtido na multiplicação.

* Algoritmo em pseudocódigo:
  ALGORITMO
  DECLARE N1, N2, M NUMÉRICO
  ESCREVA "Digite dois números"
  LEIA N1, N2
  M <- N1 * N2
  ESCREVA "Multiplicação = ", M
  FIM_ALGORITMO
  
*/

#include <stdio.h>

int main() {

  float N1, N2, M;
  printf("Digite dois números: ");
  scanf("%f%f", &N1, &N2);
  M = N1 * N2;
  printf("Multiplicação = %.2f", M);
  return 0;
  
}