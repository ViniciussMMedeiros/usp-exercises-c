#include <stdio.h>
#include <stdlib.h>

void main(){
  printf("\t\tPrograma para somar os numeros impares existentes no intervalo de entrada do usuario.");
  printf("\nOBS: Os numeros dados como intervalo tambem poderao constar na soma.");
  
  int numUm, numDois, i, somador = 0;
  
  printf("\nDigite o numero que inicia o intervalo: ");
  scanf("%d", &numUm);
  
  printf("Digite o numero que finaliza o intervalo: ");
  scanf("%d", &numDois);

  for(i = numUm; i <= numDois; i++){
    if(i % 2 != 0){
      printf("%d + ", i);
      somador += i;
    }
  }

  printf("\nA soma dos impares nesse intervalo eh: %d", somador);
}