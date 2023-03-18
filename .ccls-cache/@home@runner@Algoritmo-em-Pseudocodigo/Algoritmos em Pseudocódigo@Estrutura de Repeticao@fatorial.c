/*
Um algoritmo que leia um número N e que indique quantos valores inteiros e positivos devem ser lidos a seguir. Para cada número lido, mostrar uma tabela contendo o valor lido e o fatorial desse valor.

* Algoritmo em pseudocódigo:
  ALGORITMO
  DECLARE n, num, i, j, fat NUMERICO
  LEIA n
  PARA i <- 1 ATÉ n FAÇA
        INICIO
        LEIA num
        fat <- 1
        PARA j <- 1 ATÉ num FAÇA
              INICIO
              fat <- fat * j
              FIM
        ESCREVA fat
        FIM
  FIM_ALGORITMO
*/

#include <stdio.h>

int main() {
  int n, num, i, j, fat;

  printf("Quantos números deseja calcular o fatorial? ");
  scanf("%d", &n);

  for (i = 1; i <= n; i++) {
    printf("Digite um número: ");
    scanf("%d", &num);

    fat = 1;

    for (j = 1; j <= num; j++) {
      fat = fat * j;
    }

    printf("O fatorial de %d é %d\n", num, fat);
  }

  return 0;
}

/*
Este programa lê um valor n que indica quantos números o usuário deseja calcular o fatorial. Em seguida, o programa entra em um laço de repetição que lê n números do usuário e calcula o fatorial de cada um deles. O resultado é exibido na tela.
*/