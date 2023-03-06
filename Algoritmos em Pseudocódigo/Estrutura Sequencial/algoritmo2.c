/*
Um algoritmo que recebe três notas, para calcular e mostrar a média aritmética entre elas.

* Algoritmo em pseudocódigo:
  ALGORITMO
    DECLARE nota1, nota2, nota3, media NUMERICO
    LEITA nota1, nota2, nota3
    média <- (nota1, nota2, nota3)/3
    ESCREVA media
  FIM_ALGORITMO
*/

#include <stdio.h>

int main() {
  float nota1, nota2, nota3, media;
  printf("Digite as três notas: \n");
  scanf("%f%f%f", &nota1, &nota2, &nota3);
  media = (nota1 + nota2 + nota3)/3;
  printf("A media eh: %.2f\n", media);
  return 0;
}

/*
Este programa declara as variáveis nota1, nota2, nota3 e media como valores do tipo float. Em seguida, o programa solicita ao usuário as três notas e armazena cada uma das notas nas variáveis correspondentes utilizando a função scanf(). Após isso, o programa calcula a média das três notas e armazena o resultado na variável media. Por fim, o programa exibe a média na tela utilizando a função printf(). Note que a formatação %.2f é utilizada para exibir a média com duas casas decimais.
*/