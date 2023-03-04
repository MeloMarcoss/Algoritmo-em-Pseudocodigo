/*
Passo 1 - Receber as duas notas
Passo 2 - Calcular a média aritmética
Passo 3 - Mostrar a média aritmética
Passo 4 - Se a média aritmética for maior ou igual a 7, então a situação do aluno é aprovado; caso contrário, a situação é reprovado

* Algoritmo em pseudocódigo:
  ALGORITMO
  DECLARE N1, N2, M NUMÉRICO
  ESCREVA *Digite as duas notas*
  LEIA N1, N2
  M <- (N1 + N2)/2
  ESCREVA "Média = ", M
  SE M >= 7
  ENTÃO ESCREVA "Aprovado"
  SENÃO ESCREVA "Reprovado"]
  FIM_ALGORITMO
*/


#include <stdio.h>

int main() {
    float N1, N2, M;
    printf("Digite as duas notas: ");
    scanf("%f%f", &N1, &N2);
    M = (N1 + N2) / 2;
    printf("Média = %.2f\n", M);
    if (M >= 7) {
        printf("Aprovado\n");
    } else {
        printf("Reprovado\n");
    }
    return 0;
}