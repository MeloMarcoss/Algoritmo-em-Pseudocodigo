/*
Um algoritmo que receba três numeros e mostrar em ordem crescente

* Algoritmo em pseudocodigo:
  ALGORITMO
  DECLARE num1, num2, num3 NUMERICA
  ESCREVA "Digite o primeiro numero: "
  LEIA num1
  ESCREVA "Digite o segundo numero: "
  LEIA num2
  ESCREVA "Digite o terceiro numero: "
  LEIA num3
  SE (num1 < num2) E (num1 < num3)
    ENTAO SE (num2 < num3)
      ENTAO ESCREVA "A ordem crescente eh: ", num1, "-", num2, "-", num3
      SENAO ESCREVA "A ordem crescente eh: ", num1, "-", num3, "-", num2
  SE (num2 < num1) E (num2 < num3)
    ENTAO SE (num1 < num3)
      ENTAO ESCREVA "A ordem crescente eh: ", num2, "-", num1, "-", num3
      SENAO ESCREVA "A ordem crescente eh: ", num2, "-", num3, "-", num1
  SE (num3 < num1) E (num3 < num2)
    ENTAO SE (num1 < num2)
      ENTAO ESCREVA "A ordem crescente eh: ", num3, "-", num1, "-", num2
      SENAO ESCREVA "A ordem crescente eh: ", num3, "-", num2, "-", num1
  FIM_ALGORITMO
*/

#include <stdio.h>

int main() {
    float num1, num2, num3;

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);
    printf("Digite o terceiro numero: ");
    scanf("%f", &num3);

    if (num1 < num2 && num1 < num3) {
        if (num2 < num3) {
            printf("A ordem crescente eh: %f - %f - %f", num1, num2, num3);
        } else {
            printf("A ordem crescente eh: %f - %f - %f", num1, num3, num2);
        }
    } else if (num2 < num1 && num2 < num3) {
        if (num1 < num3) {
            printf("A ordem crescente eh: %f - %f - %f", num2, num1, num3);
        } else {
            printf("A ordem crescente eh: %f - %f - %f", num2, num3, num1);
        }
    } else {
        if (num1 < num2) {
            printf("A ordem crescente eh: %f - %f - %f", num3, num1, num2);
        } else {
            printf("A ordem crescente eh: %f - %f - %f", num3, num2, num1);
        }
    }

    return 0;
}