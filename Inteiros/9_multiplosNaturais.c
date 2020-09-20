#include <stdio.h>
#include <stdlib.h>

void main(){
  printf("\t\tPrograma que recebe n, i e j e imprime os primeiros multiplos naturais de i e j.");

  int quantidade, numUm, numDois, counter = 0, mult = 0; 

  printf("\nDigite a quantidade de multiplos que deseja: ");
  scanf("%d", &quantidade);
  printf("Digite o primeiro numero: ");
  scanf("%d", &numUm);
  printf("Digite o segundo numero: ");
  scanf("%d", &numDois);

  while(counter < quantidade){
    if(mult % numUm == 0 || mult % numDois == 0){
      printf("%d ", mult);
      counter++;
    }
    mult++;
  }
}