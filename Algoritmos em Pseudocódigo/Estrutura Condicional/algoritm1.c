/*
Um algoritmo que receba dois números e mostre o maior

* Algoritmo em pseudocódigo:
  ALGORITMO
  DECLARE num1, num2 NUMERICO
  ESCREVA "Digite o primeiro numero: "
  LEIA num1
  ESCREVA "Digite o segundo numero: "
  LEIA num2
  Se num1 > num2
    ENTAO ESCREVA "O maior numero eh: ", num1
  Se num2 > num1
    ENTAO ESCREVA "O maior numero eh: ", num2
  Se num1 = num2
    ENTAO ESCREVA "Os numeros sao iguais"
  FIM_ALGORITMO
*/

#include <stdio.h>

int main() {
  float num1, num2;

  printf("Digite o primeiro numero: ");
  scanf("%f", &num1);

  printf("Digite o segundo numero: ");
  scanf("%f", &num2);

  if (num1 > num2) {
    printf("O maior numero eh: %f", num1);
  } else if (num2 > num1) {
    printf("O maior numero eh: %f", num2);
  } else {
    printf("Os numeros sao iguais");
  }

  return 0;
}

/*
Este programa pede ao usuário para digitar dois números, lê esses números, compara-os e exibe o maior deles ou se eles são iguais.
*/