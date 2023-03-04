/*
Passo 1 - Receber os dois números que serão dividos.
Passo 2 - Se o segundo número for igual a zero, não poderá haver divisão, pois não existe divisão por zero; caso contrário, dividir os números e mostrar o resultado da divisão.

* Algoritmo em pseudocódigo:
  ALGORITMO
  DECLARE N1, N2, D NUMÉRICO
  ESCREVA *Digite dois números*
  LEIA N1, N2
  SE N2 = 0
  ENTÃO ESCREVA *Impossível dividir*
  SENÃO INÍCIO
      D <- N1/N2
      ESCREVA *Divisão = *, D
    FIM
  FIM_ALGORITMO
*/

#include <stdio.h>

int main() {
    float N1, N2, D;
    printf("Digite dois números: ");
    scanf("%f%f", &N1, &N2);
    if (N2 == 0) {
        printf("Impossível dividir\n");
    } else {
        D = N1 / N2;
        printf("Divisão = %.2f\n", D);
    }
    return 0;
}