/*
Um algoritmo que calcule e mostre a área de um círculo.
Sabe-se que: Área = r R^2

* Algoritmo em pseudocódigo:
  ALGORITMO
    DECLARE area, raio NUMERICO
    LEIA raio
    area <- 3.1415 * raio^2
    ESCREVA area
  FIM_ALGORITMO
*/

#include <stdio.h>

int main() {
  float area, raio;
  printf("Digite o valor de raio:\n");
  scanf("%f", &raio);
  area = 3.1415 * (raio * raio);
  printf("A area do circulo eh: %.2f\n", area);
  return 0;
}

/*
Nesse código, a área de um círculo é calculada a partir do raio informado pelo usuário, e é exibida na tela com duas casas decimais de precisão.
*/