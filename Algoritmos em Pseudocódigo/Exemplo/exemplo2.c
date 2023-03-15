/*
Uma receita de bolo de cenoura simples em pseudocodigo:

ALGORITMO
  DECLARE cenouras, ovos, xicarasDeAcucar, xicarasDeFarinha, xicarasDeOleo, colherDePoRoyal, forminha, tempoDeForno NUMERICO
  ESCREVA "Receita de Bolo de Cenoura"
  ESCREVA "Quantas cenouras você tem?"
  LEIA cenouras
  ESCREVA "Quantos ovos você tem?"
  LEIA ovos
  ESCREVA "Quantas xícaras de açúcar você tem?"
  LEIA xicarasDeAcucar
  ESCREVA "Quantas xícaras de farinha de trigo você tem?"
  LEIA xicarasDeFarinha
  ESCREVA "Quantas xícaras de óleo você tem?"
  LEIA xicarasDeOleo
  ESCREVA "Quantas colheres de fermento em pó você tem?"
  LEIA colherDePoRoyal
  ESCREVA "Qual é o tamanho da sua forma? (em cm)"
  LEIA forminha
  ESCREVA "Por quanto tempo o bolo deve ficar no forno? (em minutos)"
  LEIA tempoDeForno
  
  ESCREVA "Descasque as cenouras e corte em pedaços pequenos. Coloque em uma panela com água e cozinhe até ficarem macias."
  ESCREVA "Pré-aqueça o forno a 180°C."
  ESCREVA "Bata no liquidificador as cenouras cozidas, os ovos e o óleo até ficar homogêneo."
  ESCREVA "Em uma tigela, misture o açúcar, a farinha e o fermento em pó."
  ESCREVA "Adicione a mistura do liquidificador à tigela e misture bem."
  ESCREVA "Despeje a massa em uma forma untada e enfarinhada de " + forminha + "cm."
  ESCREVA "Leve ao forno e asse por " + tempoDeForno + " minutos, ou até que um palito saia limpo ao ser inserido no centro do bolo."
  ESCREVA "Retire do forno, deixe esfriar e sirva."
FIM_ALGORITMO

*/

#include <stdio.h>

int main() {
    int cenouras, ovos, xicarasDeAcucar, xicarasDeFarinha, xicarasDeOleo, colherDePoRoyal, forminha, tempoDeForno;

    printf("Receita de Bolo de Cenoura\n");
    printf("Quantas cenouras voce tem?\n");
    scanf("%d", &cenouras);
    printf("Quantos ovos voce tem?\n");
    scanf("%d", &ovos);
    printf("Quantas xicaras de acucar voce tem?\n");
    scanf("%d", &xicarasDeAcucar);
    printf("Quantas xicaras de farinha de trigo voce tem?\n");
    scanf("%d", &xicarasDeFarinha);
    printf("Quantas xicaras de oleo voce tem?\n");
    scanf("%d", &xicarasDeOleo);
    printf("Quantas colheres de fermento em po voce tem?\n");
    scanf("%d", &colherDePoRoyal);
    printf("Qual eh o tamanho da sua forma? (em cm)\n");
    scanf("%d", &forminha);
    printf("Por quanto tempo o bolo deve ficar no forno? (em minutos)\n");
    scanf("%d", &tempoDeForno);

    printf("Descasque as cenouras e corte em pedaços pequenos. Coloque em uma panela com agua e cozinhe ate ficarem macias.\n");
    printf("Pre-aqueça o forno a 180°C.\n");
    printf("Bata no liquidificador as cenouras cozidas, os ovos e o oleo ate ficar homogeneo.\n");
    printf("Em uma tigela, misture o acucar, a farinha e o fermento em po.\n");
    printf("Adicione a mistura do liquidificador a tigela e misture bem.\n");
    printf("Despeje a massa em uma forma untada e enfarinhada de %d cm.\n", forminha);
    printf("Leve ao forno e asse por %d minutos, ou ate que um palito saia limpo ao ser inserido no centro do bolo.\n", tempoDeForno);
    printf("Retire do forno, deixe esfriar e sirva.\n");

    return 0;
}

/*
Nesse exemplo, utilizamos a função scanf para ler os valores inseridos pelo usuário, e a função printf para exibir as mensagens da receita. Note que as variáveis definidas no início do programa devem ser utilizadas para armazenar os valores lidos, e para formatar as mensagens a serem exibidas.
*/