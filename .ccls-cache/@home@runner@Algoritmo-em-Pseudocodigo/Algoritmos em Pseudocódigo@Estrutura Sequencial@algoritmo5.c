/*
Um algoritmo que receba dois números maiores que zero, calcule e mostre um elevdo ao outro

* Algoritmo em pseudocódigo:
  ALGORITMO
    DECLARE num 1, num2, r1, r2 NUMERICO
    LEIA num1, num2
    r1 <- num1^num2
    r2 <- num2^num1
    ESCREVA r1, r2
  FIM_ALGORITMO
*/

#include <stdio.h>
#include <math.h>>

int main() {
  float num1, num2, r1, r2;
  printf("Digite dois numeros: ");
  scanf("%f%f", &num1, &num2);
  r1 = pow(num1, num2);
  r2 = pow(num2, num1);
  printf("%.2f %.2f", r1, r2);
  return 0;
}

/*
Esse programa lê dois números digitados pelo usuário, realiza a potência do primeiro número elevado ao segundo e do segundo número elevado ao primeiro, e então imprime os resultados na tela com duas casas decimais de precisão. Note que a função pow da biblioteca math.h é utilizada para realizar o cálculo da potência.
*/