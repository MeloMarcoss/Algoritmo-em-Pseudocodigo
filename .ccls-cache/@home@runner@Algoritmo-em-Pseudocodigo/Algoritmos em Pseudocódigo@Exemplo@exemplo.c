/*
Passo 1 - Receber o salário atual do funcionário
Passo 2 - Se o salário atual do funcionário for até R$ 500,00, calcular o novo salário
Passo 3 - Mostrar o novo salário

* Algoritmo em Pseudocódigo:
  ALGORITMO
  DECLARE SAL_ATUAL, NOVO_SAL NUMÉRICO
  ESCREVA "Digite o salário atual do funcionário"
  LEIA SAL_ATUAL
  SE SAL_ATUAL <= 500
  ENTÃO NOVO_SAL <- SAL_ATUAL * 1,20
  SENÃO NOVO_SAL <- SAL_ATUAL * 1,10
  ESCREVA "Novo salário = ", NOVO_SAL
  FIM_ALGORITMO
*/

#include <stdio.h>

int main() {
  float sal_atual, novo_sal;
  printf("Digite o salário atual do funcionário: ");
  scanf("%f", &sal_atual);
  
  if (sal_atual <= 500) {
    novo_sal = sal_atual * 1.20;
  } else {
    novo_sal = sal_atual * 1.10;
  }
  
  printf("Novo salário = %.2f\n", novo_sal);
  
  return 0;
}

/*
Explicação:

Primeiro, declaramos as variáveis sal_atual e novo_sal como tipo float, que são utilizadas para armazenar o salário atual do funcionário e o novo salário, respectivamente.
Em seguida, usamos a função printf() para exibir uma mensagem na tela solicitando que o usuário digite o salário atual do funcionário.
Depois, usamos a função scanf() para ler o valor digitado pelo usuário e armazená-lo na variável sal_atual.
Utilizamos a estrutura condicional if...else para verificar se o valor de sal_atual é menor ou igual a 500. Se for, multiplicamos sal_atual por 1,20 e armazenamos o resultado em novo_sal. Caso contrário, multiplicamos sal_atual por 1,10 e armazenamos o resultado em novo_sal.
Por fim, usamos a função printf() para exibir o novo salário calculado, formatado com duas casas decimais, na tela.
*/