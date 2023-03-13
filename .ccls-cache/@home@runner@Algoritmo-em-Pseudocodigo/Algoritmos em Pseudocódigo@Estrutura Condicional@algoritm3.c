/*
Um algoritmo que receba um numero inteiro e verifique se esse numero eh par ou impar

* Algoritmo em pseudocodigo:
  ALGORITMO
  DECLARE num, r NUMERICO
  ESCREVA "Digite um numero: "
  r <- RESTO(num/2)
  SE r = 0
    ENTAO ESCREVA "O numero eh par"
    SENAO ESREVA "O numero eh impar"
  FIM_ALGORITMO
*/

#include <stdio.h>

int main() {
    int num, r;
    printf("Digite um numero: ");
    scanf("%d", &num);
    r = num % 2;
    if (r == 0) {
        printf("O numero eh par\n");
    } else {
        printf("O numero eh impar\n");
    }
    return 0;
}

/*
Este programa recebe um número inteiro digitado pelo usuário e calcula o resto da divisão por 2. Se o resto for zero, o programa imprime que o número é par, caso contrário, que é ímpar.
*/