/*
Um algoritmo que monte os oito primeiros termos da sequencia de Fibonacci.
  0-1-1-2-3-5-8-13-21-34-55-...
* Algoritmo em pseudocodigo:
  ALGORITMO
    DECLARE cont, num1, num2, res NUMERICO
  num1 <- 0
  num2 <- 1
  ESCREVA num1
  ESCREVA num2
  PARA cont <- 3 ATE 8 FACA
      INICIO
      res <- num1 + num2
      ESCREVA res
      num1 <- num2
      num2 <- res
      FIM
  FIM_ALGORITMO
*/

#include <stdio.h>

int main() {
  int cont, num1, num2, res;
  num1 = 0;
  num2 = 1;
  
  printf("%d\n", num1);
  printf("%d\n", num2);

  for (cont = 3; cont <= 10; cont++)
    {
      res = num1 + num2;
      printf("%d\n", res);
      num1 = num2;
      num2 = res;
    }
  
  return 0;
}

/*
Nesse código, declaramos as variáveis cont, num1, num2 e res. Inicialmente, atribuímos 0 a num1 e 1 a num2, já que a sequência de Fibonacci começa assim. Em seguida, imprimimos os valores de num1 e num2.

Usamos um loop for para iterar de 3 até 8. Dentro do loop, calculamos o valor da variável res, que é a soma de num1 e num2. Imprimimos o valor de res e atualizamos os valores de num1 e num2.

Ao final do loop, o programa termina.
*/