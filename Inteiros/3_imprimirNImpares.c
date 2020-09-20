#include <stdio.h>
#include <stdlib.h>

int main(){
  printf("\t\tPrograma para imprimir os n primeiros numeros impares.");

  int num, impar = 1, counter = 0;

  printf("\n\nDigite o numero de numeros impares desejados: ");
  scanf("%d", &num);

  while(counter != num){
    printf("%d ", impar);
    counter++;
    impar += 2;
  }
return 0;
}

// SOLUÇÃO ORIGINAL
// #include <stdio.h>

// int main() {
//   int n,     /* guardara o numero dado                          */
//       i,     /* contador = quantidade de impares ja' impressos  */
//       impar; /* usado para gerar a sequencia de numeros impares */ 
  
//   printf("\n\tGerador de numeros impares\n");
  
//   /* Inicializacoes */
//   printf("\nDigite o valor de n: ");
//   scanf("%d", &n);
//   i = 0;
//   impar = 1; 
  
//   printf("Os %d primeiros impares sao:\n", n);
//   while (i < n) {
//     printf ("%d\n", impar);
//     impar = impar + 2; /* vai para o proximo impar */
//     i = i + 1;
//   }
  
//   return 0;
// }
