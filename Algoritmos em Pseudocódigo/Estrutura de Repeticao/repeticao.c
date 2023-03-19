/*
Um algoritmo que leia cinco pares de valores (a,b), todos inteiros e positivos, um de cada vez. Então mostrar os números inteiros pares de a até b (inclisive).

* Algoritmo em pseudocódigo:
  ALGORITMO
  DECLARE cont, a, b, i NUMERICO
  PARA CONT <- 1 ATÉ 5 FAÇA
            INICIO
            LEIA a, b
            PARA i <- a ATÉ b FAÇA
                    INICIO
                    SE RESTO (i/2) = 0
                    ENTAP ESCREVA i
                    FIM
            FIM
  FIM_ALGORITMO
*/

#include <stdio.h>

int main() {
  int cont, a, b, i;
  for (cont = 1; cont <= 5; cont++)
    {
      printf("Entre com os valores de a e b: ");
      scanf("%d %d", &a, &b);
      for(i = a; i <= b; i++)
        {
          if (i % 2 == 0)
          {
            printf("%d\n", i);
          }
        }
    }
  return 0;
}

/*
Este programa utiliza dois loops for, um externo que se repete 5 vezes (para ler 5 conjuntos de valores de a e b) e um interno que itera sobre os valores entre a e b e verifica se cada valor é par. Caso o valor seja par, ele é impresso na tela.

Note que no programa em C, a mensagem para o usuário informar os valores de a e b foi modificada para estar mais clara. Além disso, o trecho "ENTAP" no pseudocódigo foi corrigido para "ENTÃO" na implementação em C.
*/