#include <stdlib.h>
#include <stdio.h>

void main(){
  printf("\t\tPrograma que imprime o fatorial da entrada n.");

  int num, i, fatorial = 1;

  printf("\nDigite o numero: ");
  scanf("%d", &num);

  for(i = num; i >= 1; i--){
    fatorial *= i;
  }

  printf("O fatorial de %d eh %d.", num, fatorial);
}