/*
Um algoritmo que leia um valor N inteiro e positivo, calcular e mostrar o valor de E, conforme a fórmula a seguir:
E = 1 + 1/1! + 1/2! + 1/3! + ... + 1/N!

* Algoritmo em pseudocodigo:
  ALGORITMO
  DECLARE n, e, i, j, fat NÚMERICO
  LEIA n
  e <- 1
  PARA i <- 1 ATÉ n FAÇA
          INÍCIO
          fat <- 1
          PARA J <- 1 ATÉ i FAÇA
                  INÍCIO
                  fat <- fat * j
                  FIM
          e <- e + 1/fat
          FIM
  ESCREVA e
  FIM_ALGORITMO
*/

#include <stdio.h>

int main() {
  int n, i, j;
  float e = 1.0, fat;

  printf("Digite um valor para N: ");
  scanf("%d", &n);

  for (i = 1; i <= n; i++) {
    fat = 1.0;
    for (j = 1; j <= i; j++) {
      fat *= j;
    }
    e += 1.0 / fat;
  }

  printf("O valor de E eh: %f\n", e);

  return 0;
}

/*
O programa usa dois laços for para calcular o valor de e, conforme descrito no algoritmo em pseudocódigo. O primeiro laço vai de 1 até n, e o segundo laço vai de 1 até i em cada iteração do primeiro laço. A variável fat é usada para calcular o fatorial de cada número i, e o resultado é acumulado na variável e. Por fim, o programa imprime o valor de e.
*/