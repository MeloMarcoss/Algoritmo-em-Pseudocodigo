/*
Um algoritmo que receber quatros números inteiros, calcular e mostrar a soma desses números.

* Algoritmo em pseudocódigo:
  ALGORITMO
    DECLARE n1, n2, n3, n4, soma NUMÉRICO
    LEIA n1, n2, n3, n4
    soma <- n1 + n2 + n3 + n4
    ESCREVA soma
  FIM_ALGORITMO
*/

#include <stdio.h>

int main(void) {
  float n1, n2, n3, n4, soma;
  printf("Digite quatros números:\n");
  scanf("%f%f%f%f", &n1, &n2, &n3, &n4 );
  soma = n1 + n2 + n3 + n4;
  printf("Soma = %.2f\n", soma);
  return 0;
}

/*
Este programa lê quatro números em ponto flutuante, armazena-os nas variáveis n1, n2, n3 e n4, calcula a soma desses números e imprime o resultado na tela com duas casas decimais de precisão.
*/