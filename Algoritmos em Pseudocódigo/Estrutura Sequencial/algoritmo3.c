/*
Um algoritmo que calcule e mostre a área de um triângulo. Sabe-se que: Área = (base * altura)/2

* Algoritmo em pseudocódigo:
  ALGORITMO
    DECLARE base, altura, area NUMERICO
    LEIA base, altura
    area <- (base * altura)/2
    ESCREVA area
  FIM_ALGORITMO
*/

#include <stdio.h>

int main() {
  float base, altura, area;
  printf("Digite a base e a altura do trinagulo:\n");
  scanf("%f%f", &base, &altura);
  area = (base * altura)/2;
  printf("A area do triangulo eh: %.2f", area);
  return 0;
}

/*
Neste exemplo, utilizamos variáveis do tipo float para armazenar os valores da base, altura e área. Em seguida, usamos a função printf para exibir a mensagem solicitando a entrada de dados e a função scanf para ler os valores informados pelo usuário.

Em seguida, calculamos a área do triângulo com a fórmula (base * altura) / 2.0 e armazenamos o resultado na variável area.

Por fim, usamos novamente a função printf para exibir o resultado da área, com duas casas decimais, na tela.
*/